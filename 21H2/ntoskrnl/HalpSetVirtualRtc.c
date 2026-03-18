/*
 * XREFs of HalpSetVirtualRtc @ 0x14022DA40
 * Callers:
 *     HalQueryRealTimeClock @ 0x14022D360 (HalQueryRealTimeClock.c)
 *     HalCalibratePerformanceCounter @ 0x14038B8D0 (HalCalibratePerformanceCounter.c)
 *     HalpSetResumeTime @ 0x14039157C (HalpSetResumeTime.c)
 *     HalSetRealTimeClock @ 0x140503420 (HalSetRealTimeClock.c)
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x14022DB00 (RtlGetSystemTimePrecise.c)
 *     RtlpTimeToTimeFields @ 0x1402D1A48 (RtlpTimeToTimeFields.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 */

char __fastcall HalpSetVirtualRtc(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 SystemTimePrecise; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

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
    SystemTimePrecise = RtlGetSystemTimePrecise(0LL, a2, a3);
    v8 = SystemTimePrecise;
  }
  RtlpTimeToTimeFields(&v8, &v7);
  if ( (__int16)v7 <= 1601 )
    return 0;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  dword_140C4C700 = PerformanceCounter.HighPart;
  qword_140C4C6F8 = PerformanceCounter.QuadPart;
  dword_140C4C6F4 = HIDWORD(v8);
  qword_140C4C6EC = SystemTimePrecise;
  dword_140C4C6E8 = PerformanceCounter.HighPart;
  VrtcTime = PerformanceCounter.QuadPart;
  if ( a1 )
    HalpVrtcTimeStale = 0;
  return 1;
}
