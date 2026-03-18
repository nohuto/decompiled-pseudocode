/*
 * XREFs of NtSetSystemTime @ 0x140948780
 * Callers:
 *     ExpSetTimeZoneInformation @ 0x140947DEC (ExpSetTimeZoneInformation.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140205DF0 (PsIsCurrentThreadInServerSilo.c)
 *     ExLocalTimeToSystemTime @ 0x1403413B0 (ExLocalTimeToSystemTime.c)
 *     HalQueryRealTimeClock @ 0x1403413F0 (HalQueryRealTimeClock.c)
 *     RtlTimeFieldsToTime @ 0x140341780 (RtlTimeFieldsToTime.c)
 *     ExSystemTimeToLocalTime @ 0x140360390 (ExSystemTimeToLocalTime.c)
 *     RtlTimeToTimeFields @ 0x14036C6C0 (RtlTimeToTimeFields.c)
 *     PoNotifySystemTimeSet @ 0x1403A4B44 (PoNotifySystemTimeSet.c)
 *     KeSetSystemTime @ 0x1403A4D88 (KeSetSystemTime.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     HalSetRealTimeClock @ 0x1404B1C60 (HalSetRealTimeClock.c)
 *     SeSinglePrivilegeCheck @ 0x140667BA0 (SeSinglePrivilegeCheck.c)
 *     ExAcquireTimeRefreshLock @ 0x1406AA348 (ExAcquireTimeRefreshLock.c)
 *     ExReleaseTimeRefreshLock @ 0x1406ABD00 (ExReleaseTimeRefreshLock.c)
 *     RtlIsMultiSessionSku @ 0x1406EDD90 (RtlIsMultiSessionSku.c)
 *     ExRaiseDatatypeMisalignment @ 0x140769830 (ExRaiseDatatypeMisalignment.c)
 *     ExpRefreshTimeZoneInformation @ 0x140792C10 (ExpRefreshTimeZoneInformation.c)
 *     RtlCapabilityCheck @ 0x140910060 (RtlCapabilityCheck.c)
 *     SeAuditSystemTimeChange @ 0x14091AF84 (SeAuditSystemTimeChange.c)
 *     ExpSetSystemTime @ 0x140995C78 (ExpSetSystemTime.c)
 */

__int64 __fastcall NtSetSystemTime(LARGE_INTEGER *a1, LARGE_INTEGER *a2)
{
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v6; // rcx
  LARGE_INTEGER v7; // rax
  int v8; // ecx
  unsigned int v9; // ebx
  char v10; // di
  LARGE_INTEGER v11; // rax
  char v12[8]; // [rsp+30h] [rbp-58h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+38h] [rbp-50h] BYREF
  LARGE_INTEGER v14; // [rsp+40h] [rbp-48h] BYREF
  LARGE_INTEGER Time; // [rsp+48h] [rbp-40h] BYREF
  UNICODE_STRING SourceString; // [rsp+50h] [rbp-38h] BYREF
  TIME_FIELDS TimeFields; // [rsp+60h] [rbp-28h] BYREF

  SystemTime.QuadPart = 0LL;
  v14.QuadPart = 0LL;
  Time.QuadPart = 0LL;
  TimeFields = 0LL;
  v12[0] = 0;
  *(_QWORD *)&SourceString.Length = 2228256LL;
  SourceString.Buffer = L"systemManagement";
  if ( a1 )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( !SeSinglePrivilegeCheck(SeSystemtimePrivilege, PreviousMode)
      && (RtlIsMultiSessionSku() || (int)RtlCapabilityCheck(0LL, &SourceString, v12) < 0 || !v12[0])
      || PsIsCurrentThreadInServerSilo() )
    {
      return 3221225569LL;
    }
    if ( PreviousMode )
    {
      if ( ((unsigned __int8)a1 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v6 = 0x7FFFFFFF0000LL;
      if ( a2 )
      {
        if ( ((unsigned __int8)a2 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
          v6 = (__int64)a2;
        *(_BYTE *)v6 = *(_BYTE *)v6;
        *(_BYTE *)(v6 + 7) = *(_BYTE *)(v6 + 7);
      }
      v7 = *a1;
      v14 = *a1;
    }
    else
    {
      v7 = *a1;
      v14 = *a1;
    }
    if ( v7.HighPart > 0x20000000u )
      return 3221225485LL;
    ExAcquireTimeRefreshLock(1u);
    LOBYTE(v8) = 1;
    ExpSetSystemTime(v8, 0, 1, v14.LowPart, (__int64)&SystemTime);
    SeAuditSystemTimeChange(SystemTime.QuadPart, v14.QuadPart);
    ExReleaseTimeRefreshLock();
    if ( a2 )
      *a2 = SystemTime;
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
    SystemTime.QuadPart = MEMORY[0xFFFFF78000000014];
    if ( !ExpRealTimeIsUniversal )
    {
      if ( v10 )
      {
        ExLocalTimeToSystemTime(&Time, &v14);
        KeSetSystemTime((__int64)&v14, (__int64)&SystemTime, 0);
        goto LABEL_29;
      }
      ExSystemTimeToLocalTime(&SystemTime, &Time);
      RtlTimeToTimeFields(&Time, &TimeFields);
      HalSetRealTimeClock(&TimeFields.Year);
      v11 = SystemTime;
    }
    v14 = v11;
LABEL_29:
    PoNotifySystemTimeSet((__int64 *)&v14, (__int64 *)&SystemTime);
    v9 = 0;
  }
  ExReleaseTimeRefreshLock();
  return v9;
}
