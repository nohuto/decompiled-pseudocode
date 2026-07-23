/*
 * XREFs of HalpSetVirtualRtc @ 0x140312D6C
 * Callers:
 *     HalQueryRealTimeClock @ 0x140312160 (HalQueryRealTimeClock.c)
 *     HalCalibratePerformanceCounter @ 0x140383940 (HalCalibratePerformanceCounter.c)
 *     HalpSetResumeTime @ 0x140385950 (HalpSetResumeTime.c)
 *     HalSetRealTimeClock @ 0x1404B5180 (HalSetRealTimeClock.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x140266AF0 (KeQueryPerformanceCounter.c)
 *     RtlGetSystemTimePrecise @ 0x1402D6A90 (RtlGetSystemTimePrecise.c)
 *     RtlpTimeToTimeFields @ 0x140312808 (RtlpTimeToTimeFields.c)
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
  dword_140C4A4C0 = PerformanceCounter.HighPart;
  qword_140C4A4B8 = PerformanceCounter.QuadPart;
  dword_140C4A4B4 = v8.HighPart;
  qword_140C4A4AC = SystemTimePrecise.QuadPart;
  dword_140C4A4A8 = PerformanceCounter.HighPart;
  VrtcTime = PerformanceCounter.QuadPart;
  if ( a1 )
    HalpVrtcTimeStale = 0;
  return 1;
}
