/*
 * XREFs of ObInitializeFastReference @ 0x1406AD8DC
 * Callers:
 *     PspInitializeProcessSecurity @ 0x1406AD6E0 (PspInitializeProcessSecurity.c)
 *     PspLocateSystemDll @ 0x140798D78 (PspLocateSystemDll.c)
 *     SeAssignPrimaryToken @ 0x1407BC360 (SeAssignPrimaryToken.c)
 *     SepInitializationPhase0 @ 0x140A48920 (SepInitializationPhase0.c)
 * Callees:
 *     ObReferenceObjectExWithTag @ 0x14021B6A0 (ObReferenceObjectExWithTag.c)
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
