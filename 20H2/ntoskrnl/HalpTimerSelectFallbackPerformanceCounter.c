/*
 * XREFs of HalpTimerSelectFallbackPerformanceCounter @ 0x1404BE9E8
 * Callers:
 *     HalpTscFallback @ 0x1404BFC40 (HalpTscFallback.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     HalpTimerCalculateMaximumAllowableDrift @ 0x1404BE090 (HalpTimerCalculateMaximumAllowableDrift.c)
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
