/*
 * XREFs of ExpRefreshTimeZoneInformation @ 0x140790534
 * Callers:
 *     ExpRefreshSystemTime @ 0x14079014C (ExpRefreshSystemTime.c)
 *     ExpReadLeapSecondData @ 0x1407901D4 (ExpReadLeapSecondData.c)
 *     NtSetSystemTime @ 0x140947400 (NtSetSystemTime.c)
 *     ExpSetSystemTime @ 0x140994638 (ExpSetSystemTime.c)
 *     Phase1InitializationDiscard @ 0x140A382A8 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExLocalTimeToSystemTime @ 0x140201810 (ExLocalTimeToSystemTime.c)
 *     RtlTimeFieldsToTime @ 0x1402019B0 (RtlTimeFieldsToTime.c)
 *     KeInitializeDpc @ 0x140204F10 (KeInitializeDpc.c)
 *     KiSetTimerEx @ 0x140236270 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x1402364D0 (KeCancelTimer.c)
 *     KeInitializeTimerEx @ 0x140355110 (KeInitializeTimerEx.c)
 *     RtlTimeToTimeFields @ 0x14036CDF0 (RtlTimeToTimeFields.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwUpdateWnfStateData @ 0x1403F5CF0 (ZwUpdateWnfStateData.c)
 *     memset @ 0x140408F80 (memset.c)
 *     RtlpGetRegistryHandle @ 0x140617BCC (RtlpGetRegistryHandle.c)
 *     RtlpQueryTimeZoneInformationWorker @ 0x14067CC40 (RtlpQueryTimeZoneInformationWorker.c)
 *     RtlGetPersistedStateLocation @ 0x140682B80 (RtlGetPersistedStateLocation.c)
 *     RtlCutoverTimeToSystemTime @ 0x140790AB0 (RtlCutoverTimeToSystemTime.c)
 *     EtwTraceTimeZoneInformationRefresh @ 0x140790C24 (EtwTraceTimeZoneInformationRefresh.c)
 *     ExpLogRefreshTimeZoneInformationSuccess @ 0x140790D3C (ExpLogRefreshTimeZoneInformationSuccess.c)
 *     RtlpUpdateDynamicTimeZones @ 0x140790DA4 (RtlpUpdateDynamicTimeZones.c)
 *     RtlSetActiveTimeBias @ 0x14079103C (RtlSetActiveTimeBias.c)
 *     RtlpCheckDynamicTimeZoneInformation @ 0x140791100 (RtlpCheckDynamicTimeZoneInformation.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x140910A9C (RtlpSetTimeZoneInformationWorker.c)
 *     EtwTraceTimeZoneBiasChange @ 0x140931EE8 (EtwTraceTimeZoneBiasChange.c)
 *     ExpLogRefreshTimeZoneInformationCutoverFail @ 0x14094707C (ExpLogRefreshTimeZoneInformationCutoverFail.c)
 *     ExpLogRefreshTimeZoneInformationQueryFail @ 0x140947250 (ExpLogRefreshTimeZoneInformationQueryFail.c)
 *     ExInitializeTimeRefresh @ 0x140A537D4 (ExInitializeTimeRefresh.c)
 */

