/*
 * XREFs of ExpRefreshSystemTime @ 0x1407A929C
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x14079167C (CmCompleteRegistryInitialization.c)
 *     CmpFinishSystemHivesLoad @ 0x1407A74B0 (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     ExLocalTimeToSystemTime @ 0x140233710 (ExLocalTimeToSystemTime.c)
 *     HalQueryRealTimeClock @ 0x140233750 (HalQueryRealTimeClock.c)
 *     RtlTimeFieldsToTime @ 0x140233AE0 (RtlTimeFieldsToTime.c)
 *     ExSystemTimeToLocalTime @ 0x1402515B0 (ExSystemTimeToLocalTime.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402F6FB0 (PsGetCurrentServerSiloGlobals.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     RtlTimeToTimeFields @ 0x14036EB50 (RtlTimeToTimeFields.c)
 *     PoNotifySystemTimeSet @ 0x1403A7954 (PoNotifySystemTimeSet.c)
 *     KeSetSystemTime @ 0x1403A7B98 (KeSetSystemTime.c)
 *     HalSetRealTimeClock @ 0x1404B6D80 (HalSetRealTimeClock.c)
 *     ExAcquireTimeRefreshLock @ 0x1406B2FF4 (ExAcquireTimeRefreshLock.c)
 *     ExpRefreshTimeZoneInformation @ 0x1407A9754 (ExpRefreshTimeZoneInformation.c)
 */

void __fastcall ExpRefreshSystemTime(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  char v3; // si
  int v4; // edi
  LARGE_INTEGER v5; // rax
  _TIME_FIELDS TimeFields; // [rsp+20h] [rbp-10h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+50h] [rbp+20h] BYREF
  LARGE_INTEGER v8; // [rsp+58h] [rbp+28h] BYREF
  LARGE_INTEGER Time; // [rsp+60h] [rbp+30h] BYREF

  SystemTime.QuadPart = 0LL;
  v8.QuadPart = 0LL;
  Time.QuadPart = 0LL;
  TimeFields = 0LL;
  v2 = *((_QWORD *)PsGetCurrentServerSiloGlobals(a1, a2) + 133);
  ExAcquireTimeRefreshLock(1u);
  v3 = ExpSystemIsInCmosMode;
  if ( HalQueryRealTimeClock((__int64)&TimeFields) )
  {
    if ( RtlTimeFieldsToTime(&TimeFields, &Time) )
    {
      v4 = *(_DWORD *)(v2 + 436);
      if ( (unsigned __int8)ExpRefreshTimeZoneInformation(0LL) )
      {
        if ( v4 != *(_DWORD *)(v2 + 436) )
        {
          v5.QuadPart = MEMORY[0xFFFFF78000000014];
          SystemTime.QuadPart = MEMORY[0xFFFFF78000000014];
          if ( !ExpRealTimeIsUniversal )
          {
            if ( v3 )
            {
              ExLocalTimeToSystemTime(&Time, &v8);
              KeSetSystemTime((__int64)&v8, (__int64)&SystemTime, 0);
              goto LABEL_9;
            }
            ExSystemTimeToLocalTime(&SystemTime, &Time);
            RtlTimeToTimeFields(&Time, &TimeFields);
            HalSetRealTimeClock(&TimeFields.Year);
            v5 = SystemTime;
          }
          v8 = v5;
LABEL_9:
          PoNotifySystemTimeSet((__int64 *)&v8, (__int64 *)&SystemTime);
        }
      }
    }
  }
  ExReleaseResourceLite(&ExpTimeRefreshLock);
  KeLeaveCriticalRegion();
}
