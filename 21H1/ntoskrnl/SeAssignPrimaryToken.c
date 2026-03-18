/*
 * XREFs of SeAssignPrimaryToken @ 0x1407A3654
 * Callers:
 *     PspInitializeProcessSecurity @ 0x1406F6E68 (PspInitializeProcessSecurity.c)
 * Callees:
 *     ObfReferenceObject @ 0x1402612A0 (ObfReferenceObject.c)
 *     SeDeassignPrimaryToken @ 0x1406605E4 (SeDeassignPrimaryToken.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1406707F0 (SeAuditingWithTokenForSubcategory.c)
 *     ObInitializeFastReference @ 0x1406F7064 (ObInitializeFastReference.c)
 *     SepAuditAssignPrimaryToken @ 0x1407A3868 (SepAuditAssignPrimaryToken.c)
 */

ULONG_PTR __fastcall SeAssignPrimaryToken(__int64 a1, _BYTE *a2)
{
  if ( SeAuditingWithTokenForSubcategory(133, 0LL) )
    SepAuditAssignPrimaryToken(a1, a2);
  if ( *(_QWORD *)(a1 + 1208) )
    SeDeassignPrimaryToken(a1);
  ObfReferenceObject(a2);
  a2[204] = 1;
  return ObInitializeFastReference((ULONG_PTR *)(a1 + 1208), (ULONG_PTR)a2);
}
