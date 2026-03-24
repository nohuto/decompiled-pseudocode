/*
 * XREFs of NtSetSystemTime @ 0x14094BD10
 * Callers:
 *     ExpSetTimeZoneInformation @ 0x14094B37C (ExpSetTimeZoneInformation.c)
 * Callees:
 *     ExLocalTimeToSystemTime @ 0x1402B5530 (ExLocalTimeToSystemTime.c)
 *     HalQueryRealTimeClock @ 0x1402B5570 (HalQueryRealTimeClock.c)
 *     RtlTimeFieldsToTime @ 0x1402B5900 (RtlTimeFieldsToTime.c)
 *     ExSystemTimeToLocalTime @ 0x1402D3270 (ExSystemTimeToLocalTime.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140351230 (PsIsCurrentThreadInServerSilo.c)
 *     RtlTimeToTimeFields @ 0x14036E9A0 (RtlTimeToTimeFields.c)
 *     PoNotifySystemTimeSet @ 0x1403A7804 (PoNotifySystemTimeSet.c)
 *     KeSetSystemTime @ 0x1403A7A48 (KeSetSystemTime.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     HalSetRealTimeClock @ 0x1404B6B40 (HalSetRealTimeClock.c)
 *     SeSinglePrivilegeCheck @ 0x140627640 (SeSinglePrivilegeCheck.c)
 *     RtlIsMultiSessionSku @ 0x14069CDE0 (RtlIsMultiSessionSku.c)
 *     ExReleaseTimeRefreshLock @ 0x1406DBCF0 (ExReleaseTimeRefreshLock.c)
 *     ExAcquireTimeRefreshLock @ 0x1406DBD14 (ExAcquireTimeRefreshLock.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BDF0 (ExRaiseDatatypeMisalignment.c)
 *     ExpRefreshTimeZoneInformation @ 0x1407A9554 (ExpRefreshTimeZoneInformation.c)
 *     RtlCapabilityCheck @ 0x140913350 (RtlCapabilityCheck.c)
 *     SeAuditSystemTimeChange @ 0x14091E3C4 (SeAuditSystemTimeChange.c)
 *     ExpSetSystemTime @ 0x140998FC8 (ExpSetSystemTime.c)
 */

__int64 __fastcall NtSetSystemTime(LARGE_INTEGER *a1, unsigned __int64 a2)
{
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v8; // rcx
  LARGE_INTEGER v9; // rax
  int v10; // ecx
  unsigned int v11; // ebx
  char v12; // di
  LARGE_INTEGER v13; // rax
  char v14[8]; // [rsp+30h] [rbp-58h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+38h] [rbp-50h] BYREF
  LARGE_INTEGER v16; // [rsp+40h] [rbp-48h] BYREF
  LARGE_INTEGER Time; // [rsp+48h] [rbp-40h] BYREF
  UNICODE_STRING SourceString; // [rsp+50h] [rbp-38h] BYREF
  TIME_FIELDS TimeFields; // [rsp+60h] [rbp-28h] BYREF

  SystemTime.QuadPart = 0LL;
  v16.QuadPart = 0LL;
  Time.QuadPart = 0LL;
  TimeFields = 0LL;
  v14[0] = 0;
  *(_QWORD *)&SourceString.Length = 2228256LL;
  SourceString.Buffer = L"systemManagement";
  if ( a1 )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( !SeSinglePrivilegeCheck(SeSystemtimePrivilege, PreviousMode)
      && (RtlIsMultiSessionSku(v6, v5) || (int)RtlCapabilityCheck(0LL, &SourceString, v14) < 0 || !v14[0])
      || PsIsCurrentThreadInServerSilo(v6, v5) )
    {
      return 3221225569LL;
    }
    if ( PreviousMode )
    {
      if ( ((unsigned __int8)a1 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v8 = 0x7FFFFFFF0000LL;
      if ( a2 )
      {
        if ( (a2 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( a2 < 0x7FFFFFFF0000LL )
          v8 = a2;
        *(_BYTE *)v8 = *(_BYTE *)v8;
        *(_BYTE *)(v8 + 7) = *(_BYTE *)(v8 + 7);
      }
      v9 = *a1;
      v16 = *a1;
    }
    else
    {
      v9 = *a1;
      v16 = *a1;
    }
    if ( v9.HighPart > 0x20000000u )
      return 3221225485LL;
    ExAcquireTimeRefreshLock(1u);
    LOBYTE(v10) = 1;
    ExpSetSystemTime(v10, 0, 1, v16.LowPart, (__int64)&SystemTime);
    SeAuditSystemTimeChange(SystemTime.QuadPart, v16.QuadPart);
    ExReleaseTimeRefreshLock();
    if ( a2 )
      *(LARGE_INTEGER *)a2 = SystemTime;
    return 0;
  }
  if ( PsIsCurrentThreadInServerSilo(0LL, a2) )
  {
    ExAcquireTimeRefreshLock(1u);
    ExpRefreshTimeZoneInformation(0);
    ExReleaseTimeRefreshLock();
    return 0;
  }
  v11 = -1073741811;
  ExAcquireTimeRefreshLock(1u);
  v12 = ExpSystemIsInCmosMode;
  if ( HalQueryRealTimeClock((__int64)&TimeFields)
    && RtlTimeFieldsToTime(&TimeFields, &Time)
    && ExpRefreshTimeZoneInformation(0) )
  {
    v13.QuadPart = MEMORY[0xFFFFF78000000014];
    SystemTime.QuadPart = MEMORY[0xFFFFF78000000014];
    if ( !ExpRealTimeIsUniversal )
    {
      if ( v12 )
      {
        ExLocalTimeToSystemTime(&Time, &v16);
        KeSetSystemTime((__int64)&v16, (__int64)&SystemTime, 0);
        goto LABEL_29;
      }
      ExSystemTimeToLocalTime(&SystemTime, &Time);
      RtlTimeToTimeFields(&Time, &TimeFields);
      HalSetRealTimeClock(&TimeFields.Year);
      v13 = SystemTime;
    }
    v16 = v13;
LABEL_29:
    PoNotifySystemTimeSet((__int64 *)&v16, (__int64 *)&SystemTime);
    v11 = 0;
  }
  ExReleaseTimeRefreshLock();
  return v11;
}
