/*
 * XREFs of KeRebaselineInterruptTime @ 0x1403813F0
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x14098ED58 (PopInvokeSystemStateHandler.c)
 *     KiCalibrateTimeAdjustment @ 0x140990BE0 (KiCalibrateTimeAdjustment.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x140240CA0 (KeQueryPerformanceCounter.c)
 */

LARGE_INTEGER KeRebaselineInterruptTime()
{
  LARGE_INTEGER result; // rax

  result = KeQueryPerformanceCounter(0LL);
  MEMORY[0xFFFFF78000000350] = result.QuadPart;
  KiInterruptTimeErrorAccumulator = 0LL;
  return result;
}
