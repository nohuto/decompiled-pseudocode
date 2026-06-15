/*
 * XREFs of ?OnNotify@CaptureMonitor@CMonitorManager@@UEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x1800FEB60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_d @ 0x1800BBF6C (WPP_SF_d.c)
 *     ?OnMuteStateChanged@CMonitor@@IEAAXH@Z @ 0x180102F70 (-OnMuteStateChanged@CMonitor@@IEAAXH@Z.c)
 */

__int64 __fastcall CMonitorManager::CaptureMonitor::OnNotify(
        CMonitor **this,
        struct AUDIO_VOLUME_NOTIFICATION_DATA *a2)
{
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x5Cu,
      (__int64)&WPP_107eeefd23a13a1e42820564321ad14e_Traceguids,
      a2->bMuted);
  }
  CMonitor::OnMuteStateChanged(this[25], a2->bMuted);
  return 0LL;
}
