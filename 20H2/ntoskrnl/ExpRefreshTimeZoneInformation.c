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
  int v13; // r9d
  int v14; // ecx
  bool SiloTimeZoneMarker; // al
  _OWORD *v17; // rcx
  _OWORD *v18; // rax
  __int128 v19; // xmm1
  __int64 v20; // rsi
  LARGE_INTEGER v21; // rbx
  unsigned int v22; // edi
  __int64 v23; // rdx
  LARGE_INTEGER v24; // rdi
  char v25; // al
  LARGE_INTEGER v26; // rbx
  int v27; // ecx
  _DWORD *v28; // r15
  int v29; // eax
  _OWORD *v30; // rcx
  _OWORD *v31; // rax
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int16 Year; // di
  __int64 v35; // rdx
  int v36; // edx
  __int16 v37; // bx
  int v38; // r9d
  LARGE_INTEGER LocalTime; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v40; // [rsp+50h] [rbp-B8h]
  LARGE_INTEGER Time; // [rsp+58h] [rbp-B0h] BYREF
  LARGE_INTEGER v42; // [rsp+60h] [rbp-A8h] BYREF
  LARGE_INTEGER v43; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v44; // [rsp+70h] [rbp-98h]
  unsigned __int64 v45; // [rsp+78h] [rbp-90h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-88h] BYREF
  LARGE_INTEGER v47; // [rsp+88h] [rbp-80h] BYREF
  LARGE_INTEGER v48; // [rsp+90h] [rbp-78h] BYREF
  LARGE_INTEGER v49; // [rsp+98h] [rbp-70h] BYREF
  TIME_FIELDS TimeFields; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v51; // [rsp+B0h] [rbp-58h] BYREF
  _QWORD Buf2[54]; // [rsp+B8h] [rbp-50h] BYREF
  WCHAR v53[264]; // [rsp+268h] [rbp+160h] BYREF

  memset(Buf2, 0, sizeof(Buf2));
  LOBYTE(v1) = 0;
  v47.QuadPart = 0LL;
  v48.QuadPart = 0LL;
  v3 = 0LL;
  v42.QuadPart = 0LL;
  v4 = 1;
  v45 = 0LL;
  TimeFields = 0LL;
  LODWORD(v40) = v1;
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
         && (SiloTimeZoneMarker = ExpReadSiloTimeZoneMarker(), v17 = Buf2, !SiloTimeZoneMarker) )
  {
    v18 = (_OWORD *)v7;
    v12 = 3LL;
    do
    {
      *v17 = *v18;
      v17[1] = v18[1];
      v17[2] = v18[2];
      v17[3] = v18[3];
      v17[4] = v18[4];
      v17[5] = v18[5];
      v17[6] = v18[6];
      v17 += 8;
      v19 = v18[7];
      v18 += 8;
      *(v17 - 1) = v19;
      --v12;
    }
    while ( v12 );
    *v17 = *v18;
    v17[1] = v18[1];
    v17[2] = v18[2];
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
    v13 = 0;
    v14 = 1;
LABEL_11:
    EtwTraceTimeZoneInformationRefresh(v14, *(_DWORD *)(v7 + 436), *(_DWORD *)(v7 + 432), v13, v4);
    return 0;
  }
  v20 = MEMORY[0xFFFFF78000000014];
  v21.QuadPart = MEMORY[0xFFFFF78000000014] - *(_QWORD *)(v7 + 440);
  Time = v21;
  if ( !BYTE4(Buf2[53]) )
  {
    if ( WORD2(Buf2[21]) )
    {
      RtlTimeToTimeFields(&Time, &TimeFields);
      if ( (unsigned __int8)RtlpCheckDynamicTimeZoneInformation(Buf2) )
      {
        LOBYTE(v1) = 1;
        LODWORD(v40) = 1;
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
              v53,
              0x208u,
              (unsigned int *)&v51) >= 0 )
  {
    Handle = 0LL;
    v1 = RtlpGetRegistryHandle(0, v53, 0, &Handle) == -1073741772;
    LODWORD(v40) = v1;
    if ( Handle )
      ZwClose(Handle);
    if ( v1 )
      goto LABEL_28;
  }
LABEL_29:
  v22 = Buf2[0];
  v43.QuadPart = -1LL;
  v49.QuadPart = -1LL;
  LODWORD(v44) = Buf2[0];
  if ( !HIWORD(Buf2[8]) || !WORD1(Buf2[19]) )
  {
    KeCancelTimer((PKTIMER)(v7 + 512));
    v28 = (_DWORD *)(v7 + 432);
    *(_DWORD *)(v7 + 432) = 0;
    v26.QuadPart = 0LL;
    LocalTime.QuadPart = 0LL;
    goto LABEL_52;
  }
  if ( !(unsigned __int8)RtlCutoverTimeToSystemTime((PTIME_FIELDS)((char *)&Buf2[8] + 4), &v47, &Time) )
  {
    LODWORD(v11) = 2;
LABEL_33:
    ++*(_DWORD *)(v7 + 1000);
    ExpSystemIsInCmosMode = 1;
    LOBYTE(v23) = v4;
    ExpLogRefreshTimeZoneInformationCutoverFail(Buf2, v23, &v43, (unsigned int)v11);
    LOBYTE(v13) = v1;
    v14 = v11;
    goto LABEL_11;
  }
  v24 = v47;
  v43 = v47;
  v25 = RtlCutoverTimeToSystemTime((PTIME_FIELDS)&Buf2[19], &v48, &Time);
  v23 = 0LL;
  if ( !v25 )
    goto LABEL_33;
  v49 = v48;
  if ( v21.QuadPart >= v48.QuadPart && v21.QuadPart >= v24.QuadPart )
  {
    LocalTime.QuadPart = 0LL;
    v26.QuadPart = 0LL;
    v27 = (v24.QuadPart <= v48.QuadPart) + 1;
LABEL_43:
    v28 = (_DWORD *)(v7 + 432);
    *(_DWORD *)(v7 + 432) = v27;
    goto LABEL_48;
  }
  if ( v48.QuadPart < v24.QuadPart )
  {
    if ( v21.QuadPart < v48.QuadPart || v21.QuadPart >= v24.QuadPart )
    {
      v26 = v48;
      LocalTime = v48;
      v27 = 1;
    }
    else
    {
      v26 = v24;
      v27 = 2;
      LocalTime = v24;
    }
    goto LABEL_43;
  }
  if ( v21.QuadPart >= v24.QuadPart && v21.QuadPart < v48.QuadPart )
  {
    v26 = v48;
    LocalTime = v48;
    v28 = (_DWORD *)(v7 + 432);
    *(_DWORD *)(v7 + 432) = 1;
LABEL_49:
    v29 = HIDWORD(Buf2[10]);
    goto LABEL_50;
  }
  v26 = v24;
  v28 = (_DWORD *)(v7 + 432);
  LocalTime = v24;
  v27 = 2;
  *(_DWORD *)(v7 + 432) = 2;
LABEL_48:
  v29 = Buf2[21];
  if ( v27 != 2 )
    goto LABEL_49;
LABEL_50:
  v11 = 3LL;
  v22 = v29 + v44;
LABEL_52:
  if ( *(_DWORD *)(v7 + 436) != v22 )
  {
    v45 = 0xFFFFFFFF00000000uLL;
    ZwUpdateWnfStateData((__int64)&WNF_SEB_TIME_ZONE_CHANGE, (__int64)&v45);
    EtwTraceTimeZoneBiasChange(v22, *(unsigned int *)(v7 + 436));
  }
  *(_DWORD *)(v7 + 436) = v22;
  v30 = Buf2;
  *(_QWORD *)(v7 + 440) = 10000000LL * (int)(60 * v22);
  v31 = (_OWORD *)v7;
  do
  {
    *v31 = *v30;
    v31[1] = v30[1];
    v31[2] = v30[2];
    v31[3] = v30[3];
    v31[4] = v30[4];
    v31[5] = v30[5];
    v31[6] = v30[6];
    v31 += 8;
    v32 = v30[7];
    v30 += 8;
    *(v31 - 1) = v32;
    --v11;
  }
  while ( v11 );
  v33 = *v30;
  ExpSystemIsInCmosMode = 0;
  *v31 = v33;
  v31[1] = v30[1];
  v31[2] = v30[2];
  RtlSetSystemGlobalData((__int64)v30, v28);
  RtlTimeToTimeFields(&Time, &TimeFields);
  if ( v26.QuadPart )
  {
    ExLocalTimeToSystemTime(&LocalTime, (PLARGE_INTEGER)(v7 + 992));
    KiSetTimerEx(v7 + 512, *(_QWORD *)(v7 + 992), 0, 0, v7 + 448);
  }
  Year = TimeFields.Year;
  *(_WORD *)(v7 + 944) = 100 * (TimeFields.Year / 100 + 1);
  RtlTimeFieldsToTime((PTIME_FIELDS)(v7 + 944), &v42);
  ExLocalTimeToSystemTime(&v42, (PLARGE_INTEGER)(v7 + 936));
  KiSetTimerEx(v7 + 672, *(_QWORD *)(v7 + 936), 0, 0, v7 + 608);
  *(_WORD *)(v7 + 968) = Year + 1;
  RtlTimeFieldsToTime((PTIME_FIELDS)(v7 + 968), &v42);
  ExLocalTimeToSystemTime(&v42, (PLARGE_INTEGER)(v7 + 960));
  KiSetTimerEx(v7 + 832, *(_QWORD *)(v7 + 960), 0, 0, v7 + 768);
  _InterlockedAdd((volatile signed __int32 *)0xFFFFF7800000025CLL, 1u);
  ExpWriteTimeZoneBias((_DWORD *)(v7 + 440));
  if ( LocalTime.QuadPart )
    v35 = *(_QWORD *)(v7 + 992);
  else
    v35 = *(_QWORD *)(v7 + 960) - 10000LL;
  ExpWriteTimeZoneBiasStartEnd(v20, v35);
  _InterlockedAdd((volatile signed __int32 *)0xFFFFF7800000025CLL, 1u);
  if ( !ExpRealTimeIsUniversal )
    RtlSetActiveTimeBias(*(unsigned int *)(v7 + 436));
  v37 = TimeFields.Year;
  if ( TimeFields.Year != *(_WORD *)(v7 + 984) )
  {
    if ( (unsigned __int8)RtlpUpdateDynamicTimeZones((unsigned __int16)TimeFields.Year) )
      *(_WORD *)(v7 + 984) = v37;
  }
  LOBYTE(v36) = v4;
  ExpLogRefreshTimeZoneInformationSuccess(
    (unsigned int)Buf2,
    v36,
    (unsigned int)&v43,
    (unsigned int)&v49,
    (__int64)&LocalTime);
  LOBYTE(v38) = v40;
  EtwTraceTimeZoneInformationRefresh(0, *(_DWORD *)(v7 + 436), *v28, v38, v4);
  return 1;
}
