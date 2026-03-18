/*
 * XREFs of NtUserRealChildWindowFromPoint @ 0x1C02013F0
 * Callers:
 *     <none>
 * Callees:
 *     _RealChildWindowFromPoint @ 0x1C024A33C (_RealChildWindowFromPoint.c)
 */

__int64 __fastcall NtUserRealChildWindowFromPoint(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdi
  __int64 *v9; // rax

  EnterSharedCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v8 = 0LL;
  if ( v4 )
  {
    v9 = (__int64 *)RealChildWindowFromPoint(v4, a2);
    if ( v9 )
      v8 = *v9;
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7);
  return v8;
}
