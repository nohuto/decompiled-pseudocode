/*
 * XREFs of InitBootProcessor @ 0x140A37A74
 * Callers:
 *     KiInitializeKernel @ 0x140998980 (KiInitializeKernel.c)
 * Callees:
 *     RtlInitAnsiString @ 0x140203280 (RtlInitAnsiString.c)
 *     KeQueryPerformanceCounter @ 0x140240CA0 (KeQueryPerformanceCounter.c)
 *     RtlULongLongMult @ 0x1402C1CCC (RtlULongLongMult.c)
 *     MmMapIoSpaceEx @ 0x1402F8F10 (MmMapIoSpaceEx.c)
 *     VslGetNestedPageProtectionFlags @ 0x14032BBE0 (VslGetNestedPageProtectionFlags.c)
 *     DbgLoadImageSymbols @ 0x14036ED90 (DbgLoadImageSymbols.c)
 *     HalQueryMaximumProcessorCount @ 0x1403785C0 (HalQueryMaximumProcessorCount.c)
 *     KeAdjustInterruptTime @ 0x140389D8C (KeAdjustInterruptTime.c)
 *     KeRebaselineSystemTime @ 0x14038A2C4 (KeRebaselineSystemTime.c)
 *     KeRegisterBugCheckReasonCallback @ 0x14039B140 (KeRegisterBugCheckReasonCallback.c)
 *     HviIsAnyHypervisorPresent @ 0x1403A2600 (HviIsAnyHypervisorPresent.c)
 *     RtlStringCbPrintfA @ 0x1403A9324 (RtlStringCbPrintfA.c)
 *     HalInitializeBios @ 0x1403C0D20 (HalInitializeBios.c)
 *     RtlStringCbCopyExA @ 0x1403C93B0 (RtlStringCbCopyExA.c)
 *     KvfInitFeatureStates @ 0x1403CAC5C (KvfInitFeatureStates.c)
 *     VslGetSecureSpeculationControlInformation @ 0x1403CB72C (VslGetSecureSpeculationControlInformation.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     _strupr @ 0x1403CCBE0 (_strupr.c)
 *     strstr @ 0x1403CD440 (strstr.c)
 *     atol @ 0x1403CD4E0 (atol.c)
 *     KeBugCheck @ 0x1403F5E20 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     DbgBreakPointWithStatus @ 0x1403FDCE0 (DbgBreakPointWithStatus.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     RtlStringCbCatExA @ 0x1404B0B28 (RtlStringCbCatExA.c)
 *     __report_rangecheckfailure @ 0x1404B0ECC (__report_rangecheckfailure.c)
 *     HvlConfigureMemoryZeroingOnReset @ 0x1404EBD8C (HvlConfigureMemoryZeroingOnReset.c)
 *     HvlpMapStatisticsPage @ 0x1404ED810 (HvlpMapStatisticsPage.c)
 *     HvlpSetupCachedHypercallPages @ 0x1404EE5DC (HvlpSetupCachedHypercallPages.c)
 *     HvlpInitializePowerStatistics @ 0x1404F2930 (HvlpInitializePowerStatistics.c)
 *     HvlpInitializeHvCrashdump @ 0x1404F393C (HvlpInitializeHvCrashdump.c)
 *     RtlAnsiStringToUnicodeString @ 0x14068A690 (RtlAnsiStringToUnicodeString.c)
 *     RtlGetHostNtSystemRoot @ 0x1406EDD50 (RtlGetHostNtSystemRoot.c)
 *     RtlFindMessage @ 0x1406FC510 (RtlFindMessage.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x14078E700 (RtlCreateUnicodeStringFromAsciiz.c)
 *     LdrAccessResource @ 0x1407B0350 (LdrAccessResource.c)
 *     LdrFindResource_U @ 0x1407B0370 (LdrFindResource_U.c)
 *     RtlInitNlsTables @ 0x1407B6B54 (RtlInitNlsTables.c)
 *     RtlResetRtlTranslations @ 0x1407BA0E4 (RtlResetRtlTranslations.c)
 *     ExpInitLicensing @ 0x1407BE1E8 (ExpInitLicensing.c)
 *     RtlpInitializeStackTraceDatabase @ 0x14090D3C4 (RtlpInitializeStackTraceDatabase.c)
 *     HalInitSystem @ 0x140997690 (HalInitSystem.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 *     ObInitSystem @ 0x140A3AAB4 (ObInitSystem.c)
 *     PsInitSystem @ 0x140A3F0F4 (PsInitSystem.c)
 *     KeInitSystem @ 0x140A3F138 (KeInitSystem.c)
 *     MmInitSystem @ 0x140A4C3E4 (MmInitSystem.c)
 *     CmInitSystem0 @ 0x140A588B8 (CmInitSystem0.c)
 *     SeInitSystem @ 0x140A60D28 (SeInitSystem.c)
 *     ExInitSystem @ 0x140A6485C (ExInitSystem.c)
 *     InbvDriverInitialize @ 0x140A67958 (InbvDriverInitialize.c)
 *     PsInitializeQuotaSystem @ 0x140A6850C (PsInitializeQuotaSystem.c)
 *     WheaInitializeServices @ 0x140A68924 (WheaInitializeServices.c)
 *     BootApplicationPersistentDataInitialize @ 0x140A68B9C (BootApplicationPersistentDataInitialize.c)
 *     DbgkInitialize @ 0x140A697A0 (DbgkInitialize.c)
 *     KeInitializeClock @ 0x140A69C98 (KeInitializeClock.c)
 *     ExComputeTickCountMultiplier @ 0x140A6B014 (ExComputeTickCountMultiplier.c)
 *     VerifierInitSystem @ 0x140A6BF94 (VerifierInitSystem.c)
 *     PpInitSystem @ 0x140A6E880 (PpInitSystem.c)
 *     InitializeDynamicPartitioningPolicy @ 0x140A6F3C4 (InitializeDynamicPartitioningPolicy.c)
 *     KeNumaInitialize @ 0x140A6F754 (KeNumaInitialize.c)
 *     HeadlessInit @ 0x140A70318 (HeadlessInit.c)
 *     ExBurnMemory @ 0x140A8A1C8 (ExBurnMemory.c)
 *     ExpRevokeBootLoaderPagePrivileges @ 0x140A8A254 (ExpRevokeBootLoaderPagePrivileges.c)
 *     VslpIumPhase0Initialize @ 0x140A8D480 (VslpIumPhase0Initialize.c)
 *     MmMarkHypercallPageRetpolineBit @ 0x140A9046C (MmMarkHypercallPageRetpolineBit.c)
 */

