/*
 * XREFs of __CreatePopupMenu@0 @ 0xEC8A0
 * Callers:
 *     _NtUserCallHwndParamLockSafe@12 @ 0x189A0 (_NtUserCallHwndParamLockSafe@12.c)
 *     _NtUserCallNoParam@4 @ 0x6E940 (_NtUserCallNoParam@4.c)
 *     _NtUserCallHwndLockSafe@8 @ 0x92856 (_NtUserCallHwndLockSafe@8.c)
 * Callees:
 *     <none>
 */

struct tagMENU *__stdcall _CreatePopupMenu()
{
  return InternalCreateMenu((void *)1);
}
