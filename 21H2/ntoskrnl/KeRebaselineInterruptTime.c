/*
 * XREFs of KeRebaselineInterruptTime @ 0x14038407C
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140993A68 (PopInvokeSystemStateHandler.c)
 *     KiCalibrateTimeAdjustment @ 0x140995B90 (KiCalibrateTimeAdjustment.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402D0BC0 (KeQueryPerformanceCounter.c)
 */

LARGE_INTEGER KeRebaselineInterruptTime()
{
  LARGE_INTEGER result; // rax

  result = KeQueryPerformanceCounter(0LL);
  MEMORY[0xFFFFF78000000350] = result.QuadPart;
  KiInterruptTimeErrorAccumulator = 0LL;
  return result;
}
