/*
 * XREFs of Phase1InitializationDiscard @ 0x140A3B6A4
 * Callers:
 *     Phase1Initialization @ 0x1407B3AA0 (Phase1Initialization.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022C340 (KeQueryPerformanceCounter.c)
 *     RtlInitAnsiString @ 0x1402502B0 (RtlInitAnsiString.c)
 *     KeSetPriorityThread @ 0x140257AE0 (KeSetPriorityThread.c)
 *     RtlInitUnicodeString @ 0x14027C520 (RtlInitUnicodeString.c)
 *     ExLocalTimeToSystemTime @ 0x1402B5530 (ExLocalTimeToSystemTime.c)
 *     RtlTimeFieldsToTime @ 0x1402B5900 (RtlTimeFieldsToTime.c)
 *     ExSystemTimeToLocalTime @ 0x1402D3270 (ExSystemTimeToLocalTime.c)
 *     RtlStringCbCopyA @ 0x1402D6260 (RtlStringCbCopyA.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140362150 (PsGetCurrentServerSiloGlobals.c)
 *     RtlTimeToTimeFields @ 0x14036E9A0 (RtlTimeToTimeFields.c)
 *     PoNotifySystemTimeSet @ 0x1403A7804 (PoNotifySystemTimeSet.c)
 *     KeSetSystemTime @ 0x1403A7A48 (KeSetSystemTime.c)
 *     InbvDisplayString @ 0x1403AD5A0 (InbvDisplayString.c)
 *     RtlStringCbPrintfA @ 0x1403AD5C4 (RtlStringCbPrintfA.c)
 *     DisplayBootBitmap @ 0x1403B4D50 (DisplayBootBitmap.c)
 *     MakeGdtReadOnly @ 0x1403B4F30 (MakeGdtReadOnly.c)
 *     FsRtlSendModernAppTermination @ 0x1403C04B0 (FsRtlSendModernAppTermination.c)
 *     KeSetAffinityProcess @ 0x1403CB2CC (KeSetAffinityProcess.c)
 *     HvlDebuggerSupportInitialize @ 0x1403CFB90 (HvlDebuggerSupportInitialize.c)
 *     HvlWnfUpdateStartupState @ 0x1403D02F0 (HvlWnfUpdateStartupState.c)
 *     InbvEnableDisplayString @ 0x1403D0380 (InbvEnableDisplayString.c)
 *     InbvInstallDisplayStringFilter @ 0x1403D0400 (InbvInstallDisplayStringFilter.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     _strupr @ 0x1403D1020 (_strupr.c)
 *     strtoul @ 0x1403D1500 (strtoul.c)
 *     strncmp @ 0x1403D1540 (strncmp.c)
 *     _strtoui64 @ 0x1403D1850 (_strtoui64.c)
 *     strstr @ 0x1403D1880 (strstr.c)
 *     atol @ 0x1403D1920 (atol.c)
 *     ZwClose @ 0x1403FA580 (ZwClose.c)
 *     ZwCreateSection @ 0x1403FACE0 (ZwCreateSection.c)
 *     ZwQueryLicenseValue @ 0x1403FCE20 (ZwQueryLicenseValue.c)
 *     ZwSetSystemTime @ 0x1403FD960 (ZwSetSystemTime.c)
 *     ZwUpdateWnfStateData @ 0x1403FDDA0 (ZwUpdateWnfStateData.c)
 *     KeBugCheck @ 0x1403FDED0 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     memmove @ 0x140413F40 (memmove.c)
 *     memset @ 0x140414200 (memset.c)
 *     RtlStringCbPrintfExA @ 0x1404B6184 (RtlStringCbPrintfExA.c)
 *     RtlInitializeCompression @ 0x1405853E4 (RtlInitializeCompression.c)
 *     ExpWriteTimeZoneBias @ 0x1405D1CC8 (ExpWriteTimeZoneBias.c)
 *     RtlFindMessage @ 0x14068D900 (RtlFindMessage.c)
 *     MmMapViewInSystemSpace @ 0x1406BF880 (MmMapViewInSystemSpace.c)
 *     ExReleaseTimeRefreshLock @ 0x1406DBCF0 (ExReleaseTimeRefreshLock.c)
 *     ExAcquireTimeRefreshLock @ 0x1406DBD14 (ExAcquireTimeRefreshLock.c)
 *     ObReferenceObjectByHandle @ 0x1406F0BC0 (ObReferenceObjectByHandle.c)
 *     ExInitializeLeapSecondData @ 0x1407A8EAC (ExInitializeLeapSecondData.c)
 *     ExpRefreshTimeZoneInformation @ 0x1407A9554 (ExpRefreshTimeZoneInformation.c)
 *     RtlInitNlsTables @ 0x1407CC814 (RtlInitNlsTables.c)
 *     RtlResetRtlTranslations @ 0x1407CFDA4 (RtlResetRtlTranslations.c)
 *     ExInitializeUtcTimeZoneBias @ 0x1407D4B40 (ExInitializeUtcTimeZoneBias.c)
 *     ExInitLicenseCallback @ 0x1407D4EA8 (ExInitLicenseCallback.c)
 *     IopInitializeBootLogging @ 0x140891718 (IopInitializeBootLogging.c)
 *     HalInitSystem @ 0x14099C050 (HalInitSystem.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 *     KdInitSystem @ 0x1409B5160 (KdInitSystem.c)
 *     BgGetDisplayContext @ 0x1409F1028 (BgGetDisplayContext.c)
 *     HalReportResourceUsage @ 0x140A3CE50 (HalReportResourceUsage.c)
 *     CcInitializeCacheManager @ 0x140A3D1B8 (CcInitializeCacheManager.c)
 *     IoCreateObjectTypes @ 0x140A3D6D8 (IoCreateObjectTypes.c)
 *     ObInitSystem @ 0x140A3E538 (ObInitSystem.c)
 *     PoInitSystem @ 0x140A3F948 (PoInitSystem.c)
 *     ExInitSystemPhase2 @ 0x140A41BB4 (ExInitSystemPhase2.c)
 *     EmInitSystem @ 0x140A4528C (EmInitSystem.c)
 *     SeInitSystem @ 0x140A478EC (SeInitSystem.c)
 *     VmInitSystem @ 0x140A47B1C (VmInitSystem.c)
 *     SmInitSystem @ 0x140A4B43C (SmInitSystem.c)
 *     KeInitializeClock @ 0x140A4B7CC (KeInitializeClock.c)
 *     PsInitSystem @ 0x140A4C2F8 (PsInitSystem.c)
 *     KeInitSystem @ 0x140A4C33C (KeInitSystem.c)
 *     KePerformGroupConfiguration @ 0x140A4D3D8 (KePerformGroupConfiguration.c)
 *     KeStartAllProcessors @ 0x140A4D568 (KeStartAllProcessors.c)
 *     MmInitSystem @ 0x140A53D6C (MmInitSystem.c)
 *     CmInitSystem1 @ 0x140A59F78 (CmInitSystem1.c)
 *     ExInitializeTimeRefresh @ 0x140A5B1EC (ExInitializeTimeRefresh.c)
 *     ExInitSystem @ 0x140A68944 (ExInitSystem.c)
 *     PfInitializeSuperfetch @ 0x140A6A76C (PfInitializeSuperfetch.c)
 *     ExpComputeCyclesPerYield @ 0x140A6B1A0 (ExpComputeCyclesPerYield.c)
 *     InbvDriverInitialize @ 0x140A6B590 (InbvDriverInitialize.c)
 *     FsRtlInitSystem @ 0x140A6B9E0 (FsRtlInitSystem.c)
 *     DbgkInitialize @ 0x140A6D4AC (DbgkInitialize.c)
 *     CreateSystemRootLink @ 0x140A6F6AC (CreateSystemRootLink.c)
 *     VerifierInitSystem @ 0x140A6FA84 (VerifierInitSystem.c)
 *     LpcInitSystem @ 0x140A6FDDC (LpcInitSystem.c)
 *     SeCodeIntegrityInitializePolicy @ 0x140A70758 (SeCodeIntegrityInitializePolicy.c)
 *     GetBootSystemTime @ 0x140A7182C (GetBootSystemTime.c)
 *     InitSkuSessionParameters @ 0x140A71D04 (InitSkuSessionParameters.c)
 *     PpInitSystem @ 0x140A72804 (PpInitSystem.c)
 *     BcdInitializeBcdSyncMutant @ 0x140A73808 (BcdInitializeBcdSyncMutant.c)
 *     MfgInitSystem @ 0x140A73924 (MfgInitSystem.c)
 *     ExInitializeExternalBootSupport @ 0x140A73BEC (ExInitializeExternalBootSupport.c)
 *     ExInitializeNls @ 0x140A73EC4 (ExInitializeNls.c)
 *     HalAllProcessorsStarted @ 0x140A74130 (HalAllProcessorsStarted.c)
 *     VslGetKsrContext @ 0x140A74248 (VslGetKsrContext.c)
 *     CreateMiniNtBootKey @ 0x140A8C0B0 (CreateMiniNtBootKey.c)
 *     RtlInitializeRangeListPackage @ 0x140A936EC (RtlInitializeRangeListPackage.c)
 *     BgkDisplayProgressIndicator @ 0x140A95DDC (BgkDisplayProgressIndicator.c)
 *     BgkDisplayBackgroundUpdate @ 0x140A969D4 (BgkDisplayBackgroundUpdate.c)
 */