char ExpRefreshTimeZoneInformation()
{
  unsigned int v0; // r15d
  char v1; // r14
  int TimeZoneInformationWorker; // eax
  __int64 v3; // rsi
  LARGE_INTEGER v4; // rbx
  unsigned int v5; // r12d
  __int64 v6; // rdx
  LARGE_INTEGER v7; // rdi
  __int64 v8; // rdx
  LARGE_INTEGER v9; // rbx
  int v10; // ecx
  int v11; // eax
  __int64 v12; // rdi
  _OWORD *v13; // rcx
  int *v14; // rax
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int16 Year; // bx
  int v26; // edx
  LARGE_INTEGER v27; // rax
  __int16 v28; // bx
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rcx
  int RegistryHandle; // eax
  LARGE_INTEGER v38; // [rsp+48h] [rbp-C0h] BYREF
  LARGE_INTEGER Time; // [rsp+50h] [rbp-B8h] BYREF
  LARGE_INTEGER LocalTime; // [rsp+58h] [rbp-B0h] BYREF
  LARGE_INTEGER v41; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v42; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v43; // [rsp+70h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-90h] BYREF
  LARGE_INTEGER v45; // [rsp+80h] [rbp-88h] BYREF
  LARGE_INTEGER v46; // [rsp+88h] [rbp-80h] BYREF
  LARGE_INTEGER v47; // [rsp+90h] [rbp-78h] BYREF
  TIME_FIELDS TimeFields; // [rsp+98h] [rbp-70h] BYREF
  _QWORD Buf2[54]; // [rsp+A8h] [rbp-60h] BYREF
  WCHAR v50[264]; // [rsp+258h] [rbp+150h] BYREF

  memset(Buf2, 0, sizeof(Buf2));
  v45.QuadPart = 0LL;
  v46.QuadPart = 0LL;
  v0 = 1;
  LocalTime.QuadPart = 0LL;
  TimeFields = 0LL;
  v43 = 0LL;
  v1 = 0;
  if ( ExpTimeZoneWorkItem.WorkerRoutine )
  {
    byte_140C10DB8 = 0;
  }
  else
  {
    ExInitializeTimeRefresh();
    KeInitializeDpc(&ExpTimeZoneDpc, (PKDEFERRED_ROUTINE)ExpTimeZoneDpcRoutine, &ExpOkToTimeZoneRefresh);
    ExpTimeZoneWorkItem.Parameter = 0LL;
    ExpTimeZoneWorkItem.WorkerRoutine = (void (__fastcall *)(void *))ExpTimeZoneWork;
    ExpTimeZoneWorkItem.List.Flink = 0LL;
    KeInitializeTimerEx(&ExpTimeZoneTimer, NotificationTimer);
    KeInitializeDpc(&ExpNextYearDpc, (PKDEFERRED_ROUTINE)ExpNextYearDpcRoutine, &ExpOkToTimeZoneRefresh);
    ExpNextYearWorkItem.WorkerRoutine = (void (__fastcall *)(void *))ExpTimeZoneWork;
    ExpNextYearWorkItem.Parameter = 0LL;
    ExpNextYearWorkItem.List.Flink = 0LL;
    KeInitializeTimerEx(&ExpNextYearTimer, NotificationTimer);
    KeInitializeDpc(&ExpCenturyDpc, (PKDEFERRED_ROUTINE)ExpCenturyDpcRoutine, &ExpOkToTimeZoneRefresh);
    ExpCenturyWorkItem.WorkerRoutine = (void (__fastcall *)(void *))ExpTimeZoneWork;
    ExpCenturyWorkItem.Parameter = 0LL;
    ExpCenturyWorkItem.List.Flink = 0LL;
    KeInitializeTimerEx(&ExpCenturyTimer, NotificationTimer);
    ExpNextCenturyTimeFieldsInLocalTime = 0LL;
    *(_DWORD *)&ExpNextCenturyTimeFieldsInLocalTime.Month = 65537;
    ExpNextYearTimeFieldsInLocalTime = 0LL;
    ExpNextCenturyTimeFieldsInLocalTime.Milliseconds = 1;
    *(_DWORD *)&ExpNextYearTimeFieldsInLocalTime.Month = 65537;
    ExpNextYearTimeFieldsInLocalTime.Milliseconds = 1;
  }
  TimeZoneInformationWorker = RtlpQueryTimeZoneInformationWorker((char *)Buf2, 0x1B0uLL);
  if ( TimeZoneInformationWorker < 0 )
  {
    ++ExpRefreshFailures;
    ExpSystemIsInCmosMode = 1;
    ExpLogRefreshTimeZoneInformationQueryFail((unsigned int)TimeZoneInformationWorker);
    v35 = 0LL;
LABEL_38:
    v36 = v0;
LABEL_40:
    EtwTraceTimeZoneInformationRefresh(v36, v33, v34, v35);
    return 0;
  }
  v3 = MEMORY[0xFFFFF78000000014];
  v4.QuadPart = MEMORY[0xFFFFF78000000014] - ExpTimeZoneBias;
  Time.QuadPart = MEMORY[0xFFFFF78000000014] - ExpTimeZoneBias;
  if ( !BYTE4(Buf2[53]) )
  {
    if ( WORD2(Buf2[21]) )
    {
      RtlTimeToTimeFields(&Time, &TimeFields);
      if ( (unsigned __int8)RtlpCheckDynamicTimeZoneInformation(Buf2) )
      {
        v1 = 1;
LABEL_47:
        RtlpSetTimeZoneInformationWorker(Buf2);
        goto LABEL_8;
      }
    }
  }
  if ( byte_140C10DB8 )
  {
    LODWORD(v42) = 0;
    if ( (int)RtlGetPersistedStateLocation(
                L"TimeZoneInformationSettings",
                L"TargetNtPath",
                0LL,
                0,
                v50,
                0x208u,
                (unsigned int *)&v42) >= 0 )
    {
      Handle = 0LL;
      RegistryHandle = RtlpGetRegistryHandle(0, v50, 0, &Handle);
      if ( RegistryHandle == -1073741772 )
        v1 = 1;
      if ( Handle )
        ZwClose(Handle);
      if ( v1 )
        goto LABEL_47;
    }
  }
LABEL_8:
  v5 = Buf2[0];
  v41.QuadPart = -1LL;
  v47.QuadPart = -1LL;
  if ( !HIWORD(Buf2[8]) || !WORD1(Buf2[19]) )
  {
    KeCancelTimer(&ExpTimeZoneTimer);
    v9.QuadPart = 0LL;
    ExpCurrentTimeZoneId = 0;
    v38.QuadPart = 0LL;
    goto LABEL_19;
  }
  if ( !(unsigned __int8)RtlCutoverTimeToSystemTime((PTIME_FIELDS)((char *)&Buf2[8] + 4), &v45, &Time) )
  {
    ++ExpRefreshFailures;
    ExpSystemIsInCmosMode = 1;
    v0 = 2;
    ExpLogRefreshTimeZoneInformationCutoverFail(Buf2, v6, &v41, 2LL);
    LOBYTE(v35) = v1;
    goto LABEL_38;
  }
  v7 = v45;
  v41 = v45;
  if ( !(unsigned __int8)RtlCutoverTimeToSystemTime((PTIME_FIELDS)&Buf2[19], &v46, &Time) )
  {
    ++ExpRefreshFailures;
    ExpSystemIsInCmosMode = 1;
    ExpLogRefreshTimeZoneInformationCutoverFail(Buf2, v8, &v41, 3LL);
    LOBYTE(v35) = v1;
    v36 = 3LL;
    goto LABEL_40;
  }
  v47 = v46;
  if ( v4.QuadPart >= v46.QuadPart && v4.QuadPart >= v7.QuadPart )
  {
    v9.QuadPart = 0LL;
    v10 = (v7.QuadPart <= v46.QuadPart) + 1;
LABEL_15:
    v38 = v9;
    goto LABEL_16;
  }
  if ( v46.QuadPart >= v7.QuadPart )
  {
    if ( v4.QuadPart >= v7.QuadPart && v4.QuadPart < v46.QuadPart )
    {
      v38 = v46;
      ExpCurrentTimeZoneId = 1;
      v9 = v46;
      goto LABEL_17;
    }
    goto LABEL_55;
  }
  if ( v4.QuadPart >= v46.QuadPart && v4.QuadPart < v7.QuadPart )
  {
LABEL_55:
    v10 = 2;
    v9 = v7;
    goto LABEL_15;
  }
  v9 = v46;
  v38 = v46;
  v10 = 1;
LABEL_16:
  v11 = Buf2[21];
  ExpCurrentTimeZoneId = v10;
  if ( v10 != 2 )
LABEL_17:
    v11 = HIDWORD(Buf2[10]);
  v5 += v11;
LABEL_19:
  if ( ExpLastTimeZoneBias != v5 )
  {
    v43 = 0xFFFFFFFF00000000uLL;
    ZwUpdateWnfStateData((__int64)&WNF_SEB_TIME_ZONE_CHANGE, (__int64)&v43);
    EtwTraceTimeZoneBiasChange(v5);
  }
  v12 = 3LL;
  ExpLastTimeZoneBias = v5;
  v13 = Buf2;
  ExpTimeZoneBias = 10000000LL * (int)(60 * v5);
  v14 = &ExpTimeZoneInformation;
  do
  {
    v15 = v13[1];
    *(_OWORD *)v14 = *v13;
    v16 = v13[2];
    *((_OWORD *)v14 + 1) = v15;
    v17 = v13[3];
    *((_OWORD *)v14 + 2) = v16;
    v18 = v13[4];
    *((_OWORD *)v14 + 3) = v17;
    v19 = v13[5];
    *((_OWORD *)v14 + 4) = v18;
    v20 = v13[6];
    *((_OWORD *)v14 + 5) = v19;
    v21 = v13[7];
    v13 += 8;
    *((_OWORD *)v14 + 6) = v20;
    v14 += 32;
    *((_OWORD *)v14 - 1) = v21;
    --v12;
  }
  while ( v12 );
  v22 = *v13;
  ExpSystemIsInCmosMode = 0;
  v23 = v13[1];
  *(_OWORD *)v14 = v22;
  v24 = v13[2];
  *((_OWORD *)v14 + 1) = v23;
  *((_OWORD *)v14 + 2) = v24;
  MEMORY[0xFFFFF78000000240] = ExpCurrentTimeZoneId;
  RtlTimeToTimeFields(&Time, &TimeFields);
  if ( v9.QuadPart )
  {
    ExLocalTimeToSystemTime(&v38, &ExpNextSystemCutoverInUTC);
    KiSetTimerEx((__int64)&ExpTimeZoneTimer, ExpNextSystemCutoverInUTC.QuadPart, 0, 0, (__int64)&ExpTimeZoneDpc);
  }
  Year = TimeFields.Year;
  ExpNextCenturyTimeFieldsInLocalTime.Year = 100 * (TimeFields.Year / 100 + 1);
  RtlTimeFieldsToTime(&ExpNextCenturyTimeFieldsInLocalTime, &LocalTime);
  ExLocalTimeToSystemTime(&LocalTime, &ExpNextCenturyTimeInUTC);
  KiSetTimerEx((__int64)&ExpCenturyTimer, ExpNextCenturyTimeInUTC.QuadPart, 0, 0, (__int64)&ExpCenturyDpc);
  ExpNextYearTimeFieldsInLocalTime.Year = Year + 1;
  RtlTimeFieldsToTime(&ExpNextYearTimeFieldsInLocalTime, &LocalTime);
  ExLocalTimeToSystemTime(&LocalTime, &ExpNextYearTimeInUTC);
  KiSetTimerEx((__int64)&ExpNextYearTimer, ExpNextYearTimeInUTC.QuadPart, 0, 0, (__int64)&ExpNextYearDpc);
  _InterlockedAdd((volatile signed __int32 *)0xFFFFF7800000025CLL, 1u);
  MEMORY[0xFFFFF78000000028] = HIDWORD(ExpTimeZoneBias);
  MEMORY[0xFFFFF78000000020] = ExpTimeZoneBias;
  MEMORY[0xFFFFF780000003C8] = v3;
  if ( v38.QuadPart )
    v27 = ExpNextSystemCutoverInUTC;
  else
    v27.QuadPart = ExpNextYearTimeInUTC.QuadPart - 10000;
  MEMORY[0xFFFFF780000003D0] = v27.QuadPart;
  _InterlockedAdd((volatile signed __int32 *)0xFFFFF7800000025CLL, 1u);
  if ( !ExpRealTimeIsUniversal )
    RtlSetActiveTimeBias();
  v28 = TimeFields.Year;
  if ( TimeFields.Year != ExpLastDynamicTimeZoneYear )
  {
    if ( (unsigned __int8)RtlpUpdateDynamicTimeZones((unsigned __int16)TimeFields.Year) )
      ExpLastDynamicTimeZoneYear = v28;
  }
  ExpLogRefreshTimeZoneInformationSuccess(
    (unsigned int)Buf2,
    v26,
    (unsigned int)&v41,
    (unsigned int)&v47,
    (__int64)&v38);
  LOBYTE(v29) = v1;
  EtwTraceTimeZoneInformationRefresh(0LL, v30, v31, v29);
  return 1;
}
