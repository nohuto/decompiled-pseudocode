/*
 * XREFs of KeRebaselineSystemTime @ 0x14038DD98
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140992A68 (PopInvokeSystemStateHandler.c)
 *     InitBootProcessor @ 0x140A3AAF4 (InitBootProcessor.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022C340 (KeQueryPerformanceCounter.c)
 */

LARGE_INTEGER KeRebaselineSystemTime()
{
  LARGE_INTEGER result; // rax

  result = KeQueryPerformanceCounter(0LL);
  MEMORY[0xFFFFF78000000348] = result.QuadPart;
  KiSystemTimeErrorAccumulator = 0LL;
  return result;
}
