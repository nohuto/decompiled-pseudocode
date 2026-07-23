/*
 * XREFs of RtlCheckTokenMembership @ 0x14035C110
 * Callers:
 *     PopPowerInformationInternal @ 0x14070C7D4 (PopPowerInformationInternal.c)
 *     ExCheckFullProcessInformationAccess @ 0x14070DFA4 (ExCheckFullProcessInformationAccess.c)
 *     ExpCheckIRTimerAccess @ 0x14075DDF8 (ExpCheckIRTimerAccess.c)
 *     PopIsRunningAsLocalSystem @ 0x140765A48 (PopIsRunningAsLocalSystem.c)
 *     PopValidateContextMembership @ 0x140779A40 (PopValidateContextMembership.c)
 *     PopNetUpdateStandbyRequest @ 0x1408ED92C (PopNetUpdateStandbyRequest.c)
 *     RtlCapabilityCheck @ 0x14090ECC0 (RtlCapabilityCheck.c)
 *     NtFilterBootOption @ 0x14091F500 (NtFilterBootOption.c)
 *     EtwpUserInAdminOrLogUsersGroup @ 0x14093684C (EtwpUserInAdminOrLogUsersGroup.c)
 * Callees:
 *     RtlCheckTokenMembershipEx @ 0x14035C130 (RtlCheckTokenMembershipEx.c)
 */

NTSTATUS __cdecl RtlCheckTokenMembership(HANDLE TokenHandle, PSID SidToCheck, PBOOLEAN IsMember)
{
  return RtlCheckTokenMembershipEx(TokenHandle, SidToCheck, 0, IsMember);
}
