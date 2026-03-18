/*
 * XREFs of _xxxCreateSystemThreads@0 @ 0xEDEF4
 * Callers:
 *     _NtUserCallHwndParamLockSafe@12 @ 0x189A0 (_NtUserCallHwndParamLockSafe@12.c)
 *     _NtUserCallNoParam@4 @ 0x6E940 (_NtUserCallNoParam@4.c)
 *     _NtUserCallHwndLockSafe@8 @ 0x92856 (_NtUserCallHwndLockSafe@8.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __stdcall xxxCreateSystemThreads()
{
  return __imp__xxxCreateSystemThreads@0();
}
