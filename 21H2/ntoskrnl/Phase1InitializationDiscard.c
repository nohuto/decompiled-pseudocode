/*
 * XREFs of Phase1InitializationDiscard @ 0x140AFBDF4
 * Callers:
 *     Phase1Initialization @ 0x14084C160 (Phase1Initialization.c)
 * Callees:
 *     RtlTimeFieldsToTime @ 0x14022D4D0 (RtlTimeFieldsToTime.c)
 *     ExSystemTimeToLocalTime @ 0x14022D770 (ExSystemTimeToLocalTime.c)
 *     ExLocalTimeToSystemTime @ 0x14022D7D0 (ExLocalTimeToSystemTime.c)
 *     FsRtlSendModernAppTermination @ 0x14024C440 (FsRtlSendModernAppTermination.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x140250C50 (ExInitializeNPagedLookasideListInternal.c)
 *     RtlInitAnsiString @ 0x1402A07B0 (RtlInitAnsiString.c)
 *     RtlStringCbCopyA @ 0x1402A1054 (RtlStringCbCopyA.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     RtlTimeToTimeFields @ 0x1402D1A30 (RtlTimeToTimeFields.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     KeSetPriorityThread @ 0x140344340 (KeSetPriorityThread.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 *     PoNotifySystemTimeSet @ 0x1403B65EC (PoNotifySystemTimeSet.c)
 *     KeSetSystemTime @ 0x1403B6B94 (KeSetSystemTime.c)
 *     InbvDisplayString @ 0x1403BF7D0 (InbvDisplayString.c)
 *     RtlStringCbPrintfA @ 0x1403BF7F4 (RtlStringCbPrintfA.c)
 *     MakeGdtReadOnly @ 0x1403C205C (MakeGdtReadOnly.c)
 *     KiCommitGroupSubNodeAssignments @ 0x1403C2DB8 (KiCommitGroupSubNodeAssignments.c)
 *     DisplayBootBitmap @ 0x1403D8274 (DisplayBootBitmap.c)
 *     KeSetAffinityProcess @ 0x1403DAC1C (KeSetAffinityProcess.c)
 *     HvlDebuggerSupportInitialize @ 0x1403DF0F4 (HvlDebuggerSupportInitialize.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _strupr @ 0x1403E03F0 (_strupr.c)
 *     strtoul @ 0x1403E08C8 (strtoul.c)
 *     strncmp @ 0x1403E0910 (strncmp.c)
 *     _strtoui64 @ 0x1403E0C10 (_strtoui64.c)
 *     strstr @ 0x1403E0C40 (strstr.c)
 *     atol @ 0x1403E0CE0 (atol.c)
 *     ZwQueryLicenseValue @ 0x14041E2C0 (ZwQueryLicenseValue.c)
 *     ZwSetSystemTime @ 0x14041EE40 (ZwSetSystemTime.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     KeBugCheck @ 0x14041F3B0 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlStringCbPrintfExA @ 0x140502744 (RtlStringCbPrintfExA.c)
 *     ExInitializePagedLookasideList @ 0x1406DA090 (ExInitializePagedLookasideList.c)
 *     RtlFindMessage @ 0x140758920 (RtlFindMessage.c)
 *     ExReleaseTimeRefreshLock @ 0x1407D6CBC (ExReleaseTimeRefreshLock.c)
 *     ExAcquireTimeRefreshLock @ 0x1407D6F54 (ExAcquireTimeRefreshLock.c)
 *     ExpRefreshTimeZoneInformation @ 0x140835844 (ExpRefreshTimeZoneInformation.c)
 *     ExpWriteTimeZoneBias @ 0x1408365B8 (ExpWriteTimeZoneBias.c)
 *     ExInitializeLeapSecondData @ 0x140857D34 (ExInitializeLeapSecondData.c)
 *     AlpcpInitSystem @ 0x14085C5A8 (AlpcpInitSystem.c)
 *     EtwTimeProfileReset @ 0x1408644E0 (EtwTimeProfileReset.c)
 *     ExInitLicenseCallback @ 0x140864CD4 (ExInitLicenseCallback.c)
 *     ExInitializeUtcTimeZoneBias @ 0x140864D14 (ExInitializeUtcTimeZoneBias.c)
 *     IopInitializeBootLogging @ 0x1409346B0 (IopInitializeBootLogging.c)
 *     HalInitSystem @ 0x140A56BD0 (HalInitSystem.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 *     KdInitSystem @ 0x140A70470 (KdInitSystem.c)
 *     BgGetDisplayContext @ 0x140AAB028 (BgGetDisplayContext.c)
 *     BgDisplayProgressIndicator @ 0x140AAD188 (BgDisplayProgressIndicator.c)
 *     BgDisplayBackgroundUpdate @ 0x140AAED40 (BgDisplayBackgroundUpdate.c)
 *     HalAllProcessorsStarted @ 0x140AFB130 (HalAllProcessorsStarted.c)
 *     HalReportResourceUsage @ 0x140AFC970 (HalReportResourceUsage.c)
 *     CcInitializeCacheManager @ 0x140AFC9DC (CcInitializeCacheManager.c)
 *     IoCreateObjectTypes @ 0x140AFD20C (IoCreateObjectTypes.c)
 *     ObInitSystem @ 0x140AFE184 (ObInitSystem.c)
 *     PoInitSystem @ 0x140B026CC (PoInitSystem.c)
 *     KeInitSystem @ 0x140B03800 (KeInitSystem.c)
 *     KeStartAllProcessors @ 0x140B03C68 (KeStartAllProcessors.c)
 *     KiPerformGroupConfiguration @ 0x140B0610C (KiPerformGroupConfiguration.c)
 *     MmInitSystem @ 0x140B07AB0 (MmInitSystem.c)
 *     ExInitSystem @ 0x140B0AA3C (ExInitSystem.c)
 *     EmInitSystem @ 0x140B0B630 (EmInitSystem.c)
 *     ExInitializeTimeRefresh @ 0x140B0E000 (ExInitializeTimeRefresh.c)
 *     CmInitSystem1 @ 0x140B15F88 (CmInitSystem1.c)
 *     ExInitSystemPhase2 @ 0x140B1BBE4 (ExInitSystemPhase2.c)
 *     PspInitPhase1 @ 0x140B1E0A8 (PspInitPhase1.c)
 *     SeInitSystem @ 0x140B1E13C (SeInitSystem.c)
 *     VmInitSystem @ 0x140B1E5EC (VmInitSystem.c)
 *     DbgkInitialize @ 0x140B233CC (DbgkInitialize.c)
 *     PfInitializeSuperfetch @ 0x140B23A48 (PfInitializeSuperfetch.c)
 *     ExpComputeCyclesPerYield @ 0x140B24BE4 (ExpComputeCyclesPerYield.c)
 *     SmInitSystem @ 0x140B255E4 (SmInitSystem.c)
 *     InbvDriverInitialize @ 0x140B25898 (InbvDriverInitialize.c)
 *     FsRtlInitSystem @ 0x140B25C04 (FsRtlInitSystem.c)
 *     KeInitializeClock @ 0x140B27884 (KeInitializeClock.c)
 *     VerifierInitSystem @ 0x140B27AFC (VerifierInitSystem.c)
 *     CreateSystemRootLink @ 0x140B2B2EC (CreateSystemRootLink.c)
 *     SeCodeIntegrityInitializePolicy @ 0x140B2BE4C (SeCodeIntegrityInitializePolicy.c)
 *     InitSkuSessionParameters @ 0x140B2E6EC (InitSkuSessionParameters.c)
 *     GetBootSystemTime @ 0x140B2EBF4 (GetBootSystemTime.c)
 *     PpInitSystem @ 0x140B2F780 (PpInitSystem.c)
 *     BcdInitializeBcdSyncMutant @ 0x140B308F0 (BcdInitializeBcdSyncMutant.c)
 *     MfgInitSystem @ 0x140B30BB0 (MfgInitSystem.c)
 *     ExInitializeExternalBootSupport @ 0x140B30D14 (ExInitializeExternalBootSupport.c)
 *     CreateMiniNtBootKey @ 0x140B4B5E0 (CreateMiniNtBootKey.c)
 */