char __fastcall Phase1InitializationDiscard(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  __int64 v3; // r12
  char *PoolWithTag; // r13
  struct _KTHREAD *CurrentThread; // rcx
  char *v6; // rcx
  char *v7; // rdi
  char *v8; // rax
  char *v9; // rax
  char *v10; // rax
  char *v11; // rbx
  __int16 v12; // ax
  int v13; // edx
  char v14; // al
  char *v15; // rax
  char *v16; // rax
  const char *v17; // rbx
  __int64 v18; // rsi
  char v19; // al
  int Message; // eax
  NTSTRSAFE_PSTR v21; // rbx
  int v22; // r15d
  NTSTATUS v23; // eax
  size_t v24; // rsi
  char *v25; // rbx
  NTSTATUS v26; // eax
  NTSTATUS v27; // eax
  NTSTATUS v28; // eax
  int v29; // esi
  _OWORD *v30; // rax
  char *v31; // rcx
  __int64 v32; // rdx
  __int128 v33; // xmm1
  int v34; // eax
  __int64 v35; // rdx
  char *v36; // rax
  char *v37; // rax
  __int16 v38; // bx
  char *v39; // rax
  char *v40; // rax
  char *v41; // rax
  char *v42; // rax
  char *v43; // rax
  char *v44; // rax
  char *v45; // rax
  char *v46; // rax
  char *v47; // rax
  char *v48; // rax
  __int64 v49; // rcx
  const char *v50; // rbx
  unsigned int v51; // r9d
  int v52; // eax
  __int64 v53; // r9
  __int64 v54; // rdx
  _QWORD *v55; // rcx
  NTSTATUS v56; // eax
  __int64 v57; // r8
  __int64 v58; // r9
  int inited; // eax
  int v60; // eax
  __int64 v61; // rdx
  __int64 v62; // rcx
  int SystemRootLink; // eax
  NTSTATUS v64; // eax
  NTSTATUS v65; // eax
  ULONG_PTR v66; // rbx
  NTSTATUS v67; // eax
  PVOID v68; // rbx
  char *v69; // r8
  USHORT *v70; // rdx
  USHORT *v71; // rcx
  int v72; // eax
  __int128 *DisplayContext; // rax
  ULONG_PTR v74; // rbx
  int v75; // eax
  int v76; // eax
  int v77; // eax
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  int v81; // ebx
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  char *v98; // rbx
  char *v99; // r12
  __int64 v100; // rdi
  const char *v101; // rbx
  int v102; // eax
  unsigned int v103; // r9d
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r8
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r8
  int v110; // eax
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // r8
  int v114; // eax
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // r8
  int v118; // eax
  __int64 v119; // r8
  ULONG dwFlags[2]; // [rsp+20h] [rbp-E0h]
  char v122; // [rsp+40h] [rbp-C0h]
  LARGE_INTEGER Time; // [rsp+48h] [rbp-B8h] BYREF
  int v124; // [rsp+50h] [rbp-B0h]
  ULONG_PTR BugCheckParameter4; // [rsp+58h] [rbp-A8h] BYREF
  int v126; // [rsp+60h] [rbp-A0h]
  int v127; // [rsp+64h] [rbp-9Ch] BYREF
  LARGE_INTEGER LocalTime; // [rsp+68h] [rbp-98h] BYREF
  int v129; // [rsp+70h] [rbp-90h] BYREF
  char *EndPtr; // [rsp+78h] [rbp-88h] BYREF
  size_t pcbRemaining; // [rsp+80h] [rbp-80h] BYREF
  NTSTRSAFE_PSTR ppszDestEnd; // [rsp+88h] [rbp-78h] BYREF
  HANDLE SectionHandle; // [rsp+90h] [rbp-70h] BYREF
  __int64 v134; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int16 *v135; // [rsp+A0h] [rbp-60h] BYREF
  LARGE_INTEGER MaximumSize; // [rsp+A8h] [rbp-58h] BYREF
  PVOID Object; // [rsp+B0h] [rbp-50h] BYREF
  PVOID MappedBase; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int16 *v139; // [rsp+C0h] [rbp-40h] BYREF
  STRING v140; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v141; // [rsp+D8h] [rbp-28h]
  ULONG_PTR ViewSize; // [rsp+E0h] [rbp-20h] BYREF
  TIME_FIELDS TimeFields; // [rsp+E8h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+F8h] [rbp-8h] BYREF
  _QWORD v145[10]; // [rsp+110h] [rbp+10h] BYREF
  char pszDest[24]; // [rsp+160h] [rbp+60h] BYREF

  Time.QuadPart = 0LL;
  LocalTime.QuadPart = 0LL;
  v134 = 0LL;
  v140 = 0LL;
  SectionHandle = 0LL;
  MaximumSize.QuadPart = 0LL;
  BugCheckParameter4 = 0LL;
  v135 = 0LL;
  TimeFields = 0LL;
  LOBYTE(v124) = 0;
  v126 = 0;
  v127 = 0;
  DestinationString = 0LL;
  v3 = *((_QWORD *)PsGetCurrentServerSiloGlobals(BugCheckParameter3, a2) + 133);
  v141 = v3;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x200uLL, 0x74696E49u);
  if ( !PoolWithTag )
    KeBugCheck(0x31u);
  CurrentThread = KeGetCurrentThread();
  LODWORD(InitializationPhase) = 1;
  v122 = 0;
  KeSetPriorityThread(CurrentThread, 31);
  v6 = *(char **)(BugCheckParameter3 + 216);
  if ( v6 )
    v7 = strupr(v6);
  else
    v7 = 0LL;
  if ( v7 )
  {
    v8 = strstr(v7, " HYPERVISORROOTPROC=");
    if ( v8 )
    {
      v9 = strstr(v8, "=");
      if ( v9 )
        KeRootProcSpecified = atol(v9 + 1);
    }
    v10 = strstr(v7, " HYPERVISORROOTPROCNUMANODES=");
    if ( v10 )
    {
      v11 = strstr(v10, "=");
      if ( v11 )
      {
        do
        {
          if ( (unsigned int)KeRootProcNumaNodesSpecified >= 0x40 )
            break;
          v12 = atol(++v11);
          v13 = KeRootProcNumaNodesSpecified;
          KeRootProcNumaNodes[KeRootProcNumaNodesSpecified] = v12;
          KeRootProcNumaNodesSpecified = v13 + 1;
          while ( 1 )
          {
            v14 = *v11;
            if ( *v11 == 44 )
              break;
            if ( v14 == 32 )
              goto LABEL_19;
            if ( !v14 )
              break;
            ++v11;
          }
        }
        while ( v14 != 32 && v14 );
      }
    }
LABEL_19:
    v15 = strstr(v7, " HYPERVISORROOTPROCNUMANODELPS=");
    if ( v15 )
    {
      v16 = strstr(v15, "=");
      KeRootProcNumaNodeLpsSpecified = 1;
      v17 = v16;
      KeRootProcNumaNodesSpecified = 0;
      KeRootProcSpecified = 0;
      if ( v16 )
      {
        do
        {
          ++v17;
          EndPtr = 0LL;
          v18 = strtoul(v17, &EndPtr, 10);
          if ( v17 != EndPtr && *EndPtr == 61 && (unsigned int)v18 < 0x40 )
          {
            v17 = EndPtr + 1;
            KeRootProcNumaNodeLps[v18] = strtoui64(EndPtr + 1, &EndPtr, 16);
          }
          while ( 1 )
          {
            v19 = *v17;
            if ( *v17 == 44 )
              break;
            if ( v19 == 32 )
              goto LABEL_31;
            if ( !v19 )
              break;
            ++v17;
          }
        }
        while ( v19 != 32 && v19 );
LABEL_31:
        v3 = v141;
      }
    }
  }
  KePerformGroupConfiguration(BugCheckParameter3);
  if ( !(unsigned __int8)HalInitSystem((unsigned int)InitializationPhase, BugCheckParameter3) )
    goto LABEL_178;
  KeInitializeClock((unsigned int)InitializationPhase);
  if ( !v7 || !strstr(v7, "NOGUIBOOT") )
  {
    InbvEnableDisplayString(0);
    BgkDisplayProgressIndicator();
    BgkDisplayBackgroundUpdate();
    InbvInstallDisplayStringFilter((__int64 (__fastcall *)(_QWORD))DisplayFilter);
    InbvDriverInitialize(1LL, BugCheckParameter3, 7LL);
    DisplayBootBitmap(0);
  }
  if ( v7 && strstr(v7, "MININT") )
  {
    InitIsWinPEMode = 1;
    if ( strstr(v7, "INRAM") )
      InitWinPEModeType |= 0x80000000;
    else
      InitWinPEModeType |= 1u;
  }
  Message = RtlFindMessage(0x140000000LL, 0xBu, 0, 0x4000007Eu, (unsigned __int16 **)&BugCheckParameter4);
  v21 = PoolWithTag;
  ppszDestEnd = PoolWithTag;
  v22 = Message;
  pcbRemaining = 256LL;
  if ( CmCSDVersionString.Length )
  {
    v23 = RtlStringCbPrintfExA(PoolWithTag, 0xFFuLL, &ppszDestEnd, &pcbRemaining, 0, ": %wZ", &CmCSDVersionString);
    if ( v23 < 0 )
      KeBugCheckEx(0x32u, v23, 7uLL, 0LL, 0LL);
    v21 = ppszDestEnd;
    v24 = pcbRemaining;
  }
  else
  {
    v24 = 255LL;
    pcbRemaining = 255LL;
  }
  *v21 = 0;
  v25 = v21 + 1;
  ppszDestEnd = v25;
  v26 = RtlStringCbPrintfA(pszDest, 0x18uLL, "%u.%u", 10, 0);
  if ( v26 < 0 )
    KeBugCheckEx(0x32u, v26, 7uLL, 1uLL, 0LL);
  if ( v22 < 0 )
  {
    v28 = RtlStringCbCopyA(v25, v24, "MICROSOFT (R) WINDOWS (TM)\n");
    if ( v28 < 0 )
      KeBugCheckEx(0x32u, v28, 7uLL, 3uLL, 0LL);
  }
  else
  {
    dwFlags[0] = (unsigned __int16)NtBuildNumber;
    v27 = RtlStringCbPrintfA(
            v25,
            v24,
            (NTSTRSAFE_PCSTR)(BugCheckParameter4 + 4),
            pszDest,
            *(_QWORD *)dwFlags,
            PoolWithTag);
    if ( v27 < 0 )
      KeBugCheckEx(0x32u, v27, 7uLL, 2uLL, 0LL);
  }
  InbvDisplayString((__int64)v25);
  v29 = 2;
  v30 = PoolWithTag + 256;
  v31 = PoolWithTag;
  v32 = 2LL;
  do
  {
    *v30 = *(_OWORD *)v31;
    v30[1] = *((_OWORD *)v31 + 1);
    v30[2] = *((_OWORD *)v31 + 2);
    v30[3] = *((_OWORD *)v31 + 3);
    v30[4] = *((_OWORD *)v31 + 4);
    v30[5] = *((_OWORD *)v31 + 5);
    v30[6] = *((_OWORD *)v31 + 6);
    v30 += 8;
    v33 = *((_OWORD *)v31 + 7);
    v31 += 128;
    *(v30 - 1) = v33;
    --v32;
  }
  while ( v32 );
  if ( !(unsigned __int8)PoInitSystem(0LL, BugCheckParameter3, 128LL) )
