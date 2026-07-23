/*
 * XREFs of ExpRefreshSystemTime @ 0x14079014C
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x14077A5E4 (CmCompleteRegistryInitialization.c)
 *     CmpFinishSystemHivesLoad @ 0x14078E760 (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     ExLocalTimeToSystemTime @ 0x140201810 (ExLocalTimeToSystemTime.c)
 *     HalQueryRealTimeClock @ 0x140201830 (HalQueryRealTimeClock.c)
 *     RtlTimeFieldsToTime @ 0x1402019B0 (RtlTimeFieldsToTime.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExSystemTimeToLocalTime @ 0x140322820 (ExSystemTimeToLocalTime.c)
 *     RtlTimeToTimeFields @ 0x14036CDF0 (RtlTimeToTimeFields.c)
 *     PoNotifySystemTimeSet @ 0x1403A43C4 (PoNotifySystemTimeSet.c)
 *     KeSetSystemTime @ 0x1403A4608 (KeSetSystemTime.c)
 *     HalSetRealTimeClock @ 0x1404B15A0 (HalSetRealTimeClock.c)
 *     ExAcquireTimeRefreshLock @ 0x1405D0D58 (ExAcquireTimeRefreshLock.c)
 *     ExpRefreshTimeZoneInformation @ 0x140790534 (ExpRefreshTimeZoneInformation.c)
 */

void ExpRefreshSystemTime()
{
  char v0; // di
  __int64 v1; // rdx
  __int64 v2; // rcx
  int v3; // ebx
  LARGE_INTEGER v4; // rax
  _TIME_FIELDS TimeFields; // [rsp+20h] [rbp-10h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+50h] [rbp+20h] BYREF
  LARGE_INTEGER v7; // [rsp+58h] [rbp+28h] BYREF
  LARGE_INTEGER Time; // [rsp+60h] [rbp+30h] BYREF

  SystemTime.QuadPart = 0LL;
  v7.QuadPart = 0LL;
  Time.QuadPart = 0LL;
  TimeFields = 0LL;
  ExAcquireTimeRefreshLock(1u);
  v0 = ExpSystemIsInCmosMode;
  if ( HalQueryRealTimeClock((__int64)&TimeFields) )
  {
    if ( RtlTimeFieldsToTime(&TimeFields, &Time) )
    {
      v3 = ExpLastTimeZoneBias;
      if ( (unsigned __int8)ExpRefreshTimeZoneInformation(v2, v1) )
      {
        if ( v3 != ExpLastTimeZoneBias )
        {
          v4.QuadPart = MEMORY[0xFFFFF78000000014];
          SystemTime.QuadPart = MEMORY[0xFFFFF78000000014];
          if ( !ExpRealTimeIsUniversal )
          {
            if ( v0 )
            {
              ExLocalTimeToSystemTime(&Time, &v7);
              KeSetSystemTime((__int64)&v7, (__int64)&SystemTime, 0);
              goto LABEL_10;
            }
            ExSystemTimeToLocalTime(&SystemTime, &Time);
            RtlTimeToTimeFields(&Time, &TimeFields);
            HalSetRealTimeClock(&TimeFields.Year);
            v4 = SystemTime;
          }
          v7 = v4;
LABEL_10:
          PoNotifySystemTimeSet((__int64 *)&v7, (__int64 *)&SystemTime);
        }
      }
    }
  }
  ExReleaseResourceLite(&ExpTimeRefreshLock);
  KeLeaveCriticalRegion();
}
