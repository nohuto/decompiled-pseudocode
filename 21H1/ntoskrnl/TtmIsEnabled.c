/*
 * XREFs of TtmIsEnabled @ 0x140710D8C
 * Callers:
 *     PopGetConsoleDisplayRequestCount @ 0x14035D708 (PopGetConsoleDisplayRequestCount.c)
 *     PopPowerSourceChangeCallback @ 0x1403A9F30 (PopPowerSourceChangeCallback.c)
 * Callees:
 *     <none>
 */

bool TtmIsEnabled()
{
  return TtmpEnabled == 1;
}