LABEL_211:
    KeBugCheck(0xA0u);
  if ( !ExpRealTimeIsUniversal )
  {
    v34 = *(_DWORD *)(v3 + 436);
    if ( v34 == -1 )
    {
      v34 = ExpAltTimeZoneBias;
      *(_DWORD *)(v3 + 436) = ExpAltTimeZoneBias;
      v122 = 1;
    }
    v35 = 60 * v34;
    *(_QWORD *)(v3 + 440) = 10000000 * v35;
    MEMORY[0xFFFFF7800000025C] = 0;
    ExpWriteTimeZoneBias((_DWORD *)(v3 + 440), v35);
  }
  GetBootSystemTime(*(_QWORD *)(BugCheckParameter3 + 240), &Time);
  if ( v7 )
  {
    v36 = strstr(v7, "YEAR");
    if ( v36 )
    {
      v37 = strstr(v36, "=");
      if ( v37 )
      {
        v38 = atol(v37 + 1);
        RtlTimeToTimeFields(&Time, &TimeFields);
        TimeFields.Year = v38;
        RtlTimeFieldsToTime(&TimeFields, &Time);
      }
    }
  }
  if ( ExpRealTimeIsUniversal )
    LocalTime = Time;
  else
    ExSystemTimeToLocalTime(&Time, &LocalTime);
  KeSetSystemTime((__int64)&Time, (__int64)&v134, 4);
  PoNotifySystemTimeSet((__int64 *)&Time, &v134);
  RtlInitUnicodeString(&DestinationString, L"Kernel-RegisteredProcessors");
  if ( (int)ZwQueryLicenseValue((__int64)&DestinationString, (__int64)&v127) < 0 || v126 != 4 || v127 != 4 )
    KeRegisteredProcessors = 1;
  if ( v7 )
  {
    v39 = strstr(v7, " BOOTPROC=");
    if ( v39 )
    {
      v40 = strstr(v39, "=");
      if ( v40 )
        KeBootprocSpecified = atol(v40 + 1);
    }
    v41 = strstr(v7, " NUMPROC=");
    if ( v41 )
    {
      v42 = strstr(v41, "=");
      if ( v42 )
        KeNumprocSpecified = atol(v42 + 1);
    }
    v43 = strstr(v7, " HYPERVISORNUMPROC=");
    if ( v43 )
    {
      v44 = strstr(v43, "=");
      if ( v44 )
        KeHypervisorNumprocSpecified = atol(v44 + 1);
    }
    if ( !KeRootProcNumaNodeLpsSpecified )
    {
      v45 = strstr(v7, " HYPERVISORROOTPROCPERNODE=");
      if ( v45 )
      {
        v46 = strstr(v45, "=");
        if ( v46 )
          KeRootProcPerNodeSpecified = atol(v46 + 1);
      }
      v47 = strstr(v7, " HYPERVISORROOTPROCPERCORE=");
      if ( v47 )
      {
        v48 = strstr(v47, "=");
        if ( v48 )
          KeRootProcPerCoreSpecified = atol(v48 + 1);
      }
    }
    if ( strstr(v7, " MAXPROC") )
      KeMaximumProcessors = 1280;
  }
  qword_140D587B8 = KeQueryPerformanceCounter(0LL).QuadPart;
  KeStartAllProcessors(v49);
  qword_140D587C0 = KeQueryPerformanceCounter(0LL).QuadPart;
  KeSetAffinityProcess((__int64)KeGetCurrentThread()->ApcState.Process, 0, (unsigned __int16 *)KeActiveProcessors);
  MakeGdtReadOnly();
  v50 = (int)RtlFindMessage(0x140000000LL, 0xBu, 0, 0x40000089u, &v135) < 0
      ? "MultiProcessor Kernel\r\n"
      : (const char *)(v135 + 2);
  if ( !(unsigned __int8)HalAllProcessorsStarted() )
