/*
 * XREFs of NtUserWindowFromDC @ 0x1C00FBFE0
 * Callers:
 *     <none>
 * Callees:
 *     _WindowFromDC @ 0x1C00FC03C (_WindowFromDC.c)
 */

__int64 __fastcall NtUserWindowFromDC(HDC a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rbx

  EnterCrit(0LL, 1LL);
  v5 = 0LL;
  if ( WindowFromDC(a1) )
    v5 = *(_QWORD *)WindowFromDC(a1);
  UserSessionSwitchLeaveCrit(v3, v2, v4);
  return v5;
}
