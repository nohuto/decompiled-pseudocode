/*
 * XREFs of HalpTimerReadTimerPairWithLatencyLimit @ 0x1403AA968
 * Callers:
 *     HalpTimerMeasureFrequencies @ 0x1403AA668 (HalpTimerMeasureFrequencies.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x1404C3800 (HalpTimerMeasureProcessorsWorker.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x1402CF2E0 (HalpTimerGetInternalData.c)
 *     KeQueryPerformanceCounter @ 0x1402D0BC0 (KeQueryPerformanceCounter.c)
 *     HalpProcessorFence @ 0x1403F9EA0 (HalpProcessorFence.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpTimerReadTimerPairWithLatencyLimit(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        LARGE_INTEGER *a4,
        LARGE_INTEGER *a5)
{
  unsigned __int64 v7; // r15
  unsigned __int64 v9; // rbp
  __int64 InternalData; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v12; // rax
  LARGE_INTEGER v13; // rax
  unsigned __int64 v14; // rbx
  __int64 result; // rax

  v7 = a1;
  do
  {
    HalpProcessorFence();
    v9 = __rdtsc();
    HalpProcessorFence();
    if ( a2 == HalpPerformanceCounter && HalpTimerFrequenciesMeasured )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
    }
    else
    {
      InternalData = HalpTimerGetInternalData(a2);
      PerformanceCounter.QuadPart = (*(__int64 (__fastcall **)(__int64))(a2 + 112))(InternalData);
    }
    *a4 = PerformanceCounter;
    HalpProcessorFence();
    if ( a3 == HalpPerformanceCounter && HalpTimerFrequenciesMeasured )
    {
      v13 = KeQueryPerformanceCounter(0LL);
    }
    else
    {
      v12 = HalpTimerGetInternalData(a3);
      v13.QuadPart = (*(__int64 (__fastcall **)(__int64))(a3 + 112))(v12);
    }
    *a5 = v13;
    HalpProcessorFence();
    v14 = __rdtsc();
    result = HalpProcessorFence();
  }
  while ( v14 - v9 > v7 );
  return result;
}
