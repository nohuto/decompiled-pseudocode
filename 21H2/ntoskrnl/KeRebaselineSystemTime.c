/*
 * XREFs of KeRebaselineSystemTime @ 0x140399340
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140A4AF0C (PopInvokeSystemStateHandler.c)
 *     InitBootProcessor @ 0x140AFB264 (InitBootProcessor.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 */

LARGE_INTEGER KeRebaselineSystemTime()
{
  LARGE_INTEGER result; // rax

  result = KeQueryPerformanceCounter(0LL);
  MEMORY[0xFFFFF78000000348] = result.QuadPart;
  KiSystemTimeErrorAccumulator = 0LL;
  return result;
}
