/*
 * XREFs of ExpRefreshTimeZoneInformation @ 0x1407A9554
 * Callers:
 *     ExpTimeZoneInitSiloState @ 0x1405D1B7C (ExpTimeZoneInitSiloState.c)
 *     ExpRefreshSystemTime @ 0x1407A909C (ExpRefreshSystemTime.c)
 *     ExpReadLeapSecondData @ 0x1407A91B8 (ExpReadLeapSecondData.c)
 *     NtSetSystemTime @ 0x14094BD10 (NtSetSystemTime.c)
 *     ExpSetSystemTime @ 0x140998FC8 (ExpSetSystemTime.c)
 *     Phase1InitializationDiscard @ 0x140A3B6A4 (Phase1InitializationDiscard.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140252E18 (PsGetServerSiloGlobals.c)
 *     PsGetCurrentServerSilo @ 0x14025C9C0 (PsGetCurrentServerSilo.c)
 *     KiSetTimerEx @ 0x14025FD70 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x140260240 (KeCancelTimer.c)
 *     PsDetachSiloFromCurrentThread @ 0x140264010 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x140264030 (PsAttachSiloToCurrentThread.c)
 *     ExLocalTimeToSystemTime @ 0x1402B5530 (ExLocalTimeToSystemTime.c)
 *     RtlTimeFieldsToTime @ 0x1402B5900 (RtlTimeFieldsToTime.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140351230 (PsIsCurrentThreadInServerSilo.c)
 *     RtlTimeToTimeFields @ 0x14036E9A0 (RtlTimeToTimeFields.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     RtlSetSystemGlobalData @ 0x1403F8534 (RtlSetSystemGlobalData.c)
 *     ZwClose @ 0x1403FA580 (ZwClose.c)
 *     ZwUpdateWnfStateData @ 0x1403FDDA0 (ZwUpdateWnfStateData.c)
 *     memset @ 0x140414200 (memset.c)
 *     ExpInitializeTimeChangeWorker @ 0x1405D19CC (ExpInitializeTimeChangeWorker.c)
 *     ExpReadSiloTimeZoneMarker @ 0x1405D1A14 (ExpReadSiloTimeZoneMarker.c)
 *     ExpWriteTimeZoneBias @ 0x1405D1CC8 (ExpWriteTimeZoneBias.c)
 *     ExpWriteTimeZoneBiasStartEnd @ 0x1405D1D18 (ExpWriteTimeZoneBiasStartEnd.c)
 *     RtlGetPersistedStateLocation @ 0x14063F9C0 (RtlGetPersistedStateLocation.c)
 *     RtlpGetRegistryHandle @ 0x140642460 (RtlpGetRegistryHandle.c)
 *     RtlQueryDynamicTimeZoneInformation @ 0x1406C3F10 (RtlQueryDynamicTimeZoneInformation.c)
 *     RtlCutoverTimeToSystemTime @ 0x1407A9CD0 (RtlCutoverTimeToSystemTime.c)
 *     EtwTraceTimeZoneInformationRefresh @ 0x1407A9E44 (EtwTraceTimeZoneInformationRefresh.c)
 *     ExpLogRefreshTimeZoneInformationSuccess @ 0x1407A9F38 (ExpLogRefreshTimeZoneInformationSuccess.c)
 *     RtlpUpdateDynamicTimeZones @ 0x1407AA15C (RtlpUpdateDynamicTimeZones.c)
 *     RtlSetActiveTimeBias @ 0x1407AA3F4 (RtlSetActiveTimeBias.c)
 *     RtlpCheckDynamicTimeZoneInformation @ 0x1407AA49C (RtlpCheckDynamicTimeZoneInformation.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x14091510C (RtlpSetTimeZoneInformationWorker.c)
 *     EtwTraceTimeZoneBiasChange @ 0x140936798 (EtwTraceTimeZoneBiasChange.c)
 *     ExpLogRefreshTimeZoneInformationCutoverFail @ 0x14094B900 (ExpLogRefreshTimeZoneInformationCutoverFail.c)
 *     ExpLogRefreshTimeZoneInformationQueryFail @ 0x14094BAE8 (ExpLogRefreshTimeZoneInformationQueryFail.c)
 */

