/*
 * XREFs of PopValidateContextMembership @ 0x14077BE50
 * Callers:
 *     PopGetSettingNotificationName @ 0x14064BA50 (PopGetSettingNotificationName.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x1402FE9E0 (RtlCheckTokenMembership.c)
 */

__int64 __fastcall PopValidateContextMembership(void *a1)
{
  RtlCheckTokenMembership(0LL, a1);
  return 3221225506LL;
}
