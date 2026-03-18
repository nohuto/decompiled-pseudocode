/*
 * XREFs of PopValidateContextMembership @ 0x14078A450
 * Callers:
 *     PopGetSettingNotificationName @ 0x14071C434 (PopGetSettingNotificationName.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x140340910 (RtlCheckTokenMembership.c)
 */

__int64 __fastcall PopValidateContextMembership(void *a1)
{
  RtlCheckTokenMembership(0LL, a1);
  return 3221225506LL;
}
