/*
 * XREFs of SeReleaseSid @ 0x1405E553C
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x140229080 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1405E3AB0 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     AlpcpConnectPort @ 0x1405E658C (AlpcpConnectPort.c)
 *     ExpWnfReleaseCapturedScopeInstanceId @ 0x140654688 (ExpWnfReleaseCapturedScopeInstanceId.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1406A6FD8 (AlpcpPortQueryConnectedSidInfo.c)
 *     NtCreateTokenEx @ 0x1406A8DE0 (NtCreateTokenEx.c)
 *     NtSetInformationToken @ 0x1406AB220 (NtSetInformationToken.c)
 *     NtSecureConnectPort @ 0x1406BF9C0 (NtSecureConnectPort.c)
 *     NtCreateLowBoxToken @ 0x1406FB890 (NtCreateLowBoxToken.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseSid(void *a1, char a2, char a3)
{
  if ( !a2 && a3 == 1 || a2 == 1 )
    ExFreePoolWithTag(a1, 0);
}
