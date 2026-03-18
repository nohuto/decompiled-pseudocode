/*
 * XREFs of ObInitializeFastReference @ 0x14068EFF4
 * Callers:
 *     PspInitializeProcessSecurity @ 0x14068EDF8 (PspInitializeProcessSecurity.c)
 *     PspLocateSystemDll @ 0x140794454 (PspLocateSystemDll.c)
 *     SeAssignPrimaryToken @ 0x1407B6F70 (SeAssignPrimaryToken.c)
 *     SepInitializationPhase0 @ 0x140A65570 (SepInitializationPhase0.c)
 * Callees:
 *     ObReferenceObjectExWithTag @ 0x140302C00 (ObReferenceObjectExWithTag.c)
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
