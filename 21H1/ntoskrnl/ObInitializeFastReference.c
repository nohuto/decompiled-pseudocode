/*
 * XREFs of ObInitializeFastReference @ 0x1406F7064
 * Callers:
 *     PspInitializeProcessSecurity @ 0x1406F6E68 (PspInitializeProcessSecurity.c)
 *     PspLocateSystemDll @ 0x1407810B8 (PspLocateSystemDll.c)
 *     SeAssignPrimaryToken @ 0x1407A3654 (SeAssignPrimaryToken.c)
 *     SepInitializationPhase0 @ 0x140A60D5C (SepInitializationPhase0.c)
 * Callees:
 *     ObReferenceObjectExWithTag @ 0x1402F3250 (ObReferenceObjectExWithTag.c)
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
