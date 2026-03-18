/*
 * XREFs of ExpRefreshTimeZoneInformation @ 0x140792C10
 * Callers:
 *     ExpTimeZoneInitSiloState @ 0x1405C9844 (ExpTimeZoneInitSiloState.c)
 *     ExpRefreshSystemTime @ 0x140792748 (ExpRefreshSystemTime.c)
 *     ExpReadLeapSecondData @ 0x140792864 (ExpReadLeapSecondData.c)
 *     NtSetSystemTime @ 0x140948780 (NtSetSystemTime.c)
 *     ExpSetSystemTime @ 0x140995C78 (ExpSetSystemTime.c)
 *     Phase1InitializationDiscard @ 0x140A37B24 (Phase1InitializationDiscard.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140205DF0 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x14026D714 (PsGetServerSiloGlobals.c)
 *     PsDetachSiloFromCurrentThread @ 0x140272080 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402720A0 (PsAttachSiloToCurrentThread.c)
 *     PsGetCurrentServerSilo @ 0x14027D7E0 (PsGetCurrentServerSilo.c)
 *     KiSetTimerEx @ 0x1402C90A0 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x1402C9300 (KeCancelTimer.c)
 *     ExLocalTimeToSystemTime @ 0x1403413B0 (ExLocalTimeToSystemTime.c)
 *     RtlTimeFieldsToTime @ 0x140341780 (RtlTimeFieldsToTime.c)
 *     RtlTimeToTimeFields @ 0x14036C6C0 (RtlTimeToTimeFields.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     Feature_Servicing_CorrectTimeAfterDST_33809459__private_IsEnabled @ 0x1403EC714 (Feature_Servicing_CorrectTimeAfterDST_33809459__private_IsEnabled.c)
 *     RtlSetSystemGlobalData @ 0x1403F2424 (RtlSetSystemGlobalData.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ZwUpdateWnfStateData @ 0x1403F6F80 (ZwUpdateWnfStateData.c)
 *     memset @ 0x14040A280 (memset.c)
 *     ExpInitializeTimeChangeWorker @ 0x1405C9694 (ExpInitializeTimeChangeWorker.c)
 *     ExpReadSiloTimeZoneMarker @ 0x1405C96DC (ExpReadSiloTimeZoneMarker.c)
 *     ExpWriteTimeZoneBias @ 0x1405C9990 (ExpWriteTimeZoneBias.c)
 *     ExpWriteTimeZoneBiasStartEnd @ 0x1405C99E0 (ExpWriteTimeZoneBiasStartEnd.c)
 *     RtlGetPersistedStateLocation @ 0x1405DC980 (RtlGetPersistedStateLocation.c)
 *     RtlpGetRegistryHandle @ 0x1405E1A94 (RtlpGetRegistryHandle.c)
 *     RtlQueryDynamicTimeZoneInformation @ 0x1406C62C0 (RtlQueryDynamicTimeZoneInformation.c)
 *     RtlCutoverTimeToSystemTime @ 0x140793484 (RtlCutoverTimeToSystemTime.c)
 *     EtwTraceTimeZoneInformationRefresh @ 0x1407935F8 (EtwTraceTimeZoneInformationRefresh.c)
 *     ExpLogRefreshTimeZoneInformationSuccess @ 0x1407936EC (ExpLogRefreshTimeZoneInformationSuccess.c)
 *     RtlpUpdateDynamicTimeZones @ 0x140793910 (RtlpUpdateDynamicTimeZones.c)
 *     RtlSetActiveTimeBias @ 0x140793BA8 (RtlSetActiveTimeBias.c)
 *     RtlpCheckDynamicTimeZoneInformation @ 0x140793C50 (RtlpCheckDynamicTimeZoneInformation.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x140911E1C (RtlpSetTimeZoneInformationWorker.c)
 *     EtwTraceTimeZoneBiasChange @ 0x140933198 (EtwTraceTimeZoneBiasChange.c)
 *     ExpLogRefreshTimeZoneInformationCutoverFail @ 0x140948370 (ExpLogRefreshTimeZoneInformationCutoverFail.c)
 *     ExpLogRefreshTimeZoneInformationQueryFail @ 0x140948558 (ExpLogRefreshTimeZoneInformationQueryFail.c)
 *     ExInitializeTimeRefresh @ 0x140A59540 (ExInitializeTimeRefresh.c)
 */

