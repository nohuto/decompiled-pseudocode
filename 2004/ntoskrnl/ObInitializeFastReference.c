/*
 * XREFs of ObInitializeFastReference @ 0x140613C00
 * Callers:
 *     PspInitializeProcessSecurity @ 0x140613A04 (PspInitializeProcessSecurity.c)
 *     PspLocateSystemDll @ 0x140786744 (PspLocateSystemDll.c)
 *     SeAssignPrimaryToken @ 0x1407A5EA4 (SeAssignPrimaryToken.c)
 *     SepInitializationPhase0 @ 0x140A5E210 (SepInitializationPhase0.c)
 * Callees:
 *     ObReferenceObjectExWithTag @ 0x14032EFF0 (ObReferenceObjectExWithTag.c)
 */

ULONG_PTR __fastcall ObInitializeFastReference(ULONG_PTR *a1, ULONG_PTR a2)
{
  ULONG_PTR result; // rax

  result = 0LL;
  if ( a2 )
  {
    ObReferenceObjectExWithTag(a2, 15);
    result = a2 + 15;
  }
  *a1 = result;
  return result;
}
