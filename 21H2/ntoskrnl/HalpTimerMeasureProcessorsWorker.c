/*
 * XREFs of HalpTimerMeasureProcessorsWorker @ 0x1404C3800
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1402695B0 (KeQueryActiveProcessorCountEx.c)
 *     KeStallExecutionProcessor @ 0x1402CF130 (KeStallExecutionProcessor.c)
 *     KeQueryPerformanceCounter @ 0x1402D0BC0 (KeQueryPerformanceCounter.c)
 *     HalpTimerScaleCounter @ 0x140396440 (HalpTimerScaleCounter.c)
 *     HalpFindTimer @ 0x14039D5A8 (HalpFindTimer.c)
 *     HalpTimerReadTimerPairWithLatencyLimit @ 0x1403AA968 (HalpTimerReadTimerPairWithLatencyLimit.c)
 *     HalpTimerDetermineValidTimerPairReadLatency @ 0x1403AAA4C (HalpTimerDetermineValidTimerPairReadLatency.c)
 *     HalpProcessorFence @ 0x1403F9EA0 (HalpProcessorFence.c)
 */

ULONG_PTR __fastcall HalpTimerMeasureProcessorsWorker(ULONG_PTR Argument)
{
  int v2; // ebx
  __int16 v3; // bp
  int v4; // ebp
  ULONG ActiveProcessorCount; // eax
  KPCR *Pcr; // r14
  ULONG v7; // esi
  ULONG_PTR *Timer; // rbx
  unsigned int Latency; // esi
  LONGLONG v10; // rbx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rcx
  LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp-48h] BYREF
  int v15; // [rsp+70h] [rbp-8h]
  LARGE_INTEGER v16; // [rsp+80h] [rbp+8h] BYREF
  LARGE_INTEGER v17; // [rsp+88h] [rbp+10h] BYREF
  LARGE_INTEGER v18; // [rsp+90h] [rbp+18h] BYREF
  LARGE_INTEGER v19; // [rsp+98h] [rbp+20h] BYREF

  v16.QuadPart = 0LL;
  v18.QuadPart = 0LL;
  PerformanceFrequency.QuadPart = 0LL;
  v17.QuadPart = 0LL;
  v19.QuadPart = 0LL;
  v2 = *(_DWORD *)(Argument + 16);
  v3 = v15;
  _disable();
  v4 = v3 & 0x200;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  Pcr = KeGetPcr();
  v7 = ActiveProcessorCount;
  Timer = HalpFindTimer(v2, 0, 0, 0, 1);
  HalpProcessorFence();
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)Argument, 0xFFFFFFFF) != 1 )
  {
    do
      _mm_pause();
    while ( *(_DWORD *)Argument );
  }
  if ( KeGetCurrentPrcb()->Number )
  {
    while ( *(_DWORD *)(Argument + 4) != KeGetCurrentPrcb()->Number )
      _mm_pause();
    KeQueryPerformanceCounter(&PerformanceFrequency);
    Latency = HalpTimerDetermineValidTimerPairReadLatency((__int64)Timer, HalpPerformanceCounter);
    HalpTimerReadTimerPairWithLatencyLimit(Latency, (__int64)Timer, HalpPerformanceCounter, &v17, &v19);
    _InterlockedIncrement((volatile signed __int32 *)(Argument + 4));
    while ( *(_DWORD *)(Argument + 8) != KeGetCurrentPrcb()->Number )
      _mm_pause();
    HalpTimerReadTimerPairWithLatencyLimit(Latency, (__int64)Timer, HalpPerformanceCounter, &v16, &v18);
    _InterlockedIncrement((volatile signed __int32 *)(Argument + 8));
    do
      _mm_pause();
    while ( !*(_DWORD *)(Argument + 12) );
    v10 = v16.QuadPart - v17.QuadPart;
    v11 = 1000000 * v10 / HalpTimerScaleCounter(v18.QuadPart - v19.QuadPart, PerformanceFrequency.QuadPart, 1000000LL);
    *(_QWORD *)Pcr->HalReserved = 10000 * ((v11 + 5000) / 0x2710);
    v12 = 1000000 * ((v11 + 500000) / 0xF4240);
    Pcr->StallScaleFactor = v12 / 0xF4240;
    KeGetCurrentPrcb()->MHz = v12 / 0xF4240;
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(Argument + 4));
    do
      _mm_pause();
    while ( *(_DWORD *)(Argument + 4) != v7 );
    KeStallExecutionProcessor(0x1E848u);
    _InterlockedIncrement((volatile signed __int32 *)(Argument + 8));
    do
      _mm_pause();
    while ( *(_DWORD *)(Argument + 8) != v7 );
    _InterlockedIncrement((volatile signed __int32 *)(Argument + 12));
  }
  if ( v4 )
    _enable();
  return 0LL;
}
