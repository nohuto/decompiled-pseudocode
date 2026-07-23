/*
 * XREFs of KeGetNextClockTickDuration @ 0x14050E870
 * Callers:
 *     HalpTimerClockPowerChange @ 0x1404BA620 (HalpTimerClockPowerChange.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x14021F2E0 (RtlGetInterruptTimePrecise.c)
 */

__int64 KeGetNextClockTickDuration()
{
  __int64 v0; // rbx
  LARGE_INTEGER InterruptTimePrecise; // rax
  LARGE_INTEGER PerformanceCounter; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0LL;
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  if ( (unsigned __int64)KiClockTimerNextTickTime > InterruptTimePrecise.QuadPart )
    return KiClockTimerNextTickTime - InterruptTimePrecise.QuadPart;
  return v0;
}
