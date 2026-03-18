/*
 * XREFs of NtUserHungWindowFromGhostWindow @ 0x1C0120230
 * Callers:
 *     <none>
 * Callees:
 *     _HungWindowFromGhostWindow @ 0x1C00C736C (_HungWindowFromGhostWindow.c)
 */

__int64 __fastcall NtUserHungWindowFromGhostWindow(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 *v5; // rax

  EnterSharedCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v4 = 0LL;
  if ( v2 )
  {
    v5 = (__int64 *)HungWindowFromGhostWindow(v2);
    if ( v5 )
      v4 = *v5;
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
