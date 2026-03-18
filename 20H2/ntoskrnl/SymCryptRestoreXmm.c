/*
 * XREFs of SymCryptRestoreXmm @ 0x140513400
 * Callers:
 *     SymCryptParallelSha256Process @ 0x1403EE764 (SymCryptParallelSha256Process.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14039A580 (xHalTimerWatchdogStop.c)
 */

void SymCryptRestoreXmm()
{
  xHalTimerWatchdogStop();
}
