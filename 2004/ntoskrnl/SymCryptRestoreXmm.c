/*
 * XREFs of SymCryptRestoreXmm @ 0x14050FAD0
 * Callers:
 *     SymCryptParallelSha256Process @ 0x1403EBAD4 (SymCryptParallelSha256Process.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140398100 (xHalTimerWatchdogStop.c)
 */

void SymCryptRestoreXmm()
{
  xHalTimerWatchdogStop();
}
