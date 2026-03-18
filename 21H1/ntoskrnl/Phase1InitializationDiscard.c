/*
 * XREFs of Phase1InitializationDiscard @ 0x140A382A8
 * Callers:
 *     Phase1Initialization @ 0x14079B780 (Phase1Initialization.c)
 * Callees:
 *     RtlTimeFieldsToTime @ 0x1402019B0 (RtlTimeFieldsToTime.c)
 *     RtlInitAnsiString @ 0x140203280 (RtlInitAnsiString.c)
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     RtlStringCbCopyA @ 0x140239BD8 (RtlStringCbCopyA.c)
 *     KeQueryPerformanceCounter @ 0x140240CA0 (KeQueryPerformanceCounter.c)
 *     KeSetPriorityThread @ 0x1403310D0 (KeSetPriorityThread.c)
 *     RtlTimeToTimeFields @ 0x14036CDF0 (RtlTimeToTimeFields.c)
 *     FsRtlSendModernAppTermination @ 0x1403778E0 (FsRtlSendModernAppTermination.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x1403779C0 (ExInitializeNPagedLookasideListInternal.c)
 *     PoNotifySystemTimeSet @ 0x1403A43C4 (PoNotifySystemTimeSet.c)
 *     KeSetSystemTime @ 0x1403A4608 (KeSetSystemTime.c)
 *     InbvDisplayString @ 0x1403A9300 (InbvDisplayString.c)
 *     RtlStringCbPrintfA @ 0x1403A9324 (RtlStringCbPrintfA.c)
 *     DisplayBootBitmap @ 0x1403AB120 (DisplayBootBitmap.c)
 *     KiCommitNodeAssignment @ 0x1403AC26C (KiCommitNodeAssignment.c)
 *     MakeGdtReadOnly @ 0x1403ACA4C (MakeGdtReadOnly.c)
 *     KeSetAffinityProcess @ 0x1403C6EAC (KeSetAffinityProcess.c)
 *     HvlDebuggerSupportInitialize @ 0x1403CB78C (HvlDebuggerSupportInitialize.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     _strupr @ 0x1403CCBE0 (_strupr.c)
 *     strtoul @ 0x1403CD0C0 (strtoul.c)
 *     strncmp @ 0x1403CD100 (strncmp.c)
 *     _strtoui64 @ 0x1403CD410 (_strtoui64.c)
 *     strstr @ 0x1403CD440 (strstr.c)
 *     atol @ 0x1403CD4E0 (atol.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwCreateSection @ 0x1403F2C70 (ZwCreateSection.c)
 *     ZwCreateDirectoryObject @ 0x1403F37F0 (ZwCreateDirectoryObject.c)
 *     ZwQueryLicenseValue @ 0x1403F4D90 (ZwQueryLicenseValue.c)
 *     ZwSetSystemTime @ 0x1403F58B0 (ZwSetSystemTime.c)
 *     ZwUpdateWnfStateData @ 0x1403F5CF0 (ZwUpdateWnfStateData.c)
 *     KeBugCheck @ 0x1403F5E20 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     RtlStringCbPrintfExA @ 0x1404B0BE4 (RtlStringCbPrintfExA.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     ExInitializePagedLookasideList @ 0x140651E70 (ExInitializePagedLookasideList.c)
 *     MmMapViewInSystemSpace @ 0x1406E94F0 (MmMapViewInSystemSpace.c)
 *     RtlFindMessage @ 0x1406FC510 (RtlFindMessage.c)
 *     ExpRefreshTimeZoneInformation @ 0x140790534 (ExpRefreshTimeZoneInformation.c)
 *     RtlInitNlsTables @ 0x1407B6B54 (RtlInitNlsTables.c)
 *     AlpcpInitSystem @ 0x1407B838C (AlpcpInitSystem.c)
 *     RtlResetRtlTranslations @ 0x1407BA0E4 (RtlResetRtlTranslations.c)
 *     ExInitLicenseCallback @ 0x1407BED78 (ExInitLicenseCallback.c)
 *     IopInitializeBootLogging @ 0x14088D370 (IopInitializeBootLogging.c)
 *     HalInitSystem @ 0x140997690 (HalInitSystem.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 *     KdInitSystem @ 0x1409B2160 (KdInitSystem.c)
 *     BgGetDisplayContext @ 0x1409EE028 (BgGetDisplayContext.c)
 *     BgDisplayProgressIndicator @ 0x1409F1334 (BgDisplayProgressIndicator.c)
 *     BgDisplayBackgroundUpdate @ 0x1409F1748 (BgDisplayBackgroundUpdate.c)
 *     HalReportResourceUsage @ 0x140A39480 (HalReportResourceUsage.c)
 *     CcInitializeCacheManager @ 0x140A397E8 (CcInitializeCacheManager.c)
 *     IoCreateObjectTypes @ 0x140A39C54 (IoCreateObjectTypes.c)
 *     ObInitSystem @ 0x140A3AAB4 (ObInitSystem.c)
 *     PoInitSystem @ 0x140A3BEEC (PoInitSystem.c)
 *     ExInitSystemPhase2 @ 0x140A3E154 (ExInitSystemPhase2.c)
 *     KeInitSystem @ 0x140A3F138 (KeInitSystem.c)
 *     KeStartAllProcessors @ 0x140A404CC (KeStartAllProcessors.c)
 *     KiPerformGroupConfiguration @ 0x140A40D34 (KiPerformGroupConfiguration.c)
 *     EmInitSystem @ 0x140A4710C (EmInitSystem.c)
 *     MmInitSystem @ 0x140A4C3E4 (MmInitSystem.c)
 *     CmInitSystem1 @ 0x140A525D4 (CmInitSystem1.c)
 *     ExInitializeLeapSecondData @ 0x140A535D4 (ExInitializeLeapSecondData.c)
 *     PspInitPhase1 @ 0x140A60C8C (PspInitPhase1.c)
 *     SeInitSystem @ 0x140A60D28 (SeInitSystem.c)
 *     VmInitSystem @ 0x140A60F58 (VmInitSystem.c)
 *     ExInitSystem @ 0x140A6485C (ExInitSystem.c)
 *     PfInitializeSuperfetch @ 0x140A6667C (PfInitializeSuperfetch.c)
 *     ExpComputeCyclesPerYield @ 0x140A670B0 (ExpComputeCyclesPerYield.c)
 *     SmInitSystem @ 0x140A676A4 (SmInitSystem.c)
 *     InbvDriverInitialize @ 0x140A67958 (InbvDriverInitialize.c)
 *     FsRtlInitSystem @ 0x140A67DB0 (FsRtlInitSystem.c)
 *     DbgkInitialize @ 0x140A697A0 (DbgkInitialize.c)
 *     KeInitializeClock @ 0x140A69C98 (KeInitializeClock.c)
 *     CreateSystemRootLink @ 0x140A6BBC0 (CreateSystemRootLink.c)
 *     VerifierInitSystem @ 0x140A6BF94 (VerifierInitSystem.c)
 *     SeCodeIntegrityInitializePolicy @ 0x140A6CC28 (SeCodeIntegrityInitializePolicy.c)
 *     GetBootSystemTime @ 0x140A6DA24 (GetBootSystemTime.c)
 *     InitSkuSessionParameters @ 0x140A6DEAC (InitSkuSessionParameters.c)
 *     PpInitSystem @ 0x140A6E880 (PpInitSystem.c)
 *     BcdInitializeBcdSyncMutant @ 0x140A6F888 (BcdInitializeBcdSyncMutant.c)
 *     MfgInitSystem @ 0x140A6F9A4 (MfgInitSystem.c)
 *     ExInitializeExternalBootSupport @ 0x140A6FCD4 (ExInitializeExternalBootSupport.c)
 *     ExInitializeUtcTimeZoneBias @ 0x140A70080 (ExInitializeUtcTimeZoneBias.c)
 *     HalAllProcessorsStarted @ 0x140A70200 (HalAllProcessorsStarted.c)
 *     CreateMiniNtBootKey @ 0x140A89FB0 (CreateMiniNtBootKey.c)
 */

