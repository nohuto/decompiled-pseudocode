/*
 * XREFs of ?Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z @ 0x1800D3B28
 * Callers:
 *     ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x1800CEBF0 (-GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z.c)
 *     ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x1800CF130 (-GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z.c)
 * Callees:
 *     ?Initialize@CAudioEndpointId@@QEAAJPEBG@Z @ 0x180018390 (-Initialize@CAudioEndpointId@@QEAAJPEBG@Z.c)
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x1800188A0 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005EA28 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEAUIAudioProcess@@PEBU_GUID@@H@Z @ 0x1800D30C4 (-Initialize@CAppAudioSessionId@@QEAAJPEAUIAudioProcess@@PEBU_GUID@@H@Z.c)
 *     ?Initialize@CAppInstanceId@@QEAAJPEAUIAudioProcess@@H@Z @ 0x1800D3734 (-Initialize@CAppInstanceId@@QEAAJPEAUIAudioProcess@@H@Z.c)
 */

__int64 __fastcall CAudioSessionInstanceId::Initialize(
        CAudioSessionInstanceId *this,
        struct IAudioProcess *a2,
        const unsigned __int16 *a3,
        const struct _GUID *a4,
        int a5)
{
  int v8; // ebx

  v8 = CAudioEndpointId::Initialize(this, a3);
  if ( v8 < 0
    || (v8 = CAppAudioSessionId::Initialize((CAudioSessionInstanceId *)((char *)this + 8), a2, a4, a5), v8 < 0)
    || (v8 = CAppInstanceId::Initialize((CAudioSessionInstanceId *)((char *)this + 56), a2, a5), v8 < 0)
    || (v8 = CAudioSessionInstanceId::CalculateStaticId(this), v8 < 0) )
  {
    AudSrvTraceLoggingErrorHelper("CAudioSessionInstanceId::Initialize", 911, v8);
  }
  return (unsigned int)v8;
}
