/*
 * XREFs of _NtUserHungWindowFromGhostWindow@4 @ 0xAC196
 * Callers:
 *     <none>
 * Callees:
 *     __HungWindowFromGhostWindow@4 @ 0x72334 (__HungWindowFromGhostWindow@4.c)
 */

int __stdcall NtUserHungWindowFromGhostWindow(int a1)
{
  int v1; // esi
  int v2; // eax
  int v3; // edx
  int *v4; // eax

  v1 = 0;
  EnterSharedCrit(0, 1);
  v2 = ValidateHwnd(a1);
  if ( v2 )
  {
    v4 = _HungWindowFromGhostWindow(v2, v3);
    if ( v4 )
      v1 = *v4;
  }
  UserSessionSwitchLeaveCrit();
  return v1;
}
