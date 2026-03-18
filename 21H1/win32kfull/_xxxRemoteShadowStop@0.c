/*
 * XREFs of _xxxRemoteShadowStop@0 @ 0x188650
 * Callers:
 *     _NtUserCallHwndParamLockSafe@12 @ 0x189A0 (_NtUserCallHwndParamLockSafe@12.c)
 *     _NtUserCallNoParam@4 @ 0x6E940 (_NtUserCallNoParam@4.c)
 *     _NtUserCallHwndLockSafe@8 @ 0x92856 (_NtUserCallHwndLockSafe@8.c)
 * Callees:
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 *     _xxxRemoteStopScreenUpdates@0 @ 0xD1646 (_xxxRemoteStopScreenUpdates@0.c)
 */

int __stdcall xxxRemoteShadowStop()
{
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(9, 23, &WPP_ce4686b973ab32e3a2c7742364a6f9c9_Traceguids);
  if ( PsGetCurrentProcess() != _gpepCSRSS )
    return -1073741790;
  xxxRemoteStopScreenUpdates();
  return 0;
}
