/*
 * XREFs of Phase1InitializationDiscard @ 0x140A37B24
 * Callers:
 *     Phase1Initialization @ 0x140786180 (Phase1Initialization.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1402770E0 (RtlInitAnsiString.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14027B290 (PsGetCurrentServerSiloGlobals.c)
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     RtlStringCbCopyA @ 0x1402CCA08 (RtlStringCbCopyA.c)
 *     KeSetPriorityThread @ 0x1402EBF90 (KeSetPriorityThread.c)
 *     KeQueryPerformanceCounter @ 0x1402F3FA0 (KeQueryPerformanceCounter.c)
 *     ExLocalTimeToSystemTime @ 0x1403413B0 (ExLocalTimeToSystemTime.c)
 *     RtlTimeFieldsToTime @ 0x140341780 (RtlTimeFieldsToTime.c)
 *     ExSystemTimeToLocalTime @ 0x140360390 (ExSystemTimeToLocalTime.c)
 *     RtlTimeToTimeFields @ 0x14036C6C0 (RtlTimeToTimeFields.c)
 *     FsRtlSendModernAppTermination @ 0x1403786F0 (FsRtlSendModernAppTermination.c)
 *     PoNotifySystemTimeSet @ 0x1403A4B44 (PoNotifySystemTimeSet.c)
 *     KeSetSystemTime @ 0x1403A4D88 (KeSetSystemTime.c)
 *     InbvDisplayString @ 0x1403A5630 (InbvDisplayString.c)
 *     RtlStringCbPrintfA @ 0x1403A5654 (RtlStringCbPrintfA.c)
 *     DisplayBootBitmap @ 0x1403B0DA0 (DisplayBootBitmap.c)
 *     MakeGdtReadOnly @ 0x1403B26CC (MakeGdtReadOnly.c)
 *     KeSetAffinityProcess @ 0x1403C7CBC (KeSetAffinityProcess.c)
 *     HvlDebuggerSupportInitialize @ 0x1403CC584 (HvlDebuggerSupportInitialize.c)
 *     HvlWnfUpdateStartupState @ 0x1403CCCF0 (HvlWnfUpdateStartupState.c)
 *     InbvEnableDisplayString @ 0x1403CCD80 (InbvEnableDisplayString.c)
 *     InbvInstallDisplayStringFilter @ 0x1403CCE00 (InbvInstallDisplayStringFilter.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     _strupr @ 0x1403CDA20 (_strupr.c)
 *     strtoul @ 0x1403CDF00 (strtoul.c)
 *     strncmp @ 0x1403CDF40 (strncmp.c)
 *     _strtoui64 @ 0x1403CE250 (_strtoui64.c)
 *     strstr @ 0x1403CE280 (strstr.c)
 *     atol @ 0x1403CE320 (atol.c)
 *     Feature_Servicing_CorrectTimeAfterDST_33809459__private_IsEnabled @ 0x1403EC714 (Feature_Servicing_CorrectTimeAfterDST_33809459__private_IsEnabled.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ZwCreateSection @ 0x1403F3F00 (ZwCreateSection.c)
 *     ZwQueryLicenseValue @ 0x1403F6020 (ZwQueryLicenseValue.c)
 *     ZwSetSystemTime @ 0x1403F6B40 (ZwSetSystemTime.c)
 *     ZwUpdateWnfStateData @ 0x1403F6F80 (ZwUpdateWnfStateData.c)
 *     KeBugCheck @ 0x1403F70B0 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     memset @ 0x14040A280 (memset.c)
 *     RtlStringCbPrintfExA @ 0x1404B0FE4 (RtlStringCbPrintfExA.c)
 *     RtlInitializeCompression @ 0x140580074 (RtlInitializeCompression.c)
 *     ExpWriteTimeZoneBias @ 0x1405C9990 (ExpWriteTimeZoneBias.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     ExAcquireTimeRefreshLock @ 0x1406AA348 (ExAcquireTimeRefreshLock.c)
 *     ExReleaseTimeRefreshLock @ 0x1406ABD00 (ExReleaseTimeRefreshLock.c)
 *     MmMapViewInSystemSpace @ 0x14070D350 (MmMapViewInSystemSpace.c)
 *     RtlFindMessage @ 0x140712910 (RtlFindMessage.c)
 *     ExInitializeLeapSecondData @ 0x14079254C (ExInitializeLeapSecondData.c)
 *     ExpRefreshTimeZoneInformation @ 0x140792C10 (ExpRefreshTimeZoneInformation.c)
 *     RtlInitNlsTables @ 0x1407B9CC4 (RtlInitNlsTables.c)
 *     RtlResetRtlTranslations @ 0x1407BD254 (RtlResetRtlTranslations.c)
 *     ExInitializeUtcTimeZoneBias @ 0x1407C1F10 (ExInitializeUtcTimeZoneBias.c)
 *     ExInitLicenseCallback @ 0x1407C2278 (ExInitLicenseCallback.c)
 *     IopInitializeBootLogging @ 0x14088E690 (IopInitializeBootLogging.c)
 *     HalInitSystem @ 0x1409986F0 (HalInitSystem.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 *     KdInitSystem @ 0x1409B2160 (KdInitSystem.c)
 *     BgGetDisplayContext @ 0x1409EE028 (BgGetDisplayContext.c)
 *     HalReportResourceUsage @ 0x140A392F0 (HalReportResourceUsage.c)
 *     CcInitializeCacheManager @ 0x140A39658 (CcInitializeCacheManager.c)
 *     IoCreateObjectTypes @ 0x140A39AC4 (IoCreateObjectTypes.c)
 *     ObInitSystem @ 0x140A3A924 (ObInitSystem.c)
 *     PoInitSystem @ 0x140A3BD5C (PoInitSystem.c)
 *     EmInitSystem @ 0x140A4009C (EmInitSystem.c)
 *     KeInitializeClock @ 0x140A428AC (KeInitializeClock.c)
 *     ExInitSystemPhase2 @ 0x140A42B1C (ExInitSystemPhase2.c)
 *     PsInitSystem @ 0x140A44918 (PsInitSystem.c)
 *     KeInitSystem @ 0x140A4495C (KeInitSystem.c)
 *     KePerformGroupConfiguration @ 0x140A45B98 (KePerformGroupConfiguration.c)
 *     KeStartAllProcessors @ 0x140A45D28 (KeStartAllProcessors.c)
 *     MmInitSystem @ 0x140A520E4 (MmInitSystem.c)
 *     CmInitSystem1 @ 0x140A582D4 (CmInitSystem1.c)
 *     ExInitializeTimeRefresh @ 0x140A59540 (ExInitializeTimeRefresh.c)
 *     SeInitSystem @ 0x140A5E1DC (SeInitSystem.c)
 *     VmInitSystem @ 0x140A5E40C (VmInitSystem.c)
 *     ExInitSystem @ 0x140A6423C (ExInitSystem.c)
 *     PfInitializeSuperfetch @ 0x140A6605C (PfInitializeSuperfetch.c)
 *     ExpComputeCyclesPerYield @ 0x140A66A90 (ExpComputeCyclesPerYield.c)
 *     SmInitSystem @ 0x140A67B2C (SmInitSystem.c)
 *     InbvDriverInitialize @ 0x140A67DE0 (InbvDriverInitialize.c)
 *     FsRtlInitSystem @ 0x140A68230 (FsRtlInitSystem.c)
 *     DbgkInitialize @ 0x140A69C20 (DbgkInitialize.c)
 *     CreateSystemRootLink @ 0x140A6BE48 (CreateSystemRootLink.c)
 *     VerifierInitSystem @ 0x140A6C224 (VerifierInitSystem.c)
 *     LpcInitSystem @ 0x140A6C57C (LpcInitSystem.c)
 *     SeCodeIntegrityInitializePolicy @ 0x140A6CEF8 (SeCodeIntegrityInitializePolicy.c)
 *     GetBootSystemTime @ 0x140A6E0CC (GetBootSystemTime.c)
 *     InitSkuSessionParameters @ 0x140A6E5A4 (InitSkuSessionParameters.c)
 *     PpInitSystem @ 0x140A6F380 (PpInitSystem.c)
 *     BcdInitializeBcdSyncMutant @ 0x140A70450 (BcdInitializeBcdSyncMutant.c)
 *     MfgInitSystem @ 0x140A7056C (MfgInitSystem.c)
 *     ExInitializeExternalBootSupport @ 0x140A708C8 (ExInitializeExternalBootSupport.c)
 *     ExInitializeNls @ 0x140A70BF4 (ExInitializeNls.c)
 *     HalAllProcessorsStarted @ 0x140A71010 (HalAllProcessorsStarted.c)
 *     VslGetKsrContext @ 0x140A71184 (VslGetKsrContext.c)
 *     CreateMiniNtBootKey @ 0x140A89540 (CreateMiniNtBootKey.c)
 *     RtlInitializeRangeListPackage @ 0x140A90C18 (RtlInitializeRangeListPackage.c)
 *     BgkDisplayProgressIndicator @ 0x140A932EC (BgkDisplayProgressIndicator.c)
 *     BgkDisplayBackgroundUpdate @ 0x140A93EE4 (BgkDisplayBackgroundUpdate.c)
 */