LABEL_178:
    KeBugCheck(0x61u);
  RtlInitAnsiString(&v140, v50);
  if ( v140.Length >= 2u )
    v140.Length -= 2;
  v51 = 1073741960;
  if ( (unsigned int)KeNumberProcessors_0 > 1 )
    v51 = 1073741981;
  v52 = RtlFindMessage(0x140000000LL, 0xBu, 0, v51, (unsigned __int16 **)&BugCheckParameter4);
  v53 = 0LL;
  v54 = *(unsigned int *)MmPhysicalMemoryBlock;
  if ( (_DWORD)v54 )
  {
    v55 = (char *)MmPhysicalMemoryBlock + 24;
    do
    {
      v53 += *v55;
      v55 += 2;
      --v54;
    }
    while ( v54 );
  }
  if ( v52 < 0 )
    v56 = RtlStringCbPrintfA(
            PoolWithTag,
            0x100uLL,
            "%u System Processor [%u MB Memory] %Z\n",
            (unsigned int)KeNumberProcessors_0,
            (unsigned __int64)(v53 + 255) >> 8,
            &v140);
  else
    v56 = RtlStringCbPrintfA(
            PoolWithTag,
            0x100uLL,
            (NTSTRSAFE_PCSTR)(BugCheckParameter4 + 4),
            (unsigned int)KeNumberProcessors_0,
            (unsigned __int64)(v53 + 255) >> 8,
            &v140);
  if ( v56 < 0 )
    KeBugCheckEx(0x32u, v56, 7uLL, 4uLL, 0LL);
  InbvDisplayString((__int64)PoolWithTag);
  ExFreePoolWithTag(PoolWithTag, 0);
  if ( !(unsigned __int8)ObInitSystem() )
    KeBugCheck(0x62u);
  if ( !(unsigned __int8)ExInitSystem() )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 1uLL, 0LL);
  HalReportResourceUsage(0xFFFFFFFFLL);
  if ( !(unsigned __int8)IoCreateObjectTypes() )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 4uLL, 0LL);
  if ( !(unsigned __int8)KeInitSystem(1LL) )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 2uLL, 0LL);
  if ( !KdInitSystem(InitializationPhase, 0LL, v57, v58) )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 3uLL, 0LL);
  inited = TmInitSystem(
             &TmResourceManagerObjectType,
             &TmEnlistmentObjectType,
             &TmTransactionManagerObjectType,
             &TmTransactionObjectType);
  if ( (int)(inited + 0x80000000) >= 0 && inited != -1073741637 )
    KeBugCheckEx(0x32u, 0LL, 0LL, 0LL, 0LL);
  v60 = DbgkInitialize();
  if ( v60 < 0 )
    KeBugCheckEx(0x32u, v60, 0LL, 0LL, 0LL);
  BcdInitializeBcdSyncMutant();
  VerifierInitSystem(0LL);
  if ( !(unsigned __int8)SeInitSystem() )
    KeBugCheck(0x63u);
  PsInitSystem(1LL, BugCheckParameter3);
  ExInitLicenseCallback(v62, v61);
  SystemRootLink = CreateSystemRootLink(BugCheckParameter3);
  if ( SystemRootLink < 0 )
    KeBugCheckEx(0x64u, SystemRootLink, 0LL, 0LL, 0LL);
  qword_140D587D8 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( !(unsigned __int8)MmInitSystem(1LL, BugCheckParameter3) )
    KeBugCheck(0x65u);
  qword_140D587E0 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( InitNlsTableSize )
  {
    MaximumSize.QuadPart = InitNlsTableSize;
    v64 = ZwCreateSection(&SectionHandle, 0xF001Fu, 0LL, &MaximumSize, 4u, 0x8000000u, 0LL);
    if ( v64 < 0 )
      KeBugCheckEx(0x32u, v64, 1uLL, 0LL, 0LL);
    Object = 0LL;
    v65 = ObReferenceObjectByHandle(SectionHandle, 0xF001Fu, MmSectionObjectType, 0, &Object, 0LL);
    InitNlsSectionPointer = Object;
    v66 = v65;
    ZwClose(SectionHandle);
    if ( (v66 & 0x80000000) != 0LL )
      KeBugCheckEx(0x32u, v66, 2uLL, 0LL, 0LL);
    MappedBase = 0LL;
    ViewSize = 0LL;
    v67 = MmMapViewInSystemSpace(InitNlsSectionPointer, &MappedBase, &ViewSize);
    if ( v67 < 0 )
      KeBugCheckEx(0x32u, v67, 3uLL, 0LL, 0LL);
    v68 = MappedBase;
    memmove(MappedBase, InitNlsTableBase, InitNlsTableSize);
    InitNlsTableBase = v68;
  }
  if ( !InitNlsTableBase )
  {
    v69 = 0LL;
LABEL_120:
    v70 = 0LL;
    v71 = 0LL;
    goto LABEL_124;
  }
  if ( !InitUnicodeCaseTableDataOffset )
  {
    v69 = (char *)InitNlsTableBase;
    goto LABEL_120;
  }
  v69 = (char *)InitNlsTableBase + (unsigned int)InitUnicodeCaseTableDataOffset;
  v70 = (USHORT *)((char *)InitNlsTableBase + (unsigned int)InitOemCodePageDataOffset);
  v71 = (USHORT *)((char *)InitNlsTableBase + (unsigned int)InitAnsiCodePageDataOffset);
