/*
 * XREFs of _WakeRITForShutdown@0 @ 0xD4ACC
 * Callers:
 *     _NtUserCallHwndParamLockSafe@12 @ 0x189A0 (_NtUserCallHwndParamLockSafe@12.c)
 *     _NtUserCallNoParam@4 @ 0x6E940 (_NtUserCallNoParam@4.c)
 *     _NtUserCallHwndLockSafe@8 @ 0x92856 (_NtUserCallHwndLockSafe@8.c)
 * Callees:
 *     _WakeRIT@4 @ 0x9C542 (_WakeRIT@4.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall WakeRITForShutdown()
{
  if ( PsGetCurrentProcess() != _gpepCSRSS || !gpkeRITEvent )
    return -1073741823;
  _gdwHydraHint |= 0x2000000u;
  WakeRIT(2u);
  return 0;
}
