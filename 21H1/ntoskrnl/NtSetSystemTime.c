/*
 * XREFs of NtSetSystemTime @ 0x140947400
 * Callers:
 *     ExpSetTimeZoneInformation @ 0x140946B4C (ExpSetTimeZoneInformation.c)
 * Callees:
 *     ExLocalTimeToSystemTime @ 0x140201810 (ExLocalTimeToSystemTime.c)
 *     HalQueryRealTimeClock @ 0x140201830 (HalQueryRealTimeClock.c)
 *     RtlTimeFieldsToTime @ 0x1402019B0 (RtlTimeFieldsToTime.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14025ED10 (PsIsCurrentThreadInServerSilo.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExSystemTimeToLocalTime @ 0x140322820 (ExSystemTimeToLocalTime.c)
 *     RtlTimeToTimeFields @ 0x14036CDF0 (RtlTimeToTimeFields.c)
 *     PoNotifySystemTimeSet @ 0x1403A43C4 (PoNotifySystemTimeSet.c)
 *     KeSetSystemTime @ 0x1403A4608 (KeSetSystemTime.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     HalSetRealTimeClock @ 0x1404B15A0 (HalSetRealTimeClock.c)
 *     ExAcquireTimeRefreshLock @ 0x1405D0D58 (ExAcquireTimeRefreshLock.c)
 *     SeSinglePrivilegeCheck @ 0x1405E3050 (SeSinglePrivilegeCheck.c)
 *     RtlIsMultiSessionSku @ 0x1406CCA90 (RtlIsMultiSessionSku.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 *     ExpRefreshTimeZoneInformation @ 0x140790534 (ExpRefreshTimeZoneInformation.c)
 *     RtlCapabilityCheck @ 0x14090ECC0 (RtlCapabilityCheck.c)
 *     SeAuditSystemTimeChange @ 0x140919CD4 (SeAuditSystemTimeChange.c)
 *     ExpSetSystemTime @ 0x140994638 (ExpSetSystemTime.c)
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
  if ( !a1 )
  {
    v9 = -1073741811;
    ExAcquireTimeRefreshLock(1u);
    v10 = ExpSystemIsInCmosMode;
    if ( !HalQueryRealTimeClock((__int64)&TimeFields)
      || !RtlTimeFieldsToTime(&TimeFields, &Time)
      || !ExpRefreshTimeZoneInformation() )
    {
      goto LABEL_31;
    }
    v11.QuadPart = MEMORY[0xFFFFF78000000014];
    SystemTime.QuadPart = MEMORY[0xFFFFF78000000014];
    if ( !ExpRealTimeIsUniversal )
    {
      if ( v10 )
      {
        ExLocalTimeToSystemTime(&Time, &v14);
        KeSetSystemTime((__int64)&v14, (__int64)&SystemTime, 0);
        goto LABEL_30;
      }
      ExSystemTimeToLocalTime(&SystemTime, &Time);
      RtlTimeToTimeFields(&Time, &TimeFields);
      HalSetRealTimeClock(&TimeFields.Year);
      v11 = SystemTime;
    }
    v14 = v11;
LABEL_30:
    PoNotifySystemTimeSet((__int64 *)&v14, (__int64 *)&SystemTime);
    v9 = 0;
LABEL_31:
    ExReleaseResourceLite(&ExpTimeRefreshLock);
    KeLeaveCriticalRegion();
    return v9;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeSystemtimePrivilege, PreviousMode)
    && (RtlIsMultiSessionSku() || (int)RtlCapabilityCheck(0LL, &SourceString, v12) < 0 || !v12[0])
    || PsIsCurrentThreadInServerSilo() )
  {
    return 3221225569LL;
  }
  if ( !PreviousMode )
  {
    v7 = *a1;
    v14 = *a1;
    goto LABEL_18;
  }
  if ( ((unsigned __int8)a1 & 3) != 0 )
    goto LABEL_16;
  v6 = 0x7FFFFFFF0000LL;
  if ( a2 )
  {
    if ( ((unsigned __int8)a2 & 3) == 0 )
    {
      if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
        v6 = (__int64)a2;
      *(_BYTE *)v6 = *(_BYTE *)v6;
      *(_BYTE *)(v6 + 7) = *(_BYTE *)(v6 + 7);
      goto LABEL_15;
    }
LABEL_16:
    ExRaiseDatatypeMisalignment();
  }
LABEL_15:
  v7 = *a1;
  v14 = *a1;
LABEL_18:
  if ( v7.HighPart > 0x20000000u )
    return 3221225485LL;
  ExAcquireTimeRefreshLock(1u);
  LOBYTE(v8) = 1;
  ExpSetSystemTime(v8, 0, 1, v14.LowPart, (__int64)&SystemTime);
  SeAuditSystemTimeChange(SystemTime.QuadPart, v14.QuadPart);
  ExReleaseResourceLite(&ExpTimeRefreshLock);
  KeLeaveCriticalRegion();
  if ( a2 )
    *a2 = SystemTime;
  return 0;
}
