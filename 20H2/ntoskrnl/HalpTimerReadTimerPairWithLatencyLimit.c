/*
 * XREFs of HalpTimerReadTimerPairWithLatencyLimit @ 0x1403AFC28
 * Callers:
 *     HalpTimerMeasureFrequencies @ 0x1403AF928 (HalpTimerMeasureFrequencies.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x1404C1BF0 (HalpTimerMeasureProcessorsWorker.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x140266AF0 (KeQueryPerformanceCounter.c)
 *     HalpTimerGetInternalData @ 0x140288EA0 (HalpTimerGetInternalData.c)
 *     HalpProcessorFence @ 0x1403F7A90 (HalpProcessorFence.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
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