char __fastcall Phase1InitializationDiscard(ULONG_PTR BugCheckParameter3)
{
  int v1; // r12d
  char *PoolWithTag; // rax
  char *v4; // r15
  struct _KTHREAD *CurrentThread; // rcx
  char *v6; // rcx
  char *v7; // rdi
  char *v8; // rax
  char *v9; // rax
  char *v10; // rax
  char v11; // al
  char v12; // cl
  int v13; // eax
  char v14; // cl
  bool v15; // sf
  int v16; // eax
  char v17; // cl
  int Message; // eax
  NTSTRSAFE_PSTR v19; // rbx
  int v20; // r14d
  size_t v21; // rsi
  char *v22; // rbx
  NTSTATUS v23; // eax
  NTSTATUS v24; // eax
  int v25; // esi
  _OWORD *v26; // rax
  char *v27; // rcx
  __int64 v28; // rdx
  __int128 v29; // xmm1
  int v30; // eax
  char *v31; // rax
  LONGLONG QuadPart; // rax
  char *v33; // rax
  char *v34; // rax
  char *v35; // rax
  char *v36; // rax
  char *v37; // rax
  __int64 v38; // rcx
  const char *v39; // rbx
  unsigned int v40; // r9d
  int v41; // eax
  __int64 v42; // r9
  __int64 v43; // rdx
  _QWORD *v44; // rcx
  NTSTATUS v45; // eax
  __int64 v46; // r8
  __int64 v47; // r9
  int inited; // eax
  int v49; // eax
  int SystemRootLink; // eax
  NTSTATUS v51; // eax
  NTSTATUS v52; // eax
  ULONG_PTR v53; // rbx
  NTSTATUS v54; // eax
  PVOID v55; // rbx
  char *v56; // r8
  USHORT *v57; // rdx
  USHORT *v58; // rcx
  int v59; // eax
  __int128 *DisplayContext; // rax
  ULONG_PTR v61; // rbx
  int v62; // eax
  int v63; // eax
  int v64; // eax
  int v65; // ebx
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  char *v70; // rbx
  char *v71; // r15
  int v72; // eax
  NTSTATUS v73; // eax
  int v74; // eax
  __int64 v75; // r8
  char *v77; // rax
  char *v78; // rbx
  __int16 v79; // ax
  int v80; // edx
  char v81; // al
  char *v82; // rax
  const char *v83; // rbx
  __int64 v84; // rsi
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
  __int64 v95; // rdi
  const char *v96; // rbx
  int v97; // eax
  unsigned int v98; // r9d
  ULONG SectionPageProtection[2]; // [rsp+20h] [rbp-E0h]
  char v100; // [rsp+40h] [rbp-C0h]
  LARGE_INTEGER Time; // [rsp+48h] [rbp-B8h] BYREF
  const char *v102; // [rsp+50h] [rbp-B0h] BYREF
  int v103; // [rsp+58h] [rbp-A8h]
  int v104; // [rsp+5Ch] [rbp-A4h] BYREF
  int v105; // [rsp+60h] [rbp-A0h]
  int v106; // [rsp+64h] [rbp-9Ch] BYREF
  char *EndPtr; // [rsp+68h] [rbp-98h] BYREF
  size_t pcbRemaining; // [rsp+70h] [rbp-90h] BYREF
  NTSTRSAFE_PSTR ppszDestEnd; // [rsp+78h] [rbp-88h] BYREF
  HANDLE SectionHandle; // [rsp+80h] [rbp-80h] BYREF
  LARGE_INTEGER v111; // [rsp+88h] [rbp-78h] BYREF
  __int64 v112; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int16 *v113; // [rsp+98h] [rbp-68h] BYREF
  LARGE_INTEGER MaximumSize; // [rsp+A0h] [rbp-60h] BYREF
  PVOID Object; // [rsp+A8h] [rbp-58h] BYREF
  PVOID MappedBase; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int16 *v117; // [rsp+B8h] [rbp-48h] BYREF
  HANDLE DirectoryHandle; // [rsp+C0h] [rbp-40h] BYREF
  STRING v119; // [rsp+C8h] [rbp-38h] BYREF
  ULONG_PTR ViewSize; // [rsp+D8h] [rbp-28h] BYREF
  char *v121; // [rsp+E0h] [rbp-20h]
  TIME_FIELDS TimeFields; // [rsp+E8h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+F8h] [rbp-8h] BYREF
  _QWORD v124[10]; // [rsp+110h] [rbp+10h] BYREF
  char pszDest[24]; // [rsp+160h] [rbp+60h] BYREF

  Time.QuadPart = 0LL;
  v112 = 0LL;
  LOBYTE(v1) = 0;
  SectionHandle = 0LL;
  v105 = v1;
  MaximumSize.QuadPart = 0LL;
  v102 = 0LL;
  v119 = 0LL;
  v113 = 0LL;
  TimeFields = 0LL;
  v103 = 0;
  v104 = 0;
  DestinationString = 0LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x200uLL, 0x74696E49u);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
    KeBugCheck(0x31u);
  CurrentThread = KeGetCurrentThread();
  LODWORD(InitializationPhase) = 1;
  v121 = PoolWithTag + 256;
  v100 = 0;
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
      v77 = strstr(v8, "=");
      if ( v77 )
        KeRootProcSpecified = atol(v77 + 1);
    }
    v9 = strstr(v7, " HYPERVISORROOTPROCNUMANODES=");
    if ( v9 )
    {
      v78 = strstr(v9, "=");
      if ( v78 )
      {
        do
        {
          if ( (unsigned int)KeRootProcNumaNodesSpecified >= 0x40 )
            break;
          v79 = atol(++v78);
          v80 = KeRootProcNumaNodesSpecified;
          KeRootProcNumaNodes[KeRootProcNumaNodesSpecified] = v79;
          KeRootProcNumaNodesSpecified = v80 + 1;
          while ( 1 )
          {
            v81 = *v78;
            if ( *v78 == 44 )
              break;
            if ( v81 == 32 )
              goto LABEL_7;
            if ( !v81 )
              break;
            ++v78;
          }
        }
        while ( v81 != 32 && v81 );
      }
    }