char __fastcall Phase1InitializationDiscard(ULONG_PTR BugCheckParameter3)
{
  __int64 v2; // r12
  char *PoolWithTag; // rax
  char *v4; // r13
  struct _KTHREAD *CurrentThread; // rcx
  char *v6; // rcx
  char *v7; // rax
  const char *v8; // rbx
  const char *v9; // rdi
  char *v10; // rax
  char *v11; // rax
  char *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rbx
  ULONG_PTR v15; // rcx
  char v16; // al
  char v17; // cl
  int v18; // eax
  char v19; // cl
  bool v20; // sf
  int v21; // eax
  char v22; // cl
  int Message; // eax
  NTSTRSAFE_PSTR v24; // rbx
  int v25; // r15d
  size_t v26; // rsi
  char *v27; // rbx
  NTSTATUS v28; // eax
  NTSTATUS v29; // eax
  __int64 v30; // r15
  _OWORD *v31; // rax
  char *v32; // rcx
  __int64 v33; // rdx
  __int128 v34; // xmm1
  int v35; // eax
  char *v36; // rax
  _QWORD *CurrentServerSiloGlobals; // rax
  char *v38; // rax
  char *v39; // rax
  char *v40; // rax
  char *v41; // rax
  char *v42; // rax
  __int64 v43; // rcx
  const char *v44; // rbx
  unsigned int v45; // r9d
  int v46; // eax
  __int64 v47; // r9
  __int64 v48; // rdx
  _QWORD *v49; // rcx
  NTSTATUS v50; // eax
  __int64 v51; // r8
  __int64 v52; // r9
  int inited; // eax
  int v54; // eax
  int SystemRootLink; // eax
  int v56; // eax
  __int128 *DisplayContext; // rax
  ULONG_PTR v58; // rbx
  int v59; // eax
  int v60; // eax
  int v61; // eax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  int v65; // ebx
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  char *v70; // rax
  char *v71; // r15
  int v72; // eax
  int v73; // eax
  __int64 v74; // r8
  char *v76; // rax
  char *v77; // rsi
  __int16 v78; // ax
  int v79; // edx
  char v80; // al
  char *v81; // rax
  const char *v82; // rbx
  __int64 v83; // rsi
  bool v84; // zf
  char v85; // al
  NTSTATUS v86; // eax
  NTSTATUS v87; // eax
  char *v88; // rax
  __int16 v89; // bx
  char *v90; // rax
  char *v91; // rax
  char *v92; // rax
  char *v93; // rax
  char *v94; // rax
  const char *v95; // rdi
  __int64 v96; // rax
  int v97; // eax
  int v98; // ecx
  unsigned int v99; // r9d
  SIZE_T Size; // [rsp+20h] [rbp-E0h]
  int Tag; // [rsp+28h] [rbp-D8h]
  char v102; // [rsp+40h] [rbp-C0h]
  LARGE_INTEGER SystemTime; // [rsp+48h] [rbp-B8h] BYREF
  int v104; // [rsp+50h] [rbp-B0h]
  const char *v105; // [rsp+58h] [rbp-A8h] BYREF
  int v106; // [rsp+60h] [rbp-A0h]
  int v107; // [rsp+64h] [rbp-9Ch] BYREF
  LARGE_INTEGER LocalTime; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int16 *v109; // [rsp+70h] [rbp-90h] BYREF
  char *v110; // [rsp+78h] [rbp-88h]
  int v111; // [rsp+80h] [rbp-80h] BYREF
  char *EndPtr; // [rsp+88h] [rbp-78h] BYREF
  size_t pcbRemaining; // [rsp+90h] [rbp-70h] BYREF
  NTSTRSAFE_PSTR ppszDestEnd; // [rsp+98h] [rbp-68h] BYREF
  __int64 v115; // [rsp+A0h] [rbp-60h] BYREF
  STRING v116; // [rsp+A8h] [rbp-58h] BYREF
  TIME_FIELDS TimeFields; // [rsp+B8h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+C8h] [rbp-38h] BYREF
  _OWORD v119[8]; // [rsp+E0h] [rbp-20h] BYREF
  char pszDest[24]; // [rsp+160h] [rbp+60h] BYREF

  SystemTime.QuadPart = 0LL;
  LocalTime.QuadPart = 0LL;
  v115 = 0LL;
  v116 = 0LL;
  v105 = 0LL;
  v109 = 0LL;
  TimeFields = 0LL;
  LOBYTE(v104) = 0;
  v106 = 0;
  v107 = 0;
  DestinationString = 0LL;
  DWORD1(v119[0]) = 0;
  v2 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 157);
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x200uLL, 0x74696E49u);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
    KeBugCheck(0x31u);
  CurrentThread = KeGetCurrentThread();
  v102 = 0;
  v110 = PoolWithTag + 256;
  LODWORD(InitializationPhase) = 1;
  KeSetPriorityThread(CurrentThread, 31);
  v6 = *(char **)(BugCheckParameter3 + 216);
  if ( v6 )
  {
    v7 = strupr(v6);
    v8 = v7;
    v9 = v7;
    if ( v7 )
    {
      v10 = strstr(v7, " HYPERVISORROOTPROC=");
      if ( v10 )
      {
        v76 = strstr(v10, "=");
        if ( v76 )
          KeRootProcSpecified = atol(v76 + 1);
      }
      v11 = strstr(v8, " HYPERVISORROOTPROCNUMANODES=");
      if ( v11 )
      {
        v77 = strstr(v11, "=");
        if ( v77 )
        {
          while ( (unsigned int)KeRootProcNumaNodesSpecified < 0x40 )
          {
            v78 = atol(++v77);
            v79 = KeRootProcNumaNodesSpecified;
            KeRootProcNumaNodes[KeRootProcNumaNodesSpecified] = v78;
            KeRootProcNumaNodesSpecified = v79 + 1;
            while ( 1 )
            {
              v80 = *v77;
              if ( *v77 == 44 )
                break;
              if ( v80 == 32 || !v80 )
                goto LABEL_6;
              ++v77;
            }
          }
        }
      }
LABEL_6:
      v12 = strstr(v9, " HYPERVISORROOTPROCNUMANODELPS=");
      if ( v12 )
      {
        v81 = strstr(v12, "=");
        KeRootProcNumaNodeLpsSpecified = 1;
        v82 = v81;
        KeRootProcNumaNodesSpecified = 0;
        KeRootProcSpecified = 0;
        if ( v81 )
        {
          do
          {
            ++v82;
            EndPtr = 0LL;
            v83 = strtoul(v82, &EndPtr, 10);
            if ( v82 != EndPtr && *EndPtr == 61 && (unsigned int)v83 < 0x40 )
            {
              v82 = EndPtr + 1;
              KeRootProcNumaNodeLps[v83] = strtoui64(EndPtr + 1, &EndPtr, 16);
            }
            while ( 1 )
            {
              v85 = *v82;
              if ( *v82 == 44 )
                break;
              if ( v85 == 32 )
                goto LABEL_7;
              v84 = v85 == 0;
              if ( !v85 )
                goto LABEL_125;
              ++v82;
            }
            v84 = 0;
LABEL_125:
            ;
          }
          while ( !v84 );
        }
      }
    }
  }
  else
  {
    v9 = 0LL;
  }
