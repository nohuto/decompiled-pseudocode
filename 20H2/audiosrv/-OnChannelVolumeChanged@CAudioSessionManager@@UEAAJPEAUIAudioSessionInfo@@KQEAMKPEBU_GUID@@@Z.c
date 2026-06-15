/*
 * XREFs of ?OnChannelVolumeChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@KQEAMKPEBU_GUID@@@Z @ 0x1800CF610
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1800BB3A0 (WPP_SF_.c)
 */

__int64 __fastcall CAudioSessionManager::OnChannelVolumeChanged(
        CAudioSessionManager *this,
        struct IAudioSessionInfo *a2,
        __int64 a3,
        float *const a4)
{
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x16u, (__int64)&WPP_fe6ee92afb383bb0444ef271973e06e1_Traceguids);
  }
  return 0LL;
}