char __fastcall ExpRefreshTimeZoneInformation(char a1)
{
  bool v2; // r15
  struct _LIST_ENTRY *v3; // rdi
  char v4; // r13
  void *CurrentServerSilo; // rbx
  __int64 v6; // r14
  __int64 v7; // r9
  __int64 v8; // r9
  __int64 v9; // r9
  __int64 v10; // r12
  int DynamicTimeZoneInformation; // ebx
  int IsEnabled; // eax
  __int64 v13; // rdx
  bool SiloTimeZoneMarker; // al
  _OWORD *v15; // rcx
  _OWORD *v16; // rax
  __int64 v17; // rdx
  __int128 v18; // xmm1
  int v19; // r9d
  int v20; // ecx
  __int64 v21; // rsi
  LARGE_INTEGER v22; // rbx
  unsigned int v23; // edi
  bool v24; // zf
  __int64 v25; // rdx
  int v26; // r9d
  LARGE_INTEGER v27; // rdi
  int v28; // eax
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
  __int16 v40; // bx
  int v41; // edx
  int v42; // r9d
  char v43; // [rsp+28h] [rbp-E0h]
  char v44; // [rsp+48h] [rbp-C0h]
  LARGE_INTEGER LocalTime; // [rsp+50h] [rbp-B8h] BYREF
  LARGE_INTEGER v46; // [rsp+58h] [rbp-B0h] BYREF
  LARGE_INTEGER Time; // [rsp+60h] [rbp-A8h] BYREF
  LARGE_INTEGER v48; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v49; // [rsp+70h] [rbp-98h]
  unsigned __int64 v50; // [rsp+78h] [rbp-90h] BYREF
  LARGE_INTEGER v51; // [rsp+80h] [rbp-88h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-80h] BYREF
  LARGE_INTEGER v53; // [rsp+90h] [rbp-78h] BYREF
  LARGE_INTEGER v54; // [rsp+98h] [rbp-70h] BYREF
  TIME_FIELDS TimeFields; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v56; // [rsp+B0h] [rbp-58h] BYREF
  _QWORD Buf2[54]; // [rsp+B8h] [rbp-50h] BYREF
  WCHAR v58[264]; // [rsp+268h] [rbp+160h] BYREF

  memset(Buf2, 0, sizeof(Buf2));
  v2 = 0;
  v53.QuadPart = 0LL;
  v44 = 0;
  v54.QuadPart = 0LL;
  v48.QuadPart = 0LL;
  TimeFields = 0LL;
  v50 = 0LL;
  v3 = 0LL;
  v4 = (unsigned int)Feature_Servicing_CorrectTimeAfterDST_33809459__private_IsEnabled() != 0;
  CurrentServerSilo = (void *)PsGetCurrentServerSilo();
  v6 = *((_QWORD *)PsGetServerSiloGlobals((__int64)CurrentServerSilo) + 132);
  if ( *(_QWORD *)(v6 + 592) )
  {
    if ( (unsigned int)Feature_Servicing_CorrectTimeAfterDST_33809459__private_IsEnabled() )
      v4 = 0;
    else
      byte_140C10DC8 = 0;
  }
  else
  {
    if ( !(unsigned int)Feature_Servicing_CorrectTimeAfterDST_33809459__private_IsEnabled() && !qword_140C193E0 )
      ExInitializeTimeRefresh();
    ExpInitializeTimeChangeWorker(
      v6 + 448,
      (KDEFERRED_ROUTINE *)ExpTimeZoneDpcRoutine,
      CurrentServerSilo,
      v7,
      (__int64)CurrentServerSilo);
    ExpInitializeTimeChangeWorker(
      v6 + 768,
      (KDEFERRED_ROUTINE *)ExpNextYearDpcRoutine,
      CurrentServerSilo,
      v8,
      (__int64)CurrentServerSilo);
    ExpInitializeTimeChangeWorker(
      v6 + 608,
      (KDEFERRED_ROUTINE *)ExpCenturyDpcRoutine,
      CurrentServerSilo,
      v9,
      (__int64)CurrentServerSilo);
    *(_OWORD *)(v6 + 944) = 0LL;
    *(_OWORD *)(v6 + 968) = 0LL;
    *(_DWORD *)(v6 + 946) = 65537;
    *(_WORD *)(v6 + 956) = 1;
    *(_DWORD *)(v6 + 970) = 65537;
    *(_WORD *)(v6 + 980) = 1;
  }
  v10 = 3LL;
  if ( a1 )
  {
    if ( !ExpReadSiloTimeZoneMarker() )
      v3 = PsAttachSiloToCurrentThread(0LL);
    DynamicTimeZoneInformation = RtlQueryDynamicTimeZoneInformation(Buf2);
    if ( v3 )
      PsDetachSiloFromCurrentThread(v3);
  }
  else if ( PsIsCurrentThreadInServerSilo()
         && (SiloTimeZoneMarker = ExpReadSiloTimeZoneMarker(), v15 = Buf2, !SiloTimeZoneMarker) )
  {
    v16 = (_OWORD *)v6;
    v17 = 3LL;
    do
    {
      *v15 = *v16;
      v15[1] = v16[1];
      v15[2] = v16[2];
      v15[3] = v16[3];
      v15[4] = v16[4];
      v15[5] = v16[5];
      v15[6] = v16[6];
      v15 += 8;
      v18 = v16[7];
      v16 += 8;
      *(v15 - 1) = v18;
      --v17;
    }
    while ( v17 );
    DynamicTimeZoneInformation = 0;
    *v15 = *v16;
    v15[1] = v16[1];
    v15[2] = v16[2];
  }
  else
  {
    DynamicTimeZoneInformation = RtlQueryDynamicTimeZoneInformation(Buf2);
  }
  if ( DynamicTimeZoneInformation < 0 )
  {
    ++*(_DWORD *)(v6 + 1000);
    ExpSystemIsInCmosMode = 1;
    IsEnabled = Feature_Servicing_CorrectTimeAfterDST_33809459__private_IsEnabled();
    v13 = IsEnabled != 0;
    if ( IsEnabled )
    {
      LOBYTE(v13) = v4;
      ExpLogRefreshTimeZoneInformationQueryFail((unsigned int)DynamicTimeZoneInformation, v13);
      EtwTraceTimeZoneInformationRefresh(1, *(_DWORD *)(v6 + 436), *(_DWORD *)(v6 + 432), 0, v4);
      return 0;
    }
    LODWORD(v13) = (unsigned __int8)byte_140C10DC8;
    ExpLogRefreshTimeZoneInformationQueryFail((unsigned int)DynamicTimeZoneInformation, v13);
    v19 = 0;
    v20 = 1;
    goto LABEL_47;
  }
  v21 = MEMORY[0xFFFFF78000000014];
  v22.QuadPart = MEMORY[0xFFFFF78000000014] - *(_QWORD *)(v6 + 440);
  Time = v22;
  if ( !BYTE4(Buf2[53]) )
  {
    if ( WORD2(Buf2[21]) )
    {
      RtlTimeToTimeFields(&Time, &TimeFields);
      if ( (unsigned __int8)RtlpCheckDynamicTimeZoneInformation(Buf2) )
      {
        v2 = 1;
        v44 = 1;
LABEL_37:
        RtlpSetTimeZoneInformationWorker(Buf2);
        goto LABEL_38;
      }
    }
  }
  if ( ((unsigned int)Feature_Servicing_CorrectTimeAfterDST_33809459__private_IsEnabled() && v4
     || !(unsigned int)Feature_Servicing_CorrectTimeAfterDST_33809459__private_IsEnabled() && byte_140C10DC8)
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
    v2 = (unsigned int)RtlpGetRegistryHandle(0, v58, 0, &Handle) == -1073741772;
    v44 = v2;
    if ( Handle )
      ZwClose(Handle);
    if ( v2 )
      goto LABEL_37;
  }
LABEL_38:
  v23 = Buf2[0];
  v46.QuadPart = -1LL;
  v51.QuadPart = -1LL;
  LODWORD(v49) = Buf2[0];
  if ( !HIWORD(Buf2[8]) || !WORD1(Buf2[19]) )
  {
    KeCancelTimer((PKTIMER)(v6 + 512));
    v32 = (_DWORD *)(v6 + 432);
    *(_DWORD *)(v6 + 432) = 0;
    v30.QuadPart = 0LL;
    LocalTime.QuadPart = 0LL;
    goto LABEL_66;
  }
  if ( !(unsigned __int8)RtlCutoverTimeToSystemTime((PTIME_FIELDS)((char *)&Buf2[8] + 4), &v53, &Time) )
  {
    ++*(_DWORD *)(v6 + 1000);
    ExpSystemIsInCmosMode = 1;
    LODWORD(v10) = 2;
    v24 = (unsigned int)Feature_Servicing_CorrectTimeAfterDST_33809459__private_IsEnabled() == 0;
LABEL_42:
    if ( !v24 )
    {
      LOBYTE(v25) = v4;
      ExpLogRefreshTimeZoneInformationCutoverFail(Buf2, v25, &v46, (unsigned int)v10);
      LOBYTE(v26) = v2;
      EtwTraceTimeZoneInformationRefresh(v10, *(_DWORD *)(v6 + 436), *(_DWORD *)(v6 + 432), v26, v4);
      return 0;
    }
    LOBYTE(v25) = byte_140C10DC8;
    ExpLogRefreshTimeZoneInformationCutoverFail(Buf2, v25, &v46, (unsigned int)v10);
    v20 = v10;
    LOBYTE(v19) = v2;
LABEL_47:
    EtwTraceTimeZoneInformationRefresh(v20, *(_DWORD *)(v6 + 436), *(_DWORD *)(v6 + 432), v19, byte_140C10DC8);
    return 0;
  }
  v27 = v53;
  v46 = v53;
  if ( !(unsigned __int8)RtlCutoverTimeToSystemTime((PTIME_FIELDS)&Buf2[19], &v54, &Time) )
  {
    ++*(_DWORD *)(v6 + 1000);
    ExpSystemIsInCmosMode = 1;
    v28 = Feature_Servicing_CorrectTimeAfterDST_33809459__private_IsEnabled();
    v25 = v28 != 0;
    v24 = v28 == 0;
    goto LABEL_42;
  }
  v51 = v54;
  if ( v22.QuadPart >= v54.QuadPart && v22.QuadPart >= v27.QuadPart )
  {
    LocalTime.QuadPart = 0LL;
    v30.QuadPart = 0LL;
    v31 = (v27.QuadPart <= v54.QuadPart) + 1;
LABEL_57:
    v32 = (_DWORD *)(v6 + 432);
    *(_DWORD *)(v6 + 432) = v31;
    goto LABEL_62;
  }
  if ( v54.QuadPart < v27.QuadPart )
  {
    if ( v22.QuadPart < v54.QuadPart || v22.QuadPart >= v27.QuadPart )
    {
      v30 = v54;
      LocalTime = v54;
      v31 = 1;
    }
    else
    {
      v30 = v27;
      v31 = 2;
      LocalTime = v27;
    }
    goto LABEL_57;
  }
  if ( v22.QuadPart >= v27.QuadPart && v22.QuadPart < v54.QuadPart )
  {
    v30 = v54;
    LocalTime = v54;
    v32 = (_DWORD *)(v6 + 432);
    *(_DWORD *)(v6 + 432) = 1;
LABEL_63:
    v33 = HIDWORD(Buf2[10]);
    goto LABEL_64;
  }
  v30 = v27;
  v32 = (_DWORD *)(v6 + 432);
  LocalTime = v27;
  v31 = 2;
  *(_DWORD *)(v6 + 432) = 2;
LABEL_62:
  v33 = Buf2[21];
  if ( v31 != 2 )
    goto LABEL_63;
LABEL_64:
  v10 = 3LL;
  v23 = v33 + v49;
LABEL_66:
  if ( *(_DWORD *)(v6 + 436) != v23 )
  {
    v50 = 0xFFFFFFFF00000000uLL;
    ZwUpdateWnfStateData((__int64)&WNF_SEB_TIME_ZONE_CHANGE, (__int64)&v50);
    EtwTraceTimeZoneBiasChange(v23, *(unsigned int *)(v6 + 436));
  }
  *(_DWORD *)(v6 + 436) = v23;
  v34 = Buf2;
  *(_QWORD *)(v6 + 440) = 10000000LL * (int)(60 * v23);
  v35 = (_OWORD *)v6;
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
    --v10;
  }
  while ( v10 );
  v37 = *v34;
  ExpSystemIsInCmosMode = 0;
  *v35 = v37;
  v35[1] = v34[1];
  v35[2] = v34[2];
  RtlSetSystemGlobalData((__int64)v34, v32);
  RtlTimeToTimeFields(&Time, &TimeFields);
  if ( v30.QuadPart )
  {
    ExLocalTimeToSystemTime(&LocalTime, (PLARGE_INTEGER)(v6 + 992));
    KiSetTimerEx(v6 + 512, *(_QWORD *)(v6 + 992), 0, 0, v6 + 448);
  }
  Year = TimeFields.Year;
  *(_WORD *)(v6 + 944) = 100 * (TimeFields.Year / 100 + 1);
  RtlTimeFieldsToTime((PTIME_FIELDS)(v6 + 944), &v48);
  ExLocalTimeToSystemTime(&v48, (PLARGE_INTEGER)(v6 + 936));
  KiSetTimerEx(v6 + 672, *(_QWORD *)(v6 + 936), 0, 0, v6 + 608);
  *(_WORD *)(v6 + 968) = Year + 1;
  RtlTimeFieldsToTime((PTIME_FIELDS)(v6 + 968), &v48);
  ExLocalTimeToSystemTime(&v48, (PLARGE_INTEGER)(v6 + 960));
  KiSetTimerEx(v6 + 832, *(_QWORD *)(v6 + 960), 0, 0, v6 + 768);
  _InterlockedAdd((volatile signed __int32 *)0xFFFFF7800000025CLL, 1u);
  ExpWriteTimeZoneBias((_DWORD *)(v6 + 440));
  if ( LocalTime.QuadPart )
    v39 = *(_QWORD *)(v6 + 992);
  else
    v39 = *(_QWORD *)(v6 + 960) - 10000LL;
  ExpWriteTimeZoneBiasStartEnd(v21, v39);
  _InterlockedAdd((volatile signed __int32 *)0xFFFFF7800000025CLL, 1u);
  if ( !ExpRealTimeIsUniversal )
    RtlSetActiveTimeBias(*(unsigned int *)(v6 + 436));
  v40 = TimeFields.Year;
  if ( TimeFields.Year != *(_WORD *)(v6 + 984)
    && (unsigned __int8)RtlpUpdateDynamicTimeZones((unsigned __int16)TimeFields.Year) )
  {
    *(_WORD *)(v6 + 984) = v40;
  }
  if ( (unsigned int)Feature_Servicing_CorrectTimeAfterDST_33809459__private_IsEnabled() )
  {
    LOBYTE(v41) = v4;
    ExpLogRefreshTimeZoneInformationSuccess(
      (unsigned int)Buf2,
      v41,
      (unsigned int)&v46,
      (unsigned int)&v51,
      (__int64)&LocalTime);
    v43 = v4;
  }
  else
  {
    LOBYTE(v41) = byte_140C10DC8;
    ExpLogRefreshTimeZoneInformationSuccess(
      (unsigned int)Buf2,
      v41,
      (unsigned int)&v46,
      (unsigned int)&v51,
      (__int64)&LocalTime);
    v43 = byte_140C10DC8;
  }
  LOBYTE(v42) = v44;
  EtwTraceTimeZoneInformationRefresh(0, *(_DWORD *)(v6 + 436), *v32, v42, v43);
  return 1;
}
