/*
 * XREFs of ExpSetSystemTime @ 0x140999FC8
 * Callers:
 *     NtSetSystemTime @ 0x14094BEE0 (NtSetSystemTime.c)
 *     ExUpdateSystemTimeFromCmos @ 0x1409908C4 (ExUpdateSystemTimeFromCmos.c)
 * Callees:
 *     ExSystemTimeToLocalTime @ 0x1402515B0 (ExSystemTimeToLocalTime.c)
 *     RtlTimeToTimeFields @ 0x14036EB50 (RtlTimeToTimeFields.c)
 *     PoNotifySystemTimeSet @ 0x1403A7954 (PoNotifySystemTimeSet.c)
 *     KeSetSystemTime @ 0x1403A7B98 (KeSetSystemTime.c)
 *     HalSetRealTimeClock @ 0x1404B6D80 (HalSetRealTimeClock.c)
 *     ExpRefreshTimeZoneInformation @ 0x1407A9754 (ExpRefreshTimeZoneInformation.c)
 */

void __fastcall ExpSetSystemTime(char a1, char a2, __int64 a3, LARGE_INTEGER a4, __int64 *a5)
{
  LARGE_INTEGER LocalTime; // [rsp+20h] [rbp-20h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+28h] [rbp-18h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+68h] [rbp+28h] BYREF

  SystemTime = a4;
  LocalTime.QuadPart = 0LL;
  TimeFields = 0LL;
  if ( ExpRealTimeIsUniversal )
    LocalTime = a4;
  else
    ExSystemTimeToLocalTime(&SystemTime, &LocalTime);
  KeSetSystemTime((__int64)&SystemTime, (__int64)a5, a2 != 0 ? 3 : 0);
  if ( a1 )
  {
    ExpRefreshTimeZoneInformation(0);
    if ( !ExpSystemIsInCmosMode )
    {
      if ( ExpRealTimeIsUniversal )
        LocalTime = SystemTime;
      else
        ExSystemTimeToLocalTime(&SystemTime, &LocalTime);
      RtlTimeToTimeFields(&LocalTime, &TimeFields);
      HalSetRealTimeClock(&TimeFields.Year);
    }
  }
  PoNotifySystemTimeSet((__int64 *)&SystemTime, a5);
}
