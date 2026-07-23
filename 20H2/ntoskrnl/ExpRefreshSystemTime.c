/*
 * XREFs of ExpRefreshSystemTime @ 0x14079EFDC
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x1407909DC (CmCompleteRegistryInitialization.c)
 *     CmpFinishSystemHivesLoad @ 0x14079D1F0 (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14023CD40 (PsGetCurrentServerSiloGlobals.c)
 *     ExLocalTimeToSystemTime @ 0x140312120 (ExLocalTimeToSystemTime.c)
 *     HalQueryRealTimeClock @ 0x140312160 (HalQueryRealTimeClock.c)
 *     RtlTimeFieldsToTime @ 0x1403124F0 (RtlTimeFieldsToTime.c)
 *     ExSystemTimeToLocalTime @ 0x140330FF0 (ExSystemTimeToLocalTime.c)
 *     RtlTimeToTimeFields @ 0x14036E6A0 (RtlTimeToTimeFields.c)
 *     PoNotifySystemTimeSet @ 0x1403A6F44 (PoNotifySystemTimeSet.c)
 *     KeSetSystemTime @ 0x1403A7188 (KeSetSystemTime.c)
 *     HalSetRealTimeClock @ 0x1404B5180 (HalSetRealTimeClock.c)
 *     ExAcquireTimeRefreshLock @ 0x1406F5A38 (ExAcquireTimeRefreshLock.c)
 *     ExpRefreshTimeZoneInformation @ 0x14079F494 (ExpRefreshTimeZoneInformation.c)
 */

void ExpRefreshSystemTime()
{
  __int64 v0; // rbx
  char v1; // si
  int v2; // edi
  LARGE_INTEGER v3; // rax
  _TIME_FIELDS TimeFields; // [rsp+20h] [rbp-10h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+50h] [rbp+20h] BYREF
  LARGE_INTEGER v6; // [rsp+58h] [rbp+28h] BYREF
  LARGE_INTEGER Time; // [rsp+60h] [rbp+30h] BYREF

  SystemTime.QuadPart = 0LL;
  v6.QuadPart = 0LL;
  Time.QuadPart = 0LL;
  TimeFields = 0LL;
  v0 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 133);
  ExAcquireTimeRefreshLock(1u);
  v1 = ExpSystemIsInCmosMode;
  if ( HalQueryRealTimeClock((__int64)&TimeFields) )
  {
    if ( RtlTimeFieldsToTime(&TimeFields, &Time) )
    {
      v2 = *(_DWORD *)(v0 + 436);
      if ( (unsigned __int8)ExpRefreshTimeZoneInformation(0LL) )
      {
        if ( v2 != *(_DWORD *)(v0 + 436) )
        {
          v3.QuadPart = MEMORY[0xFFFFF78000000014];
          SystemTime.QuadPart = MEMORY[0xFFFFF78000000014];
          if ( !ExpRealTimeIsUniversal )
          {
            if ( v1 )
            {
              ExLocalTimeToSystemTime(&Time, &v6);
              KeSetSystemTime((__int64)&v6, (__int64)&SystemTime, 0);
              goto LABEL_9;
            }
            ExSystemTimeToLocalTime(&SystemTime, &Time);
            RtlTimeToTimeFields(&Time, &TimeFields);
            HalSetRealTimeClock(&TimeFields.Year);
            v3 = SystemTime;
          }
          v6 = v3;
LABEL_9:
          PoNotifySystemTimeSet((__int64 *)&v6, (__int64 *)&SystemTime);
        }
      }
    }
  }
  ExReleaseResourceLite(&ExpTimeRefreshLock);
  KeLeaveCriticalRegion();
}
