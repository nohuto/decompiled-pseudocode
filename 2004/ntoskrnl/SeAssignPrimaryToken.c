/*
 * XREFs of SeAssignPrimaryToken @ 0x1407A5EA4
 * Callers:
 *     PspInitializeProcessSecurity @ 0x140613A04 (PspInitializeProcessSecurity.c)
 * Callees:
 *     ObfReferenceObject @ 0x140208380 (ObfReferenceObject.c)
 *     ObInitializeFastReference @ 0x140613C00 (ObInitializeFastReference.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1406190D0 (SeAuditingWithTokenForSubcategory.c)
 *     SeDeassignPrimaryToken @ 0x14061AEC4 (SeDeassignPrimaryToken.c)
 *     SepAuditAssignPrimaryToken @ 0x1407A60B8 (SepAuditAssignPrimaryToken.c)
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
