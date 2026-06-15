/*
 * XREFs of ?OnGroupingParamChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@U_GUID@@PEBU3@@Z @ 0x180047520
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1800BB3A0 (WPP_SF_.c)
 */

__int64 __fastcall CAudioSessionManager::OnGroupingParamChanged(
        CAudioSessionManager *this,
        struct IAudioSessionInfo *a2,
        struct _GUID *a3,
        const struct _GUID *a4)
{
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 23LL, &WPP_fe6ee92afb383bb0444ef271973e06e1_Traceguids);
  }
  return 0LL;
}
