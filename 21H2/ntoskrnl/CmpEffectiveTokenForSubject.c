/*
 * XREFs of CmpEffectiveTokenForSubject @ 0x140669BA0
 * Callers:
 *     CmpBuildAdminInformation @ 0x1405EA960 (CmpBuildAdminInformation.c)
 *     CmpGetVirtualizationID @ 0x140667EC4 (CmpGetVirtualizationID.c)
 *     CmpExamineSaclForAuditEvent @ 0x140871DE0 (CmpExamineSaclForAuditEvent.c)
 *     CmpReportAuditVirtualizationEvent @ 0x140871EF8 (CmpReportAuditVirtualizationEvent.c)
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
