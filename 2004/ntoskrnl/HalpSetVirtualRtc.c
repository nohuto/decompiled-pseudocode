/*
 * XREFs of HalpSetVirtualRtc @ 0x140341FFC
 * Callers:
 *     HalQueryRealTimeClock @ 0x1403413F0 (HalQueryRealTimeClock.c)
 *     HalCalibratePerformanceCounter @ 0x140381C60 (HalCalibratePerformanceCounter.c)
 *     HalpSetResumeTime @ 0x140383824 (HalpSetResumeTime.c)
 *     HalSetRealTimeClock @ 0x1404B1C60 (HalSetRealTimeClock.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402F3FA0 (KeQueryPerformanceCounter.c)
 *     RtlGetSystemTimePrecise @ 0x1402F9590 (RtlGetSystemTimePrecise.c)
 *     RtlpTimeToTimeFields @ 0x140341A98 (RtlpTimeToTimeFields.c)
 */

char __fastcall HalpSetVirtualRtc(LARGE_INTEGER *a1, __int64 a2, __int64 a3)
{
  LARGE_INTEGER SystemTimePrecise; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF
  LARGE_INTEGER v8; // [rsp+48h] [rbp+10h] BYREF

  v7 = 0LL;
  if ( SystemPowerPhase == 2 )
    return 0;
  if ( a1 )
  {
    SystemTimePrecise = *a1;
    v8 = *a1;
  }
  else
  {
    if ( SystemPowerPhase )
      return 0;
    SystemTimePrecise = RtlGetSystemTimePrecise();
    v8 = SystemTimePrecise;
  }
  RtlpTimeToTimeFields((__int64 *)&v8, &v7, a3);
  if ( (__int16)v7 <= 1601 )
    return 0;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  dword_140C4A440 = PerformanceCounter.HighPart;
  qword_140C4A438 = PerformanceCounter.QuadPart;
  dword_140C4A434 = v8.HighPart;
  qword_140C4A42C = SystemTimePrecise.QuadPart;
  dword_140C4A428 = PerformanceCounter.HighPart;
  VrtcTime = PerformanceCounter.QuadPart;
  if ( a1 )
    HalpVrtcTimeStale = 0;
  return 1;
}