char __fastcall ExpRefreshTimeZoneInformation(char a1)
{
  BOOL v1; // r15d
  struct _LIST_ENTRY *v3; // rdi
  char v4; // r12
  __int64 v5; // rdx
  __int64 v6; // rcx
  void *CurrentServerSilo; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // r14
  __int64 v12; // r9
  __int64 v13; // r9
  int DynamicTimeZoneInformation; // ebx
  __int64 v15; // r13
  __int64 v16; // rdx
  int v17; // r9d
  int v18; // ecx
  bool SiloTimeZoneMarker; // al
  _OWORD *v21; // rcx
  _OWORD *v22; // rax
  __int128 v23; // xmm1
  __int64 v24; // rsi
  LARGE_INTEGER v25; // rbx
  unsigned int v26; // edi
  __int64 v27; // rdx
  LARGE_INTEGER v28; // rdi
  char v29; // al
  LARGE_INTEGER v30; // rbx
  int v31; // ecx
  _DWORD *v32; // r15
  int v33; // eax
  _OWORD *v34; // rcx
  _OWORD *v35; // rax
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int16 Year; // di
  __int64 v39; // rdx
  __int64 v40; // rdx
  int v41; // edx
  __int16 v42; // bx
  int v43; // r9d
  LARGE_INTEGER LocalTime; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v45; // [rsp+50h] [rbp-B8h]
  LARGE_INTEGER Time; // [rsp+58h] [rbp-B0h] BYREF
  LARGE_INTEGER v47; // [rsp+60h] [rbp-A8h] BYREF
  LARGE_INTEGER v48; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v49; // [rsp+70h] [rbp-98h]
  unsigned __int64 v50; // [rsp+78h] [rbp-90h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-88h] BYREF
  LARGE_INTEGER v52; // [rsp+88h] [rbp-80h] BYREF
  LARGE_INTEGER v53; // [rsp+90h] [rbp-78h] BYREF
  LARGE_INTEGER v54; // [rsp+98h] [rbp-70h] BYREF
  TIME_FIELDS TimeFields; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v56; // [rsp+B0h] [rbp-58h] BYREF
  _QWORD Buf2[54]; // [rsp+B8h] [rbp-50h] BYREF
  WCHAR v58[264]; // [rsp+268h] [rbp+160h] BYREF

  memset(Buf2, 0, sizeof(Buf2));
  LOBYTE(v1) = 0;
  v52.QuadPart = 0LL;
  v53.QuadPart = 0LL;
  v3 = 0LL;
  v47.QuadPart = 0LL;
  v4 = 1;
  v50 = 0LL;
  TimeFields = 0LL;
  LODWORD(v45) = v1;
  CurrentServerSilo = (void *)PsGetCurrentServerSilo(v6, v5);
  v11 = *((_QWORD *)PsGetServerSiloGlobals((__int64)CurrentServerSilo) + 133);
  if ( *(_QWORD *)(v11 + 592) )
  {
    v4 = 0;
  }
  else
  {
    ExpInitializeTimeChangeWorker(
      v11 + 448,
      (KDEFERRED_ROUTINE *)ExpTimeZoneDpcRoutine,
      CurrentServerSilo,
      v10,
      (__int64)CurrentServerSilo);
    ExpInitializeTimeChangeWorker(
      v11 + 768,
      (KDEFERRED_ROUTINE *)ExpNextYearDpcRoutine,
      CurrentServerSilo,
      v12,
      (__int64)CurrentServerSilo);
    ExpInitializeTimeChangeWorker(
      v11 + 608,
      (KDEFERRED_ROUTINE *)ExpCenturyDpcRoutine,
      CurrentServerSilo,
      v13,
      (__int64)CurrentServerSilo);
    *(_OWORD *)(v11 + 944) = 0LL;
    *(_OWORD *)(v11 + 968) = 0LL;
    *(_DWORD *)(v11 + 946) = 65537;
    *(_WORD *)(v11 + 956) = 1;
    *(_DWORD *)(v11 + 970) = 65537;
    *(_WORD *)(v11 + 980) = 1;
  }
  DynamicTimeZoneInformation = 0;
  v15 = 3LL;
  if ( a1 )
  {
    if ( !ExpReadSiloTimeZoneMarker() )
      v3 = PsAttachSiloToCurrentThread(0LL);
    DynamicTimeZoneInformation = RtlQueryDynamicTimeZoneInformation(Buf2);
    if ( v3 )
      PsDetachSiloFromCurrentThread(v3);
  }
  else if ( PsIsCurrentThreadInServerSilo(v9, v8)
         && (SiloTimeZoneMarker = ExpReadSiloTimeZoneMarker(), v21 = Buf2, !SiloTimeZoneMarker) )
  {
    v22 = (_OWORD *)v11;
    v16 = 3LL;
    do
    {
      *v21 = *v22;
      v21[1] = v22[1];
      v21[2] = v22[2];
      v21[3] = v22[3];
      v21[4] = v22[4];
      v21[5] = v22[5];
      v21[6] = v22[6];
      v21 += 8;
      v23 = v22[7];
      v22 += 8;
      *(v21 - 1) = v23;
      --v16;
    }
    while ( v16 );
    *v21 = *v22;
    v21[1] = v22[1];
    v21[2] = v22[2];
  }
  else
  {
    DynamicTimeZoneInformation = RtlQueryDynamicTimeZoneInformation(Buf2);
  }
  if ( DynamicTimeZoneInformation < 0 )
  {
    LOBYTE(v16) = v4;
    ++*(_DWORD *)(v11 + 1000);
    ExpSystemIsInCmosMode = 1;
    ExpLogRefreshTimeZoneInformationQueryFail((unsigned int)DynamicTimeZoneInformation, v16);
    v17 = 0;
    v18 = 1;
LABEL_11:
    EtwTraceTimeZoneInformationRefresh(v18, *(_DWORD *)(v11 + 436), *(_DWORD *)(v11 + 432), v17, v4);
    return 0;
  }
  v24 = MEMORY[0xFFFFF78000000014];
  v25.QuadPart = MEMORY[0xFFFFF78000000014] - *(_QWORD *)(v11 + 440);
  Time = v25;
  if ( !BYTE4(Buf2[53]) )
  {
    if ( WORD2(Buf2[21]) )
    {
      RtlTimeToTimeFields(&Time, &TimeFields);
      if ( (unsigned __int8)RtlpCheckDynamicTimeZoneInformation(Buf2) )
      {
        LOBYTE(v1) = 1;
        LODWORD(v45) = 1;
LABEL_28:
        RtlpSetTimeZoneInformationWorker(Buf2);
        goto LABEL_29;
      }
    }
  }
  if ( v4
    && (int)RtlGetPersistedStateLocation(
              L"TimeZoneInformationSettings",
              L"TargetNtPath",
              0LL,
              0,
              v58,
              0x208u,
              (unsigned int *)&v56) >= 0 )
  {
    Handle = 0LL;
    v1 = RtlpGetRegistryHandle(0, v58, 0, &Handle) == -1073741772;
    LODWORD(v45) = v1;
    if ( Handle )
      ZwClose(Handle);
    if ( v1 )
      goto LABEL_28;
  }
LABEL_29:
  v26 = Buf2[0];
  v48.QuadPart = -1LL;
  v54.QuadPart = -1LL;
  LODWORD(v49) = Buf2[0];
  if ( !HIWORD(Buf2[8]) || !WORD1(Buf2[19]) )
  {
    KeCancelTimer((PKTIMER)(v11 + 512));
    v32 = (_DWORD *)(v11 + 432);
    *(_DWORD *)(v11 + 432) = 0;
    v30.QuadPart = 0LL;
    LocalTime.QuadPart = 0LL;
    goto LABEL_52;
  }
  if ( !(unsigned __int8)RtlCutoverTimeToSystemTime((PTIME_FIELDS)((char *)&Buf2[8] + 4), &v52, &Time) )
  {
    LODWORD(v15) = 2;
LABEL_33:
    ++*(_DWORD *)(v11 + 1000);
    ExpSystemIsInCmosMode = 1;
    LOBYTE(v27) = v4;
    ExpLogRefreshTimeZoneInformationCutoverFail(Buf2, v27, &v48, (unsigned int)v15);
    LOBYTE(v17) = v1;
    v18 = v15;
    goto LABEL_11;
  }
  v28 = v52;
  v48 = v52;
  v29 = RtlCutoverTimeToSystemTime((PTIME_FIELDS)&Buf2[19], &v53, &Time);
  v27 = 0LL;
  if ( !v29 )
    goto LABEL_33;
  v54 = v53;
  if ( v25.QuadPart >= v53.QuadPart && v25.QuadPart >= v28.QuadPart )
  {
    LocalTime.QuadPart = 0LL;
    v30.QuadPart = 0LL;
    v31 = (v28.QuadPart <= v53.QuadPart) + 1;
LABEL_43:
    v32 = (_DWORD *)(v11 + 432);
    *(_DWORD *)(v11 + 432) = v31;
    goto LABEL_48;
  }
  if ( v53.QuadPart < v28.QuadPart )
  {
    if ( v25.QuadPart < v53.QuadPart || v25.QuadPart >= v28.QuadPart )
    {
      v30 = v53;
      LocalTime = v53;
      v31 = 1;
    }
    else
    {
      v30 = v28;
      v31 = 2;
      LocalTime = v28;
    }
    goto LABEL_43;
  }
  if ( v25.QuadPart >= v28.QuadPart && v25.QuadPart < v53.QuadPart )
  {
    v30 = v53;
    LocalTime = v53;
    v32 = (_DWORD *)(v11 + 432);
    *(_DWORD *)(v11 + 432) = 1;
LABEL_49:
    v33 = HIDWORD(Buf2[10]);
    goto LABEL_50;
  }
  v30 = v28;
  v32 = (_DWORD *)(v11 + 432);
  LocalTime = v28;
  v31 = 2;
  *(_DWORD *)(v11 + 432) = 2;
LABEL_48:
  v33 = Buf2[21];
  if ( v31 != 2 )
    goto LABEL_49;
LABEL_50:
  v15 = 3LL;
  v26 = v33 + v49;
LABEL_52:
  if ( *(_DWORD *)(v11 + 436) != v26 )
  {
    v50 = 0xFFFFFFFF00000000uLL;
    ZwUpdateWnfStateData((__int64)&WNF_SEB_TIME_ZONE_CHANGE, (__int64)&v50);
    EtwTraceTimeZoneBiasChange(v26, *(unsigned int *)(v11 + 436));
  }
  *(_DWORD *)(v11 + 436) = v26;
  v34 = Buf2;
  *(_QWORD *)(v11 + 440) = 10000000LL * (int)(60 * v26);
  v35 = (_OWORD *)v11;
  do
  {
    *v35 = *v34;
    v35[1] = v34[1];
    v35[2] = v34[2];
    v35[3] = v34[3];
    v35[4] = v34[4];
    v35[5] = v34[5];
    v35[6] = v34[6];
    v35 += 8;
    v36 = v34[7];
    v34 += 8;
    *(v35 - 1) = v36;
    --v15;
  }
  while ( v15 );
  v37 = *v34;
  ExpSystemIsInCmosMode = 0;
  *v35 = v37;
  v35[1] = v34[1];
  v35[2] = v34[2];
  RtlSetSystemGlobalData((__int64)v34, v32);
  RtlTimeToTimeFields(&Time, &TimeFields);
  if ( v30.QuadPart )
  {
    ExLocalTimeToSystemTime(&LocalTime, (PLARGE_INTEGER)(v11 + 992));
    KiSetTimerEx(v11 + 512, *(_QWORD *)(v11 + 992), 0, 0, v11 + 448);
  }
  Year = TimeFields.Year;
  *(_WORD *)(v11 + 944) = 100 * (TimeFields.Year / 100 + 1);
  RtlTimeFieldsToTime((PTIME_FIELDS)(v11 + 944), &v47);
  ExLocalTimeToSystemTime(&v47, (PLARGE_INTEGER)(v11 + 936));
  KiSetTimerEx(v11 + 672, *(_QWORD *)(v11 + 936), 0, 0, v11 + 608);
  *(_WORD *)(v11 + 968) = Year + 1;
  RtlTimeFieldsToTime((PTIME_FIELDS)(v11 + 968), &v47);
  ExLocalTimeToSystemTime(&v47, (PLARGE_INTEGER)(v11 + 960));
  KiSetTimerEx(v11 + 832, *(_QWORD *)(v11 + 960), 0, 0, v11 + 768);
  _InterlockedAdd((volatile signed __int32 *)0xFFFFF7800000025CLL, 1u);
  ExpWriteTimeZoneBias((_DWORD *)(v11 + 440), v39);
  if ( LocalTime.QuadPart )
    v40 = *(_QWORD *)(v11 + 992);
  else
    v40 = *(_QWORD *)(v11 + 960) - 10000LL;
  ExpWriteTimeZoneBiasStartEnd(v24, v40);
  _InterlockedAdd((volatile signed __int32 *)0xFFFFF7800000025CLL, 1u);
  if ( !ExpRealTimeIsUniversal )
    RtlSetActiveTimeBias(*(unsigned int *)(v11 + 436));
  v42 = TimeFields.Year;
  if ( TimeFields.Year != *(_WORD *)(v11 + 984) )
  {
    if ( (unsigned __int8)RtlpUpdateDynamicTimeZones((unsigned __int16)TimeFields.Year) )
      *(_WORD *)(v11 + 984) = v42;
  }
  LOBYTE(v41) = v4;
  ExpLogRefreshTimeZoneInformationSuccess(
    (unsigned int)Buf2,
    v41,
    (unsigned int)&v48,
    (unsigned int)&v54,
    (__int64)&LocalTime);
  LOBYTE(v43) = v45;
  EtwTraceTimeZoneInformationRefresh(0, *(_DWORD *)(v11 + 436), *v32, v43, v4);
  return 1;
}
