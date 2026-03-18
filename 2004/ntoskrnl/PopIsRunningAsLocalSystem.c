/*
 * XREFs of PopIsRunningAsLocalSystem @ 0x140767408
 * Callers:
 *     PopPowerInformationInternal @ 0x14064B1E4 (PopPowerInformationInternal.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x1402FE9E0 (RtlCheckTokenMembership.c)
 */

char PopIsRunningAsLocalSystem()
{
  RtlCheckTokenMembership(0LL, SeLocalSystemSid);
  return 0;
}
