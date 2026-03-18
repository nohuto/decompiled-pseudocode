/*
 * XREFs of TtmIsEnabled @ 0x140720018
 * Callers:
 *     PopGetConsoleDisplayRequestCount @ 0x1403636EC (PopGetConsoleDisplayRequestCount.c)
 *     PopPowerSourceChangeCallback @ 0x1403C9A40 (PopPowerSourceChangeCallback.c)
 * Callees:
 *     <none>
 */

bool TtmIsEnabled()
{
  return TtmpEnabled == 1;
}
