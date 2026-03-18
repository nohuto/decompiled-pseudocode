/*
 * XREFs of CmpEffectiveTokenForSubject @ 0x140642EA0
 * Callers:
 *     CmpGetVirtualizationID @ 0x1406416D8 (CmpGetVirtualizationID.c)
 *     CmpBuildAdminInformation @ 0x1406DD170 (CmpBuildAdminInformation.c)
 *     CmpExamineSaclForAuditEvent @ 0x14086E8DC (CmpExamineSaclForAuditEvent.c)
 *     CmpReportAuditVirtualizationEvent @ 0x14086E9F4 (CmpReportAuditVirtualizationEvent.c)
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
