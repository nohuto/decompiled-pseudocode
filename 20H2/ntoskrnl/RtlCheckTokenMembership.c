/*
 * XREFs of RtlCheckTokenMembership @ 0x140340910
 * Callers:
 *     ExCheckFullProcessInformationAccess @ 0x1406DB3E8 (ExCheckFullProcessInformationAccess.c)
 *     PopPowerInformationInternal @ 0x1406F9724 (PopPowerInformationInternal.c)
 *     ExpCheckIRTimerAccess @ 0x14076E778 (ExpCheckIRTimerAccess.c)
 *     PopIsRunningAsLocalSystem @ 0x140776438 (PopIsRunningAsLocalSystem.c)
 *     PopValidateContextMembership @ 0x14078A450 (PopValidateContextMembership.c)
 *     PopNetUpdateStandbyRequest @ 0x1408F482C (PopNetUpdateStandbyRequest.c)
 *     RtlCapabilityCheck @ 0x140915BA0 (RtlCapabilityCheck.c)
 *     NtFilterBootOption @ 0x1409265D0 (NtFilterBootOption.c)
 *     EtwpUserInAdminOrLogUsersGroup @ 0x14093D91C (EtwpUserInAdminOrLogUsersGroup.c)
 * Callees:
 *     RtlCheckTokenMembershipEx @ 0x140340930 (RtlCheckTokenMembershipEx.c)
 */

__int64 __fastcall RtlCheckTokenMembership(void *a1, void *a2)
{
  return RtlCheckTokenMembershipEx(a1, a2);
}