LABEL_7:
  v13 = KiSubNodeConfigBlock;
  word_140C54EDC = 0;
  *(_BYTE *)(KiSubNodeConfigBlock + 5) &= 0xFCu;
  *(_BYTE *)(v13 + 4) = 0;
  KiPerformGroupConfiguration(BugCheckParameter3);
  v14 = KiSubNodeConfigBlock;
  KiCommitGroupSubNodeAssignments(*(_WORD *)(KiSubNodeConfigBlock + 6));
  v15 = (unsigned int)InitializationPhase;
  *(_QWORD *)(v14 + 16) |= 1uLL;
  if ( !(unsigned __int8)HalInitSystem(v15, BugCheckParameter3) )
    goto LABEL_207;
  KeInitializeClock((unsigned int)InitializationPhase);
  if ( v9 && strstr(v9, "NOGUIBOOT") )
    goto LABEL_210;
  v16 = byte_140C54D48;
  byte_140C54D0C = 0;
  if ( byte_140C54D48 )
  {
    v17 = byte_140C54D49;
    if ( byte_140C54D49 )
    {
      v18 = BgDisplayProgressIndicator(1);
      v19 = byte_140C54905;
      v20 = v18 < 0;
      v16 = byte_140C54D48;
      if ( !v20 )
        v19 = 1;
      byte_140C54905 = v19;
      v17 = byte_140C54D49;
    }
    if ( v16 && v17 )
    {
      v21 = BgDisplayBackgroundUpdate(1);
      v22 = byte_140C54904;
      if ( v21 >= 0 )
        v22 = 1;
      byte_140C54904 = v22;
    }
  }
  qword_140C54D18 = (__int64 (__fastcall *)(_QWORD))DisplayFilter;
  InbvDriverInitialize(1LL, BugCheckParameter3, 7LL);
  DisplayBootBitmap(0);
  if ( v9 )
  {
LABEL_210:
    if ( strstr(v9, "MININT") )
    {
      InitIsWinPEMode = 1;
      if ( strstr(v9, "INRAM") )
        InitWinPEModeType |= 0x80000000;
      else
        InitWinPEModeType |= 1u;
    }
  }
  Message = RtlFindMessage(0x140000000uLL, 0xBu, 0, 0x4000007Eu, (unsigned __int16 **)&v105);
  pcbRemaining = 256LL;
  v24 = v4;
  v25 = Message;
  ppszDestEnd = v4;
  if ( CmCSDVersionString.Length )
  {
    v86 = RtlStringCbPrintfExA(v4, 0xFFuLL, &ppszDestEnd, &pcbRemaining, 0, ": %wZ");
    if ( v86 < 0 )
      KeBugCheckEx(0x32u, v86, 7uLL, 0LL, 0LL);
    v24 = ppszDestEnd;
    v26 = pcbRemaining;
  }
  else
  {
    v26 = 255LL;
    pcbRemaining = 255LL;
  }
  *v24 = 0;
  v27 = v24 + 1;
  ppszDestEnd = v27;
  v28 = RtlStringCbPrintfA(pszDest, 0x18uLL, "%u.%u", 10, 0);
  if ( v28 < 0 )
    KeBugCheckEx(0x32u, v28, 7uLL, 1uLL, 0LL);
  if ( v25 < 0 )
  {
    v87 = RtlStringCbCopyA(v27, v26, "MICROSOFT (R) WINDOWS (TM)\n");
    if ( v87 < 0 )
      KeBugCheckEx(0x32u, v87, 7uLL, 3uLL, 0LL);
  }
  else
  {
    Tag = (int)v4;
    LODWORD(Size) = (unsigned __int16)NtBuildNumber;
    v29 = RtlStringCbPrintfA(v27, v26, v105 + 4, pszDest, Size);
    if ( v29 < 0 )
      KeBugCheckEx(0x32u, v29, 7uLL, 2uLL, 0LL);
  }
  InbvDisplayString((__int64)v27);
  v30 = (__int64)(v4 + 256);
  v31 = v4 + 256;
  v32 = v4;
  v33 = 2LL;
  do
  {
    *v31 = *(_OWORD *)v32;
    v31[1] = *((_OWORD *)v32 + 1);
    v31[2] = *((_OWORD *)v32 + 2);
    v31[3] = *((_OWORD *)v32 + 3);
    v31[4] = *((_OWORD *)v32 + 4);
    v31[5] = *((_OWORD *)v32 + 5);
    v31[6] = *((_OWORD *)v32 + 6);
    v31 += 8;
    v34 = *((_OWORD *)v32 + 7);
    v32 += 128;
    *(v31 - 1) = v34;
    --v33;
  }
  while ( v33 );
  if ( !(unsigned __int8)PoInitSystem(0LL, BugCheckParameter3, 128LL) )
