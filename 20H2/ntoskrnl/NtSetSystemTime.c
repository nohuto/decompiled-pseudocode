/*
 * XREFs of NtSetSystemTime @ 0x14094E540
 * Callers:
 *     ExpSetTimeZoneInformation @ 0x14094DBAC (ExpSetTimeZoneInformation.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140227380 (PsIsCurrentThreadInServerSilo.c)
 *     ExLocalTimeToSystemTime @ 0x140312120 (ExLocalTimeToSystemTime.c)
 *     HalQueryRealTimeClock @ 0x140312160 (HalQueryRealTimeClock.c)
 *     RtlTimeFieldsToTime @ 0x1403124F0 (RtlTimeFieldsToTime.c)
 *     ExSystemTimeToLocalTime @ 0x140330FF0 (ExSystemTimeToLocalTime.c)
 *     RtlTimeToTimeFields @ 0x14036E6A0 (RtlTimeToTimeFields.c)
 *     PoNotifySystemTimeSet @ 0x1403A6F44 (PoNotifySystemTimeSet.c)
 *     KeSetSystemTime @ 0x1403A7188 (KeSetSystemTime.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     HalSetRealTimeClock @ 0x1404B5180 (HalSetRealTimeClock.c)
 *     SeSinglePrivilegeCheck @ 0x14063B9A0 (SeSinglePrivilegeCheck.c)
 *     RtlIsMultiSessionSku @ 0x1406C1D10 (RtlIsMultiSessionSku.c)
 *     ExAcquireTimeRefreshLock @ 0x1406F5A38 (ExAcquireTimeRefreshLock.c)
 *     ExReleaseTimeRefreshLock @ 0x1406F73F0 (ExReleaseTimeRefreshLock.c)
 *     ExRaiseDatatypeMisalignment @ 0x140777E40 (ExRaiseDatatypeMisalignment.c)
 *     ExpRefreshTimeZoneInformation @ 0x14079F494 (ExpRefreshTimeZoneInformation.c)
 *     RtlCapabilityCheck @ 0x140915BA0 (RtlCapabilityCheck.c)
 *     SeAuditSystemTimeChange @ 0x140920C04 (SeAuditSystemTimeChange.c)
 *     ExpSetSystemTime @ 0x14099BDD8 (ExpSetSystemTime.c)
 */

NTSTATUS __cdecl NtSetSystemTime(PLARGE_INTEGER SystemTime, PLARGE_INTEGER PreviousTime)
{
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v6; // rcx
  LONGLONG QuadPart; // rax
  int v8; // ecx
  NTSTATUS v9; // ebx
  char v10; // di
  LARGE_INTEGER v11; // rax
  BOOLEAN HasCapability[8]; // [rsp+30h] [rbp-58h] BYREF
  LARGE_INTEGER SystemTimea; // [rsp+38h] [rbp-50h] BYREF
  LARGE_INTEGER v14; // [rsp+40h] [rbp-48h] BYREF
  LARGE_INTEGER Time; // [rsp+48h] [rbp-40h] BYREF
  UNICODE_STRING CapabilityName; // [rsp+50h] [rbp-38h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+60h] [rbp-28h] BYREF

  SystemTimea.QuadPart = 0LL;
  v14.QuadPart = 0LL;
  Time.QuadPart = 0LL;
  TimeFields = 0LL;
  HasCapability[0] = 0;
  *(_QWORD *)&CapabilityName.Length = 2228256LL;
  CapabilityName.Buffer = L"systemManagement";
  if ( SystemTime )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( !SeSinglePrivilegeCheck(SeSystemtimePrivilege, PreviousMode)
      && (RtlIsMultiSessionSku() || RtlCapabilityCheck(0LL, &CapabilityName, HasCapability) < 0 || !HasCapability[0])
      || PsIsCurrentThreadInServerSilo() )
    {
      return -1073741727;
    }
    if ( PreviousMode )
    {
      if ( ((unsigned __int8)SystemTime & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v6 = 0x7FFFFFFF0000LL;
      if ( PreviousTime )
      {
        if ( ((unsigned __int8)PreviousTime & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)PreviousTime < 0x7FFFFFFF0000LL )
          v6 = (__int64)PreviousTime;
        *(_BYTE *)v6 = *(_BYTE *)v6;
        *(_BYTE *)(v6 + 7) = *(_BYTE *)(v6 + 7);
      }
      QuadPart = SystemTime->QuadPart;
      v14 = *SystemTime;
    }
    else
    {
      QuadPart = SystemTime->QuadPart;
      v14 = *SystemTime;
    }
    if ( HIDWORD(QuadPart) > 0x20000000 )
      return -1073741811;
    ExAcquireTimeRefreshLock(1u);
    LOBYTE(v8) = 1;
    ExpSetSystemTime(v8, 0, 1, v14.LowPart, (__int64)&SystemTimea);
    SeAuditSystemTimeChange(SystemTimea.QuadPart, v14.QuadPart);
    ExReleaseTimeRefreshLock();
    if ( PreviousTime )
      *PreviousTime = SystemTimea;
    return 0;
  }
  if ( PsIsCurrentThreadInServerSilo() )
  {
    ExAcquireTimeRefreshLock(1u);
    ExpRefreshTimeZoneInformation(0);
    ExReleaseTimeRefreshLock();
    return 0;
  }
  v9 = -1073741811;
  ExAcquireTimeRefreshLock(1u);
  v10 = ExpSystemIsInCmosMode;
  if ( HalQueryRealTimeClock((__int64)&TimeFields)
    && RtlTimeFieldsToTime(&TimeFields, &Time)
    && ExpRefreshTimeZoneInformation(0) )
  {
    v11.QuadPart = MEMORY[0xFFFFF78000000014];
    SystemTimea.QuadPart = MEMORY[0xFFFFF78000000014];
    if ( !ExpRealTimeIsUniversal )
    {
      if ( v10 )
      {
        ExLocalTimeToSystemTime(&Time, &v14);
        KeSetSystemTime((__int64)&v14, (__int64)&SystemTimea, 0);
        goto LABEL_29;
      }
      ExSystemTimeToLocalTime(&SystemTimea, &Time);
      RtlTimeToTimeFields(&Time, &TimeFields);
      HalSetRealTimeClock(&TimeFields.Year);
      v11 = SystemTimea;
    }
    v14 = v11;
LABEL_29:
    PoNotifySystemTimeSet((__int64 *)&v14, (__int64 *)&SystemTimea);
    v9 = 0;
  }
  ExReleaseTimeRefreshLock();
  return v9;
}
