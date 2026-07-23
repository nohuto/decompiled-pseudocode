/*
 * XREFs of ExpRefreshTimeZoneInformation @ 0x1407A9754
 * Callers:
 *     ExpTimeZoneInitSiloState @ 0x1405D1B7C (ExpTimeZoneInitSiloState.c)
 *     ExpRefreshSystemTime @ 0x1407A929C (ExpRefreshSystemTime.c)
 *     ExpReadLeapSecondData @ 0x1407A93B8 (ExpReadLeapSecondData.c)
 *     NtSetSystemTime @ 0x14094BEE0 (NtSetSystemTime.c)
 *     ExpSetSystemTime @ 0x140999FC8 (ExpSetSystemTime.c)
 *     Phase1InitializationDiscard @ 0x140A3C6A4 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExLocalTimeToSystemTime @ 0x140233710 (ExLocalTimeToSystemTime.c)
 *     RtlTimeFieldsToTime @ 0x140233AE0 (RtlTimeFieldsToTime.c)
 *     PsDetachSiloFromCurrentThread @ 0x14026D070 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14026D090 (PsAttachSiloToCurrentThread.c)
 *     PsGetCurrentServerSilo @ 0x14027DF30 (PsGetCurrentServerSilo.c)
 *     KiSetTimerEx @ 0x1402814E0 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x1402819B0 (KeCancelTimer.c)
 *     PsGetServerSiloGlobals @ 0x140285C94 (PsGetServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14035BF80 (PsIsCurrentThreadInServerSilo.c)
 *     RtlTimeToTimeFields @ 0x14036EB50 (RtlTimeToTimeFields.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     RtlSetSystemGlobalData @ 0x1403F8564 (RtlSetSystemGlobalData.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwUpdateWnfStateData @ 0x1403FDF80 (ZwUpdateWnfStateData.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExpInitializeTimeChangeWorker @ 0x1405D19CC (ExpInitializeTimeChangeWorker.c)
 *     ExpReadSiloTimeZoneMarker @ 0x1405D1A14 (ExpReadSiloTimeZoneMarker.c)
 *     ExpWriteTimeZoneBias @ 0x1405D1CC8 (ExpWriteTimeZoneBias.c)
 *     ExpWriteTimeZoneBiasStartEnd @ 0x1405D1D18 (ExpWriteTimeZoneBiasStartEnd.c)
 *     RtlQueryDynamicTimeZoneInformation @ 0x140622AD0 (RtlQueryDynamicTimeZoneInformation.c)
 *     RtlGetPersistedStateLocation @ 0x1406347D0 (RtlGetPersistedStateLocation.c)
 *     RtlpGetRegistryHandle @ 0x140637270 (RtlpGetRegistryHandle.c)
 *     RtlCutoverTimeToSystemTime @ 0x1407A9ED0 (RtlCutoverTimeToSystemTime.c)
 *     EtwTraceTimeZoneInformationRefresh @ 0x1407AA044 (EtwTraceTimeZoneInformationRefresh.c)
 *     ExpLogRefreshTimeZoneInformationSuccess @ 0x1407AA138 (ExpLogRefreshTimeZoneInformationSuccess.c)
 *     RtlpUpdateDynamicTimeZones @ 0x1407AA35C (RtlpUpdateDynamicTimeZones.c)
 *     RtlSetActiveTimeBias @ 0x1407AA5F4 (RtlSetActiveTimeBias.c)
 *     RtlpCheckDynamicTimeZoneInformation @ 0x1407AA69C (RtlpCheckDynamicTimeZoneInformation.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x14091526C (RtlpSetTimeZoneInformationWorker.c)
 *     EtwTraceTimeZoneBiasChange @ 0x140936968 (EtwTraceTimeZoneBiasChange.c)
 *     ExpLogRefreshTimeZoneInformationCutoverFail @ 0x14094BAD0 (ExpLogRefreshTimeZoneInformationCutoverFail.c)
 *     ExpLogRefreshTimeZoneInformationQueryFail @ 0x14094BCB8 (ExpLogRefreshTimeZoneInformationQueryFail.c)
 */