LABEL_206:
    KeBugCheck(0xA0u);
  if ( !ExpRealTimeIsUniversal )
  {
    v35 = *(_DWORD *)(v2 + 436);
    if ( v35 == -1 )
    {
      v35 = ExpAltTimeZoneBias;
      *(_DWORD *)(v2 + 436) = ExpAltTimeZoneBias;
      v102 = 1;
    }
    *(_QWORD *)(v2 + 440) = 600000000LL * v35;
    MEMORY[0xFFFFF7800000025C] = 0;
    ExpWriteTimeZoneBias((_DWORD *)(v2 + 440));
  }
  GetBootSystemTime(*(_QWORD *)(BugCheckParameter3 + 240), &SystemTime);
  if ( v9 )
  {
    v36 = strstr(v9, "YEAR");
    if ( v36 )
    {
      v88 = strstr(v36, "=");
      if ( v88 )
      {
        v89 = atol(v88 + 1);
        RtlTimeToTimeFields(&SystemTime, &TimeFields);
        TimeFields.Year = v89;
        RtlTimeFieldsToTime(&TimeFields, &SystemTime);
      }
    }
  }
  if ( ExpRealTimeIsUniversal )
    LocalTime = SystemTime;
  else
    ExSystemTimeToLocalTime(&SystemTime, &LocalTime);
  KeSetSystemTime((__int64)&SystemTime, (__int64)&v115, 4);
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  PoNotifySystemTimeSet(
    (__int64 *)&SystemTime,
    &v115,
    0,
    (int)&LocalTime,
    *(_DWORD *)(CurrentServerSiloGlobals[157] + 436LL),
    Tag,
    ExpSystemIsInCmosMode);
  RtlInitUnicodeString(&DestinationString, L"Kernel-RegisteredProcessors");
  if ( (int)ZwQueryLicenseValue((__int64)&DestinationString, (__int64)&v107) < 0 || v106 != 4 || v107 != 4 )
    KeRegisteredProcessors = 1;
  if ( v9 )
  {
    v38 = strstr(v9, " BOOTPROC=");
    if ( v38 )
    {
      v90 = strstr(v38, "=");
      if ( v90 )
        KeBootprocSpecified = atol(v90 + 1);
    }
    v39 = strstr(v9, " NUMPROC=");
    if ( v39 )
    {
      v91 = strstr(v39, "=");
      if ( v91 )
        KeNumprocSpecified = atol(v91 + 1);
    }
    v40 = strstr(v9, " HYPERVISORNUMPROC=");
    if ( v40 )
    {
      v92 = strstr(v40, "=");
      if ( v92 )
        KeHypervisorNumprocSpecified = atol(v92 + 1);
    }
    if ( !KeRootProcNumaNodeLpsSpecified )
    {
      v41 = strstr(v9, " HYPERVISORROOTPROCPERNODE=");
      if ( v41 )
      {
        v93 = strstr(v41, "=");
        if ( v93 )
          KeRootProcPerNodeSpecified = atol(v93 + 1);
      }
      v42 = strstr(v9, " HYPERVISORROOTPROCPERCORE=");
      if ( v42 )
      {
        v94 = strstr(v42, "=");
        if ( v94 )
          KeRootProcPerCoreSpecified = atol(v94 + 1);
      }
    }
    if ( strstr(v9, " MAXPROC") )
      KeMaximumProcessors = 2048;
  }
  qword_140D68788 = KeQueryPerformanceCounter(0LL).QuadPart;
  KeStartAllProcessors(v43);
  qword_140D68790 = KeQueryPerformanceCounter(0LL).QuadPart;
  EtwTimeProfileReset();
  KeSetAffinityProcess((__int64)KeGetCurrentThread()->ApcState.Process, 0, (unsigned __int16 *)KeActiveProcessors);
  MakeGdtReadOnly();
  v44 = (int)RtlFindMessage(0x140000000uLL, 0xBu, 0, 0x40000089u, &v109) < 0
      ? "MultiProcessor Kernel\r\n"
      : (const char *)(v109 + 2);
  if ( !HalAllProcessorsStarted() )
