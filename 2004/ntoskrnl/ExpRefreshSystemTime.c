/*
 * XREFs of ExpRefreshSystemTime @ 0x140792748
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x140782FEC (CmCompleteRegistryInitialization.c)
 *     CmpFinishSystemHivesLoad @ 0x140790950 (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14027B290 (PsGetCurrentServerSiloGlobals.c)
 *     ExLocalTimeToSystemTime @ 0x1403413B0 (ExLocalTimeToSystemTime.c)
 *     HalQueryRealTimeClock @ 0x1403413F0 (HalQueryRealTimeClock.c)
 *     RtlTimeFieldsToTime @ 0x140341780 (RtlTimeFieldsToTime.c)
 *     ExSystemTimeToLocalTime @ 0x140360390 (ExSystemTimeToLocalTime.c)
 *     RtlTimeToTimeFields @ 0x14036C6C0 (RtlTimeToTimeFields.c)
 *     PoNotifySystemTimeSet @ 0x1403A4B44 (PoNotifySystemTimeSet.c)
 *     KeSetSystemTime @ 0x1403A4D88 (KeSetSystemTime.c)
 *     HalSetRealTimeClock @ 0x1404B1C60 (HalSetRealTimeClock.c)
 *     ExAcquireTimeRefreshLock @ 0x1406AA348 (ExAcquireTimeRefreshLock.c)
 *     ExpRefreshTimeZoneInformation @ 0x140792C10 (ExpRefreshTimeZoneInformation.c)
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
  v0 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 132);
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
