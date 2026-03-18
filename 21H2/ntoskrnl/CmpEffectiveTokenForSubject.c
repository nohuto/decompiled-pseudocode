/*
 * XREFs of CmpEffectiveTokenForSubject @ 0x14066A520
 * Callers:
 *     CmpGetVirtualizationID @ 0x140669CBC (CmpGetVirtualizationID.c)
 *     CmpIsVirtEnabledForSubject @ 0x1406B6830 (CmpIsVirtEnabledForSubject.c)
 *     CmpBuildAdminInformation @ 0x1406B6958 (CmpBuildAdminInformation.c)
 *     CmpExamineSaclForAuditEvent @ 0x140918574 (CmpExamineSaclForAuditEvent.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1409188E8 (CmpReportAuditVirtualizationEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpEffectiveTokenForSubject(__int64 *a1, _DWORD *a2)
{
  __int64 v2; // r8

  v2 = *a1;
  if ( !*a1 )
    v2 = a1[2];
  if ( a2 )
    *a2 = (*a1 != 0) + 1;
  return v2;
}
