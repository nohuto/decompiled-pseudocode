/*
 * XREFs of HalCalibratePerformanceCounter @ 0x14038B8D0
 * Callers:
 *     HalpTscFallback @ 0x14050DBB0 (HalpTscFallback.c)
 *     KiCalibrateTimeAdjustment @ 0x140A48E70 (KiCalibrateTimeAdjustment.c)
 * Callees:
 *     HalpTimerResetProfileAdjustment @ 0x140229A90 (HalpTimerResetProfileAdjustment.c)
 *     HalpSetVirtualRtc @ 0x14022DA40 (HalpSetVirtualRtc.c)
 *     HalpQueryVirtualRtc @ 0x14038B7AC (HalpQueryVirtualRtc.c)
 *     HalpTimerScaleCounter @ 0x1403A572C (HalpTimerScaleCounter.c)
 *     HalpTimerCalibratePerformanceCounter @ 0x1403B53D4 (HalpTimerCalibratePerformanceCounter.c)
 */

__int64 __fastcall HalCalibratePerformanceCounter(volatile signed __int32 *a1, __int64 a2)
{
  unsigned int Number; // r11d
  __int64 v3; // rsi
  ULONG_PTR v4; // rbx
  __int64 result; // rax
  char v7; // bp
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // r11
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  Number = KeGetPcr()->Prcb.Number;
  v3 = a2;
  v4 = HalpPerformanceCounter;
  v13 = 0LL;
  if ( *(_DWORD *)(HalpPerformanceCounter + 228) == 5 )
    v3 = HalpTimerScaleCounter(a2, 10000000LL, *(_QWORD *)(HalpPerformanceCounter + 192));
  if ( v4 != HalpOriginalPerformanceCounter )
  {
    v10 = *(_QWORD *)(HalpOriginalPerformanceCounter + 192);
    if ( *(_DWORD *)(HalpOriginalPerformanceCounter + 228) == 5 )
      v10 = 10000000LL;
    v3 = HalpTimerScaleCounter(v3, v10, *(_QWORD *)(v4 + 192));
  }
  if ( !Number )
  {
    v7 = HalpQueryVirtualRtc(&v13, 0LL);
    HalpTimerCalibratePerformanceCounter(v4, v3);
    if ( HalpAlwaysOnCounter )
    {
      v11 = HalpTimerScaleCounter(v3, *(_QWORD *)(v4 + 192), *(_QWORD *)(HalpAlwaysOnCounter + 192));
      HalpTimerCalibratePerformanceCounter(v12, v11);
    }
    if ( v7 )
      HalpSetVirtualRtc(&v13, v8, v9);
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
