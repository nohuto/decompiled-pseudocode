/*
 * XREFs of RtlCheckTokenMembership @ 0x1402FE9E0
 * Callers:
 *     PopPowerInformationInternal @ 0x14064B1E4 (PopPowerInformationInternal.c)
 *     ExCheckFullProcessInformationAccess @ 0x1406BC87C (ExCheckFullProcessInformationAccess.c)
 *     ExpCheckIRTimerAccess @ 0x140760128 (ExpCheckIRTimerAccess.c)
 *     PopIsRunningAsLocalSystem @ 0x140767408 (PopIsRunningAsLocalSystem.c)
 *     PopValidateContextMembership @ 0x14077BE50 (PopValidateContextMembership.c)
 *     PopNetUpdateStandbyRequest @ 0x1408EEC1C (PopNetUpdateStandbyRequest.c)
 *     RtlCapabilityCheck @ 0x140910060 (RtlCapabilityCheck.c)
 *     NtFilterBootOption @ 0x1409207B0 (NtFilterBootOption.c)
 *     EtwpUserInAdminOrLogUsersGroup @ 0x140937AEC (EtwpUserInAdminOrLogUsersGroup.c)
 * Callees:
 *     RtlCheckTokenMembershipEx @ 0x1402FEA00 (RtlCheckTokenMembershipEx.c)
 */

NTSTATUS __cdecl RtlCheckTokenMembership(HANDLE TokenHandle, PSID SidToCheck, PBOOLEAN IsMember)
{
  return RtlCheckTokenMembershipEx(TokenHandle, SidToCheck, 0, IsMember);
}
