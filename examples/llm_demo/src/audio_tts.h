/**
 * @file audio_tts.h
 * @brief translate text to sound
 */

#ifndef AUDIO_TTS_H_
#define AUDIO_TTS_H_

#include "tuya_cloud_types.h"

/**
 * @brief define the audio file format 
 * 
 */
typedef enum {
    TTS_FORMAT_MP3 = 3,
    TTS_FORMAT_PCM8K = 4,
    TTS_FORMAT_PCM16K = 5,
    TTS_FORMAT_WAV = 6,
}TTS_format_e;

// #define TTS_MP316K "mp3-16k"
// #define TTS_MP348K "mp3-48k"
// #define TTS_WAV "wav"
// #define TTS_PCM8K "pcm-8k"
// #define TTS_PCM16K "pcm-16k"


/**
 * @brief 
 * 
 * @param format the format of audio file
 * @param text the text to be translated
 * @param voice the voice of tts:0-xiaomei,1-xiaoyu,3-xiaoyao,4-yaya
 * @param lang default is "zh"
 * @param speed the speed of tts:0-15,default is 5
 * @param pitch the pitch of tts:0-15,default is 5
 * @param volume the volume of tts:0-15,default is 5
 * @return INT_T OPRT_OK:success;other:fail
 */
INT_T tts_request_baidu(TTS_format_e format, CHAR_T *text, INT_T voice, CHAR_T *lang, INT_T speed, INT_T pitch, INT_T volume);
#endif