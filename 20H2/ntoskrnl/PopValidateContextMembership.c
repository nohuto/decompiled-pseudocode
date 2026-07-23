/*
 * XREFs of PopValidateContextMembership @ 0x14078A450
 * Callers:
 *     PopGetSettingNotificationName @ 0x14071C434 (PopGetSettingNotificationName.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x140340910 (RtlCheckTokenMembership.c)
 */

NTSTATUS __fastcall PopValidateContextMembership(PSID SidToCheck)
{
  NTSTATUS result; // eax
  BOOLEAN IsMember; // [rsp+38h] [rbp+10h] BYREF

  IsMember = 0;
  result = RtlCheckTokenMembership(0LL, SidToCheck, &IsMember);
  if ( result < 0 || !IsMember )
    return -1073741790;
  return result;
}
