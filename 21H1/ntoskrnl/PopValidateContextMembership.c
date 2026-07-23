/*
 * XREFs of PopValidateContextMembership @ 0x140779A40
 * Callers:
 *     PopGetSettingNotificationName @ 0x14070E014 (PopGetSettingNotificationName.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x14035C110 (RtlCheckTokenMembership.c)
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
