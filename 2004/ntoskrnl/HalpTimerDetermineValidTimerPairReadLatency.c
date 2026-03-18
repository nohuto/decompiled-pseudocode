/*
 * XREFs of HalpTimerDetermineValidTimerPairReadLatency @ 0x1403AD71C
 * Callers:
 *     HalpTimerMeasureFrequencies @ 0x1403AD338 (HalpTimerMeasureFrequencies.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x1404BE6D0 (HalpTimerMeasureProcessorsWorker.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14021F560 (HalpTimerGetInternalData.c)
 *     KeQueryPerformanceCounter @ 0x1402F3FA0 (KeQueryPerformanceCounter.c)
 *     HalpProcessorFence @ 0x1403F2EE0 (HalpProcessorFence.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpTimerDetermineValidTimerPairReadLatency(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebp
  __int64 v5; // r14
  unsigned __int64 v6; // r15
  __int64 InternalData; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rbx

  v4 = -1;
  v5 = 25LL;
  do
  {
    HalpProcessorFence();
    v6 = __rdtsc();
    HalpProcessorFence();
    if ( a1 == HalpPerformanceCounter && HalpTimerFrequenciesMeasured )
    {
      KeQueryPerformanceCounter(0LL);
    }
    else
    {
      InternalData = HalpTimerGetInternalData(a1);
      (*(void (__fastcall **)(__int64))(a1 + 112))(InternalData);
    }
    HalpProcessorFence();
    if ( a2 == HalpPerformanceCounter && HalpTimerFrequenciesMeasured )
    {
      KeQueryPerformanceCounter(0LL);
    }
    else
    {
      v8 = HalpTimerGetInternalData(a2);
      (*(void (__fastcall **)(__int64))(a2 + 112))(v8);
    }
    HalpProcessorFence();
    v9 = __rdtsc();
    HalpProcessorFence();
    v10 = v9 - v6;
    if ( v10 >= v4 )
      LODWORD(v10) = v4;
    v4 = v10;
    --v5;
  }
  while ( v5 );
  return (unsigned int)(4 * v10);
}
