/*
 * XREFs of _RtlCheckTokenMembership@12 @ 0x4B346090
 * Callers:
 *     <none>
 * Callees:
 *     _RtlCheckTokenMembershipEx@16 @ 0x4B2D5F50 (_RtlCheckTokenMembershipEx@16.c)
 */

NTSTATUS __cdecl RtlCheckTokenMembership(HANDLE TokenHandle, PSID SidToCheck, PBOOLEAN IsMember)
{
  return RtlCheckTokenMembershipEx(TokenHandle, SidToCheck, 0, IsMember);
}