char __fastcall Phase1InitializationDiscard(ULONG_PTR BugCheckParameter3)
{
  __int64 v2; // r12
  char *PoolWithTag; // r13
  struct _KTHREAD *CurrentThread; // rcx
  char *v5; // rcx
  char *v6; // rdi
  char *v7; // rax
  char *v8; // rax
  char *v9; // rax
  char *v10; // rbx
  __int16 v11; // ax
  int v12; // edx
  char v13; // al
  char *v14; // rax
  char *v15; // rax
  const char *v16; // rbx
  __int64 v17; // rsi
  char v18; // al
  NTSTATUS Message; // eax
  NTSTRSAFE_PSTR v20; // rbx
  int v21; // r15d
  NTSTATUS v22; // eax
  size_t v23; // rsi
  char *v24; // rbx
  NTSTATUS v25; // eax
  NTSTATUS v26; // eax
  NTSTATUS v27; // eax
  int v28; // esi
  _OWORD *v29; // rax
  char *v30; // rcx
  __int64 v31; // rdx
  __int128 v32; // xmm1
  int v33; // eax
  char *v34; // rax
  char *v35; // rax
  __int16 v36; // bx
  char *v37; // rax
  char *v38; // rax
  char *v39; // rax
  char *v40; // rax
  char *v41; // rax
  char *v42; // rax
  char *v43; // rax
  char *v44; // rax
  char *v45; // rax
  char *v46; // rax
  const CHAR *v47; // rbx
  ULONG v48; // r9d
  NTSTATUS v49; // eax
  __int64 v50; // r9
  __int64 v51; // rdx
  _QWORD *v52; // rcx
  NTSTATUS v53; // eax
  __int64 v54; // r8
  __int64 v55; // r9
  int inited; // eax
  int v57; // eax
  int SystemRootLink; // eax
  LARGE_INTEGER v59; // r9
  NTSTATUS v60; // eax
  NTSTATUS v61; // eax
  ULONG_PTR v62; // rbx
  NTSTATUS v63; // eax
  PVOID v64; // rbx
  USHORT *v65; // r8
  USHORT *v66; // rdx
  USHORT *v67; // rcx
  PNLSTABLEINFO v68; // rcx
  int v69; // eax
  __int128 *DisplayContext; // rax
  ULONG_PTR v71; // rbx
  int v72; // eax
  int v73; // eax
  int v74; // eax
  int v75; // ebx
  __int64 v76; // r9
  char *v77; // rbx
  char *v78; // r12
  __int64 v79; // rdi
  const char *v80; // rbx
  int v81; // eax
  int v82; // ecx
  ULONG v83; // r9d
  int v84; // eax
  int v85; // eax
  int v86; // eax
  __int64 v87; // r8
  PMESSAGE_RESOURCE_ENTRY *MessageEntry; // [rsp+20h] [rbp-E0h]
  char v90; // [rsp+40h] [rbp-C0h]
  LARGE_INTEGER Time; // [rsp+48h] [rbp-B8h] BYREF
  int v92; // [rsp+50h] [rbp-B0h]
  PMESSAGE_RESOURCE_ENTRY v93; // [rsp+58h] [rbp-A8h] BYREF
  ULONG ResultDataSize; // [rsp+60h] [rbp-A0h] BYREF
  ULONG Type; // [rsp+64h] [rbp-9Ch] BYREF
  LARGE_INTEGER LocalTime; // [rsp+68h] [rbp-98h] BYREF
  int Buffer; // [rsp+70h] [rbp-90h] BYREF
  char *EndPtr; // [rsp+78h] [rbp-88h] BYREF
  size_t pcbRemaining; // [rsp+80h] [rbp-80h] BYREF
  NTSTRSAFE_PSTR ppszDestEnd; // [rsp+88h] [rbp-78h] BYREF
  HANDLE SectionHandle; // [rsp+90h] [rbp-70h] BYREF
  __int64 v102; // [rsp+98h] [rbp-68h] BYREF
  PMESSAGE_RESOURCE_ENTRY v103; // [rsp+A0h] [rbp-60h] BYREF
  LARGE_INTEGER MaximumSize; // [rsp+A8h] [rbp-58h] BYREF
  PVOID Object; // [rsp+B0h] [rbp-50h] BYREF
  PVOID MappedBase; // [rsp+B8h] [rbp-48h] BYREF
  PMESSAGE_RESOURCE_ENTRY v107; // [rsp+C0h] [rbp-40h] BYREF
  STRING v108; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v109; // [rsp+D8h] [rbp-28h]
  ULONG_PTR ViewSize; // [rsp+E0h] [rbp-20h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+E8h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+F8h] [rbp-8h] BYREF
  _QWORD v113[10]; // [rsp+110h] [rbp+10h] BYREF
  char pszDest[24]; // [rsp+160h] [rbp+60h] BYREF

  Time.QuadPart = 0LL;
  LocalTime.QuadPart = 0LL;
  v102 = 0LL;
  v108 = 0LL;
  SectionHandle = 0LL;
  MaximumSize.QuadPart = 0LL;
  v93 = 0LL;
  v103 = 0LL;
  TimeFields = 0LL;
  LOBYTE(v92) = 0;
  ResultDataSize = 0;
  Type = 0;
  DestinationString = 0LL;
  v2 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 132);
  v109 = v2;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x200uLL, 0x74696E49u);
  if ( !PoolWithTag )
    KeBugCheck(0x31u);
  CurrentThread = KeGetCurrentThread();
  LODWORD(InitializationPhase) = 1;
  v90 = 0;
  KeSetPriorityThread(CurrentThread, 31);
  v5 = *(char **)(BugCheckParameter3 + 216);
  if ( v5 )
    v6 = strupr(v5);
  else
    v6 = 0LL;
  if ( v6 )
  {
    v7 = strstr(v6, " HYPERVISORROOTPROC=");
    if ( v7 )
    {
      v8 = strstr(v7, "=");
      if ( v8 )
        KeRootProcSpecified = atol(v8 + 1);
    }
    v9 = strstr(v6, " HYPERVISORROOTPROCNUMANODES=");
    if ( v9 )
    {
      v10 = strstr(v9, "=");
      if ( v10 )
      {
        do
        {
          if ( (unsigned int)KeRootProcNumaNodesSpecified >= 0x40 )
            break;
          v11 = atol(++v10);
          v12 = KeRootProcNumaNodesSpecified;
          KeRootProcNumaNodes[KeRootProcNumaNodesSpecified] = v11;
          KeRootProcNumaNodesSpecified = v12 + 1;
          while ( 1 )
          {
            v13 = *v10;
            if ( *v10 == 44 )
              break;
            if ( v13 == 32 )
              goto LABEL_19;
            if ( !v13 )
              break;
            ++v10;
          }
        }
        while ( v13 != 32 && v13 );
      }
    }
LABEL_19:
    v14 = strstr(v6, " HYPERVISORROOTPROCNUMANODELPS=");
    if ( v14 )
    {
      v15 = strstr(v14, "=");
      KeRootProcNumaNodeLpsSpecified = 1;
      v16 = v15;
      KeRootProcNumaNodesSpecified = 0;
      KeRootProcSpecified = 0;
      if ( v15 )
      {
        do
        {
          ++v16;
          EndPtr = 0LL;
          v17 = strtoul(v16, &EndPtr, 10);
          if ( v16 != EndPtr && *EndPtr == 61 && (unsigned int)v17 < 0x40 )
          {
            v16 = EndPtr + 1;
            KeRootProcNumaNodeLps[v17] = strtoui64(EndPtr + 1, &EndPtr, 16);
          }
          while ( 1 )
          {
            v18 = *v16;
            if ( *v16 == 44 )
              break;
            if ( v18 == 32 )
              goto LABEL_31;
            if ( !v18 )
              break;
            ++v16;
          }
        }
        while ( v18 != 32 && v18 );
LABEL_31:
        v2 = v109;
      }
    }
  }
  KePerformGroupConfiguration(BugCheckParameter3);
  if ( !(unsigned __int8)HalInitSystem((unsigned int)InitializationPhase, BugCheckParameter3) )
    goto LABEL_184;
  KeInitializeClock((unsigned int)InitializationPhase);
  if ( !v6 || !strstr(v6, "NOGUIBOOT") )
  {
    InbvEnableDisplayString(0);
    BgkDisplayProgressIndicator();
    BgkDisplayBackgroundUpdate();
    InbvInstallDisplayStringFilter((__int64 (__fastcall *)(_QWORD))DisplayFilter);
    InbvDriverInitialize(1LL, BugCheckParameter3, 7LL);
    DisplayBootBitmap(0);
  }
  if ( v6 && strstr(v6, "MININT") )
  {
    InitIsWinPEMode = 1;
    if ( strstr(v6, "INRAM") )
      InitWinPEModeType |= 0x80000000;
    else
      InitWinPEModeType |= 1u;
  }
  Message = RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, 0x4000007Eu, &v93);
  v20 = PoolWithTag;
  ppszDestEnd = PoolWithTag;
  v21 = Message;
  pcbRemaining = 256LL;
  if ( CmCSDVersionString.Length )
  {
    v22 = RtlStringCbPrintfExA(PoolWithTag, 0xFFuLL, &ppszDestEnd, &pcbRemaining, 0, ": %wZ", &CmCSDVersionString);
    if ( v22 < 0 )
      KeBugCheckEx(0x32u, v22, 7uLL, 0LL, 0LL);
    v20 = ppszDestEnd;
    v23 = pcbRemaining;
  }
  else
  {
    v23 = 255LL;
    pcbRemaining = 255LL;
  }
  *v20 = 0;
  v24 = v20 + 1;
  ppszDestEnd = v24;
  v25 = RtlStringCbPrintfA(pszDest, 0x18uLL, "%u.%u", 10, 0);
  if ( v25 < 0 )
    KeBugCheckEx(0x32u, v25, 7uLL, 1uLL, 0LL);
  if ( v21 < 0 )
  {
    v27 = RtlStringCbCopyA(v24, v23, "MICROSOFT (R) WINDOWS (TM)\n");
    if ( v27 < 0 )
      KeBugCheckEx(0x32u, v27, 7uLL, 3uLL, 0LL);
  }
  else
  {
    LODWORD(MessageEntry) = (unsigned __int16)NtBuildNumber;
    v26 = RtlStringCbPrintfA(v24, v23, (NTSTRSAFE_PCSTR)v93->Text, pszDest, MessageEntry, PoolWithTag);
    if ( v26 < 0 )
      KeBugCheckEx(0x32u, v26, 7uLL, 2uLL, 0LL);
  }
  InbvDisplayString((__int64)v24);
  v28 = 2;
  v29 = PoolWithTag + 256;
  v30 = PoolWithTag;
  v31 = 2LL;
  do
  {
    *v29 = *(_OWORD *)v30;
    v29[1] = *((_OWORD *)v30 + 1);
    v29[2] = *((_OWORD *)v30 + 2);
    v29[3] = *((_OWORD *)v30 + 3);
    v29[4] = *((_OWORD *)v30 + 4);
    v29[5] = *((_OWORD *)v30 + 5);
    v29[6] = *((_OWORD *)v30 + 6);
    v29 += 8;
    v32 = *((_OWORD *)v30 + 7);
    v30 += 128;
    *(v29 - 1) = v32;
    --v31;
  }
  while ( v31 );
  if ( !(unsigned __int8)PoInitSystem(0LL, BugCheckParameter3, 128LL) )
