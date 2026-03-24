/*
 * XREFs of ExpRefreshSystemTime @ 0x1407A909C
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x1407900CC (CmCompleteRegistryInitialization.c)
 *     CmpFinishSystemHivesLoad @ 0x1407A72B0 (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     ExLocalTimeToSystemTime @ 0x1402B5530 (ExLocalTimeToSystemTime.c)
 *     HalQueryRealTimeClock @ 0x1402B5570 (HalQueryRealTimeClock.c)
 *     RtlTimeFieldsToTime @ 0x1402B5900 (RtlTimeFieldsToTime.c)
 *     ExSystemTimeToLocalTime @ 0x1402D3270 (ExSystemTimeToLocalTime.c)
 *     KeLeaveCriticalRegion @ 0x14034B3B0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14034B3F0 (ExReleaseResourceLite.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140362150 (PsGetCurrentServerSiloGlobals.c)
 *     RtlTimeToTimeFields @ 0x14036E9A0 (RtlTimeToTimeFields.c)
 *     PoNotifySystemTimeSet @ 0x1403A7804 (PoNotifySystemTimeSet.c)
 *     KeSetSystemTime @ 0x1403A7A48 (KeSetSystemTime.c)
 *     HalSetRealTimeClock @ 0x1404B6B40 (HalSetRealTimeClock.c)
 *     ExAcquireTimeRefreshLock @ 0x1406DBD14 (ExAcquireTimeRefreshLock.c)
 *     ExpRefreshTimeZoneInformation @ 0x1407A9554 (ExpRefreshTimeZoneInformation.c)
 */

void __fastcall ExpRefreshSystemTime(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  char v3; // si
  int v4; // edi
  LARGE_INTEGER v5; // rax
  TIME_FIELDS TimeFields; // [rsp+20h] [rbp-10h] BYREF
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
