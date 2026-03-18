/*
 * XREFs of SeReleaseSid @ 0x140628AF0
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x140294C80 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     ExpWnfReleaseCapturedScopeInstanceId @ 0x1406234D8 (ExpWnfReleaseCapturedScopeInstanceId.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x140627300 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     AlpcpConnectPort @ 0x14062A204 (AlpcpConnectPort.c)
 *     NtSecureConnectPort @ 0x14062E280 (NtSecureConnectPort.c)
 *     NtCreateTokenEx @ 0x14062F9A0 (NtCreateTokenEx.c)
 *     NtSetInformationToken @ 0x1406B9BC0 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x1406BAFC0 (NtCreateLowBoxToken.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1406D55F8 (AlpcpPortQueryConnectedSidInfo.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseSid(void *a1, char a2, char a3)
{
  if ( !a2 && a3 == 1 || a2 == 1 )
    ExFreePoolWithTag(a1, 0);
}