LABEL_7:
    v10 = strstr(v7, " HYPERVISORROOTPROCNUMANODELPS=");
    if ( v10 )
    {
      v82 = strstr(v10, "=");
      KeRootProcNumaNodeLpsSpecified = 1;
      v83 = v82;
      KeRootProcNumaNodesSpecified = 0;
      KeRootProcSpecified = 0;
      if ( v82 )
      {
        do
        {
          ++v83;
          EndPtr = 0LL;
          v84 = strtoul(v83, &EndPtr, 10);
          if ( v83 != EndPtr && *EndPtr == 61 && (unsigned int)v84 < 0x40 )
          {
            v83 = EndPtr + 1;
            KeRootProcNumaNodeLps[v84] = strtoui64(EndPtr + 1, &EndPtr, 16);
          }
          while ( 1 )
          {
            v85 = *v83;
            if ( *v83 == 44 )
              break;
            if ( v85 == 32 )
              goto LABEL_138;
            if ( !v85 )
              break;
            ++v83;
          }
        }
        while ( v85 != 32 && v85 );
LABEL_138:
        LOBYTE(v1) = v105;
      }
    }
  }
  byte_140D254F5 &= 0xF9u;
  byte_140D254F4 = 0;
  word_140C50C74 = 0;
  KiPerformGroupConfiguration(BugCheckParameter3);
  KiCommitNodeAssignment((__int64)&ExNode0);
  if ( !(unsigned __int8)HalInitSystem((unsigned int)InitializationPhase, BugCheckParameter3) )
    goto LABEL_222;
  KeInitializeClock((unsigned int)InitializationPhase);
  if ( !v7 || !strstr(v7, "NOGUIBOOT") )
  {
    v11 = byte_140C50AD0;
    byte_140C50A94 = 0;
    if ( byte_140C50AD0 )
    {
      v12 = byte_140C50AD1;
      if ( byte_140C50AD1 )
      {
        v13 = BgDisplayProgressIndicator(1);
        v14 = byte_140C50681;
        v15 = v13 < 0;
        v11 = byte_140C50AD0;
        if ( !v15 )
          v14 = 1;
        byte_140C50681 = v14;
        v12 = byte_140C50AD1;
      }
      if ( v11 && v12 )
      {
        v16 = BgDisplayBackgroundUpdate(1);
        v17 = byte_140C50680;
        if ( v16 >= 0 )
          v17 = 1;
        byte_140C50680 = v17;
      }
    }
    qword_140C50AA0 = (__int64 (__fastcall *)(_QWORD))DisplayFilter;
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
  Message = RtlFindMessage(0x140000000uLL, 0xBu, 0, 0x4000007Eu, (unsigned __int16 **)&v102);
  v19 = v4;
  ppszDestEnd = v4;
  v20 = Message;
  pcbRemaining = 256LL;
  if ( CmCSDVersionString.Length )
  {
    v86 = RtlStringCbPrintfExA(v4, 0xFFuLL, &ppszDestEnd, &pcbRemaining, 0, ": %wZ", &CmCSDVersionString);
    if ( v86 < 0 )
      KeBugCheckEx(0x32u, v86, 7uLL, 0LL, 0LL);
    v19 = ppszDestEnd;
    v21 = pcbRemaining;
  }
  else
  {
    v21 = 255LL;
    pcbRemaining = 255LL;
  }
  *v19 = 0;
  v22 = v19 + 1;
  ppszDestEnd = v22;
  v23 = RtlStringCbPrintfA(pszDest, 0x18uLL, "%u.%u", 10, 0);
  if ( v23 < 0 )
    KeBugCheckEx(0x32u, v23, 7uLL, 1uLL, 0LL);
  if ( v20 < 0 )
  {
    v87 = RtlStringCbCopyA(v22, v21, "MICROSOFT (R) WINDOWS (TM)\n");
    if ( v87 < 0 )
      KeBugCheckEx(0x32u, v87, 7uLL, 3uLL, 0LL);
  }
  else
  {
    SectionPageProtection[0] = (unsigned __int16)NtBuildNumber;
    v24 = RtlStringCbPrintfA(v22, v21, v102 + 4, pszDest, *(_QWORD *)SectionPageProtection, v4);
    if ( v24 < 0 )
      KeBugCheckEx(0x32u, v24, 7uLL, 2uLL, 0LL);
  }
  InbvDisplayString((__int64)v22);
  v25 = 2;
  v26 = v4 + 256;
  v27 = v4;
  v28 = 2LL;
  do
  {
    *v26 = *(_OWORD *)v27;
    v26[1] = *((_OWORD *)v27 + 1);
    v26[2] = *((_OWORD *)v27 + 2);
    v26[3] = *((_OWORD *)v27 + 3);
    v26[4] = *((_OWORD *)v27 + 4);
    v26[5] = *((_OWORD *)v27 + 5);
    v26[6] = *((_OWORD *)v27 + 6);
    v26 += 8;
    v29 = *((_OWORD *)v27 + 7);
    v27 += 128;
    *(v26 - 1) = v29;
    --v28;
  }
  while ( v28 );
  if ( !(unsigned __int8)PoInitSystem(0LL, BugCheckParameter3, 128LL) )
LABEL_221:
    KeBugCheck(0xA0u);
  if ( !ExpRealTimeIsUniversal )
  {
    v30 = ExpLastTimeZoneBias;
    if ( ExpLastTimeZoneBias == -1 )
    {
      v30 = ExpAltTimeZoneBias;
      ExpLastTimeZoneBias = ExpAltTimeZoneBias;
      v100 = 1;
    }
    ExpTimeZoneBias = 600000000LL * v30;
    MEMORY[0xFFFFF7800000025C] = 0;
    MEMORY[0xFFFFF78000000028] = (unsigned __int64)(600000000LL * v30) >> 32;
    MEMORY[0xFFFFF78000000020] = 600000000LL * v30;
  }
  GetBootSystemTime(*(_QWORD *)(BugCheckParameter3 + 240), &Time);
  if ( v7 )
  {
    v31 = strstr(v7, "YEAR");
    if ( v31 )
    {
      v88 = strstr(v31, "=");
      if ( v88 )
      {
        v89 = atol(v88 + 1);
        RtlTimeToTimeFields(&Time, &TimeFields);
        TimeFields.Year = v89;
        RtlTimeFieldsToTime(&TimeFields, &Time);
      }
    }
  }
  QuadPart = Time.QuadPart;
  if ( !ExpRealTimeIsUniversal )
    QuadPart = Time.QuadPart - ExpTimeZoneBias;
  v111.QuadPart = QuadPart;
  KeSetSystemTime((__int64)&Time, (__int64)&v112, 4);
  PoNotifySystemTimeSet((__int64 *)&Time, &v112);
  RtlInitUnicodeString(&DestinationString, L"Kernel-RegisteredProcessors");
  if ( (int)ZwQueryLicenseValue((__int64)&DestinationString, (__int64)&v104) < 0 || v103 != 4 || v104 != 4 )
    KeRegisteredProcessors = 1;
  if ( v7 )
  {
    v33 = strstr(v7, " BOOTPROC=");
    if ( v33 )
    {
      v90 = strstr(v33, "=");
      if ( v90 )
        KeBootprocSpecified = atol(v90 + 1);
    }
    v34 = strstr(v7, " NUMPROC=");
    if ( v34 )
    {
      v91 = strstr(v34, "=");
      if ( v91 )
        KeNumprocSpecified = atol(v91 + 1);
    }
    v35 = strstr(v7, " HYPERVISORNUMPROC=");
    if ( v35 )
    {
      v92 = strstr(v35, "=");
      if ( v92 )
        KeHypervisorNumprocSpecified = atol(v92 + 1);
    }
    if ( !KeRootProcNumaNodeLpsSpecified )
    {
      v36 = strstr(v7, " HYPERVISORROOTPROCPERNODE=");
      if ( v36 )
      {
        v93 = strstr(v36, "=");
        if ( v93 )
          KeRootProcPerNodeSpecified = atol(v93 + 1);
      }
      v37 = strstr(v7, " HYPERVISORROOTPROCPERCORE=");
      if ( v37 )
      {
        v94 = strstr(v37, "=");
        if ( v94 )
          KeRootProcPerCoreSpecified = atol(v94 + 1);
      }
    }
    if ( strstr(v7, " MAXPROC") )
      KeMaximumProcessors = 1280;
  }
  qword_140D557B8 = KeQueryPerformanceCounter(0LL).QuadPart;
  KeStartAllProcessors(v38);
  qword_140D557C0 = KeQueryPerformanceCounter(0LL).QuadPart;
  KeSetAffinityProcess((__int64)KeGetCurrentThread()->ApcState.Process, 0, (unsigned __int16 *)KeActiveProcessors);
  MakeGdtReadOnly();
  v39 = (int)RtlFindMessage(0x140000000uLL, 0xBu, 0, 0x40000089u, &v113) < 0
      ? "MultiProcessor Kernel\r\n"
      : (const char *)(v113 + 2);
  if ( !(unsigned __int8)HalAllProcessorsStarted() )
LABEL_222:
    KeBugCheck(0x61u);
  RtlInitAnsiString(&v119, v39);
  if ( v119.Length >= 2u )
    v119.Length -= 2;
  v40 = 1073741960;
  if ( (unsigned int)KeNumberProcessors_0 > 1 )
    v40 = 1073741981;
  v41 = RtlFindMessage(0x140000000uLL, 0xBu, 0, v40, (unsigned __int16 **)&v102);
  v42 = 0LL;
  v43 = *(unsigned int *)MmPhysicalMemoryBlock;
  if ( (_DWORD)v43 )
  {
    v44 = (char *)MmPhysicalMemoryBlock + 24;
    do
    {
      v42 += *v44;
      v44 += 2;
      --v43;
    }
    while ( v43 );
  }
  if ( v41 < 0 )
    v45 = RtlStringCbPrintfA(
            v4,
            0x100uLL,
            "%u System Processor [%u MB Memory] %Z\n",
            (unsigned int)KeNumberProcessors_0,
            (unsigned __int64)(v42 + 255) >> 8,
            &v119);
  else
    v45 = RtlStringCbPrintfA(
            v4,
            0x100uLL,
            v102 + 4,
            (unsigned int)KeNumberProcessors_0,
            (unsigned __int64)(v42 + 255) >> 8,
            &v119);
  if ( v45 < 0 )
    KeBugCheckEx(0x32u, v45, 7uLL, 4uLL, 0LL);
  InbvDisplayString((__int64)v4);
  ExFreePoolWithTag(v4, 0);
  if ( !(unsigned __int8)ObInitSystem() )
    KeBugCheck(0x62u);
  if ( !(unsigned __int8)ExInitSystem() )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 1uLL, 0LL);
  HalReportResourceUsage(0xFFFFFFFFLL);
  if ( !(unsigned __int8)IoCreateObjectTypes() )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 4uLL, 0LL);
  if ( !(unsigned __int8)KeInitSystem(1LL) )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 2uLL, 0LL);
  if ( !KdInitSystem(InitializationPhase, 0LL, v46, v47) )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 3uLL, 0LL);
  inited = TmInitSystem(
             &TmResourceManagerObjectType,
             &TmEnlistmentObjectType,
             &TmTransactionManagerObjectType,
             &TmTransactionObjectType);
  if ( (int)(inited + 0x80000000) >= 0 && inited != -1073741637 )
    KeBugCheckEx(0x32u, 0LL, 0LL, 0LL, 0LL);
  v49 = DbgkInitialize();
  if ( v49 < 0 )
    KeBugCheckEx(0x32u, v49, 0LL, 0LL, 0LL);
  BcdInitializeBcdSyncMutant();
  VerifierInitSystem(0LL);
  if ( !(unsigned __int8)SeInitSystem() )
    KeBugCheck(0x63u);
  PspInitPhase1();
  ExInitLicenseCallback();
  SystemRootLink = CreateSystemRootLink(BugCheckParameter3);
  if ( SystemRootLink < 0 )
    KeBugCheckEx(0x64u, SystemRootLink, 0LL, 0LL, 0LL);
  qword_140D557D8 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( !(unsigned __int8)MmInitSystem(1LL, BugCheckParameter3) )
    KeBugCheck(0x65u);
  qword_140D557E0 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( InitNlsTableSize )
  {
    MaximumSize.QuadPart = InitNlsTableSize;
    v51 = ZwCreateSection(&SectionHandle, 0xF001Fu, 0LL, &MaximumSize, 4u, 0x8000000u, 0LL);
    if ( v51 < 0 )
      KeBugCheckEx(0x32u, v51, 1uLL, 0LL, 0LL);
    Object = 0LL;
    v52 = ObReferenceObjectByHandle(SectionHandle, 0xF001Fu, MmSectionObjectType, 0, &Object, 0LL);
    InitNlsSectionPointer = Object;
    v53 = v52;
    ZwClose(SectionHandle);
    if ( (v53 & 0x80000000) != 0LL )
      KeBugCheckEx(0x32u, v53, 2uLL, 0LL, 0LL);
    MappedBase = 0LL;
    ViewSize = 0LL;
    v54 = MmMapViewInSystemSpace(InitNlsSectionPointer, &MappedBase, &ViewSize);
    if ( v54 < 0 )
      KeBugCheckEx(0x32u, v54, 3uLL, 0LL, 0LL);
    v55 = MappedBase;
    memmove(MappedBase, InitNlsTableBase, InitNlsTableSize);
    InitNlsTableBase = v55;
  }
  if ( InitNlsTableBase )
  {
    if ( InitUnicodeCaseTableDataOffset )
    {
      v56 = (char *)InitNlsTableBase + (unsigned int)InitUnicodeCaseTableDataOffset;
      v57 = (USHORT *)((char *)InitNlsTableBase + (unsigned int)InitOemCodePageDataOffset);
      v58 = (USHORT *)((char *)InitNlsTableBase + (unsigned int)InitAnsiCodePageDataOffset);
      goto LABEL_83;
    }
    v56 = (char *)InitNlsTableBase;
  }
  else
  {
    v56 = 0LL;
  }
  v57 = 0LL;
  v58 = 0LL;
