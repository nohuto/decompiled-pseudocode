/*
 * XREFs of ExpRefreshTimeZoneInformation @ 0x14079F494
 * Callers:
 *     ExpTimeZoneInitSiloState @ 0x1405CF840 (ExpTimeZoneInitSiloState.c)
 *     ExpRefreshSystemTime @ 0x14079EFDC (ExpRefreshSystemTime.c)
 *     ExpReadLeapSecondData @ 0x14079F0F8 (ExpReadLeapSecondData.c)
 *     NtSetSystemTime @ 0x14094E540 (NtSetSystemTime.c)
 *     ExpSetSystemTime @ 0x14099BDD8 (ExpSetSystemTime.c)
 *     Phase1InitializationDiscard @ 0x140A3DB24 (Phase1InitializationDiscard.c)
 * Callees:
 *     PsDetachSiloFromCurrentThread @ 0x140204C10 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x140204C30 (PsAttachSiloToCurrentThread.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140227380 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSilo @ 0x14023F0F0 (PsGetCurrentServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x140245E34 (PsGetServerSiloGlobals.c)
 *     KiSetTimerEx @ 0x140247520 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x1402479F0 (KeCancelTimer.c)
 *     ExLocalTimeToSystemTime @ 0x140312120 (ExLocalTimeToSystemTime.c)
 *     RtlTimeFieldsToTime @ 0x1403124F0 (RtlTimeFieldsToTime.c)
 *     RtlTimeToTimeFields @ 0x14036E6A0 (RtlTimeToTimeFields.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     RtlSetSystemGlobalData @ 0x1403F6A54 (RtlSetSystemGlobalData.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     ZwUpdateWnfStateData @ 0x1403FBB50 (ZwUpdateWnfStateData.c)
 *     memset @ 0x140411300 (memset.c)
 *     ExpInitializeTimeChangeWorker @ 0x1405CF690 (ExpInitializeTimeChangeWorker.c)
 *     ExpReadSiloTimeZoneMarker @ 0x1405CF6D8 (ExpReadSiloTimeZoneMarker.c)
 *     ExpWriteTimeZoneBias @ 0x1405CF98C (ExpWriteTimeZoneBias.c)
 *     ExpWriteTimeZoneBiasStartEnd @ 0x1405CF9DC (ExpWriteTimeZoneBiasStartEnd.c)
 *     RtlGetPersistedStateLocation @ 0x140668560 (RtlGetPersistedStateLocation.c)
 *     RtlpGetRegistryHandle @ 0x14066D824 (RtlpGetRegistryHandle.c)
 *     RtlQueryDynamicTimeZoneInformation @ 0x1406E4230 (RtlQueryDynamicTimeZoneInformation.c)
 *     RtlCutoverTimeToSystemTime @ 0x14079FC10 (RtlCutoverTimeToSystemTime.c)
 *     EtwTraceTimeZoneInformationRefresh @ 0x14079FD84 (EtwTraceTimeZoneInformationRefresh.c)
 *     ExpLogRefreshTimeZoneInformationSuccess @ 0x14079FE78 (ExpLogRefreshTimeZoneInformationSuccess.c)
 *     RtlpUpdateDynamicTimeZones @ 0x1407A009C (RtlpUpdateDynamicTimeZones.c)
 *     RtlSetActiveTimeBias @ 0x1407A0334 (RtlSetActiveTimeBias.c)
 *     RtlpCheckDynamicTimeZoneInformation @ 0x1407A03DC (RtlpCheckDynamicTimeZoneInformation.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x14091795C (RtlpSetTimeZoneInformationWorker.c)
 *     EtwTraceTimeZoneBiasChange @ 0x140938FC8 (EtwTraceTimeZoneBiasChange.c)
 *     ExpLogRefreshTimeZoneInformationCutoverFail @ 0x14094E130 (ExpLogRefreshTimeZoneInformationCutoverFail.c)
 *     ExpLogRefreshTimeZoneInformationQueryFail @ 0x14094E318 (ExpLogRefreshTimeZoneInformationQueryFail.c)
 */

