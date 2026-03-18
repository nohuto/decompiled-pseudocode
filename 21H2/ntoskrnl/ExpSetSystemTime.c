/*
 * XREFs of ExpSetSystemTime @ 0x140A52E00
 * Callers:
 *     NtSetSystemTime @ 0x1409F8350 (NtSetSystemTime.c)
 *     ExUpdateSystemTimeFromCmos @ 0x140A47884 (ExUpdateSystemTimeFromCmos.c)
 * Callees:
 *     ExSystemTimeToLocalTime @ 0x14022D770 (ExSystemTimeToLocalTime.c)
 *     RtlTimeToTimeFields @ 0x1402D1A30 (RtlTimeToTimeFields.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 *     PoNotifySystemTimeSet @ 0x1403B65EC (PoNotifySystemTimeSet.c)
 *     KeSetSystemTime @ 0x1403B6B94 (KeSetSystemTime.c)
 *     HalSetRealTimeClock @ 0x140503420 (HalSetRealTimeClock.c)
 *     ExpRefreshTimeZoneInformation @ 0x140835844 (ExpRefreshTimeZoneInformation.c)
 */

void ExpSetSystemTime(char a1, char a2, int a3, ...)
{
  _QWORD *CurrentServerSiloGlobals; // r14
  int v7; // [rsp+28h] [rbp-38h]
  LARGE_INTEGER LocalTime; // [rsp+40h] [rbp-20h] BYREF
  TIME_FIELDS TimeFields; // [rsp+48h] [rbp-18h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+98h] [rbp+38h] BYREF
  va_list SystemTimea; // [rsp+98h] [rbp+38h]
  __int64 *v12; // [rsp+A0h] [rbp+40h]
  va_list va1; // [rsp+A8h] [rbp+48h] BYREF

  va_start(va1, a3);
  va_start(SystemTimea, a3);
  SystemTime.QuadPart = va_arg(va1, _QWORD);
  v12 = va_arg(va1, __int64 *);
  LocalTime.QuadPart = 0LL;
  TimeFields = 0LL;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  if ( ExpRealTimeIsUniversal )
    LocalTime = SystemTime;
  else
    ExSystemTimeToLocalTime((PLARGE_INTEGER)SystemTimea, &LocalTime);
  KeSetSystemTime((__int64)SystemTimea, (__int64)v12, a2 != 0 ? 3 : 0);
  if ( a1 )
  {
    ExpRefreshTimeZoneInformation(0);
    if ( !ExpSystemIsInCmosMode )
    {
      if ( ExpRealTimeIsUniversal )
        LocalTime = SystemTime;
      else
        ExSystemTimeToLocalTime((PLARGE_INTEGER)SystemTimea, &LocalTime);
      RtlTimeToTimeFields(&LocalTime, &TimeFields);
      HalSetRealTimeClock(&TimeFields);
    }
  }
  PoNotifySystemTimeSet(
    (__int64 *)SystemTimea,
    v12,
    a3,
    (int)&LocalTime,
    *(_DWORD *)(CurrentServerSiloGlobals[157] + 436LL),
    v7,
    ExpSystemIsInCmosMode);
}