__int64 __fastcall InitBootProcessor(unsigned int *a1)
{
  ULONG_PTR v1; // r10
  unsigned int v3; // ecx
  unsigned int v4; // edx
  unsigned int *v5; // r8
  ULONG_PTR v6; // rax
  char *v7; // rdi
  char *v8; // rax
  char *v9; // rax
  ULONG_PTR v10; // r11
  ULONG_PTR v11; // r10
  ULONG_PTR v12; // r8
  ULONG_PTR v13; // r9
  USHORT **v14; // r9
  int v15; // ecx
  USHORT *v16; // r8
  USHORT *v17; // rdx
  USHORT *v18; // rcx
  PNLSTABLEINFO v19; // rcx
  NTSTATUS v20; // eax
  UNICODE_STRING *HostNtSystemRoot; // r13
  NTSTATUS v22; // eax
  int v23; // eax
  ULONG v24; // r14d
  PVOID PoolWithTag; // rax
  void *v26; // rdi
  unsigned int v27; // r15d
  unsigned int *i; // rdi
  char *v29; // r8
  unsigned int v30; // r9d
  __int64 v31; // rdx
  char v32; // al
  char v33; // al
  size_t v34; // rdx
  const char *v35; // r8
  NTSTRSAFE_PSTR *v36; // r9
  NTSTATUS v37; // eax
  NTSTATUS v38; // eax
  NTSTATUS v39; // eax
  __int64 v40; // rcx
  __int64 result; // rax
  ULONGLONG v42; // rcx
  char *v43; // rax
  __int64 v44; // rdx
  char *v45; // rax
  __int64 v46; // rdx
  const char *v47; // rcx
  NTSTATUS v48; // eax
  NTSTATUS Message; // eax
  NTSTATUS v50; // eax
  size_t v51; // rdx
  const char *v52; // r8
  NTSTATUS v53; // eax
  NTSTATUS v54; // eax
  PVOID v55; // rax
  void *v56; // rdi
  PVOID v57; // rax
  size_t *pcbRemaining; // [rsp+28h] [rbp-E0h]
  ULONG dwFlags; // [rsp+30h] [rbp-D8h]
  int dwFlagsa; // [rsp+30h] [rbp-D8h]
  ULONG DestinationString; // [rsp+38h] [rbp-D0h] BYREF
  STRING DestinationString_8; // [rsp+40h] [rbp-C8h] BYREF
  size_t cbDest; // [rsp+50h] [rbp-B8h] BYREF
  ULONGLONG pullResult; // [rsp+58h] [rbp-B0h] BYREF
  PIMAGE_RESOURCE_DATA_ENTRY ResourceDataEntry; // [rsp+60h] [rbp-A8h] BYREF
  PVOID ResourceBuffer; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v67; // [rsp+70h] [rbp-98h] BYREF
  PMESSAGE_RESOURCE_ENTRY MessageEntry; // [rsp+78h] [rbp-90h] BYREF
  NTSTRSAFE_PSTR ppszDestEnd; // [rsp+80h] [rbp-88h] BYREF
  STRING v70; // [rsp+88h] [rbp-80h] BYREF
  __int128 v71; // [rsp+98h] [rbp-70h] BYREF
  _LDR_RESOURCE_INFO ResourceInfo; // [rsp+A8h] [rbp-60h] BYREF
  CHAR pszDest[256]; // [rsp+C8h] [rbp-40h] BYREF
  CHAR SourceString[64]; // [rsp+1C8h] [rbp+C0h] BYREF

  v1 = *a1;
  MessageEntry = 0LL;
  ResourceDataEntry = 0LL;
  cbDest = 0LL;
  DestinationString_8 = 0LL;
  v70 = 0LL;
  if ( (_DWORD)v1 != 10 || (v3 = a1[1]) != 0 || (v4 = a1[2], v4 != 352) )
  {
    v4 = a1[2];
    v3 = a1[1];
    v6 = 0LL;
    goto LABEL_134;
  }
  v5 = (unsigned int *)*((_QWORD *)a1 + 30);
  v6 = *v5;
  if ( (_DWORD)v6 != 3640 || v5[738] != 167772168 )
LABEL_134:
    KeBugCheckEx(0x100u, v1, v3, v4, v6);
  MEMORY[0xFFFFF780000002C4] = v5[717];
  ExpInitLicensing((__int64)&PspHostSiloGlobals);
  if ( (VslGetNestedPageProtectionFlags() & 6) == 6 )
    ExpRevokeBootLoaderPagePrivileges(a1);
  VslGetSecureSpeculationControlInformation();
  v7 = (char *)*((_QWORD *)a1 + 27);
  LODWORD(InitializationPhase) = 0;
  if ( v7 )
  {
    strupr(v7);
    v8 = strstr(v7, "PERFMEM");
    if ( v8 )
    {
      v43 = strstr(v8, "=");
      if ( v43 )
      {
        v44 = (__int64)atol(v43 + 1) << 8;
        if ( *(_QWORD *)(*((_QWORD *)a1 + 30) + 2824LL) )
        {
          BBTPagesToReserve = v44;
        }
        else if ( v44 )
        {
          BBTPagesToReserve = ExBurnMemory(a1, v44, 23LL, &BBTMemoryDescriptor);
        }
      }
    }
    v9 = strstr(v7, "BURNMEMORY");
    if ( v9 )
    {
      v45 = strstr(v9, "=");
      if ( v45 )
      {
        v46 = (__int64)atol(v45 + 1) << 8;
        if ( v46 )
          ExBurnMemory(a1, v46, 6LL, &BurnMemoryDescriptor);
      }
    }
    if ( strstr(v7, "FORCEGROUPAWARE") )
      KeForceGroupAwareness = 1;
  }
  v10 = 0LL;
  v11 = *((_QWORD *)a1 + 4);
  while ( (unsigned int *)v11 != a1 + 8 )
  {
    if ( *(_DWORD *)(v11 + 16) == 21 )
    {
      v42 = *(_QWORD *)(v11 + 32);
      pullResult = 0LL;
      if ( RtlULongLongMult(v42, 0x1000uLL, &pullResult) < 0 )
        goto LABEL_87;
      if ( InitNlsTableSize + pullResult < InitNlsTableSize )
      {
        InitNlsTableSize = -1LL;
        goto LABEL_87;
      }
      InitNlsTableSize += pullResult;
    }
    v12 = *(_QWORD *)(v11 + 24);
    v13 = *(_QWORD *)(v11 + 32);
    if ( v12 < v10 )
      KeBugCheckEx(0x31u, v11, v12, v13, v10);
    v11 = *(_QWORD *)v11;
    v10 = v12 + v13;
  }
  v14 = (USHORT **)*((_QWORD *)a1 + 28);
  if ( v14 )
  {
    if ( *v14 && v14[1] )
    {
      InitNlsTableBase = *v14;
      InitAnsiCodePageDataOffset = 0;
      InitOemCodePageDataOffset = *((_DWORD *)v14 + 2) - *(_DWORD *)v14;
      v15 = *((_DWORD *)v14 + 4) - *(_DWORD *)v14;
    }
    else
    {
      v15 = 0;
      InitNlsTableBase = v14[2];
      InitAnsiCodePageDataOffset = 0;
      InitOemCodePageDataOffset = 0;
    }
    InitUnicodeCaseTableDataOffset = v15;
    v16 = v14[2];
    v17 = v14[1];
    v18 = *v14;
  }
  else
  {
    v16 = 0LL;
    InitNlsTableBase = 0LL;
    v17 = 0LL;
    InitUnicodeCaseTableDataOffset = 0;
    v18 = 0LL;
    InitAnsiCodePageDataOffset = 0;
    InitOemCodePageDataOffset = 0;
  }
  RtlInitNlsTables(v18, v17, v16, (PNLSTABLEINFO)v14);
  RtlResetRtlTranslations(v19);
  ExLeapSecondData = *(PVOID *)(*((_QWORD *)a1 + 30) + 2944LL);
  WheaInitializeServices();
  ((void (__fastcall *)(ULONG_PTR))off_140C008B0[0])(HalIommuDispatch);
  qword_140D557E8 = __rdtsc();
  if ( !(unsigned __int8)HalInitSystem((unsigned int)InitializationPhase, (__int64)a1) )
    KeBugCheck(0x5Cu);
  qword_140D557F0 = __rdtsc();
  KeInitializeClock((unsigned int)InitializationPhase);
  PsInitializeQuotaSystem(1LL);
  CmInitSystem0(a1);
  KvfInitFeatureStates((__int64)a1);
  if ( !PopEnergyEstimationEnabled )
    _interlockedbittestandreset(*(volatile signed __int32 **)(KiProcessorBlock[0] + 24), 0x15u);
  if ( !(unsigned __int8)KeInitSystem(0LL) )
    KeBugCheckEx(0x31u, 0xFFFFFFFFC0000001uLL, 0xBuLL, 0LL, 0LL);
  ExpTickCountMultiplier = ExComputeTickCountMultiplier();
  MEMORY[0xFFFFF78000000004] = ExpTickCountMultiplier;
  MEMORY[0xFFFFF7800000023C] = 0;
  v20 = RtlStringCbPrintfA(pszDest, 0x100uLL, "C:%s", *((const char **)a1 + 25));
  if ( v20 < 0 )
    KeBugCheckEx(0x6Eu, v20, 0LL, 0LL, 0LL);
  RtlInitAnsiString(&DestinationString_8, pszDest);
  DestinationString_8.Buffer[--DestinationString_8.Length] = 0;
  HostNtSystemRoot = (UNICODE_STRING *)RtlGetHostNtSystemRoot();
  HostNtSystemRoot->Buffer = (wchar_t *)0xFFFFF78000000030LL;
  *(_DWORD *)&HostNtSystemRoot->Length = 34078720;
  v22 = RtlAnsiStringToUnicodeString(HostNtSystemRoot, &DestinationString_8, 0);
  if ( v22 < 0 )
    KeBugCheckEx(0x6Eu, v22, 1uLL, 0LL, 0LL);
  ResourceInfo.Type = 11LL;
  ResourceInfo.Name = 1LL;
  ResourceInfo.Language = 0LL;
  ResourceBuffer = 0LL;
  DestinationString = 0;
  if ( LdrFindResource_U((PVOID)0x140000000LL, &ResourceInfo, 3u, &ResourceDataEntry) >= 0
    && LdrAccessResource((PVOID)0x140000000LL, ResourceDataEntry, &ResourceBuffer, &DestinationString) >= 0 )
  {
    KiBugCodeMessages = ResourceBuffer;
  }
  CmNtGlobalFlag2 &= 1u;
  MEMORY[0xFFFFF78000000258] = CmGlobalValidationRunlevel;
  MEMORY[0xFFFFF7800000028B] = 1;
  v23 = CmNtSpBuildNumber & 0xFFF;
  word_140C4C13A = 0;
  CmNtSpBuildNumber = v23;
  if ( CmNtCSDReleaseType )
    *(_DWORD *)&CmNtCSDVersion |= v23 << 16;
  if ( InitTickRolloverDelayLength != 4 || InitTickRolloverDelayType != 4 )
    InitTickRolloverDelay = 0;
  if ( InitTickRolloverDelay )
  {
    KeAdjustInterruptTime(10000LL * (unsigned int)-InitTickRolloverDelay, 1);
    KeRebaselineSystemTime();
  }
  NtGlobalFlag |= CmNtGlobalFlag;
  NtGlobalFlag2 |= CmNtGlobalFlag2;
  MEMORY[0xFFFFF780000003C0] = 1;
  MEMORY[0xFFFFF780000003C4] = 1;
  MEMORY[0xFFFFF7800000036A] = 1;
  if ( !(unsigned __int8)ExInitSystem() )
    goto LABEL_87;
  KeNumaInitialize();
  VerifierInitSystem(a1);
  InitializeDynamicPartitioningPolicy();
  EtwBootPerfData = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( !(unsigned __int8)MmInitSystem(0LL, a1) )
    goto LABEL_87;
  qword_140D55798 = KeQueryPerformanceCounter(0LL).QuadPart;
  KiHwPolicyDriverImageBase = 0LL;
  HalInitializeBios(0, (__int64)a1);
  InbvDriverInitialize(0LL, a1, 0LL);
  if ( KiBugCodeMessages )
  {
    v24 = DestinationString;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, DestinationString, 0x6342694Bu);
    v26 = PoolWithTag;
    if ( !PoolWithTag )
      KeBugCheck(0x7Du);
    memmove(PoolWithTag, KiBugCodeMessages, v24);
    KiBugCodeMessages = v26;
  }
  if ( a1[3] != 1 )
  {
    v47 = (const char *)*((_QWORD *)a1 + 27);
    if ( v47 )
    {
      if ( strstr(v47, "DEBUG") )
      {
        IopAutoReboot = 0;
        KeBugCheckEx(0x196u, a1[3], 1uLL, 0LL, 0LL);
      }
    }
  }
  v27 = 0;
  for ( i = (unsigned int *)*((_QWORD *)a1 + 2); i != a1 + 4; ++v27 )
  {
    if ( v27 >= 3 )
    {
      v29 = (char *)*((_QWORD *)i + 10);
      if ( *(_WORD *)v29 != 92 )
      {
        if ( ((unsigned __int64)*((unsigned __int16 *)i + 44) >> 1)
           + ((unsigned __int64)HostNtSystemRoot->Length >> 1)
           + 17 > 0x100 )
          goto LABEL_53;
        v48 = RtlStringCbPrintfA(pszDest, 0x100uLL, "%ws\\System32\\Drivers\\%wZ", HostNtSystemRoot->Buffer + 2, i + 22);
        if ( v48 < 0 )
          KeBugCheckEx(0x31u, v48, 3uLL, 0LL, 0LL);
        goto LABEL_52;
      }
      v30 = *((unsigned __int16 *)i + 36) >> 1;
      if ( (unsigned __int64)v30 + 1 <= 0x100 )
      {
        v31 = 0LL;
        do
        {
          v32 = *v29;
          v29 += 2;
          pszDest[v31] = v32;
          v31 = (unsigned int)(v31 + 1);
        }
        while ( (unsigned int)v31 < v30 );
        if ( (unsigned int)v31 >= 0x100uLL )
          _report_rangecheckfailure();
        pszDest[v31] = 0;
LABEL_52:
        RtlInitAnsiString(&v70, pszDest);
        DbgLoadImageSymbols((__int64)&v70, *((void **)i + 6), 0xFFFFFFFFLL);
      }
    }
LABEL_53:
    i = *(unsigned int **)i;
  }
  if ( KdBreakAfterSymbolLoad )
    DbgBreakPointWithStatus(1u);
  v33 = a1[66] & 1;
  v67 = 0LL;
  dword_140C19730 = (v33 != 0) + 1;
  ExpBootEnvironmentInformation = *(_OWORD *)(*((_QWORD *)a1 + 30) + 256LL);
  qword_140C19738 = *(_QWORD *)(*((_QWORD *)a1 + 30) + 2616LL);
  if ( HviIsAnyHypervisorPresent() && (HvlpRootFlags & 4) == 0 )
  {
    HvlpHvIdentityInfoCallbackRecord.State = 0;
    KeRegisterBugCheckReasonCallback(
      &HvlpHvIdentityInfoCallbackRecord,
      (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlpHvIdentityInfoCallback,
      KbCallbackSecondaryDumpData,
      &HvlpComponentName);
  }
  if ( HvlHypervisorConnected )
  {
    MmMarkHypercallPageRetpolineBit();
    HvlpSetupCachedHypercallPages((_SLIST_HEADER *)KeGetCurrentPrcb());
    HvlpInitializePowerStatistics();
    if ( (HvlpRootFlags & 0x10) != 0 )
    {
      v71 = 0LL;
      if ( (int)HvlpMapStatisticsPage(1, &v71, &v67) >= 0 )
        HvlpHypervisorStatsPage = MmMapIoSpaceEx(v67, 4096LL, 2u);
    }
    HvlConfigureMemoryZeroingOnReset(1);
    HvlpFlags |= 8u;
    VslpIumPhase0Initialize(a1);
    if ( (HvlpRootFlags & 4) != 0 || VslVsmEnabled )
      HvlpInitializeHvCrashdump(*((_QWORD *)a1 + 30) + 2504LL);
  }
  if ( **((_DWORD **)a1 + 30) >= 0xE38u )
    HeadlessInit(a1);
  BootApplicationPersistentDataInitialize(a1);
  MEMORY[0xFFFFF780000002B4] = 2147418111;
  MEMORY[0xFFFFF780000002B8] = 0x80000000;
  if ( *(_DWORD *)&CmNtCSDVersion )
  {
    Message = RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, 0x40000087u, &MessageEntry);
    if ( Message < 0 )
      KeBugCheckEx(0x31u, Message, 4uLL, 0LL, 0LL);
    RtlInitAnsiString(&DestinationString_8, (PCSZ)MessageEntry->Text);
    DestinationString_8.Length -= 2;
    dwFlagsa = (unsigned __int8)CmNtCSDVersion != 0 ? (unsigned __int8)CmNtCSDVersion + 64 : 0;
    LODWORD(pcbRemaining) = HIBYTE(CmNtCSDVersion);
    v50 = RtlStringCbPrintfA(pszDest, 0x100uLL, "%Z %u%c", &DestinationString_8, pcbRemaining);
    if ( v50 < 0 )
      KeBugCheckEx(0x31u, v50, 5uLL, 0LL, 0LL);
    if ( (*(_DWORD *)&CmNtCSDVersion & 0xFFFF0000) != 0 )
    {
      ppszDestEnd = 0LL;
      v53 = RtlStringCbCatExA(pszDest, v51, v52, &ppszDestEnd, &cbDest, dwFlagsa);
      if ( v53 < 0 )
        KeBugCheckEx(0x31u, v53, 6uLL, 0LL, 0LL);
      v54 = RtlStringCbPrintfA(ppszDestEnd, cbDest, "v.%u", (unsigned __int16)word_140C4C13A);
      if ( v54 < 0 )
        KeBugCheckEx(0x31u, v54, 7uLL, 0LL, 0LL);
    }
  }
  else
  {
    v37 = RtlStringCbCopyExA(pszDest, v34, v35, v36, &cbDest, dwFlags);
    if ( v37 < 0 )
      KeBugCheckEx(0x31u, v37, 8uLL, 0LL, 0LL);
    CmCSDVersionString.MaximumLength = 256 - cbDest;
  }
  RtlInitAnsiString(&DestinationString_8, pszDest);
  v38 = RtlAnsiStringToUnicodeString(&CmCSDVersionString, &DestinationString_8, 1u);
  if ( v38 < 0 )
    KeBugCheckEx(0x31u, v38, 9uLL, 0LL, 0LL);
  v39 = RtlStringCbPrintfA(SourceString, 0x40uLL, "%u.%u", 6, 3);
  if ( v39 < 0 )
    KeBugCheckEx(0x31u, v39, 0xAuLL, 0LL, 0LL);
  if ( !RtlCreateUnicodeStringFromAsciiz(&CmVersionString, SourceString) )
