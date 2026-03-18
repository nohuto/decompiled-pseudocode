/*
 * XREFs of _NtUserRealChildWindowFromPoint@12 @ 0x167DF3
 * Callers:
 *     <none>
 * Callees:
 *     __RealChildWindowFromPoint@12 @ 0x1A6C64 (__RealChildWindowFromPoint@12.c)
 */

int __stdcall NtUserRealChildWindowFromPoint(int a1, int a2, int a3)
{
  int v3; // esi
  int *v4; // eax

  v3 = 0;
  EnterSharedCrit(0, 1);
  if ( ValidateHwnd(a1) )
  {
    v4 = (int *)_RealChildWindowFromPoint(a2, a3);
    if ( v4 )
      v3 = *v4;
  }
  UserSessionSwitchLeaveCrit();
  return v3;
}
