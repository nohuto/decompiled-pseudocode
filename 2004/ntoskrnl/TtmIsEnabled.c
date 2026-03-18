/*
 * XREFs of TtmIsEnabled @ 0x1406A5180
 * Callers:
 *     PopGetConsoleDisplayRequestCount @ 0x1402DC750 (PopGetConsoleDisplayRequestCount.c)
 *     PopPowerSourceChangeCallback @ 0x1403A6260 (PopPowerSourceChangeCallback.c)
 * Callees:
 *     <none>
 */

bool TtmIsEnabled()
{
  return TtmpEnabled == 1;
}