LABEL_124:
  RtlInitNlsTables(v71, v70, (__int64)v69);
  RtlResetRtlTranslations();
  if ( !(unsigned __int8)CcInitializeCacheManager() )
    KeBugCheck(0x66u);
  if ( !(unsigned __int8)CmInitSystem1(BugCheckParameter3) )
    KeBugCheck(0x67u);
  v72 = ExInitializeLeapSecondData();
  if ( v72 < 0 )
    KeBugCheckEx(0x32u, v72, 0xCuLL, 0LL, 0LL);
  InitSkuSessionParameters();
  qword_140D587A8 = KeQueryPerformanceCounter(0LL).QuadPart;
  memset(v145, 0, 0x48uLL);
  LODWORD(v145[0]) = 72;
  v145[1] = MmMapLockedRestartPages;
  v145[2] = MmUnmapLockedRestartPages;
  v145[3] = KeRemoveEnclavePage;
  v145[4] = KdPullRemoteFileEx;
  VslGetKsrContext();
  DisplayContext = BgGetDisplayContext();
  v74 = (int)KsrInitSystem(BugCheckParameter3, v145, DisplayContext);
  qword_140D587B0 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( (int)(v74 + 0x80000000) >= 0 && (_DWORD)v74 != -1073741637 )
    KeBugCheckEx(0x32u, v74, 0LL, 1uLL, 0LL);
  ExKsrInterface = *(_OWORD *)&v145[5];
  *(_OWORD *)&xmmword_140C19750 = *(_OWORD *)&v145[7];
  v75 = EmInitSystem(0LL, BugCheckParameter3);
  if ( v75 < 0 )
    KeBugCheckEx(0x32u, v75, 8uLL, 0LL, 0LL);
  v76 = MfgInitSystem(BugCheckParameter3);
  if ( v76 < 0 )
    KeBugCheckEx(0x32u, v76, 9uLL, 0LL, 0LL);
  PfInitializeSuperfetch();
  SmInitSystem(0LL);
  v77 = VmInitSystem(0LL);
  if ( v77 < 0 )
    KeBugCheckEx(0x32u, v77, 0xAuLL, 0LL, 0LL);
  if ( (*(_BYTE *)(*(_QWORD *)(BugCheckParameter3 + 240) + 2624LL) & 2) == 0 || strstr(v7, "FORCETIMESYNC") )
    ZwUpdateWnfStateData((__int64)&WNF_BOOT_INVALID_TIME_SOURCE, 0LL);
  HvlWnfUpdateStartupState();
  v129 = 0;
  FsRtlSendModernAppTermination(&v129, 1u, 1);
  ExInitializeTimeRefresh(v79, v78, v80);
  ExAcquireTimeRefreshLock(1u);
  ExInitializeUtcTimeZoneBias(&LocalTime);
  v81 = *(_DWORD *)(v3 + 436);
  ExpRefreshTimeZoneInformation(0);
  ExReleaseTimeRefreshLock();
  if ( v122 )
  {
    ExLocalTimeToSystemTime(&LocalTime, &Time);
    KeSetSystemTime((__int64)&Time, (__int64)&v134, 4);
  }
  else if ( v81 != *(_DWORD *)(v3 + 436) )
  {
    ZwSetSystemTime(0LL, 0LL);
  }
  if ( !(unsigned __int8)FsRtlInitSystem(v83, v82, v84) )
    KeBugCheck(0x68u);
  RtlInitializeCompression();
  RtlInitializeRangeListPackage(v86, v85, v87);
  HvlDebuggerSupportInitialize(BugCheckParameter3);
  HalReportResourceUsage(0LL);
  KdInitialize(1LL, BugCheckParameter3, &KdpContext, v88);
  if ( !(unsigned __int8)PpInitSystem(v90, v89, v91) )
    KeBugCheck(0x90u);
  if ( !(unsigned __int8)LpcInitSystem(v93, v92, v94) )
    KeBugCheck(0x6Au);
  if ( v7 )
    v98 = strstr(v7, "SAFEBOOT:");
  else
    v98 = 0LL;
  v99 = v98;
  if ( v98 )
  {
    v100 = 9LL;
    v101 = v98 + 9;
    if ( !strncmp(v101, "MINIMAL", 7uLL) )
    {
      LODWORD(InitSafeBootMode) = 1;
      v100 = 16LL;
    }
    else
    {
      if ( !strncmp(v101, "NETWORK", 7uLL) )
      {
        v100 = 16LL;
      }
      else if ( !strncmp(v101, "DSREPAIR", 8uLL) )
      {
        v29 = 3;
        v100 = 17LL;
      }
      else
      {
        v29 = 0;
      }
      LODWORD(InitSafeBootMode) = v29;
    }
    v96 = (__int64)&v99[v100];
    if ( v99[v100] )
    {
      v102 = strncmp((const char *)v96, "(ALTERNATESHELL)", 0x10uLL);
      v96 = (unsigned __int8)v124;
      if ( !v102 )
        v96 = 1LL;
      v124 = v96;
    }
    if ( (_DWORD)InitSafeBootMode )
    {
      v139 = 0LL;
      v103 = 0;
      switch ( (_DWORD)InitSafeBootMode )
      {
        case 1:
          v103 = 168;
          break;
        case 2:
          v103 = 169;
          break;
        case 3:
          v103 = 170;
          break;
      }
      if ( (int)RtlFindMessage(0x140000000LL, 0xBu, 0, v103, &v139) >= 0 )
        InbvDisplayString((__int64)(v139 + 2));
    }
  }
  if ( (*(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 240) + 132LL) & 0x800) != 0 )
  {
    if ( (int)RtlFindMessage(0x140000000LL, 0xBu, 0, 0xB7u, (unsigned __int16 **)&BugCheckParameter4) >= 0 )
      InbvDisplayString(BugCheckParameter4 + 4);
    IopInitializeBootLogging(BugCheckParameter3, (__int64)(PoolWithTag + 256));
  }
  ExInitSystemPhase2(v96, v95, v97);
  MEMORY[0xFFFFF780000002D6] = ExpComputeCyclesPerYield(v105, v104, v106);
  if ( InitIsWinPEMode )
    CreateMiniNtBootKey(v108, v107, v109);
  v110 = SeCodeIntegrityInitializePolicy(BugCheckParameter3);
  if ( v110 < 0 )
    KeBugCheckEx(0x32u, v110, 0x69436553uLL, 0LL, 0LL);
  KdpTimeSlipPending = 0;
  v114 = ExInitializeNls(v112, v111, v113);
  if ( v114 < 0 )
    KeBugCheckEx(0x32u, v114, 7uLL, 0LL, 0LL);
  v118 = ExInitializeExternalBootSupport(v116, v115, v117);
  if ( v118 < 0 )
    KeBugCheckEx(0x32u, v118, 8uLL, 0LL, 0LL);
  if ( !(unsigned __int8)PoInitSystem(1LL, BugCheckParameter3, v119) )
    goto LABEL_211;
  return v124;
}
