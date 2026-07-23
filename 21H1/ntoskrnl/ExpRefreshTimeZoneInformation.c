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
  BOOLEAN v3; // r9
  __int64 v4; // rsi
  LARGE_INTEGER v5; // rbx
  unsigned int v6; // r12d
  __int64 v7; // rdx
  BOOLEAN v8; // r9
  LARGE_INTEGER v9; // rdi
  __int64 v10; // rdx
  LARGE_INTEGER v11; // rbx
  int v12; // ecx
  int v13; // eax
  __int64 v14; // rdi
  _OWORD *v15; // rcx
  int *v16; // rax
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int16 Year; // bx
  int v28; // edx
  LARGE_INTEGER v29; // rax
  __int16 v30; // bx
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rcx
  int RegistryHandle; // eax
  LARGE_INTEGER v40; // [rsp+48h] [rbp-C0h] BYREF
  LARGE_INTEGER Time; // [rsp+50h] [rbp-B8h] BYREF
  LARGE_INTEGER LocalTime; // [rsp+58h] [rbp-B0h] BYREF
  LARGE_INTEGER v43; // [rsp+60h] [rbp-A8h] BYREF
  ULONG BufferLengthOut[2]; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 Buffer; // [rsp+70h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-90h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+80h] [rbp-88h] BYREF
  LARGE_INTEGER v48; // [rsp+88h] [rbp-80h] BYREF
  LARGE_INTEGER v49; // [rsp+90h] [rbp-78h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+98h] [rbp-70h] BYREF
  _QWORD Buf2[54]; // [rsp+A8h] [rbp-60h] BYREF
  WCHAR TargetPath[264]; // [rsp+258h] [rbp+150h] BYREF

  memset(Buf2, 0, sizeof(Buf2));
  SystemTime.QuadPart = 0LL;
  v48.QuadPart = 0LL;
  v0 = 1;
  LocalTime.QuadPart = 0LL;
  TimeFields = 0LL;
  Buffer = 0LL;
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
    v37 = 0LL;
LABEL_38:
    v38 = v0;
LABEL_40:
    EtwTraceTimeZoneInformationRefresh(v38, v35, v36, v37);
    return 0;
  }
  v4 = MEMORY[0xFFFFF78000000014];
  v5.QuadPart = MEMORY[0xFFFFF78000000014] - ExpTimeZoneBias;
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
    BufferLengthOut[0] = 0;
    if ( RtlGetPersistedStateLocation(
           L"TimeZoneInformationSettings",
           L"TargetNtPath",
           0LL,
           LocationTypeRegistry,
           TargetPath,
           0x208u,
           BufferLengthOut) >= 0 )
    {
      Handle = 0LL;
      RegistryHandle = RtlpGetRegistryHandle(0, TargetPath, 0, &Handle);
      if ( RegistryHandle == -1073741772 )
        v1 = 1;
      if ( Handle )
        ZwClose(Handle);
      if ( v1 )
        goto LABEL_47;
    }
  }
LABEL_8:
  v6 = Buf2[0];
  v43.QuadPart = -1LL;
  v49.QuadPart = -1LL;
  if ( !HIWORD(Buf2[8]) || !WORD1(Buf2[19]) )
  {
    KeCancelTimer(&ExpTimeZoneTimer);
    v11.QuadPart = 0LL;
    ExpCurrentTimeZoneId = 0;
    v40.QuadPart = 0LL;
    goto LABEL_19;
  }
  if ( !RtlCutoverTimeToSystemTime((PTIME_FIELDS)((char *)&Buf2[8] + 4), &SystemTime, &Time, v3) )
  {
    ++ExpRefreshFailures;
    ExpSystemIsInCmosMode = 1;
    v0 = 2;
    ExpLogRefreshTimeZoneInformationCutoverFail(Buf2, v7, &v43, 2LL);
    LOBYTE(v37) = v1;
    goto LABEL_38;
  }
  v9 = SystemTime;
  v43 = SystemTime;
  if ( !RtlCutoverTimeToSystemTime((PTIME_FIELDS)&Buf2[19], &v48, &Time, v8) )
  {
    ++ExpRefreshFailures;
    ExpSystemIsInCmosMode = 1;
    ExpLogRefreshTimeZoneInformationCutoverFail(Buf2, v10, &v43, 3LL);
    LOBYTE(v37) = v1;
    v38 = 3LL;
    goto LABEL_40;
  }
  v49 = v48;
  if ( v5.QuadPart >= v48.QuadPart && v5.QuadPart >= v9.QuadPart )
  {
    v11.QuadPart = 0LL;
    v12 = (v9.QuadPart <= v48.QuadPart) + 1;
LABEL_15:
    v40 = v11;
    goto LABEL_16;
  }
  if ( v48.QuadPart >= v9.QuadPart )
  {
    if ( v5.QuadPart >= v9.QuadPart && v5.QuadPart < v48.QuadPart )
    {
      v40 = v48;
      ExpCurrentTimeZoneId = 1;
      v11 = v48;
      goto LABEL_17;
    }
    goto LABEL_55;
  }
  if ( v5.QuadPart >= v48.QuadPart && v5.QuadPart < v9.QuadPart )
  {
LABEL_55:
    v12 = 2;
    v11 = v9;
    goto LABEL_15;
  }
  v11 = v48;
  v40 = v48;
  v12 = 1;
