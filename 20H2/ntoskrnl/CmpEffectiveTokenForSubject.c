/*
 * XREFs of CmpEffectiveTokenForSubject @ 0x1406FDF40
 * Callers:
 *     CmpBuildAdminInformation @ 0x1406C34D4 (CmpBuildAdminInformation.c)
 *     CmpGetVirtualizationID @ 0x1406FC260 (CmpGetVirtualizationID.c)
 *     CmpExamineSaclForAuditEvent @ 0x140874434 (CmpExamineSaclForAuditEvent.c)
 *     CmpReportAuditVirtualizationEvent @ 0x14087454C (CmpReportAuditVirtualizationEvent.c)
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
