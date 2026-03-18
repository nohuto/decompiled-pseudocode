/*
 * XREFs of NtUserWindowFromPoint @ 0x1C00B0250
 * Callers:
 *     <none>
 * Callees:
 *     xxxWindowFromPoint @ 0x1C00B0884 (xxxWindowFromPoint.c)
 */

__int64 __fastcall NtUserWindowFromPoint(__int64 a1)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rbx

  EnterCrit(0LL, 1LL);
  v2 = (__int64 *)xxxWindowFromPoint(a1);
  v6 = 0LL;
  if ( v2 )
    v6 = *v2;
  UserSessionSwitchLeaveCrit(v4, v3, v5);
  return v6;
}
