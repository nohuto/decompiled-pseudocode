/*
 * XREFs of KeRebaselineInterruptTime @ 0x140381C30
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x14098FAAC (PopInvokeSystemStateHandler.c)
 *     KiCalibrateTimeAdjustment @ 0x140991B20 (KiCalibrateTimeAdjustment.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402F3FA0 (KeQueryPerformanceCounter.c)
 */

LARGE_INTEGER KeRebaselineInterruptTime()
{
  LARGE_INTEGER result; // rax

  result = KeQueryPerformanceCounter(0LL);
  MEMORY[0xFFFFF78000000350] = result.QuadPart;
  KiInterruptTimeErrorAccumulator = 0LL;
  return result;
}