char __fastcall ExpRefreshTimeZoneInformation(char a1)
{
  BOOL v1; // r15d
  struct _LIST_ENTRY *v3; // rdi
  char v4; // r12
  void *CurrentServerSilo; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 v9; // r14
  __int64 v10; // r9
  __int64 v11; // r9
  int DynamicTimeZoneInformation; // ebx
  __int64 v13; // r13
  __int64 v14; // rdx
  BOOLEAN v15; // r9
  int v16; // r9d
  int v17; // ecx
  bool SiloTimeZoneMarker; // al
  _OWORD *v20; // rcx
  _OWORD *v21; // rax
  __int128 v22; // xmm1
  __int64 v23; // rsi
  LARGE_INTEGER v24; // rbx
  unsigned int v25; // edi
  __int64 v26; // rdx
  BOOLEAN v27; // r9
  LARGE_INTEGER v28; // rdi
  BOOLEAN v29; // al
  DWORD v30; // r8d
  LARGE_INTEGER v31; // rbx
  int v32; // ecx
  _DWORD *v33; // r15
  int v34; // eax
  _OWORD *v35; // rcx
  _OWORD *v36; // rax
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int16 Year; // di
  __int64 v40; // rdx
  __int64 v41; // rdx
  int v42; // edx
  __int16 v43; // bx
  int v44; // r9d
  LARGE_INTEGER LocalTime; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v46; // [rsp+50h] [rbp-B8h]
  LARGE_INTEGER Time; // [rsp+58h] [rbp-B0h] BYREF
  LARGE_INTEGER v48; // [rsp+60h] [rbp-A8h] BYREF
  LARGE_INTEGER v49; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v50; // [rsp+70h] [rbp-98h]
  unsigned __int64 Buffer; // [rsp+78h] [rbp-90h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-88h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+88h] [rbp-80h] BYREF
  LARGE_INTEGER v54; // [rsp+90h] [rbp-78h] BYREF
  LARGE_INTEGER v55; // [rsp+98h] [rbp-70h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+A0h] [rbp-68h] BYREF
  ULONG BufferLengthOut; // [rsp+B0h] [rbp-58h] BYREF
  _QWORD Buf2[54]; // [rsp+B8h] [rbp-50h] BYREF
  WCHAR TargetPath[264]; // [rsp+268h] [rbp+160h] BYREF

  memset(Buf2, 0, sizeof(Buf2));
  LOBYTE(v1) = 0;
  SystemTime.QuadPart = 0LL;
  v54.QuadPart = 0LL;
  v3 = 0LL;
  v48.QuadPart = 0LL;
  v4 = 1;
  Buffer = 0LL;
  TimeFields = 0LL;
  LODWORD(v46) = v1;
  CurrentServerSilo = (void *)PsGetCurrentServerSilo();
  v9 = *((_QWORD *)PsGetServerSiloGlobals((__int64)CurrentServerSilo) + 133);
  if ( *(_QWORD *)(v9 + 592) )
  {
    v4 = 0;
  }
  else
  {
    ExpInitializeTimeChangeWorker(
      v9 + 448,
      (KDEFERRED_ROUTINE *)ExpTimeZoneDpcRoutine,
      CurrentServerSilo,
      v8,
      (__int64)CurrentServerSilo);
    ExpInitializeTimeChangeWorker(
      v9 + 768,
      (KDEFERRED_ROUTINE *)ExpNextYearDpcRoutine,
      CurrentServerSilo,
      v10,
      (__int64)CurrentServerSilo);
    ExpInitializeTimeChangeWorker(
      v9 + 608,
      (KDEFERRED_ROUTINE *)ExpCenturyDpcRoutine,
      CurrentServerSilo,
      v11,
      (__int64)CurrentServerSilo);
    *(_OWORD *)(v9 + 944) = 0LL;
    *(_OWORD *)(v9 + 968) = 0LL;
    *(_DWORD *)(v9 + 946) = 65537;
    *(_WORD *)(v9 + 956) = 1;
    *(_DWORD *)(v9 + 970) = 65537;
    *(_WORD *)(v9 + 980) = 1;
  }
  DynamicTimeZoneInformation = 0;
  v13 = 3LL;
  if ( a1 )
  {
    if ( !ExpReadSiloTimeZoneMarker() )
      v3 = PsAttachSiloToCurrentThread(0LL);
    DynamicTimeZoneInformation = RtlQueryDynamicTimeZoneInformation(Buf2);
    if ( v3 )
      PsDetachSiloFromCurrentThread(v3);
  }
  else if ( PsIsCurrentThreadInServerSilo(v7, v6)
         && (SiloTimeZoneMarker = ExpReadSiloTimeZoneMarker(), v20 = Buf2, !SiloTimeZoneMarker) )
  {
    v21 = (_OWORD *)v9;
    v14 = 3LL;
    do
    {
      *v20 = *v21;
      v20[1] = v21[1];
      v20[2] = v21[2];
      v20[3] = v21[3];
      v20[4] = v21[4];
      v20[5] = v21[5];
      v20[6] = v21[6];
      v20 += 8;
      v22 = v21[7];
      v21 += 8;
      *(v20 - 1) = v22;
      --v14;
    }
    while ( v14 );
    *v20 = *v21;
    v20[1] = v21[1];
    v20[2] = v21[2];
  }
  else
  {
    DynamicTimeZoneInformation = RtlQueryDynamicTimeZoneInformation(Buf2);
  }
  if ( DynamicTimeZoneInformation < 0 )
  {
    LOBYTE(v14) = v4;
    ++*(_DWORD *)(v9 + 1000);
    ExpSystemIsInCmosMode = 1;
    ExpLogRefreshTimeZoneInformationQueryFail((unsigned int)DynamicTimeZoneInformation, v14);
    v16 = 0;
    v17 = 1;
LABEL_11:
    EtwTraceTimeZoneInformationRefresh(v17, *(_DWORD *)(v9 + 436), *(_DWORD *)(v9 + 432), v16, v4);
    return 0;
  }
  v23 = MEMORY[0xFFFFF78000000014];
  v24.QuadPart = MEMORY[0xFFFFF78000000014] - *(_QWORD *)(v9 + 440);
  Time = v24;
  if ( !BYTE4(Buf2[53]) )
  {
    if ( WORD2(Buf2[21]) )
    {
      RtlTimeToTimeFields(&Time, &TimeFields);
      if ( (unsigned __int8)RtlpCheckDynamicTimeZoneInformation(Buf2) )
      {
        LOBYTE(v1) = 1;
        LODWORD(v46) = 1;
LABEL_28:
        RtlpSetTimeZoneInformationWorker(Buf2);
        goto LABEL_29;
      }
    }
  }
  if ( v4
    && RtlGetPersistedStateLocation(
         L"TimeZoneInformationSettings",
         L"TargetNtPath",
         0LL,
         LocationTypeRegistry,
         TargetPath,
         0x208u,
         &BufferLengthOut) >= 0 )
  {
    Handle = 0LL;
    v1 = RtlpGetRegistryHandle(0, TargetPath, 0, &Handle) == -1073741772;
    LODWORD(v46) = v1;
    if ( Handle )
      ZwClose(Handle);
    if ( v1 )
      goto LABEL_28;
  }
LABEL_29:
  v25 = Buf2[0];
  v49.QuadPart = -1LL;
  v55.QuadPart = -1LL;
  LODWORD(v50) = Buf2[0];
  if ( !HIWORD(Buf2[8]) || !WORD1(Buf2[19]) )
  {
    KeCancelTimer((PKTIMER)(v9 + 512));
    v33 = (_DWORD *)(v9 + 432);
    *(_DWORD *)(v9 + 432) = 0;
    v31.QuadPart = 0LL;
    LocalTime.QuadPart = 0LL;
    goto LABEL_52;
  }
  if ( !RtlCutoverTimeToSystemTime((PTIME_FIELDS)((char *)&Buf2[8] + 4), &SystemTime, &Time, v15) )
  {
    LODWORD(v13) = 2;
LABEL_33:
    ++*(_DWORD *)(v9 + 1000);
    ExpSystemIsInCmosMode = 1;
    LOBYTE(v26) = v4;
    ExpLogRefreshTimeZoneInformationCutoverFail(Buf2, v26, &v49, (unsigned int)v13);
    LOBYTE(v16) = v1;
    v17 = v13;
    goto LABEL_11;
  }
  v28 = SystemTime;
  v49 = SystemTime;
  v29 = RtlCutoverTimeToSystemTime((PTIME_FIELDS)&Buf2[19], &v54, &Time, v27);
  v26 = 0LL;
  if ( !v29 )
    goto LABEL_33;
  v55 = v54;
  if ( v24.QuadPart >= v54.QuadPart && v24.QuadPart >= v28.QuadPart )
  {
    LocalTime.QuadPart = 0LL;
    v31.QuadPart = 0LL;
    v32 = (v28.QuadPart <= v54.QuadPart) + 1;
LABEL_43:
    v33 = (_DWORD *)(v9 + 432);
    *(_DWORD *)(v9 + 432) = v32;
    goto LABEL_48;
  }
  if ( v54.QuadPart < v28.QuadPart )
  {
    if ( v24.QuadPart < v54.QuadPart || v24.QuadPart >= v28.QuadPart )
    {
      v31 = v54;
      LocalTime = v54;
      v32 = 1;
    }
    else
    {
      v31 = v28;
      v32 = 2;
      LocalTime = v28;
    }
    goto LABEL_43;
  }
  if ( v24.QuadPart >= v28.QuadPart && v24.QuadPart < v54.QuadPart )
  {
    v31 = v54;
    LocalTime = v54;
    v33 = (_DWORD *)(v9 + 432);
    *(_DWORD *)(v9 + 432) = 1;
LABEL_49:
    v34 = HIDWORD(Buf2[10]);
    goto LABEL_50;
  }
  v31 = v28;
  v33 = (_DWORD *)(v9 + 432);
  LocalTime = v28;
  v32 = 2;
  *(_DWORD *)(v9 + 432) = 2;
LABEL_48:
  v34 = Buf2[21];
  if ( v32 != 2 )
    goto LABEL_49;
LABEL_50:
  v13 = 3LL;
  v25 = v34 + v50;
LABEL_52:
  if ( *(_DWORD *)(v9 + 436) != v25 )
  {
    Buffer = 0xFFFFFFFF00000000uLL;
    ZwUpdateWnfStateData(&WNF_SEB_TIME_ZONE_CHANGE, &Buffer, 8u, 0LL, 0LL, 0, 0);
    EtwTraceTimeZoneBiasChange(v25, *(unsigned int *)(v9 + 436));
  }
  *(_DWORD *)(v9 + 436) = v25;
  v35 = Buf2;
  *(_QWORD *)(v9 + 440) = 10000000LL * (int)(60 * v25);
  v36 = (_OWORD *)v9;
  do
  {
    *v36 = *v35;
    v36[1] = v35[1];
    v36[2] = v35[2];
    v36[3] = v35[3];
    v36[4] = v35[4];
    v36[5] = v35[5];
    v36[6] = v35[6];
    v36 += 8;
    v37 = v35[7];
    v35 += 8;
    *(v36 - 1) = v37;
    --v13;
  }
  while ( v13 );
  v38 = *v35;
  ExpSystemIsInCmosMode = 0;
  *v36 = v38;
  v36[1] = v35[1];
  v36[2] = v35[2];
  RtlSetSystemGlobalData((RTL_SYSTEM_GLOBAL_DATA_ID)v35, v33, v30);
  RtlTimeToTimeFields(&Time, &TimeFields);
  if ( v31.QuadPart )
  {
    ExLocalTimeToSystemTime(&LocalTime, (PLARGE_INTEGER)(v9 + 992));
    KiSetTimerEx(v9 + 512, *(_QWORD *)(v9 + 992), 0, 0, v9 + 448);
  }
  Year = TimeFields.Year;
  *(_WORD *)(v9 + 944) = 100 * (TimeFields.Year / 100 + 1);
  RtlTimeFieldsToTime((PTIME_FIELDS)(v9 + 944), &v48);
  ExLocalTimeToSystemTime(&v48, (PLARGE_INTEGER)(v9 + 936));
  KiSetTimerEx(v9 + 672, *(_QWORD *)(v9 + 936), 0, 0, v9 + 608);
  *(_WORD *)(v9 + 968) = Year + 1;
  RtlTimeFieldsToTime((PTIME_FIELDS)(v9 + 968), &v48);
  ExLocalTimeToSystemTime(&v48, (PLARGE_INTEGER)(v9 + 960));
  KiSetTimerEx(v9 + 832, *(_QWORD *)(v9 + 960), 0, 0, v9 + 768);
  _InterlockedAdd((volatile signed __int32 *)0xFFFFF7800000025CLL, 1u);
  ExpWriteTimeZoneBias((_DWORD *)(v9 + 440), v40);
  if ( LocalTime.QuadPart )
    v41 = *(_QWORD *)(v9 + 992);
  else
    v41 = *(_QWORD *)(v9 + 960) - 10000LL;
  ExpWriteTimeZoneBiasStartEnd(v23, v41);
  _InterlockedAdd((volatile signed __int32 *)0xFFFFF7800000025CLL, 1u);
  if ( !ExpRealTimeIsUniversal )
    RtlSetActiveTimeBias(*(unsigned int *)(v9 + 436));
  v43 = TimeFields.Year;
  if ( TimeFields.Year != *(_WORD *)(v9 + 984) )
  {
    if ( (unsigned __int8)RtlpUpdateDynamicTimeZones((unsigned __int16)TimeFields.Year) )
      *(_WORD *)(v9 + 984) = v43;
  }
  LOBYTE(v42) = v4;
  ExpLogRefreshTimeZoneInformationSuccess(
    (unsigned int)Buf2,
    v42,
    (unsigned int)&v49,
    (unsigned int)&v55,
    (__int64)&LocalTime);
  LOBYTE(v44) = v46;
  EtwTraceTimeZoneInformationRefresh(0, *(_DWORD *)(v9 + 436), *v33, v44, v4);
  return 1;
}
