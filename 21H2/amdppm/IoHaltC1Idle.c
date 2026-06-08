/*
 * XREFs of IoHaltC1Idle @ 0x1C00043E0
 * Callers:
 *     <none>
 * Callees:
 *     ReadGenAddr @ 0x1C0002DA4 (ReadGenAddr.c)
 *     C1Halt @ 0x1C000EBF0 (C1Halt.c)
 *     IssueVerw @ 0x1C000EC30 (IssueVerw.c)
 */

void __fastcall __noreturn IoHaltC1Idle(__int64 a1, int a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx

  if ( (_WORD)a2 )
    __writemsr(0x48u, 0LL);
  if ( HIWORD(a2) )
    IssueVerw(HIWORD(a2));
  ReadGenAddr(a1);
  C1Halt(v4, v3);
}