LABEL_217:
    KeBugCheck(0xA0u);
  if ( !ExpRealTimeIsUniversal )
  {
    v33 = *(_DWORD *)(v2 + 436);
    if ( v33 == -1 )
    {
      v33 = ExpAltTimeZoneBias;
      *(_DWORD *)(v2 + 436) = ExpAltTimeZoneBias;
      v90 = 1;
    }
    *(_QWORD *)(v2 + 440) = 600000000LL * v33;
    MEMORY[0xFFFFF7800000025C] = 0;
    ExpWriteTimeZoneBias((_DWORD *)(v2 + 440));
  }
  GetBootSystemTime(*(_QWORD *)(BugCheckParameter3 + 240), &Time);
  if ( v6 )
  {
    v34 = strstr(v6, "YEAR");
    if ( v34 )
    {
      v35 = strstr(v34, "=");
      if ( v35 )
      {
        v36 = atol(v35 + 1);
        RtlTimeToTimeFields(&Time, &TimeFields);
        TimeFields.Year = v36;
        RtlTimeFieldsToTime(&TimeFields, &Time);
      }
    }
  }
  if ( ExpRealTimeIsUniversal )
    LocalTime = Time;
  else
    ExSystemTimeToLocalTime(&Time, &LocalTime);
  KeSetSystemTime((__int64)&Time, (__int64)&v102, 4);
  PoNotifySystemTimeSet((__int64 *)&Time, &v102);
  RtlInitUnicodeString(&DestinationString, L"Kernel-RegisteredProcessors");
  if ( ZwQueryLicenseValue(&DestinationString, &Type, &KeRegisteredProcessors, 4u, &ResultDataSize) < 0
    || ResultDataSize != 4
    || Type != 4 )
  {
    KeRegisteredProcessors = 1;
  }
  if ( v6 )
  {
    v37 = strstr(v6, " BOOTPROC=");
    if ( v37 )
    {
      v38 = strstr(v37, "=");
      if ( v38 )
        KeBootprocSpecified = atol(v38 + 1);
    }
    v39 = strstr(v6, " NUMPROC=");
    if ( v39 )
    {
      v40 = strstr(v39, "=");
      if ( v40 )
        KeNumprocSpecified = atol(v40 + 1);
    }
    v41 = strstr(v6, " HYPERVISORNUMPROC=");
    if ( v41 )
    {
      v42 = strstr(v41, "=");
      if ( v42 )
        KeHypervisorNumprocSpecified = atol(v42 + 1);
    }
    if ( !KeRootProcNumaNodeLpsSpecified )
    {
      v43 = strstr(v6, " HYPERVISORROOTPROCPERNODE=");
      if ( v43 )
      {
        v44 = strstr(v43, "=");
        if ( v44 )
          KeRootProcPerNodeSpecified = atol(v44 + 1);
      }
      v45 = strstr(v6, " HYPERVISORROOTPROCPERCORE=");
      if ( v45 )
      {
        v46 = strstr(v45, "=");
        if ( v46 )
          KeRootProcPerCoreSpecified = atol(v46 + 1);
      }
    }
    if ( strstr(v6, " MAXPROC") )
      KeMaximumProcessors = 1280;
  }
  qword_140D567B8 = KeQueryPerformanceCounter(0LL).QuadPart;
  KeStartAllProcessors();
  qword_140D567C0 = KeQueryPerformanceCounter(0LL).QuadPart;
  KeSetAffinityProcess((__int64)KeGetCurrentThread()->ApcState.Process, 0, (unsigned __int16 *)KeActiveProcessors);
  MakeGdtReadOnly();
  v47 = RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, 0x40000089u, &v103) < 0
      ? "MultiProcessor Kernel\r\n"
      : (const CHAR *)v103->Text;
  if ( !(unsigned __int8)HalAllProcessorsStarted() )
