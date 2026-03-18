/*
 * XREFs of PopValidateContextMembership @ 0x140779A40
 * Callers:
 *     PopGetSettingNotificationName @ 0x14070E014 (PopGetSettingNotificationName.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x14035C110 (RtlCheckTokenMembership.c)
 */

__int64 __fastcall PopValidateContextMembership(void *a1)
{
  RtlCheckTokenMembership(0LL, a1);
  return 3221225506LL;
}
