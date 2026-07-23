/*
 * XREFs of HalpWatchdogDelayExpiration @ 0x1404BDA70
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x14021F2E0 (RtlGetInterruptTimePrecise.c)
 *     HalpSetTimer @ 0x1402FE504 (HalpSetTimer.c)
 */

__int64 __fastcall HalpWatchdogDelayExpiration(_QWORD *a1)
{
  __int64 v1; // rbx
  LARGE_INTEGER PerformanceCounter; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v4; // [rsp+48h] [rbp+10h] BYREF

  v1 = HalpWatchdogTimer;
  if ( a1 )
    *a1 = HalpTimerWatchdogResetCount;
  if ( !v1 || !HalpTimerWatchdogArmed )
    return 0LL;
  if ( HalpTimerProcessorsFrozen
    && HalpTimerWatchdogLastReset + 3000000000LL >= (unsigned __int64)RtlGetInterruptTimePrecise(&PerformanceCounter).QuadPart )
  {
    return HalpSetTimer(v1, 3u, HalpTimerWatchdogTimeout, 1, &v4);
  }
  return 3221225473LL;
}