LABEL_87:
    KeBugCheck(0x31u);
  if ( (NtGlobalFlag & 0x2000) != 0 )
  {
    v55 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x800000uLL, 0x63617453u);
    v56 = v55;
    if ( v55 )
    {
      if ( (int)RtlpInitializeStackTraceDatabase((__int64)v55, 0x800000LL, 0x800000uLL) < 0 )
        ExFreePoolWithTag(v56, 0x63617453u);
    }
  }
  if ( (NtGlobalFlag & 0x800000) != 0 )
  {
    v57 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x11620uLL, 0x67626445u);
    RtlpExceptionLog2 = (__int64)v57;
    if ( v57 )
      memset(v57, 0, 0x11620uLL);
  }
  HandleTableListLock = 0LL;
  qword_140D2DB80 = (__int64)&HandleTableListHead;
  HandleTableListHead = (__int64)&HandleTableListHead;
  ExpFreeListCount = HalQueryMaximumProcessorCount(v40);
  if ( !(unsigned __int8)ObInitSystem() )
    KeBugCheck(0x5Eu);
  if ( !(unsigned __int8)SeInitSystem() )
    KeBugCheck(0x5Fu);
  if ( !(unsigned __int8)PsInitSystem(0LL, a1) || (int)DbgkInitialize() < 0 )
    KeBugCheck(0x60u);
  if ( !(unsigned __int8)PpInitSystem() )
    KeBugCheck(0x8Fu);
  MEMORY[0xFFFFF7800000026C] = 10;
  MEMORY[0xFFFFF78000000270] = 0;
  MEMORY[0xFFFFF78000000260] = 19041;
  MEMORY[0xFFFFF7800000026A] = KeProcessorArchitecture;
  MEMORY[0xFFFFF7800000002C] = -31132;
  MEMORY[0xFFFFF7800000002E] = -31132;
  result = 0LL;
  MEMORY[0xFFFFF780000003A4] = 0;
  return result;
}
