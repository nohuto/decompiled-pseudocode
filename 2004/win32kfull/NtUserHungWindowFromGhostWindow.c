/*
 * XREFs of NtUserHungWindowFromGhostWindow @ 0x1C00E7780
 * Callers:
 *     <none>
 * Callees:
 *     _HungWindowFromGhostWindow @ 0x1C00E79E8 (_HungWindowFromGhostWindow.c)
 */

__int64 __fastcall NtUserHungWindowFromGhostWindow(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rbx
  __int64 *v7; // rax

  EnterSharedCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v6 = 0LL;
  if ( v2 )
  {
    v7 = (__int64 *)HungWindowFromGhostWindow(v2);
    if ( v7 )
      v6 = *v7;
  }
  UserSessionSwitchLeaveCrit(v4, v3, v5);
  return v6;
}
