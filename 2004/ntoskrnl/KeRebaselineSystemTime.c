/*
 * XREFs of KeRebaselineSystemTime @ 0x14038B334
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x14098FAAC (PopInvokeSystemStateHandler.c)
 *     InitBootProcessor @ 0x140A36F64 (InitBootProcessor.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402F3FA0 (KeQueryPerformanceCounter.c)
 */

LARGE_INTEGER KeRebaselineSystemTime()
{
  LARGE_INTEGER result; // rax

  result = KeQueryPerformanceCounter(0LL);
  MEMORY[0xFFFFF78000000348] = result.QuadPart;
  KiSystemTimeErrorAccumulator = 0LL;
  return result;
}