LABEL_207:
    KeBugCheck(0x61u);
  RtlInitAnsiString(&v116, v44);
  if ( v116.Length >= 2u )
    v116.Length -= 2;
  v45 = 1073741960;
  if ( (unsigned int)KeNumberProcessors_0 > 1 )
    v45 = 1073741981;
  v46 = RtlFindMessage(0x140000000uLL, 0xBu, 0, v45, (unsigned __int16 **)&v105);
  v47 = 0LL;
  v48 = *(unsigned int *)MmPhysicalMemoryBlock;
  if ( (_DWORD)v48 )
  {
    v49 = (char *)MmPhysicalMemoryBlock + 24;
    do
    {
      v47 += *v49;
      v49 += 2;
      --v48;
    }
    while ( v48 );
  }
  if ( v46 < 0 )
    v50 = RtlStringCbPrintfA(
            v4,
            0x100uLL,
            "%u System Processor [%u MB Memory] %Z\n",
            (unsigned int)KeNumberProcessors_0,
            (unsigned __int64)(v47 + 255) >> 8,
            &v116);
  else
    v50 = RtlStringCbPrintfA(
            v4,
            0x100uLL,
            v105 + 4,
            (unsigned int)KeNumberProcessors_0,
            (unsigned __int64)(v47 + 255) >> 8,
            &v116);
  if ( v50 < 0 )
    KeBugCheckEx(0x32u, v50, 7uLL, 4uLL, 0LL);
  InbvDisplayString((__int64)v4);
  ExFreePoolWithTag(v4, 0);
  if ( !(unsigned __int8)ObInitSystem(1LL) )
    KeBugCheck(0x62u);
  if ( !(unsigned __int8)ExInitSystem(BugCheckParameter3) )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 1uLL, 0LL);
  HalReportResourceUsage(0xFFFFFFFFLL);
  if ( !(unsigned __int8)IoCreateObjectTypes() )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 4uLL, 0LL);
  if ( !(unsigned __int8)KeInitSystem(1LL) )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 2uLL, 0LL);
  if ( !KdInitSystem(InitializationPhase, 0LL, v51, v52) )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 3uLL, 0LL);
  inited = TmInitSystem(
             &TmResourceManagerObjectType,
             &TmEnlistmentObjectType,
             &TmTransactionManagerObjectType,
             &TmTransactionObjectType);
  if ( (int)(inited + 0x80000000) >= 0 && inited != -1073741637 )
    KeBugCheckEx(0x32u, 0LL, 0LL, 0LL, 0LL);
  v54 = DbgkInitialize();
  if ( v54 < 0 )
    KeBugCheckEx(0x32u, v54, 0LL, 0LL, 0LL);
  BcdInitializeBcdSyncMutant();
  VerifierInitSystem(0LL);
  if ( !(unsigned __int8)SeInitSystem() )
    KeBugCheck(0x63u);
  PspInitPhase1();
  ExInitLicenseCallback();
  SystemRootLink = CreateSystemRootLink(BugCheckParameter3);
  if ( SystemRootLink < 0 )
    KeBugCheckEx(0x64u, SystemRootLink, 0LL, 0LL, 0LL);
  qword_140D687A8 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( !(unsigned __int8)MmInitSystem(1LL, BugCheckParameter3) )
    KeBugCheck(0x65u);
  qword_140D687B0 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( !(unsigned __int8)CcInitializeCacheManager(1LL) )
    KeBugCheck(0x66u);
  if ( !(unsigned __int8)CmInitSystem1(BugCheckParameter3) )
    KeBugCheck(0x67u);
  v56 = ExInitializeLeapSecondData();
  if ( v56 < 0 )
    KeBugCheckEx(0x32u, v56, 0xCuLL, 0LL, 0LL);
  InitSkuSessionParameters();
  qword_140D68778 = KeQueryPerformanceCounter(0LL).QuadPart;
  memset(v119, 0, 0x78uLL);
  *((_QWORD *)&v119[0] + 1) = MmMapLockedRestartPages;
  *(_QWORD *)&v119[1] = MmUnmapLockedRestartPages;
  *((_QWORD *)&v119[1] + 1) = KeRemoveEnclavePage;
  *(_QWORD *)&v119[2] = KdPullRemoteFileEx;
  *((_QWORD *)&v119[2] + 1) = CmSaveKeyToBuffer;
  *(_QWORD *)&v119[3] = KeIsBugCheckActive;
  *((_QWORD *)&v119[3] + 1) = CmOpenKeyForBugCheckRecovery;
  *(_QWORD *)&v119[4] = MiPageToNode;
  *((_QWORD *)&v119[4] + 1) = MmGetNextNode;
  LODWORD(v119[0]) = 120;
  if ( VslVsmEnabled )
  {
    VslpIumKsrInitContext = (__int64)VslpKsrEnterIumSecureMode;
    qword_140D68750 = (__int64)VslpRegisterKsrCallback;
  }
  DisplayContext = BgGetDisplayContext();
  v58 = (int)KsrInitSystem(BugCheckParameter3, v119, DisplayContext);
  qword_140D68780 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( (int)(v58 + 0x80000000) >= 0 && (_DWORD)v58 != -1073741637 )
    KeBugCheckEx(0x32u, v58, 0LL, 1uLL, 0LL);
  ExKsrInterface = v119[5];
  qword_140C15BC0 = *(_QWORD *)&v119[7];
  *(_OWORD *)&xmmword_140C15BB0 = v119[6];
  v59 = EmInitSystem(0LL, BugCheckParameter3);
  if ( v59 < 0 )
    KeBugCheckEx(0x32u, v59, 8uLL, 0LL, 0LL);
  v60 = MfgInitSystem(BugCheckParameter3);
  if ( v60 < 0 )
    KeBugCheckEx(0x32u, v60, 9uLL, 0LL, 0LL);
  PfInitializeSuperfetch();
  SmInitSystem(0LL);
  v61 = VmInitSystem(0LL);
  if ( v61 < 0 )
    KeBugCheckEx(0x32u, v61, 0xAuLL, 0LL, 0LL);
  if ( (*(_BYTE *)(*(_QWORD *)(BugCheckParameter3 + 240) + 2656LL) & 2) == 0 || strstr(v9, "FORCETIMESYNC") )
    ZwUpdateWnfStateData((__int64)&WNF_BOOT_INVALID_TIME_SOURCE, 0LL);
  if ( (HvlpFlags & 2) != 0 )
    ZwUpdateWnfStateData((__int64)&WNF_HVL_CPU_MGMT_PARTITION, 0LL);
  v111 = 0;
  FsRtlSendModernAppTermination(&v111, 1u, 1);
  ExInitializeTimeRefresh(v63, v62, v64);
  ExAcquireTimeRefreshLock(1u);
  ExInitializeUtcTimeZoneBias(&LocalTime);
  v65 = *(_DWORD *)(v2 + 436);
  ExpRefreshTimeZoneInformation(0);
  ExReleaseTimeRefreshLock();
  if ( v102 )
  {
    ExLocalTimeToSystemTime(&LocalTime, &SystemTime);
    KeSetSystemTime((__int64)&SystemTime, (__int64)&v115, 4);
  }
  else if ( v65 != *(_DWORD *)(v2 + 436) )
  {
    ZwSetSystemTime(0LL, 0LL);
  }
  if ( !(unsigned __int8)FsRtlInitSystem(v67, v66, v68) )
    KeBugCheck(0x68u);
  ExInitializeNPagedLookasideListInternal(
    (__int64)&RtlLznt1DecompressChunkLookaside,
    0LL,
    0LL,
    512,
    88,
    1667529324,
    0,
    0);
  ExInitializePagedLookasideList(&RtlpRangeListEntryLookasideList, 0LL, 0LL, 0, 0x38uLL, 0x656C5252u, 0x10u);
  HvlDebuggerSupportInitialize(BugCheckParameter3);
  HalReportResourceUsage(0LL);
  KdInitialize(1LL, BugCheckParameter3, &KdpContext, v69);
  if ( !(unsigned __int8)PpInitSystem() )
    KeBugCheck(0x90u);
  LpcLegacyMaxMessageLength = 648;
  if ( (int)AlpcpInitSystem() < 0 )
    KeBugCheck(0x6Au);
  LpcPortObjectType = AlpcPortObjectType;
  LpcWaitablePortObjectType = (__int64)AlpcPortObjectType;
  if ( !v9 )
    goto LABEL_95;
  v70 = strstr(v9, "SAFEBOOT:");
  v71 = v70;
  if ( !v70 )
  {
LABEL_94:
    v30 = (__int64)v110;
    goto LABEL_95;
  }
  v95 = v70 + 9;
  if ( !strncmp(v70 + 9, "MINIMAL", 7uLL) )
  {
    LODWORD(InitSafeBootMode) = 1;
  }
  else
  {
    if ( strncmp(v95, "NETWORK", 7uLL) )
    {
      if ( !strncmp(v95, "DSREPAIR", 8uLL) )
      {
        LODWORD(InitSafeBootMode) = 3;
        v96 = 17LL;
      }
      else
      {
        LODWORD(InitSafeBootMode) = 0;
        v96 = 9LL;
      }
      goto LABEL_186;
    }
    LODWORD(InitSafeBootMode) = 2;
  }
  v96 = 16LL;