LABEL_184:
    KeBugCheck(0x61u);
  RtlInitAnsiString(&v108, v47);
  if ( v108.Length >= 2u )
    v108.Length -= 2;
  v48 = 1073741960;
  if ( (unsigned int)KeNumberProcessors_0 > 1 )
    v48 = 1073741981;
  v49 = RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, v48, &v93);
  v50 = 0LL;
  v51 = *(unsigned int *)MmPhysicalMemoryBlock;
  if ( (_DWORD)v51 )
  {
    v52 = (char *)MmPhysicalMemoryBlock + 24;
    do
    {
      v50 += *v52;
      v52 += 2;
      --v51;
    }
    while ( v51 );
  }
  if ( v49 < 0 )
    v53 = RtlStringCbPrintfA(
            PoolWithTag,
            0x100uLL,
            "%u System Processor [%u MB Memory] %Z\n",
            (unsigned int)KeNumberProcessors_0,
            (unsigned __int64)(v50 + 255) >> 8,
            &v108);
  else
    v53 = RtlStringCbPrintfA(
            PoolWithTag,
            0x100uLL,
            (NTSTRSAFE_PCSTR)v93->Text,
            (unsigned int)KeNumberProcessors_0,
            (unsigned __int64)(v50 + 255) >> 8,
            &v108);
  if ( v53 < 0 )
    KeBugCheckEx(0x32u, v53, 7uLL, 4uLL, 0LL);
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
  if ( !KdInitSystem(InitializationPhase, 0LL, v54, v55) )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 3uLL, 0LL);
  inited = TmInitSystem(
             &TmResourceManagerObjectType,
             &TmEnlistmentObjectType,
             &TmTransactionManagerObjectType,
             &TmTransactionObjectType);
  if ( (int)(inited + 0x80000000) >= 0 && inited != -1073741637 )
    KeBugCheckEx(0x32u, 0LL, 0LL, 0LL, 0LL);
  v57 = DbgkInitialize();
  if ( v57 < 0 )
    KeBugCheckEx(0x32u, v57, 0LL, 0LL, 0LL);
  BcdInitializeBcdSyncMutant();
  VerifierInitSystem(0LL);
  if ( !(unsigned __int8)SeInitSystem() )
    KeBugCheck(0x63u);
  PsInitSystem(1LL, BugCheckParameter3);
  ExInitLicenseCallback();
  SystemRootLink = CreateSystemRootLink(BugCheckParameter3);
  if ( SystemRootLink < 0 )
    KeBugCheckEx(0x64u, SystemRootLink, 0LL, 0LL, 0LL);
  qword_140D567D8 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( !(unsigned __int8)MmInitSystem(1LL, BugCheckParameter3) )
    KeBugCheck(0x65u);
  qword_140D567E0 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( InitNlsTableSize )
  {
    MaximumSize.QuadPart = InitNlsTableSize;
    v60 = ZwCreateSection(&SectionHandle, 0xF001Fu, 0LL, &MaximumSize, 4u, 0x8000000u, 0LL);
    if ( v60 < 0 )
      KeBugCheckEx(0x32u, v60, 1uLL, 0LL, 0LL);
    Object = 0LL;
    v61 = ObReferenceObjectByHandle(SectionHandle, 0xF001Fu, MmSectionObjectType, 0, &Object, 0LL);
    InitNlsSectionPointer = Object;
    v62 = v61;
    ZwClose(SectionHandle);
    if ( (v62 & 0x80000000) != 0LL )
      KeBugCheckEx(0x32u, v62, 2uLL, 0LL, 0LL);
    MappedBase = 0LL;
    ViewSize = 0LL;
    v63 = MmMapViewInSystemSpace(InitNlsSectionPointer, &MappedBase, &ViewSize);
    if ( v63 < 0 )
      KeBugCheckEx(0x32u, v63, 3uLL, 0LL, 0LL);
    v64 = MappedBase;
    memmove(MappedBase, InitNlsTableBase, InitNlsTableSize);
    InitNlsTableBase = v64;
  }
  if ( !InitNlsTableBase )
  {
    v65 = 0LL;
LABEL_120:
    v66 = 0LL;
    v67 = 0LL;
    goto LABEL_124;
  }
  if ( !InitUnicodeCaseTableDataOffset )
  {
    v65 = (USHORT *)InitNlsTableBase;
    goto LABEL_120;
  }
  v65 = (USHORT *)((char *)InitNlsTableBase + (unsigned int)InitUnicodeCaseTableDataOffset);
  v66 = (USHORT *)((char *)InitNlsTableBase + (unsigned int)InitOemCodePageDataOffset);
  v67 = (USHORT *)((char *)InitNlsTableBase + (unsigned int)InitAnsiCodePageDataOffset);
