/*
 * XREFs of NtSetSystemTime @ 0x1409F8350
 * Callers:
 *     ExpSetTimeZoneInformation @ 0x1409F76FC (ExpSetTimeZoneInformation.c)
 * Callees:
 *     HalQueryRealTimeClock @ 0x14022D360 (HalQueryRealTimeClock.c)
 *     RtlTimeFieldsToTime @ 0x14022D4D0 (RtlTimeFieldsToTime.c)
 *     ExSystemTimeToLocalTime @ 0x14022D770 (ExSystemTimeToLocalTime.c)
 *     ExLocalTimeToSystemTime @ 0x14022D7D0 (ExLocalTimeToSystemTime.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     RtlTimeToTimeFields @ 0x1402D1A30 (RtlTimeToTimeFields.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 *     PoNotifySystemTimeSet @ 0x1403B65EC (PoNotifySystemTimeSet.c)
 *     KeSetSystemTime @ 0x1403B6B94 (KeSetSystemTime.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     HalSetRealTimeClock @ 0x140503420 (HalSetRealTimeClock.c)
 *     RtlCapabilityCheck @ 0x140660AF0 (RtlCapabilityCheck.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     ExAcquireTimeRefreshLock @ 0x1407D6F54 (ExAcquireTimeRefreshLock.c)
 *     RtlIsMultiSessionSku @ 0x1407F4B80 (RtlIsMultiSessionSku.c)
 *     ExpRefreshTimeZoneInformation @ 0x140835844 (ExpRefreshTimeZoneInformation.c)
 *     SeAuditSystemTimeChange @ 0x1409C7E08 (SeAuditSystemTimeChange.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExpSetSystemTime @ 0x140A52E00 (ExpSetSystemTime.c)
 */

__int64 __fastcall NtSetSystemTime(LARGE_INTEGER *a1, LARGE_INTEGER *a2)
{
  _QWORD *CurrentServerSiloGlobals; // rsi
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v7; // rcx
  LARGE_INTEGER v8; // rax
  int v9; // ecx
  unsigned int v10; // ebx
  unsigned __int8 v11; // di
  LARGE_INTEGER v12; // rax
  int v13; // [rsp+28h] [rbp-70h]
  char v14[8]; // [rsp+40h] [rbp-58h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+48h] [rbp-50h] BYREF
  LARGE_INTEGER v16; // [rsp+50h] [rbp-48h] BYREF
  LARGE_INTEGER Time; // [rsp+58h] [rbp-40h] BYREF
  UNICODE_STRING SourceString; // [rsp+60h] [rbp-38h] BYREF
  TIME_FIELDS TimeFields; // [rsp+70h] [rbp-28h] BYREF

  SystemTime.QuadPart = 0LL;
  v16.QuadPart = 0LL;
  Time.QuadPart = 0LL;
  TimeFields = 0LL;
  v14[0] = 0;
  *(_QWORD *)&SourceString.Length = 2228256LL;
  SourceString.Buffer = L"systemManagement";
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  if ( a1 )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( !SeSinglePrivilegeCheck(SeSystemtimePrivilege, PreviousMode)
      && (RtlIsMultiSessionSku() || (int)RtlCapabilityCheck(0LL, &SourceString, v14) < 0 || !v14[0])
      || PsIsCurrentThreadInServerSilo() )
    {
      return 3221225569LL;
    }
    if ( !PreviousMode )
    {
      v8 = *a1;
      v16 = *a1;
      goto LABEL_18;
    }
    if ( ((unsigned __int8)a1 & 3) == 0 )
    {
      v7 = 0x7FFFFFFF0000LL;
      if ( !a2 )
      {
LABEL_15:
        v8 = *a1;
        v16 = *a1;
LABEL_18:
        if ( v8.HighPart > 0x20000000u )
          return 3221225485LL;
        ExAcquireTimeRefreshLock(1u);
        LOBYTE(v9) = 1;
        ExpSetSystemTime(v9, 0, 1, v16.LowPart, (__int64)&SystemTime);
        SeAuditSystemTimeChange(SystemTime.QuadPart, v16.QuadPart);
        ExReleaseResourceLite(&ExpTimeRefreshLock);
        KeLeaveCriticalRegion();
        if ( a2 )
          *a2 = SystemTime;
        return 0;
      }
      if ( ((unsigned __int8)a2 & 3) == 0 )
      {
        if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
          v7 = (__int64)a2;
        *(_BYTE *)v7 = *(_BYTE *)v7;
        *(_BYTE *)(v7 + 7) = *(_BYTE *)(v7 + 7);
        goto LABEL_15;
      }
    }
    ExRaiseDatatypeMisalignment();
  }
  if ( PsIsCurrentThreadInServerSilo() )
  {
    ExAcquireTimeRefreshLock(1u);
    ExpRefreshTimeZoneInformation(0);
    ExReleaseResourceLite(&ExpTimeRefreshLock);
    KeLeaveCriticalRegion();
    return 0;
  }
  v10 = -1073741811;
  ExAcquireTimeRefreshLock(1u);
  v11 = ExpSystemIsInCmosMode;
  if ( HalQueryRealTimeClock((__int64)&TimeFields)
    && RtlTimeFieldsToTime(&TimeFields, &Time)
    && ExpRefreshTimeZoneInformation(0) )
  {
    v12.QuadPart = MEMORY[0xFFFFF78000000014];
    SystemTime.QuadPart = MEMORY[0xFFFFF78000000014];
    if ( !ExpRealTimeIsUniversal )
    {
      if ( v11 )
      {
        ExLocalTimeToSystemTime(&Time, &v16);
        KeSetSystemTime((__int64)&v16, (__int64)&SystemTime, 0);
        goto LABEL_30;
      }
      ExSystemTimeToLocalTime(&SystemTime, &Time);
      RtlTimeToTimeFields(&Time, &TimeFields);
      HalSetRealTimeClock(&TimeFields);
      v12 = SystemTime;
    }
    v16 = v12;
LABEL_30:
    PoNotifySystemTimeSet(
      (__int64 *)&v16,
      (__int64 *)&SystemTime,
      3,
      (int)&Time,
      *(_DWORD *)(CurrentServerSiloGlobals[157] + 436LL),
      v13,
      v11);
    v10 = 0;
  }
  ExReleaseResourceLite(&ExpTimeRefreshLock);
  KeLeaveCriticalRegion();
  return v10;
}
