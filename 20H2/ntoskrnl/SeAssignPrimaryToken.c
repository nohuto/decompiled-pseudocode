/*
 * XREFs of SeAssignPrimaryToken @ 0x1407B6F70
 * Callers:
 *     PspInitializeProcessSecurity @ 0x14068EDF8 (PspInitializeProcessSecurity.c)
 * Callees:
 *     ObfReferenceObject @ 0x140221300 (ObfReferenceObject.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1406312F0 (SeAuditingWithTokenForSubcategory.c)
 *     SeDeassignPrimaryToken @ 0x1406614F4 (SeDeassignPrimaryToken.c)
 *     ObInitializeFastReference @ 0x14068EFF4 (ObInitializeFastReference.c)
 *     SepAuditAssignPrimaryToken @ 0x1407B7184 (SepAuditAssignPrimaryToken.c)
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