LABEL_124:
  RtlInitNlsTables(v67, v66, v65, (PNLSTABLEINFO)v59.QuadPart);
  RtlResetRtlTranslations(v68);
  if ( !(unsigned __int8)CcInitializeCacheManager() )
    KeBugCheck(0x66u);
  if ( !(unsigned __int8)CmInitSystem1(BugCheckParameter3) )
    KeBugCheck(0x67u);
  v69 = ExInitializeLeapSecondData();
  if ( v69 < 0 )
    KeBugCheckEx(0x32u, v69, 0xCuLL, 0LL, 0LL);
  InitSkuSessionParameters();
  qword_140D567A8 = KeQueryPerformanceCounter(0LL).QuadPart;
  memset(v113, 0, 0x48uLL);
  LODWORD(v113[0]) = 72;
  v113[1] = MmMapLockedRestartPages;
  v113[2] = MmUnmapLockedRestartPages;
  v113[3] = KeRemoveEnclavePage;
  v113[4] = KdPullRemoteFileEx;
  VslGetKsrContext();
  DisplayContext = BgGetDisplayContext();
  v71 = (int)KsrInitSystem(BugCheckParameter3, v113, DisplayContext);
  qword_140D567B0 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( (int)(v71 + 0x80000000) >= 0 && (_DWORD)v71 != -1073741637 )
    KeBugCheckEx(0x32u, v71, 0LL, 1uLL, 0LL);
  ExKsrInterface = *(_OWORD *)&v113[5];
  *(_OWORD *)&xmmword_140C19570 = *(_OWORD *)&v113[7];
  v72 = EmInitSystem(0LL, BugCheckParameter3);
  if ( v72 < 0 )
    KeBugCheckEx(0x32u, v72, 8uLL, 0LL, 0LL);
  v73 = MfgInitSystem(BugCheckParameter3);
  if ( v73 < 0 )
    KeBugCheckEx(0x32u, v73, 9uLL, 0LL, 0LL);
  PfInitializeSuperfetch();
  SmInitSystem(0LL);
  v74 = VmInitSystem(0LL);
  if ( v74 < 0 )
    KeBugCheckEx(0x32u, v74, 0xAuLL, 0LL, 0LL);
  if ( (*(_BYTE *)(*(_QWORD *)(BugCheckParameter3 + 240) + 2624LL) & 2) == 0 || strstr(v6, "FORCETIMESYNC") )
    ZwUpdateWnfStateData(&WNF_BOOT_INVALID_TIME_SOURCE, 0LL, 0, 0LL, 0LL, 0, 0);
  HvlWnfUpdateStartupState();
  Buffer = 0;
  FsRtlSendModernAppTermination(&Buffer, 1u, 1);
  if ( (unsigned int)Feature_Servicing_CorrectTimeAfterDST_33809459__private_IsEnabled() )
    ExInitializeTimeRefresh();
  if ( (unsigned int)Feature_Servicing_CorrectTimeAfterDST_33809459__private_IsEnabled() )
    ExAcquireTimeRefreshLock(1u);
  ExInitializeUtcTimeZoneBias(&LocalTime);
  v75 = *(_DWORD *)(v2 + 436);
  ExpRefreshTimeZoneInformation(0);
  if ( (unsigned int)Feature_Servicing_CorrectTimeAfterDST_33809459__private_IsEnabled() )
    ExReleaseTimeRefreshLock();
  if ( v90 )
  {
    ExLocalTimeToSystemTime(&LocalTime, &Time);
    KeSetSystemTime((__int64)&Time, (__int64)&v102, 4);
  }
  else if ( v75 != *(_DWORD *)(v2 + 436) )
  {
    ZwSetSystemTime(0LL, 0LL);
  }
  if ( !(unsigned __int8)FsRtlInitSystem() )
    KeBugCheck(0x68u);
  RtlInitializeCompression();
  RtlInitializeRangeListPackage();
  HvlDebuggerSupportInitialize(BugCheckParameter3);
  HalReportResourceUsage(0LL);
  KdInitialize(1LL, BugCheckParameter3, &KdpContext, v76);
  if ( !(unsigned __int8)PpInitSystem() )
    KeBugCheck(0x90u);
  if ( !(unsigned __int8)LpcInitSystem() )
    KeBugCheck(0x6Au);
  if ( v6 )
    v77 = strstr(v6, "SAFEBOOT:");
  else
    v77 = 0LL;
  v78 = v77;
  if ( v77 )
  {
    v79 = 9LL;
    v80 = v77 + 9;
    if ( !strncmp(v80, "MINIMAL", 7uLL) )
    {
      InitSafeBootMode = 1;
      v79 = 16LL;
    }
    else
    {
      if ( !strncmp(v80, "NETWORK", 7uLL) )
      {
        v79 = 16LL;
      }
      else if ( !strncmp(v80, "DSREPAIR", 8uLL) )
      {
        v28 = 3;
        v79 = 17LL;
      }
      else
      {
        v28 = 0;
      }
      InitSafeBootMode = v28;
    }
    if ( v78[v79] )
    {
      v81 = strncmp(&v78[v79], "(ALTERNATESHELL)", 0x10uLL);
      v82 = (unsigned __int8)v92;
      if ( !v81 )
        v82 = 1;
      v92 = v82;
    }
    if ( InitSafeBootMode )
    {
      v107 = 0LL;
      v83 = 0;
      switch ( InitSafeBootMode )
      {
        case 1:
          v83 = 168;
          break;
        case 2:
          v83 = 169;
          break;
        case 3:
          v83 = 170;
          break;
      }
      if ( RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, v83, &v107) >= 0 )
        InbvDisplayString((__int64)v107->Text);
    }
  }
  if ( (*(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 240) + 132LL) & 0x800) != 0 )
  {
    if ( RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, 0xB7u, &v93) >= 0 )
      InbvDisplayString((__int64)v93->Text);
    IopInitializeBootLogging(BugCheckParameter3, (__int64)(PoolWithTag + 256));
  }
  ExInitSystemPhase2();
  MEMORY[0xFFFFF780000002D6] = ExpComputeCyclesPerYield();
  if ( InitIsWinPEMode )
    CreateMiniNtBootKey();
  v84 = SeCodeIntegrityInitializePolicy(BugCheckParameter3);
  if ( v84 < 0 )
    KeBugCheckEx(0x32u, v84, 0x69436553uLL, 0LL, 0LL);
  KdpTimeSlipPending = 0;
  v85 = ExInitializeNls();
  if ( v85 < 0 )
    KeBugCheckEx(0x32u, v85, 7uLL, 0LL, 0LL);
  v86 = ExInitializeExternalBootSupport();
  if ( v86 < 0 )
    KeBugCheckEx(0x32u, v86, 8uLL, 0LL, 0LL);
  if ( !(unsigned __int8)PoInitSystem(1LL, BugCheckParameter3, v87) )
    goto LABEL_217;
  return v92;
}
