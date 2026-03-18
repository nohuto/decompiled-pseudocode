/*
 * XREFs of _UpdatePerUserImmEnabling@0 @ 0xEC4D0
 * Callers:
 *     _NtUserCallHwndParamLockSafe@12 @ 0x189A0 (_NtUserCallHwndParamLockSafe@12.c)
 *     _NtUserCallNoParam@4 @ 0x6E940 (_NtUserCallNoParam@4.c)
 *     _NtUserCallHwndLockSafe@8 @ 0x92856 (_NtUserCallHwndLockSafe@8.c)
 * Callees:
 *     <none>
 */

int __stdcall UpdatePerUserImmEnabling()
{
  if ( IsIMMEnabledSystem() )
    _InterlockedOr(_gpsi, 4u);
  else
    _InterlockedAnd(_gpsi, 0xFFFFFFFB);
  return 1;
}