LABEL_16:
  v13 = Buf2[21];
  ExpCurrentTimeZoneId = v12;
  if ( v12 != 2 )
LABEL_17:
    v13 = HIDWORD(Buf2[10]);
  v6 += v13;
LABEL_19:
  if ( ExpLastTimeZoneBias != v6 )
  {
    Buffer = 0xFFFFFFFF00000000uLL;
    ZwUpdateWnfStateData(&WNF_SEB_TIME_ZONE_CHANGE, &Buffer, 8u, 0LL, 0LL, 0, 0);
    EtwTraceTimeZoneBiasChange(v6);
  }
  v14 = 3LL;
  ExpLastTimeZoneBias = v6;
  v15 = Buf2;
  ExpTimeZoneBias = 10000000LL * (int)(60 * v6);
  v16 = &ExpTimeZoneInformation;
  do
  {
    v17 = v15[1];
    *(_OWORD *)v16 = *v15;
    v18 = v15[2];
    *((_OWORD *)v16 + 1) = v17;
    v19 = v15[3];
    *((_OWORD *)v16 + 2) = v18;
    v20 = v15[4];
    *((_OWORD *)v16 + 3) = v19;
    v21 = v15[5];
    *((_OWORD *)v16 + 4) = v20;
    v22 = v15[6];
    *((_OWORD *)v16 + 5) = v21;
    v23 = v15[7];
    v15 += 8;
    *((_OWORD *)v16 + 6) = v22;
    v16 += 32;
    *((_OWORD *)v16 - 1) = v23;
    --v14;
  }
  while ( v14 );
  v24 = *v15;
  ExpSystemIsInCmosMode = 0;
  v25 = v15[1];
  *(_OWORD *)v16 = v24;
  v26 = v15[2];
  *((_OWORD *)v16 + 1) = v25;
  *((_OWORD *)v16 + 2) = v26;
  MEMORY[0xFFFFF78000000240] = ExpCurrentTimeZoneId;
  RtlTimeToTimeFields(&Time, &TimeFields);
  if ( v11.QuadPart )
  {
    ExLocalTimeToSystemTime(&v40, &ExpNextSystemCutoverInUTC);
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
  MEMORY[0xFFFFF780000003C8] = v4;
  if ( v40.QuadPart )
    v29 = ExpNextSystemCutoverInUTC;
  else
    v29.QuadPart = ExpNextYearTimeInUTC.QuadPart - 10000;
  MEMORY[0xFFFFF780000003D0] = v29.QuadPart;
  _InterlockedAdd((volatile signed __int32 *)0xFFFFF7800000025CLL, 1u);
  if ( !ExpRealTimeIsUniversal )
    RtlSetActiveTimeBias();
  v30 = TimeFields.Year;
  if ( TimeFields.Year != ExpLastDynamicTimeZoneYear )
  {
    if ( (unsigned __int8)RtlpUpdateDynamicTimeZones((unsigned __int16)TimeFields.Year) )
      ExpLastDynamicTimeZoneYear = v30;
  }
  ExpLogRefreshTimeZoneInformationSuccess(
    (unsigned int)Buf2,
    v28,
    (unsigned int)&v43,
    (unsigned int)&v49,
    (__int64)&v40);
  LOBYTE(v31) = v1;
  EtwTraceTimeZoneInformationRefresh(0LL, v32, v33, v31);
  return 1;
}
