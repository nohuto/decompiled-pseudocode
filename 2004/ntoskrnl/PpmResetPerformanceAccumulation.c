/*
 * XREFs of PpmResetPerformanceAccumulation @ 0x1403A2A38
 * Callers:
 *     PpmResetPerfTimes @ 0x1403A2974 (PpmResetPerfTimes.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402F3FA0 (KeQueryPerformanceCounter.c)
 */

LARGE_INTEGER __fastcall PpmResetPerformanceAccumulation(LARGE_INTEGER *a1)
{
  LARGE_INTEGER result; // rax

  if ( (a1[4276].QuadPart & 0x8000000000LL) != 0 )
    a1[4120].QuadPart = __readmsr(0xDB2u);
  a1[4106].QuadPart = __rdtsc();
  result = KeQueryPerformanceCounter(0LL);
  a1[4110] = result;
  return result;
}
