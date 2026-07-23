/*
 * XREFs of Phase1InitializationDiscard @ 0x140A3C6A4
 * Callers:
 *     Phase1Initialization @ 0x1407B3C40 (Phase1Initialization.c)
 * Callees:
 *     ExLocalTimeToSystemTime @ 0x140233710 (ExLocalTimeToSystemTime.c)
 *     RtlTimeFieldsToTime @ 0x140233AE0 (RtlTimeFieldsToTime.c)
 *     ExSystemTimeToLocalTime @ 0x1402515B0 (ExSystemTimeToLocalTime.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     RtlInitAnsiString @ 0x1402713E0 (RtlInitAnsiString.c)
 *     KeSetPriorityThread @ 0x140279050 (KeSetPriorityThread.c)
 *     RtlStringCbCopyA @ 0x1402875B0 (RtlStringCbCopyA.c)
 *     KeQueryPerformanceCounter @ 0x1402D0BC0 (KeQueryPerformanceCounter.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402F6FB0 (PsGetCurrentServerSiloGlobals.c)
 *     RtlTimeToTimeFields @ 0x14036EB50 (RtlTimeToTimeFields.c)
 *     PoNotifySystemTimeSet @ 0x1403A7954 (PoNotifySystemTimeSet.c)
 *     KeSetSystemTime @ 0x1403A7B98 (KeSetSystemTime.c)
 *     InbvDisplayString @ 0x1403AD6F0 (InbvDisplayString.c)
 *     RtlStringCbPrintfA @ 0x1403AD714 (RtlStringCbPrintfA.c)
 *     DisplayBootBitmap @ 0x1403B4EC0 (DisplayBootBitmap.c)
 *     MakeGdtReadOnly @ 0x1403B50A0 (MakeGdtReadOnly.c)
 *     FsRtlSendModernAppTermination @ 0x1403C08E0 (FsRtlSendModernAppTermination.c)
 *     KeSetAffinityProcess @ 0x1403CB43C (KeSetAffinityProcess.c)
 *     HvlDebuggerSupportInitialize @ 0x1403CFD00 (HvlDebuggerSupportInitialize.c)
 *     HvlWnfUpdateStartupState @ 0x1403D0460 (HvlWnfUpdateStartupState.c)
 *     InbvEnableDisplayString @ 0x1403D04F0 (InbvEnableDisplayString.c)
 *     InbvInstallDisplayStringFilter @ 0x1403D0570 (InbvInstallDisplayStringFilter.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _strupr @ 0x1403D1190 (_strupr.c)
 *     strtoul @ 0x1403D1670 (strtoul.c)
 *     strncmp @ 0x1403D16B0 (strncmp.c)
 *     _strtoui64 @ 0x1403D19C0 (_strtoui64.c)
 *     strstr @ 0x1403D19F0 (strstr.c)
 *     atol @ 0x1403D1A90 (atol.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwCreateSection @ 0x1403FAEC0 (ZwCreateSection.c)
 *     ZwQueryLicenseValue @ 0x1403FD000 (ZwQueryLicenseValue.c)
 *     ZwSetSystemTime @ 0x1403FDB40 (ZwSetSystemTime.c)
 *     ZwUpdateWnfStateData @ 0x1403FDF80 (ZwUpdateWnfStateData.c)
 *     KeBugCheck @ 0x1403FE0B0 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     RtlStringCbPrintfExA @ 0x1404B63C4 (RtlStringCbPrintfExA.c)
 *     RtlInitializeCompression @ 0x140585614 (RtlInitializeCompression.c)
 *     ExpWriteTimeZoneBias @ 0x1405D1CC8 (ExpWriteTimeZoneBias.c)
 *     RtlFindMessage @ 0x1405ED770 (RtlFindMessage.c)
 *     MmMapViewInSystemSpace @ 0x14061E6F0 (MmMapViewInSystemSpace.c)
 *     ExReleaseTimeRefreshLock @ 0x1406B2FD0 (ExReleaseTimeRefreshLock.c)
 *     ExAcquireTimeRefreshLock @ 0x1406B2FF4 (ExAcquireTimeRefreshLock.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     ExInitializeLeapSecondData @ 0x1407A90AC (ExInitializeLeapSecondData.c)
 *     ExpRefreshTimeZoneInformation @ 0x1407A9754 (ExpRefreshTimeZoneInformation.c)
 *     RtlInitNlsTables @ 0x1407CC984 (RtlInitNlsTables.c)
 *     RtlResetRtlTranslations @ 0x1407CFF14 (RtlResetRtlTranslations.c)
 *     ExInitializeUtcTimeZoneBias @ 0x1407D4CB0 (ExInitializeUtcTimeZoneBias.c)
 *     ExInitLicenseCallback @ 0x1407D5018 (ExInitLicenseCallback.c)
 *     IopInitializeBootLogging @ 0x140891878 (IopInitializeBootLogging.c)
 *     HalInitSystem @ 0x14099D050 (HalInitSystem.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 *     KdInitSystem @ 0x1409B6160 (KdInitSystem.c)
 *     BgGetDisplayContext @ 0x1409F2028 (BgGetDisplayContext.c)
 *     HalReportResourceUsage @ 0x140A3DE50 (HalReportResourceUsage.c)
 *     CcInitializeCacheManager @ 0x140A3E1B8 (CcInitializeCacheManager.c)
 *     IoCreateObjectTypes @ 0x140A3E6D8 (IoCreateObjectTypes.c)
 *     ObInitSystem @ 0x140A3F538 (ObInitSystem.c)
 *     PoInitSystem @ 0x140A40948 (PoInitSystem.c)
 *     ExInitSystemPhase2 @ 0x140A42BB4 (ExInitSystemPhase2.c)
 *     EmInitSystem @ 0x140A4628C (EmInitSystem.c)
 *     SeInitSystem @ 0x140A488EC (SeInitSystem.c)
 *     VmInitSystem @ 0x140A48B1C (VmInitSystem.c)
 *     SmInitSystem @ 0x140A4C43C (SmInitSystem.c)
 *     KeInitializeClock @ 0x140A4C7CC (KeInitializeClock.c)
 *     PsInitSystem @ 0x140A4D2F8 (PsInitSystem.c)
 *     KeInitSystem @ 0x140A4D33C (KeInitSystem.c)
 *     KePerformGroupConfiguration @ 0x140A4E3D8 (KePerformGroupConfiguration.c)
 *     KeStartAllProcessors @ 0x140A4E568 (KeStartAllProcessors.c)
 *     MmInitSystem @ 0x140A54D6C (MmInitSystem.c)
 *     CmInitSystem1 @ 0x140A5AF78 (CmInitSystem1.c)
 *     ExInitializeTimeRefresh @ 0x140A5C1EC (ExInitializeTimeRefresh.c)
 *     ExInitSystem @ 0x140A69944 (ExInitSystem.c)
 *     PfInitializeSuperfetch @ 0x140A6B76C (PfInitializeSuperfetch.c)
 *     ExpComputeCyclesPerYield @ 0x140A6C1A0 (ExpComputeCyclesPerYield.c)
 *     InbvDriverInitialize @ 0x140A6C590 (InbvDriverInitialize.c)
 *     FsRtlInitSystem @ 0x140A6C9E0 (FsRtlInitSystem.c)
 *     DbgkInitialize @ 0x140A6E4AC (DbgkInitialize.c)
 *     CreateSystemRootLink @ 0x140A706AC (CreateSystemRootLink.c)
 *     VerifierInitSystem @ 0x140A70A84 (VerifierInitSystem.c)
 *     LpcInitSystem @ 0x140A70DDC (LpcInitSystem.c)
 *     SeCodeIntegrityInitializePolicy @ 0x140A71758 (SeCodeIntegrityInitializePolicy.c)
 *     GetBootSystemTime @ 0x140A7282C (GetBootSystemTime.c)
 *     InitSkuSessionParameters @ 0x140A72D04 (InitSkuSessionParameters.c)
 *     PpInitSystem @ 0x140A73804 (PpInitSystem.c)
 *     BcdInitializeBcdSyncMutant @ 0x140A74808 (BcdInitializeBcdSyncMutant.c)
 *     MfgInitSystem @ 0x140A74924 (MfgInitSystem.c)
 *     ExInitializeExternalBootSupport @ 0x140A74BEC (ExInitializeExternalBootSupport.c)
 *     ExInitializeNls @ 0x140A74EC4 (ExInitializeNls.c)
 *     HalAllProcessorsStarted @ 0x140A75130 (HalAllProcessorsStarted.c)
 *     VslGetKsrContext @ 0x140A75248 (VslGetKsrContext.c)
 *     CreateMiniNtBootKey @ 0x140A8D0B0 (CreateMiniNtBootKey.c)
 *     RtlInitializeRangeListPackage @ 0x140A946EC (RtlInitializeRangeListPackage.c)
 *     BgkDisplayProgressIndicator @ 0x140A96DDC (BgkDisplayProgressIndicator.c)
 *     BgkDisplayBackgroundUpdate @ 0x140A979D4 (BgkDisplayBackgroundUpdate.c)
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
  NTSTATUS Message; // eax
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
  const CHAR *v49; // rbx
  ULONG v50; // r9d
  NTSTATUS v51; // eax
  __int64 v52; // r9
  __int64 v53; // rdx
  _QWORD *v54; // rcx
  NTSTATUS v55; // eax
  __int64 v56; // r8
  __int64 v57; // r9
  int inited; // eax
  int v59; // eax
  __int64 v60; // rdx
  __int64 v61; // rcx
  int SystemRootLink; // eax
  LARGE_INTEGER v63; // r9
  NTSTATUS v64; // eax
  NTSTATUS v65; // eax
  ULONG_PTR v66; // rbx
  NTSTATUS v67; // eax
  PVOID v68; // rbx
  USHORT *v69; // r8
  USHORT *v70; // rdx
  USHORT *v71; // rcx
  PNLSTABLEINFO v72; // rcx
  int v73; // eax
  __int128 *DisplayContext; // rax
  ULONG_PTR v75; // rbx
  int v76; // eax
  int v77; // eax
  int v78; // eax
  int v79; // ebx
  __int64 v80; // r9
  char *v81; // rbx
  char *v82; // r12
  __int64 v83; // rdi
  const char *v84; // rbx
  int v85; // eax
  int v86; // ecx
  ULONG v87; // r9d
  int v88; // eax
  int v89; // eax
  int v90; // eax
  __int64 v91; // r8
  PMESSAGE_RESOURCE_ENTRY *MessageEntry; // [rsp+20h] [rbp-E0h]
  char v94; // [rsp+40h] [rbp-C0h]
  LARGE_INTEGER Time; // [rsp+48h] [rbp-B8h] BYREF
  int v96; // [rsp+50h] [rbp-B0h]
  PMESSAGE_RESOURCE_ENTRY v97; // [rsp+58h] [rbp-A8h] BYREF
  ULONG ResultDataSize; // [rsp+60h] [rbp-A0h] BYREF
  ULONG Type; // [rsp+64h] [rbp-9Ch] BYREF
  LARGE_INTEGER LocalTime; // [rsp+68h] [rbp-98h] BYREF
  int Buffer; // [rsp+70h] [rbp-90h] BYREF
  char *EndPtr; // [rsp+78h] [rbp-88h] BYREF
  size_t pcbRemaining; // [rsp+80h] [rbp-80h] BYREF
  NTSTRSAFE_PSTR ppszDestEnd; // [rsp+88h] [rbp-78h] BYREF
  HANDLE SectionHandle; // [rsp+90h] [rbp-70h] BYREF
  __int64 v106; // [rsp+98h] [rbp-68h] BYREF
  PMESSAGE_RESOURCE_ENTRY v107; // [rsp+A0h] [rbp-60h] BYREF
  LARGE_INTEGER MaximumSize; // [rsp+A8h] [rbp-58h] BYREF
  PVOID Object; // [rsp+B0h] [rbp-50h] BYREF
  PVOID MappedBase; // [rsp+B8h] [rbp-48h] BYREF
  PMESSAGE_RESOURCE_ENTRY v111; // [rsp+C0h] [rbp-40h] BYREF
  STRING v112; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v113; // [rsp+D8h] [rbp-28h]
  ULONG_PTR ViewSize; // [rsp+E0h] [rbp-20h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+E8h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+F8h] [rbp-8h] BYREF
  _QWORD v117[10]; // [rsp+110h] [rbp+10h] BYREF
  char pszDest[24]; // [rsp+160h] [rbp+60h] BYREF

  Time.QuadPart = 0LL;
  LocalTime.QuadPart = 0LL;
  v106 = 0LL;
  v112 = 0LL;
  SectionHandle = 0LL;
  MaximumSize.QuadPart = 0LL;
  v97 = 0LL;
  v107 = 0LL;
  TimeFields = 0LL;
  LOBYTE(v96) = 0;
  ResultDataSize = 0;
  Type = 0;
  DestinationString = 0LL;
  v3 = *((_QWORD *)PsGetCurrentServerSiloGlobals(BugCheckParameter3, a2) + 133);
  v113 = v3;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x200uLL, 0x74696E49u);
  if ( !PoolWithTag )
    KeBugCheck(0x31u);
  CurrentThread = KeGetCurrentThread();
  LODWORD(InitializationPhase) = 1;
  v94 = 0;
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
        v3 = v113;
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
  Message = RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, 0x4000007Eu, &v97);
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
    LODWORD(MessageEntry) = (unsigned __int16)NtBuildNumber;
    v27 = RtlStringCbPrintfA(v25, v24, (NTSTRSAFE_PCSTR)v97->Text, pszDest, MessageEntry, PoolWithTag);
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
      v94 = 1;
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
  KeSetSystemTime((__int64)&Time, (__int64)&v106, 4);
  PoNotifySystemTimeSet((__int64 *)&Time, &v106);
  RtlInitUnicodeString(&DestinationString, L"Kernel-RegisteredProcessors");
  if ( ZwQueryLicenseValue(&DestinationString, &Type, &KeRegisteredProcessors, 4u, &ResultDataSize) < 0
    || ResultDataSize != 4
    || Type != 4 )
  {
    KeRegisteredProcessors = 1;
  }
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
  KeStartAllProcessors();
  qword_140D587C0 = KeQueryPerformanceCounter(0LL).QuadPart;
  KeSetAffinityProcess((__int64)KeGetCurrentThread()->ApcState.Process, 0, (unsigned __int16 *)KeActiveProcessors);
  MakeGdtReadOnly();
  v49 = RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, 0x40000089u, &v107) < 0
      ? "MultiProcessor Kernel\r\n"
      : (const CHAR *)v107->Text;
  if ( !(unsigned __int8)HalAllProcessorsStarted() )
LABEL_178:
    KeBugCheck(0x61u);
  RtlInitAnsiString(&v112, v49);
  if ( v112.Length >= 2u )
    v112.Length -= 2;
  v50 = 1073741960;
  if ( (unsigned int)KeNumberProcessors_0 > 1 )
    v50 = 1073741981;
  v51 = RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, v50, &v97);
  v52 = 0LL;
  v53 = *(unsigned int *)MmPhysicalMemoryBlock;
  if ( (_DWORD)v53 )
  {
    v54 = (char *)MmPhysicalMemoryBlock + 24;
    do
    {
      v52 += *v54;
      v54 += 2;
      --v53;
    }
    while ( v53 );
  }
  if ( v51 < 0 )
    v55 = RtlStringCbPrintfA(
            PoolWithTag,
            0x100uLL,
            "%u System Processor [%u MB Memory] %Z\n",
            (unsigned int)KeNumberProcessors_0,
            (unsigned __int64)(v52 + 255) >> 8,
            &v112);
  else
    v55 = RtlStringCbPrintfA(
            PoolWithTag,
            0x100uLL,
            (NTSTRSAFE_PCSTR)v97->Text,
            (unsigned int)KeNumberProcessors_0,
            (unsigned __int64)(v52 + 255) >> 8,
            &v112);
  if ( v55 < 0 )
    KeBugCheckEx(0x32u, v55, 7uLL, 4uLL, 0LL);
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
  if ( !KdInitSystem(InitializationPhase, 0LL, v56, v57) )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 3uLL, 0LL);
  inited = TmInitSystem(
             &TmResourceManagerObjectType,
             &TmEnlistmentObjectType,
             &TmTransactionManagerObjectType,
             &TmTransactionObjectType);
  if ( (int)(inited + 0x80000000) >= 0 && inited != -1073741637 )
    KeBugCheckEx(0x32u, 0LL, 0LL, 0LL, 0LL);
  v59 = DbgkInitialize();
  if ( v59 < 0 )
    KeBugCheckEx(0x32u, v59, 0LL, 0LL, 0LL);
  BcdInitializeBcdSyncMutant();
  VerifierInitSystem(0LL);
  if ( !(unsigned __int8)SeInitSystem() )
    KeBugCheck(0x63u);
  PsInitSystem(1LL, BugCheckParameter3);
  ExInitLicenseCallback(v61, v60);
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
    v69 = (USHORT *)InitNlsTableBase;
    goto LABEL_120;
  }
  v69 = (USHORT *)((char *)InitNlsTableBase + (unsigned int)InitUnicodeCaseTableDataOffset);
  v70 = (USHORT *)((char *)InitNlsTableBase + (unsigned int)InitOemCodePageDataOffset);
  v71 = (USHORT *)((char *)InitNlsTableBase + (unsigned int)InitAnsiCodePageDataOffset);
LABEL_124:
  RtlInitNlsTables(v71, v70, v69, (PNLSTABLEINFO)v63.QuadPart);
  RtlResetRtlTranslations(v72);
  if ( !(unsigned __int8)CcInitializeCacheManager() )
    KeBugCheck(0x66u);
  if ( !(unsigned __int8)CmInitSystem1(BugCheckParameter3) )
    KeBugCheck(0x67u);
  v73 = ExInitializeLeapSecondData();
  if ( v73 < 0 )
    KeBugCheckEx(0x32u, v73, 0xCuLL, 0LL, 0LL);
  InitSkuSessionParameters();
  qword_140D587A8 = KeQueryPerformanceCounter(0LL).QuadPart;
  memset(v117, 0, 0x48uLL);
  LODWORD(v117[0]) = 72;
  v117[1] = MmMapLockedRestartPages;
  v117[2] = MmUnmapLockedRestartPages;
  v117[3] = KeRemoveEnclavePage;
  v117[4] = KdPullRemoteFileEx;
  VslGetKsrContext();
  DisplayContext = BgGetDisplayContext();
  v75 = (int)KsrInitSystem(BugCheckParameter3, v117, DisplayContext);
  qword_140D587B0 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( (int)(v75 + 0x80000000) >= 0 && (_DWORD)v75 != -1073741637 )
    KeBugCheckEx(0x32u, v75, 0LL, 1uLL, 0LL);
  ExKsrInterface = *(_OWORD *)&v117[5];
  *(_OWORD *)&xmmword_140C19750 = *(_OWORD *)&v117[7];
  v76 = EmInitSystem(0LL, BugCheckParameter3);
  if ( v76 < 0 )
    KeBugCheckEx(0x32u, v76, 8uLL, 0LL, 0LL);
  v77 = MfgInitSystem(BugCheckParameter3);
  if ( v77 < 0 )
    KeBugCheckEx(0x32u, v77, 9uLL, 0LL, 0LL);
  PfInitializeSuperfetch();
  SmInitSystem(0LL);
  v78 = VmInitSystem(0LL);
  if ( v78 < 0 )
    KeBugCheckEx(0x32u, v78, 0xAuLL, 0LL, 0LL);
  if ( (*(_BYTE *)(*(_QWORD *)(BugCheckParameter3 + 240) + 2624LL) & 2) == 0 || strstr(v7, "FORCETIMESYNC") )
    ZwUpdateWnfStateData(&WNF_BOOT_INVALID_TIME_SOURCE, 0LL, 0, 0LL, 0LL, 0, 0);
  HvlWnfUpdateStartupState();
  Buffer = 0;
  FsRtlSendModernAppTermination(&Buffer, 1u, 1);
  ExInitializeTimeRefresh();
  ExAcquireTimeRefreshLock(1u);
  ExInitializeUtcTimeZoneBias(&LocalTime);
  v79 = *(_DWORD *)(v3 + 436);
  ExpRefreshTimeZoneInformation(0);
  ExReleaseTimeRefreshLock();
  if ( v94 )
  {
    ExLocalTimeToSystemTime(&LocalTime, &Time);
    KeSetSystemTime((__int64)&Time, (__int64)&v106, 4);
  }
  else if ( v79 != *(_DWORD *)(v3 + 436) )
  {
    ZwSetSystemTime(0LL, 0LL);
  }
  if ( !(unsigned __int8)FsRtlInitSystem() )
    KeBugCheck(0x68u);
  RtlInitializeCompression();
  RtlInitializeRangeListPackage();
  HvlDebuggerSupportInitialize(BugCheckParameter3);
  HalReportResourceUsage(0LL);
  KdInitialize(1LL, BugCheckParameter3, &KdpContext, v80);
  if ( !(unsigned __int8)PpInitSystem() )
    KeBugCheck(0x90u);
  if ( !(unsigned __int8)LpcInitSystem() )
    KeBugCheck(0x6Au);
  if ( v7 )
    v81 = strstr(v7, "SAFEBOOT:");
  else
    v81 = 0LL;
  v82 = v81;
  if ( v81 )
  {
    v83 = 9LL;
    v84 = v81 + 9;
    if ( !strncmp(v84, "MINIMAL", 7uLL) )
    {
      InitSafeBootMode = 1;
      v83 = 16LL;
    }
    else
    {
      if ( !strncmp(v84, "NETWORK", 7uLL) )
      {
        v83 = 16LL;
      }
      else if ( !strncmp(v84, "DSREPAIR", 8uLL) )
      {
        v29 = 3;
        v83 = 17LL;
      }
      else
      {
        v29 = 0;
      }
      InitSafeBootMode = v29;
    }
    if ( v82[v83] )
    {
      v85 = strncmp(&v82[v83], "(ALTERNATESHELL)", 0x10uLL);
      v86 = (unsigned __int8)v96;
      if ( !v85 )
        v86 = 1;
      v96 = v86;
    }
    if ( InitSafeBootMode )
    {
      v111 = 0LL;
      v87 = 0;
      switch ( InitSafeBootMode )
      {
        case 1:
          v87 = 168;
          break;
        case 2:
          v87 = 169;
          break;
        case 3:
          v87 = 170;
          break;
      }
      if ( RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, v87, &v111) >= 0 )
        InbvDisplayString((__int64)v111->Text);
    }
  }
  if ( (*(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 240) + 132LL) & 0x800) != 0 )
  {
    if ( RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, 0xB7u, &v97) >= 0 )
      InbvDisplayString((__int64)v97->Text);
    IopInitializeBootLogging(BugCheckParameter3, (__int64)(PoolWithTag + 256));
  }
  ExInitSystemPhase2();
  MEMORY[0xFFFFF780000002D6] = ExpComputeCyclesPerYield();
  if ( InitIsWinPEMode )
    CreateMiniNtBootKey();
  v88 = SeCodeIntegrityInitializePolicy(BugCheckParameter3);
  if ( v88 < 0 )
    KeBugCheckEx(0x32u, v88, 0x69436553uLL, 0LL, 0LL);
  KdpTimeSlipPending = 0;
  v89 = ExInitializeNls();
  if ( v89 < 0 )
    KeBugCheckEx(0x32u, v89, 7uLL, 0LL, 0LL);
  v90 = ExInitializeExternalBootSupport();
  if ( v90 < 0 )
    KeBugCheckEx(0x32u, v90, 8uLL, 0LL, 0LL);
  if ( !(unsigned __int8)PoInitSystem(1LL, BugCheckParameter3, v91) )
    goto LABEL_211;
  return v96;
}
