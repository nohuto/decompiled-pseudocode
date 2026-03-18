/*
 * XREFs of __AllowForegroundActivation@0 @ 0x1420A9
 * Callers:
 *     _NtUserCallHwndParamLockSafe@12 @ 0x189A0 (_NtUserCallHwndParamLockSafe@12.c)
 *     _NtUserCallNoParam@4 @ 0x6E940 (_NtUserCallNoParam@4.c)
 *     _NtUserCallHwndLockSafe@8 @ 0x92856 (_NtUserCallHwndLockSafe@8.c)
 * Callees:
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall _AllowForegroundActivation()
{
  _gdwPUDFlags |= 0x8000000u;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(2, 10, &WPP_fae14e43e2df34d42d304f3db5b27b93_Traceguids);
  return 1;
}
