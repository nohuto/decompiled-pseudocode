/*
 * XREFs of ?OnSessionDisconnected@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4AudioServerSessionDisconnectReason@@@Z @ 0x1800CF700
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1800BB3A0 (WPP_SF_.c)
 */

__int64 CAudioSessionManager::OnSessionDisconnected()
{
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x18u, (__int64)&WPP_fe6ee92afb383bb0444ef271973e06e1_Traceguids);
  }
  return 0LL;
}