char __fastcall ExpRefreshTimeZoneInformation(char a1)
{
  BOOL v1; // r15d
  struct _LIST_ENTRY *v3; // rdi
  char v4; // r12
  void *CurrentServerSilo; // rbx
  __int64 v6; // r9
  __int64 v7; // r14
  __int64 v8; // r9
  __int64 v9; // r9
  int DynamicTimeZoneInformation; // ebx
  __int64 v11; // r13
  __int64 v12; // rdx
  BOOLEAN v13; // r9
  int v14; // r9d
  int v15; // ecx
  bool SiloTimeZoneMarker; // al
  _OWORD *v18; // rcx
  _OWORD *v19; // rax
  __int128 v20; // xmm1
  __int64 v21; // rsi
  LARGE_INTEGER v22; // rbx
  unsigned int v23; // edi
  __int64 v24; // rdx
  BOOLEAN v25; // r9
  LARGE_INTEGER v26; // rdi
  BOOLEAN v27; // al
  DWORD v28; // r8d
  LARGE_INTEGER v29; // rbx
  int v30; // ecx
  _DWORD *v31; // r15
  int v32; // eax
  _OWORD *v33; // rcx
  _OWORD *v34; // rax
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int16 Year; // di
  __int64 v38; // rdx
  int v39; // edx
  __int16 v40; // bx
  int v41; // r9d
  LARGE_INTEGER LocalTime; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v43; // [rsp+50h] [rbp-B8h]
  LARGE_INTEGER Time; // [rsp+58h] [rbp-B0h] BYREF
  LARGE_INTEGER v45; // [rsp+60h] [rbp-A8h] BYREF
  LARGE_INTEGER v46; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v47; // [rsp+70h] [rbp-98h]
  unsigned __int64 Buffer; // [rsp+78h] [rbp-90h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-88h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+88h] [rbp-80h] BYREF
  LARGE_INTEGER v51; // [rsp+90h] [rbp-78h] BYREF
  LARGE_INTEGER v52; // [rsp+98h] [rbp-70h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+A0h] [rbp-68h] BYREF
  ULONG BufferLengthOut; // [rsp+B0h] [rbp-58h] BYREF
  _QWORD Buf2[54]; // [rsp+B8h] [rbp-50h] BYREF
  WCHAR TargetPath[264]; // [rsp+268h] [rbp+160h] BYREF

  memset(Buf2, 0, sizeof(Buf2));
  LOBYTE(v1) = 0;
  SystemTime.QuadPart = 0LL;
  v51.QuadPart = 0LL;
  v3 = 0LL;
  v45.QuadPart = 0LL;
  v4 = 1;
  Buffer = 0LL;
  TimeFields = 0LL;
  LODWORD(v43) = v1;
  CurrentServerSilo = (void *)PsGetCurrentServerSilo();
  v7 = *((_QWORD *)PsGetServerSiloGlobals((__int64)CurrentServerSilo) + 133);
  if ( *(_QWORD *)(v7 + 592) )
  {
    v4 = 0;
  }
  else
  {
    ExpInitializeTimeChangeWorker(
      v7 + 448,
      (KDEFERRED_ROUTINE *)ExpTimeZoneDpcRoutine,
      CurrentServerSilo,
      v6,
      (__int64)CurrentServerSilo);
    ExpInitializeTimeChangeWorker(
      v7 + 768,
      (KDEFERRED_ROUTINE *)ExpNextYearDpcRoutine,
      CurrentServerSilo,
      v8,
      (__int64)CurrentServerSilo);
    ExpInitializeTimeChangeWorker(
      v7 + 608,
      (KDEFERRED_ROUTINE *)ExpCenturyDpcRoutine,
      CurrentServerSilo,
      v9,
      (__int64)CurrentServerSilo);
    *(_OWORD *)(v7 + 944) = 0LL;
    *(_OWORD *)(v7 + 968) = 0LL;
    *(_DWORD *)(v7 + 946) = 65537;
    *(_WORD *)(v7 + 956) = 1;
    *(_DWORD *)(v7 + 970) = 65537;
    *(_WORD *)(v7 + 980) = 1;
  }
  DynamicTimeZoneInformation = 0;
  v11 = 3LL;
  if ( a1 )
  {
    if ( !ExpReadSiloTimeZoneMarker() )
      v3 = PsAttachSiloToCurrentThread(0LL);
    DynamicTimeZoneInformation = RtlQueryDynamicTimeZoneInformation(Buf2);
    if ( v3 )
      PsDetachSiloFromCurrentThread(v3);
  }
  else if ( PsIsCurrentThreadInServerSilo()
         && (SiloTimeZoneMarker = ExpReadSiloTimeZoneMarker(), v18 = Buf2, !SiloTimeZoneMarker) )
  {
    v19 = (_OWORD *)v7;
    v12 = 3LL;
    do
    {
      *v18 = *v19;
      v18[1] = v19[1];
      v18[2] = v19[2];
      v18[3] = v19[3];
      v18[4] = v19[4];
      v18[5] = v19[5];
      v18[6] = v19[6];
      v18 += 8;
      v20 = v19[7];
      v19 += 8;
      *(v18 - 1) = v20;
      --v12;
    }
    while ( v12 );
    *v18 = *v19;
    v18[1] = v19[1];
    v18[2] = v19[2];
  }
  else
  {
    DynamicTimeZoneInformation = RtlQueryDynamicTimeZoneInformation(Buf2);
  }
  if ( DynamicTimeZoneInformation < 0 )
  {
    LOBYTE(v12) = v4;
    ++*(_DWORD *)(v7 + 1000);
    ExpSystemIsInCmosMode = 1;
    ExpLogRefreshTimeZoneInformationQueryFail((unsigned int)DynamicTimeZoneInformation, v12);
    v14 = 0;
    v15 = 1;
LABEL_11:
    EtwTraceTimeZoneInformationRefresh(v15, *(_DWORD *)(v7 + 436), *(_DWORD *)(v7 + 432), v14, v4);
    return 0;
  }
  v21 = MEMORY[0xFFFFF78000000014];
  v22.QuadPart = MEMORY[0xFFFFF78000000014] - *(_QWORD *)(v7 + 440);
  Time = v22;
  if ( !BYTE4(Buf2[53]) )
  {
    if ( WORD2(Buf2[21]) )
    {
      RtlTimeToTimeFields(&Time, &TimeFields);
      if ( (unsigned __int8)RtlpCheckDynamicTimeZoneInformation(Buf2) )
      {
        LOBYTE(v1) = 1;
        LODWORD(v43) = 1;
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
    LODWORD(v43) = v1;
    if ( Handle )
      ZwClose(Handle);
    if ( v1 )
      goto LABEL_28;
  }
LABEL_29:
  v23 = Buf2[0];
  v46.QuadPart = -1LL;
  v52.QuadPart = -1LL;
  LODWORD(v47) = Buf2[0];
  if ( !HIWORD(Buf2[8]) || !WORD1(Buf2[19]) )
  {
    KeCancelTimer((PKTIMER)(v7 + 512));
    v31 = (_DWORD *)(v7 + 432);
    *(_DWORD *)(v7 + 432) = 0;
    v29.QuadPart = 0LL;
    LocalTime.QuadPart = 0LL;
    goto LABEL_52;
  }
  if ( !RtlCutoverTimeToSystemTime((PTIME_FIELDS)((char *)&Buf2[8] + 4), &SystemTime, &Time, v13) )
  {
    LODWORD(v11) = 2;
LABEL_33:
    ++*(_DWORD *)(v7 + 1000);
    ExpSystemIsInCmosMode = 1;
    LOBYTE(v24) = v4;
    ExpLogRefreshTimeZoneInformationCutoverFail(Buf2, v24, &v46, (unsigned int)v11);
    LOBYTE(v14) = v1;
    v15 = v11;
    goto LABEL_11;
  }
  v26 = SystemTime;
  v46 = SystemTime;
  v27 = RtlCutoverTimeToSystemTime((PTIME_FIELDS)&Buf2[19], &v51, &Time, v25);
  v24 = 0LL;
  if ( !v27 )
    goto LABEL_33;
  v52 = v51;
  if ( v22.QuadPart >= v51.QuadPart && v22.QuadPart >= v26.QuadPart )
  {
    LocalTime.QuadPart = 0LL;
    v29.QuadPart = 0LL;
    v30 = (v26.QuadPart <= v51.QuadPart) + 1;
LABEL_43:
    v31 = (_DWORD *)(v7 + 432);
    *(_DWORD *)(v7 + 432) = v30;
    goto LABEL_48;
  }
  if ( v51.QuadPart < v26.QuadPart )
  {
    if ( v22.QuadPart < v51.QuadPart || v22.QuadPart >= v26.QuadPart )
    {
      v29 = v51;
      LocalTime = v51;
      v30 = 1;
    }
    else
    {
      v29 = v26;
      v30 = 2;
      LocalTime = v26;
    }
    goto LABEL_43;
  }
  if ( v22.QuadPart >= v26.QuadPart && v22.QuadPart < v51.QuadPart )
  {
    v29 = v51;
    LocalTime = v51;
    v31 = (_DWORD *)(v7 + 432);
    *(_DWORD *)(v7 + 432) = 1;
LABEL_49:
    v32 = HIDWORD(Buf2[10]);
    goto LABEL_50;
  }
  v29 = v26;
  v31 = (_DWORD *)(v7 + 432);
  LocalTime = v26;
  v30 = 2;
  *(_DWORD *)(v7 + 432) = 2;
LABEL_48:
  v32 = Buf2[21];
  if ( v30 != 2 )
    goto LABEL_49;
LABEL_50:
  v11 = 3LL;
  v23 = v32 + v47;
LABEL_52:
  if ( *(_DWORD *)(v7 + 436) != v23 )
  {
    Buffer = 0xFFFFFFFF00000000uLL;
    ZwUpdateWnfStateData(&WNF_SEB_TIME_ZONE_CHANGE, &Buffer, 8u, 0LL, 0LL, 0, 0);
    EtwTraceTimeZoneBiasChange(v23, *(unsigned int *)(v7 + 436));
  }
  *(_DWORD *)(v7 + 436) = v23;
  v33 = Buf2;
  *(_QWORD *)(v7 + 440) = 10000000LL * (int)(60 * v23);
  v34 = (_OWORD *)v7;
  do
  {
    *v34 = *v33;
    v34[1] = v33[1];
    v34[2] = v33[2];
    v34[3] = v33[3];
    v34[4] = v33[4];
    v34[5] = v33[5];
    v34[6] = v33[6];
    v34 += 8;
    v35 = v33[7];
    v33 += 8;
    *(v34 - 1) = v35;
    --v11;
  }
  while ( v11 );
  v36 = *v33;
  ExpSystemIsInCmosMode = 0;
  *v34 = v36;
  v34[1] = v33[1];
  v34[2] = v33[2];
  RtlSetSystemGlobalData((RTL_SYSTEM_GLOBAL_DATA_ID)v33, v31, v28);
  RtlTimeToTimeFields(&Time, &TimeFields);
  if ( v29.QuadPart )
  {
    ExLocalTimeToSystemTime(&LocalTime, (PLARGE_INTEGER)(v7 + 992));
    KiSetTimerEx(v7 + 512, *(_QWORD *)(v7 + 992), 0, 0, v7 + 448);
  }
  Year = TimeFields.Year;
  *(_WORD *)(v7 + 944) = 100 * (TimeFields.Year / 100 + 1);
  RtlTimeFieldsToTime((PTIME_FIELDS)(v7 + 944), &v45);
  ExLocalTimeToSystemTime(&v45, (PLARGE_INTEGER)(v7 + 936));
  KiSetTimerEx(v7 + 672, *(_QWORD *)(v7 + 936), 0, 0, v7 + 608);
  *(_WORD *)(v7 + 968) = Year + 1;
  RtlTimeFieldsToTime((PTIME_FIELDS)(v7 + 968), &v45);
  ExLocalTimeToSystemTime(&v45, (PLARGE_INTEGER)(v7 + 960));
  KiSetTimerEx(v7 + 832, *(_QWORD *)(v7 + 960), 0, 0, v7 + 768);
  _InterlockedAdd((volatile signed __int32 *)0xFFFFF7800000025CLL, 1u);
  ExpWriteTimeZoneBias((_DWORD *)(v7 + 440));
  if ( LocalTime.QuadPart )
    v38 = *(_QWORD *)(v7 + 992);
  else
    v38 = *(_QWORD *)(v7 + 960) - 10000LL;
  ExpWriteTimeZoneBiasStartEnd(v21, v38);
  _InterlockedAdd((volatile signed __int32 *)0xFFFFF7800000025CLL, 1u);
  if ( !ExpRealTimeIsUniversal )
    RtlSetActiveTimeBias(*(unsigned int *)(v7 + 436));
  v40 = TimeFields.Year;
  if ( TimeFields.Year != *(_WORD *)(v7 + 984) )
  {
    if ( (unsigned __int8)RtlpUpdateDynamicTimeZones((unsigned __int16)TimeFields.Year) )
      *(_WORD *)(v7 + 984) = v40;
  }
  LOBYTE(v39) = v4;
  ExpLogRefreshTimeZoneInformationSuccess(
    (unsigned int)Buf2,
    v39,
    (unsigned int)&v46,
    (unsigned int)&v52,
    (__int64)&LocalTime);
  LOBYTE(v41) = v43;
  EtwTraceTimeZoneInformationRefresh(0, *(_DWORD *)(v7 + 436), *v31, v41, v4);
  return 1;
}
