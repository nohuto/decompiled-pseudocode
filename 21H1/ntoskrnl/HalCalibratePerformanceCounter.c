/*
 * XREFs of HalCalibratePerformanceCounter @ 0x140381420
 * Callers:
 *     HalpTscFallback @ 0x1404BC040 (HalpTscFallback.c)
 *     KiCalibrateTimeAdjustment @ 0x140990BE0 (KiCalibrateTimeAdjustment.c)
 * Callees:
 *     HalpSetVirtualRtc @ 0x1402021AC (HalpSetVirtualRtc.c)
 *     HalpQueryVirtualRtc @ 0x1403814EC (HalpQueryVirtualRtc.c)
 *     HalpTimerResetProfileAdjustment @ 0x140392DA0 (HalpTimerResetProfileAdjustment.c)
 *     HalpTimerScaleCounter @ 0x140392DF0 (HalpTimerScaleCounter.c)
 *     HalpTimerCalibratePerformanceCounter @ 0x1403A2854 (HalpTimerCalibratePerformanceCounter.c)
 */

__int64 __fastcall HalCalibratePerformanceCounter(volatile signed __int32 *a1, __int64 a2, __int64 a3)
{
  unsigned int Number; // ebp
  __int64 v4; // rsi
  ULONG_PTR v5; // rbx
  __int64 result; // rax
  char v8; // r14
  __int64 v9; // rdx
  __int64 v10; // r8
  ULONG_PTR v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rax
  LARGE_INTEGER v14; // [rsp+40h] [rbp+8h] BYREF

  Number = KeGetPcr()->Prcb.Number;
  v4 = a2;
  v5 = HalpPerformanceCounter;
  v14.QuadPart = 0LL;
  if ( *(_DWORD *)(HalpPerformanceCounter + 228) == 5 )
    v4 = HalpTimerScaleCounter(a2, 10000000LL, *(_QWORD *)(HalpPerformanceCounter + 192));
  if ( v5 != HalpOriginalPerformanceCounter )
  {
    v12 = *(_QWORD *)(HalpOriginalPerformanceCounter + 192);
    if ( *(_DWORD *)(HalpOriginalPerformanceCounter + 228) == 5 )
      v12 = 10000000LL;
    v4 = HalpTimerScaleCounter(v4, v12, *(_QWORD *)(v5 + 192));
  }
  if ( !Number )
  {
    v8 = HalpQueryVirtualRtc(&v14, 0LL, a3);
    HalpTimerCalibratePerformanceCounter(v5, v4);
    v11 = HalpAlwaysOnCounter;
    if ( HalpAlwaysOnCounter )
    {
      v13 = HalpTimerScaleCounter(v4, *(_QWORD *)(v5 + 192), *(_QWORD *)(HalpAlwaysOnCounter + 192));
      HalpTimerCalibratePerformanceCounter(v11, v13);
    }
    if ( v8 )
      HalpSetVirtualRtc(&v14, v9, v10);
  }
  HalpTimerResetProfileAdjustment();
  _InterlockedDecrement(a1);
  do
  {
    _mm_pause();
    result = *(unsigned int *)a1;
  }
  while ( (int)result > 0 );
  return result;
}
