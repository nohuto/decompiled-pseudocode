/*
 * XREFs of HalpTimerSelectFallbackPerformanceCounter @ 0x1404BADE8
 * Callers:
 *     HalpTscFallback @ 0x1404BC040 (HalpTscFallback.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     HalpTimerCalculateMaximumAllowableDrift @ 0x1404BA490 (HalpTimerCalculateMaximumAllowableDrift.c)
 */

unsigned __int64 HalpTimerSelectFallbackPerformanceCounter()
{
  unsigned __int64 result; // rax

  result = HalpFallbackPerformanceCounter;
  if ( !HalpFallbackPerformanceCounter )
    KeBugCheckEx(
      0x5Cu,
      0x1000uLL,
      HalpPerformanceCounter,
      (ULONG_PTR)&HalpRegisteredTimers,
      (unsigned int)HalpRegisteredTimerCount);
  HalpPerformanceCounter = HalpFallbackPerformanceCounter;
  if ( HalpAlwaysOnCounter )
  {
    result = HalpTimerCalculateMaximumAllowableDrift();
    HalpTimerMaximumAllowableDrift = result;
  }
  return result;
}