LABEL_83:
  RtlInitNlsTables(v58, v57, (__int64)v56);
  RtlResetRtlTranslations();
  if ( !(unsigned __int8)CcInitializeCacheManager() )
    KeBugCheck(0x66u);
  if ( !(unsigned __int8)CmInitSystem1(BugCheckParameter3) )
    KeBugCheck(0x67u);
  v59 = ExInitializeLeapSecondData();
  if ( v59 < 0 )
    KeBugCheckEx(0x32u, v59, 0xCuLL, 0LL, 0LL);
  InitSkuSessionParameters();
  qword_140D557A8 = KeQueryPerformanceCounter(0LL).QuadPart;
  memset(v124, 0, 0x48uLL);
  v124[1] = MmMapLockedRestartPages;
  v124[2] = MmUnmapLockedRestartPages;
  v124[3] = KeRemoveEnclavePage;
  v124[4] = KdPullRemoteFileEx;
  LODWORD(v124[0]) = 72;
  if ( VslVsmEnabled )
  {
    VslpIumKsrInitContext = (__int64)VslpKsrEnterIumSecureMode;
    qword_140D55768 = (__int64)VslpRegisterKsrCallback;
  }
  DisplayContext = BgGetDisplayContext();
  v61 = (int)KsrInitSystem(BugCheckParameter3, v124, DisplayContext);
  qword_140D557B0 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( (int)(v61 + 0x80000000) >= 0 && (_DWORD)v61 != -1073741637 )
    KeBugCheckEx(0x32u, v61, 0LL, 1uLL, 0LL);
  ExKsrInterface = *(_OWORD *)&v124[5];
  *(_OWORD *)&xmmword_140C19710 = *(_OWORD *)&v124[7];
  v62 = EmInitSystem(0LL, BugCheckParameter3);
  if ( v62 < 0 )
    KeBugCheckEx(0x32u, v62, 8uLL, 0LL, 0LL);
  v63 = MfgInitSystem(BugCheckParameter3);
  if ( v63 < 0 )
    KeBugCheckEx(0x32u, v63, 9uLL, 0LL, 0LL);
  PfInitializeSuperfetch();
  SmInitSystem(0LL);
  v64 = VmInitSystem(0LL);
  if ( v64 < 0 )
    KeBugCheckEx(0x32u, v64, 0xAuLL, 0LL, 0LL);
  if ( (*(_BYTE *)(*(_QWORD *)(BugCheckParameter3 + 240) + 2624LL) & 2) == 0 || strstr(v7, "FORCETIMESYNC") )
    ZwUpdateWnfStateData((__int64)&WNF_BOOT_INVALID_TIME_SOURCE, 0LL);
  if ( (HvlpFlags & 2) != 0 )
    ZwUpdateWnfStateData((__int64)&WNF_HVL_CPU_MGMT_PARTITION, 0LL);
  v106 = 0;
  FsRtlSendModernAppTermination(&v106, 1u, 1);
  ExInitializeUtcTimeZoneBias(&v111);
  v65 = ExpLastTimeZoneBias;
  ExpRefreshTimeZoneInformation();
  if ( v100 )
  {
    Time.QuadPart = v111.QuadPart + ExpTimeZoneBias;
    KeSetSystemTime((__int64)&Time, (__int64)&v112, 4);
  }
  else if ( v65 != ExpLastTimeZoneBias )
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
  ExInitializePagedLookasideList(
    (PPAGED_LOOKASIDE_LIST)&RtlpRangeListEntryLookasideList,
    0LL,
    0LL,
    0,
    0x38uLL,
    0x656C5252u,
    0x10u);
  HvlDebuggerSupportInitialize(BugCheckParameter3);
  HalReportResourceUsage(0LL);
  KdInitialize(1LL, BugCheckParameter3, (char *)&KdDebuggerNotPresent + 5, v69);
  if ( !(unsigned __int8)PpInitSystem() )
    KeBugCheck(0x90u);
  LpcLegacyMaxMessageLength = 648;
  if ( (int)AlpcpInitSystem() < 0 )
    KeBugCheck(0x6Au);
  LpcPortObjectType = AlpcPortObjectType;
  LpcWaitablePortObjectType = (__int64)AlpcPortObjectType;
  if ( v7 )
    v70 = strstr(v7, "SAFEBOOT:");
  else
    v70 = 0LL;
  v71 = v70;
  if ( v70 )
  {
    v95 = 9LL;
    v96 = v70 + 9;
    if ( !strncmp(v96, "MINIMAL", 7uLL) )
    {
      v25 = 1;
    }
    else if ( strncmp(v96, "NETWORK", 7uLL) )
    {
      v97 = strncmp(v96, "DSREPAIR", 8uLL);
      v70 = 0LL;
      if ( v97 )
      {
        LODWORD(InitSafeBootMode) = 0;
      }
      else
      {
        LODWORD(InitSafeBootMode) = 3;
        v95 = 17LL;
      }
      goto LABEL_202;
    }
    LODWORD(InitSafeBootMode) = v25;
    v95 = 16LL;
    v70 = 0LL;
LABEL_202:
    if ( v71[v95] && !strncmp(&v71[v95], "(ALTERNATESHELL)", 0x10uLL) )
      LOBYTE(v1) = 1;
    if ( (_DWORD)InitSafeBootMode )
    {
      v117 = 0LL;
      v98 = 0;
      switch ( (_DWORD)InitSafeBootMode )
      {
        case 1:
          v98 = 168;
          break;
        case 2:
          v98 = 169;
          break;
        case 3:
          v98 = 170;
          break;
      }
      if ( (int)RtlFindMessage(0x140000000uLL, 0xBu, 0, v98, &v117) >= 0 )
        InbvDisplayString((__int64)(v117 + 2));
    }
  }
  if ( (*(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 240) + 132LL) & 0x800) != 0 )
  {
    if ( (int)RtlFindMessage(0x140000000uLL, 0xBu, 0, 0xB7u, (unsigned __int16 **)&v102) >= 0 )
      InbvDisplayString((__int64)(v102 + 4));
    IopInitializeBootLogging(BugCheckParameter3, (__int64)v121);
  }
  ExInitSystemPhase2();
  MEMORY[0xFFFFF780000002D6] = ExpComputeCyclesPerYield();
  if ( InitIsWinPEMode != (_BYTE)v70 )
    CreateMiniNtBootKey();
  v72 = SeCodeIntegrityInitializePolicy(BugCheckParameter3);
  if ( v72 < 0 )
    KeBugCheckEx(0x32u, v72, 0x69436553uLL, 0LL, (ULONG_PTR)v70);
  KdpTimeSlipPending = (int)v70;
  DirectoryHandle = v70;
  v73 = ZwCreateDirectoryObject(&DirectoryHandle, 0xF000Fu, (POBJECT_ATTRIBUTES)&NlsDirectoryAttributes);
  if ( v73 < 0 )
    KeBugCheckEx(0x32u, v73, 7uLL, 0LL, (ULONG_PTR)v70);
  ZwClose(DirectoryHandle);
  NlsSectionLock = (ULONG_PTR)v70;
  v74 = ExInitializeExternalBootSupport();
  if ( v74 < 0 )
    KeBugCheckEx(0x32u, v74, 8uLL, 0LL, (ULONG_PTR)v70);
  if ( !(unsigned __int8)PoInitSystem(1LL, BugCheckParameter3, v75) )
    goto LABEL_221;
  return v1;
}
