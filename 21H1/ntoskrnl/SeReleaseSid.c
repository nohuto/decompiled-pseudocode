/*
 * XREFs of SeReleaseSid @ 0x1406466B4
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x140258400 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1405E1B90 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     NtSecureConnectPort @ 0x140645D70 (NtSecureConnectPort.c)
 *     AlpcpConnectPort @ 0x140647DB4 (AlpcpConnectPort.c)
 *     ExpWnfReleaseCapturedScopeInstanceId @ 0x140668BF8 (ExpWnfReleaseCapturedScopeInstanceId.c)
 *     NtCreateTokenEx @ 0x140672E90 (NtCreateTokenEx.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1406B7268 (AlpcpPortQueryConnectedSidInfo.c)
 *     NtSetInformationToken @ 0x1406F7D00 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x14070D200 (NtCreateLowBoxToken.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseSid(void *a1, char a2, char a3)
{
  if ( !a2 && a3 == 1 || a2 == 1 )
    ExFreePoolWithTag(a1, 0);
}
