/*
 * XREFs of KeRebaselineSystemTime @ 0x14038D678
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140995A68 (PopInvokeSystemStateHandler.c)
 *     InitBootProcessor @ 0x140A3CF64 (InitBootProcessor.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x140266AF0 (KeQueryPerformanceCounter.c)
 */

LARGE_INTEGER KeRebaselineSystemTime()
{
  LARGE_INTEGER result; // rax

  result = KeQueryPerformanceCounter(0LL);
  MEMORY[0xFFFFF78000000348] = result.QuadPart;
  KiSystemTimeErrorAccumulator = 0LL;
  return result;
}