LABEL_186:
  if ( v71[v96] )
  {
    v97 = strncmp(&v71[v96], "(ALTERNATESHELL)", 0x10uLL);
    v98 = (unsigned __int8)v104;
    if ( !v97 )
      v98 = 1;
    v104 = v98;
  }
  if ( !(_DWORD)InitSafeBootMode )
    goto LABEL_94;
  v109 = 0LL;
  v99 = 0;
  switch ( (_DWORD)InitSafeBootMode )
  {
    case 1:
      v99 = 168;
      break;
    case 2:
      v99 = 169;
      break;
    case 3:
      v99 = 170;
      break;
  }
  if ( (int)RtlFindMessage(0x140000000uLL, 0xBu, 0, v99, &v109) >= 0 )
    InbvDisplayString((__int64)(v109 + 2));
  v30 = (__int64)v110;
LABEL_95:
  if ( (*(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 240) + 132LL) & 0x800) != 0 )
  {
    if ( (int)RtlFindMessage(0x140000000uLL, 0xBu, 0, 0xB7u, (unsigned __int16 **)&v105) >= 0 )
      InbvDisplayString((__int64)(v105 + 4));
    IopInitializeBootLogging(BugCheckParameter3, v30);
  }
  ExInitSystemPhase2();
  MEMORY[0xFFFFF780000002D6] = ExpComputeCyclesPerYield();
  if ( InitIsWinPEMode )
    CreateMiniNtBootKey();
  v72 = SeCodeIntegrityInitializePolicy(BugCheckParameter3);
  if ( v72 < 0 )
    KeBugCheckEx(0x32u, v72, 0x69436553uLL, 0LL, 0LL);
  KdpTimeSlipPending = 0;
  v73 = ExInitializeExternalBootSupport();
  if ( v73 < 0 )
    KeBugCheckEx(0x32u, v73, 8uLL, 0LL, 0LL);
  if ( !(unsigned __int8)PoInitSystem(1LL, BugCheckParameter3, v74) )
    goto LABEL_206;
  KeWaitForSingleObject(&stru_140C51E68, Executive, 0, 0, 0LL);
  return v104;
}
