/*
 * XREFs of HalpSetVirtualRtc @ 0x14023435C
 * Callers:
 *     HalQueryRealTimeClock @ 0x140233750 (HalQueryRealTimeClock.c)
 *     HalCalibratePerformanceCounter @ 0x1403840B0 (HalCalibratePerformanceCounter.c)
 *     HalpSetResumeTime @ 0x140386890 (HalpSetResumeTime.c)
 *     HalSetRealTimeClock @ 0x1404B6D80 (HalSetRealTimeClock.c)
 * Callees:
 *     RtlpTimeToTimeFields @ 0x140233DF8 (RtlpTimeToTimeFields.c)
 *     RtlGetSystemTimePrecise @ 0x140266EC0 (RtlGetSystemTimePrecise.c)
 *     KeQueryPerformanceCounter @ 0x1402D0BC0 (KeQueryPerformanceCounter.c)
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
  dword_140C4A640 = PerformanceCounter.HighPart;
  qword_140C4A638 = PerformanceCounter.QuadPart;
  dword_140C4A634 = v8.HighPart;
  qword_140C4A62C = SystemTimePrecise.QuadPart;
  dword_140C4A628 = PerformanceCounter.HighPart;
  VrtcTime = PerformanceCounter.QuadPart;
  if ( a1 )
    HalpVrtcTimeStale = 0;
  return 1;
}
