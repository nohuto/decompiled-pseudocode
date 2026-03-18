/*
 * XREFs of InitBootProcessor @ 0x140A36F64
 * Callers:
 *     KiInitializeKernel @ 0x1409999E0 (KiInitializeKernel.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1402770E0 (RtlInitAnsiString.c)
 *     RtlULongLongAdd @ 0x14027F100 (RtlULongLongAdd.c)
 *     PoEnergyEstimationEnabled @ 0x140296BC0 (PoEnergyEstimationEnabled.c)
 *     VslGetNestedPageProtectionFlags @ 0x1402E6AA0 (VslGetNestedPageProtectionFlags.c)
 *     KeQueryPerformanceCounter @ 0x1402F3FA0 (KeQueryPerformanceCounter.c)
 *     RtlULongLongMult @ 0x1402FE7AC (RtlULongLongMult.c)
 *     DbgLoadImageSymbols @ 0x14036F9C0 (DbgLoadImageSymbols.c)
 *     KeAdjustInterruptTime @ 0x14038ADFC (KeAdjustInterruptTime.c)
 *     KeRebaselineSystemTime @ 0x14038B334 (KeRebaselineSystemTime.c)
 *     RtlStringCbPrintfA @ 0x1403A5654 (RtlStringCbPrintfA.c)
 *     HalInitializeBios @ 0x1403C1BE0 (HalInitializeBios.c)
 *     RtlStringCbCopyExA @ 0x1403CA170 (RtlStringCbCopyExA.c)
 *     KvfInitFeatureStates @ 0x1403CBA3C (KvfInitFeatureStates.c)
 *     VslGetSecureSpeculationControlInformation @ 0x1403CC4EC (VslGetSecureSpeculationControlInformation.c)
 *     HvlPhase1Initialize @ 0x1403CC54C (HvlPhase1Initialize.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     _strupr @ 0x1403CDA20 (_strupr.c)
 *     strstr @ 0x1403CE280 (strstr.c)
 *     atol @ 0x1403CE320 (atol.c)
 *     KeBugCheck @ 0x1403F70B0 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     DbgBreakPointWithStatus @ 0x1403FEF70 (DbgBreakPointWithStatus.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     RtlStringCbCatExA @ 0x1404B0F28 (RtlStringCbCatExA.c)
 *     __report_rangecheckfailure @ 0x1404B12CC (__report_rangecheckfailure.c)
 *     RtlControlStackTraceDataBase @ 0x140580924 (RtlControlStackTraceDataBase.c)
 *     RtlAnsiStringToUnicodeString @ 0x14063D070 (RtlAnsiStringToUnicodeString.c)
 *     RtlGetHostNtSystemRoot @ 0x1407116E0 (RtlGetHostNtSystemRoot.c)
 *     RtlFindMessage @ 0x140712910 (RtlFindMessage.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x1407905D0 (RtlCreateUnicodeStringFromAsciiz.c)
 *     LdrAccessResource @ 0x1407B34C0 (LdrAccessResource.c)
 *     LdrFindResource_U @ 0x1407B34E0 (LdrFindResource_U.c)
 *     RtlInitNlsTables @ 0x1407B9CC4 (RtlInitNlsTables.c)
 *     RtlResetRtlTranslations @ 0x1407BD254 (RtlResetRtlTranslations.c)
 *     ExpInitLicensing @ 0x1407C1494 (ExpInitLicensing.c)
 *     HalInitSystem @ 0x1409986F0 (HalInitSystem.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 *     ObInitSystem @ 0x140A3A924 (ObInitSystem.c)
 *     KeInitializeClock @ 0x140A428AC (KeInitializeClock.c)
 *     PsInitSystem @ 0x140A44918 (PsInitSystem.c)
 *     KeInitSystem @ 0x140A4495C (KeInitSystem.c)
 *     CmInitSystem0 @ 0x140A4B25C (CmInitSystem0.c)
 *     MmInitSystem @ 0x140A520E4 (MmInitSystem.c)
 *     SeInitSystem @ 0x140A5E1DC (SeInitSystem.c)
 *     ExInitSystem @ 0x140A6423C (ExInitSystem.c)
 *     InbvDriverInitialize @ 0x140A67DE0 (InbvDriverInitialize.c)
 *     PsInitializeQuotaSystem @ 0x140A6898C (PsInitializeQuotaSystem.c)
 *     WheaInitializeServices @ 0x140A68DA4 (WheaInitializeServices.c)
 *     BootApplicationPersistentDataInitialize @ 0x140A6901C (BootApplicationPersistentDataInitialize.c)
 *     DbgkInitialize @ 0x140A69C20 (DbgkInitialize.c)
 *     ExComputeTickCountMultiplier @ 0x140A6B274 (ExComputeTickCountMultiplier.c)
 *     VerifierInitSystem @ 0x140A6C224 (VerifierInitSystem.c)
 *     PpInitSystem @ 0x140A6F380 (PpInitSystem.c)
 *     InitializeDynamicPartitioningPolicy @ 0x140A6FDE8 (InitializeDynamicPartitioningPolicy.c)
 *     KeNumaInitialize @ 0x140A702A4 (KeNumaInitialize.c)
 *     ExpValidateLoader @ 0x140A70958 (ExpValidateLoader.c)
 *     ExpInitializeBootEnvironment @ 0x140A70E38 (ExpInitializeBootEnvironment.c)
 *     ExInitializeHandleTablePackage @ 0x140A70E84 (ExInitializeHandleTablePackage.c)
 *     HeadlessInit @ 0x140A7119C (HeadlessInit.c)
 *     ExBurnMemory @ 0x140A89758 (ExBurnMemory.c)
 *     ExpRevokeBootLoaderPagePrivileges @ 0x140A897E4 (ExpRevokeBootLoaderPagePrivileges.c)
 *     RtlInitializeExceptionLog @ 0x140A90BD4 (RtlInitializeExceptionLog.c)
 */

__int64 __fastcall InitBootProcessor(__int64 a1)
{
  char *v2; // rdi
  char *v3; // rax
  char *v4; // rax
  __int64 v5; // rdx
  char *v6; // rax
  char *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r11
  ULONG_PTR v10; // rdi
  ULONG_PTR v11; // r10
  ULONGLONG v12; // rcx
  ULONG_PTR v13; // r8
  ULONG_PTR v14; // r9
  __int64 v15; // r9
  __int64 v16; // r8
  USHORT *v17; // rdx
  USHORT *v18; // rcx
  int v19; // ecx
  NTSTATUS v20; // eax
  UNICODE_STRING *HostNtSystemRoot; // r13
  NTSTATUS v22; // eax
  int v23; // eax
  unsigned int v24; // esi
  PVOID PoolWithTag; // rax
  void *v26; // rdi
  const char *v27; // rcx
  unsigned int v28; // r15d
  __int64 *i; // rdi
  char *v30; // r8
  unsigned int v31; // r9d
  __int64 v32; // rdx
  char v33; // al
  NTSTATUS v34; // eax
  size_t v35; // rdx
  const char *v36; // r8
  NTSTRSAFE_PSTR *v37; // r9
  int Message; // eax
  NTSTATUS v39; // eax
  size_t v40; // rdx
  const char *v41; // r8
  NTSTATUS v42; // eax
  NTSTATUS v43; // eax
  NTSTATUS v44; // eax
  NTSTATUS v45; // eax
  NTSTATUS v46; // eax
  PVOID v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  void *v50; // rdi
  __int64 result; // rax
  size_t *pcbRemaining; // [rsp+28h] [rbp-E0h]
  ULONG dwFlags; // [rsp+30h] [rbp-D8h]
  int dwFlagsa; // [rsp+30h] [rbp-D8h]
  unsigned int DestinationString; // [rsp+38h] [rbp-D0h] BYREF
  STRING DestinationString_8; // [rsp+40h] [rbp-C8h] BYREF
  size_t cbDest; // [rsp+50h] [rbp-B8h] BYREF
  ULONGLONG pullResult; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int *v59; // [rsp+60h] [rbp-A8h] BYREF
  void *v60; // [rsp+68h] [rbp-A0h] BYREF
  const char *v61; // [rsp+70h] [rbp-98h] BYREF
  NTSTRSAFE_PSTR v62[3]; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v63[3]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v64[4]; // [rsp+A8h] [rbp-60h] BYREF
  char pszDest[256]; // [rsp+C8h] [rbp-40h] BYREF
  char v66[64]; // [rsp+1C8h] [rbp+C0h] BYREF

  dword_140D257B4 = -1;
  dword_140D24994 = 259;
  v61 = 0LL;
  v59 = 0LL;
  cbDest = 0LL;
  qword_140D24960 = (__int64)&PspTimeZoneStateBuffer;
  dword_140D24990 = 1;
  byte_140D24959 = 1;
  DestinationString_8 = 0LL;
  *(_OWORD *)&v62[1] = 0LL;
  ExpValidateLoader();
  MEMORY[0xFFFFF780000002C4] = *(_DWORD *)(*(_QWORD *)(a1 + 240) + 2868LL);
  ExpInitLicensing((__int64)&PspHostSiloGlobals);
  if ( (VslGetNestedPageProtectionFlags() & 6) == 6 )
    ExpRevokeBootLoaderPagePrivileges(a1);
  VslGetSecureSpeculationControlInformation();
  v2 = *(char **)(a1 + 216);
  LODWORD(InitializationPhase) = 0;
  if ( v2 )
  {
    strupr(v2);
    v3 = strstr(v2, "PERFMEM");
    if ( v3 )
    {
      v4 = strstr(v3, "=");
      if ( v4 )
      {
        v5 = (__int64)atol(v4 + 1) << 8;
        if ( *(_QWORD *)(*(_QWORD *)(a1 + 240) + 2824LL) )
        {
          BBTPagesToReserve = v5;
        }
        else if ( v5 )
        {
          BBTPagesToReserve = ExBurnMemory(a1, v5, 23LL, &BBTMemoryDescriptor);
        }
      }
    }
    v6 = strstr(v2, "BURNMEMORY");
    if ( v6 )
    {
      v7 = strstr(v6, "=");
      if ( v7 )
      {
        v8 = (__int64)atol(v7 + 1) << 8;
        if ( v8 )
          ExBurnMemory(a1, v8, 6LL, &BurnMemoryDescriptor);
      }
    }
    if ( strstr(v2, "FORCEGROUPAWARE") )
      KeForceGroupAwareness = 1;
  }
  v9 = a1 + 32;
  v10 = 0LL;
  v11 = *(_QWORD *)(a1 + 32);
  while ( v11 != v9 )
  {
    if ( *(_DWORD *)(v11 + 16) == 21 )
    {
      v12 = *(_QWORD *)(v11 + 32);
      pullResult = 0LL;
      if ( RtlULongLongMult(v12, 0x1000uLL, &pullResult) < 0
        || RtlULongLongAdd(InitNlsTableSize, pullResult, &InitNlsTableSize) < 0 )
      {
        goto LABEL_94;
      }
    }
    v13 = *(_QWORD *)(v11 + 24);
    v14 = *(_QWORD *)(v11 + 32);
    if ( v13 < v10 )
      KeBugCheckEx(0x31u, v11, v13, v14, v10);
    v11 = *(_QWORD *)v11;
    v10 = v13 + v14;
  }
  v15 = *(_QWORD *)(a1 + 224);
  if ( v15 )
  {
    if ( *(_QWORD *)v15 && *(_QWORD *)(v15 + 8) )
    {
      InitNlsTableBase = *(void **)v15;
      InitAnsiCodePageDataOffset = 0;
      InitOemCodePageDataOffset = *(_DWORD *)(v15 + 8) - *(_DWORD *)v15;
      v19 = *(_DWORD *)(v15 + 16) - *(_DWORD *)v15;
    }
    else
    {
      v19 = 0;
      InitNlsTableBase = *(void **)(v15 + 16);
      InitAnsiCodePageDataOffset = 0;
      InitOemCodePageDataOffset = 0;
    }
    InitUnicodeCaseTableDataOffset = v19;
    v16 = *(_QWORD *)(v15 + 16);
    v17 = *(USHORT **)(v15 + 8);
    v18 = *(USHORT **)v15;
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
  RtlInitNlsTables(v18, v17, v16);
  RtlResetRtlTranslations();
  ExLeapSecondData = *(PVOID *)(*(_QWORD *)(a1 + 240) + 2944LL);
  WheaInitializeServices();
  ((void (__fastcall *)(ULONG_PTR))off_140C008B0[0])(HalIommuDispatch);
  qword_140D567E8 = __rdtsc();
  if ( !(unsigned __int8)HalInitSystem((unsigned int)InitializationPhase, a1) )
    KeBugCheck(0x5Cu);
  qword_140D567F0 = __rdtsc();
  KeInitializeClock((unsigned int)InitializationPhase);
  PsInitializeQuotaSystem(1LL);
  CmInitSystem0(a1);
  KvfInitFeatureStates(a1);
  if ( !PoEnergyEstimationEnabled() )
    _interlockedbittestandreset(*(volatile signed __int32 **)(KiProcessorBlock[0] + 24), 0x15u);
  if ( !(unsigned __int8)KeInitSystem(0LL) )
    KeBugCheckEx(0x31u, 0xFFFFFFFFC0000001uLL, 0xBuLL, 0LL, 0LL);
  ExpTickCountMultiplier = ExComputeTickCountMultiplier();
  MEMORY[0xFFFFF78000000004] = ExpTickCountMultiplier;
  MEMORY[0xFFFFF7800000023C] = 0;
  v20 = RtlStringCbPrintfA(pszDest, 0x100uLL, "C:%s", *(const char **)(a1 + 200));
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
  v64[0] = 11LL;
  v64[1] = 1LL;
  v64[2] = 0LL;
  v60 = 0LL;
  DestinationString = 0;
  if ( (int)LdrFindResource_U(0x140000000LL, v64, 3u, &v59) >= 0
    && (int)LdrAccessResource(0x140000000LL, (unsigned __int64)v59, (__int64)&v60, (__int64)&DestinationString) >= 0 )
  {
    KiBugCodeMessages = v60;
  }
  CmNtGlobalFlag2 &= 1u;
  MEMORY[0xFFFFF78000000258] = CmGlobalValidationRunlevel;
  MEMORY[0xFFFFF7800000028B] = 1;
  v23 = CmNtSpBuildNumber & 0xFFF;
  HIWORD(CmNtCSDVersion) = 0;
  CmNtSpBuildNumber = v23;
  if ( CmNtCSDReleaseType )
    CmNtCSDVersion |= v23 << 16;
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
    goto LABEL_94;
  KeNumaInitialize();
  VerifierInitSystem(a1);
  InitializeDynamicPartitioningPolicy();
  EtwBootPerfData = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( !(unsigned __int8)MmInitSystem(0LL, a1) )
    goto LABEL_94;
  qword_140D56798 = KeQueryPerformanceCounter(0LL).QuadPart;
  KiHwPolicyDriverImageBase = 0LL;
  HalInitializeBios(0, a1);
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
  if ( *(_DWORD *)(a1 + 12) != 1 )
  {
    v27 = *(const char **)(a1 + 216);
    if ( v27 )
    {
      if ( strstr(v27, "DEBUG") )
      {
        IopAutoReboot = 0;
        KeBugCheckEx(0x196u, *(unsigned int *)(a1 + 12), 1uLL, 0LL, 0LL);
      }
    }
  }
  v28 = 0;
  for ( i = *(__int64 **)(a1 + 16); i != (__int64 *)(a1 + 16); ++v28 )
  {
    if ( v28 >= 3 )
    {
      v30 = (char *)i[10];
      if ( *(_WORD *)v30 == 92 )
      {
        v31 = *((unsigned __int16 *)i + 36) >> 1;
        if ( (unsigned __int64)v31 + 1 <= 0x100 )
        {
          v32 = 0LL;
          do
          {
            v33 = *v30;
            v30 += 2;
            pszDest[v32] = v33;
            v32 = (unsigned int)(v32 + 1);
          }
          while ( (unsigned int)v32 < v31 );
          if ( (unsigned int)v32 >= 0x100uLL )
            _report_rangecheckfailure();
          pszDest[v32] = 0;
LABEL_64:
          RtlInitAnsiString((PSTRING)&v62[1], pszDest);
          DbgLoadImageSymbols((__int64)&v62[1], i[6], 0xFFFFFFFFLL);
        }
      }
      else if ( ((unsigned __int64)*((unsigned __int16 *)i + 44) >> 1)
              + ((unsigned __int64)HostNtSystemRoot->Length >> 1)
              + 17 <= 0x100 )
      {
        v34 = RtlStringCbPrintfA(pszDest, 0x100uLL, "%ws\\System32\\Drivers\\%wZ", HostNtSystemRoot->Buffer + 2, i + 11);
        if ( v34 < 0 )
          KeBugCheckEx(0x31u, v34, 3uLL, 0LL, 0LL);
        goto LABEL_64;
      }
    }
    i = (__int64 *)*i;
  }
  if ( BYTE1(KdDebuggerEnabled) )
    DbgBreakPointWithStatus(1u);
  ExpInitializeBootEnvironment(a1);
  HvlPhase1Initialize(a1);
  if ( **(_DWORD **)(a1 + 240) >= 0xE38u )
    HeadlessInit(a1);
  BootApplicationPersistentDataInitialize(a1);
  MEMORY[0xFFFFF780000002B4] = 2147418111;
  MEMORY[0xFFFFF780000002B8] = 0x80000000;
  if ( CmNtCSDVersion )
  {
    Message = RtlFindMessage(0x140000000LL, 0xBu, 0, 0x40000087u, (unsigned __int16 **)&v61);
    if ( Message < 0 )
      KeBugCheckEx(0x31u, Message, 4uLL, 0LL, 0LL);
    RtlInitAnsiString(&DestinationString_8, v61 + 4);
    DestinationString_8.Length -= 2;
    dwFlagsa = (unsigned __int8)CmNtCSDVersion != 0 ? (unsigned __int8)CmNtCSDVersion + 64 : 0;
    LODWORD(pcbRemaining) = BYTE1(CmNtCSDVersion);
    v39 = RtlStringCbPrintfA(pszDest, 0x100uLL, "%Z %u%c", &DestinationString_8, pcbRemaining);
    if ( v39 < 0 )
      KeBugCheckEx(0x31u, v39, 5uLL, 0LL, 0LL);
    if ( (CmNtCSDVersion & 0xFFFF0000) != 0 )
    {
      v62[0] = 0LL;
      v42 = RtlStringCbCatExA(pszDest, v40, v41, v62, &cbDest, dwFlagsa);
      if ( v42 < 0 )
        KeBugCheckEx(0x31u, v42, 6uLL, 0LL, 0LL);
      v43 = RtlStringCbPrintfA(v62[0], cbDest, "v.%u", HIWORD(CmNtCSDVersion));
      if ( v43 < 0 )
        KeBugCheckEx(0x31u, v43, 7uLL, 0LL, 0LL);
    }
  }
  else
  {
    v44 = RtlStringCbCopyExA(pszDest, v35, v36, v37, &cbDest, dwFlags);
    if ( v44 < 0 )
      KeBugCheckEx(0x31u, v44, 8uLL, 0LL, 0LL);
    CmCSDVersionString.MaximumLength = 256 - cbDest;
  }
  RtlInitAnsiString(&DestinationString_8, pszDest);
  v45 = RtlAnsiStringToUnicodeString(&CmCSDVersionString, &DestinationString_8, 1u);
  if ( v45 < 0 )
    KeBugCheckEx(0x31u, v45, 9uLL, 0LL, 0LL);
  v46 = RtlStringCbPrintfA(v66, 0x40uLL, "%u.%u", 6, 3);
  if ( v46 < 0 )
    KeBugCheckEx(0x31u, v46, 0xAuLL, 0LL, 0LL);
  if ( !RtlCreateUnicodeStringFromAsciiz(&CmVersionString, v66) )
LABEL_94:
    KeBugCheck(0x31u);
  if ( (NtGlobalFlag & 0x2000) != 0 )
  {
    v47 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x800000uLL, 0x63617453u);
    v50 = v47;
    if ( v47 )
    {
      v63[0] = v47;
      v63[1] = 0x800000LL;
      v63[2] = 0x800000LL;
      if ( (int)RtlControlStackTraceDataBase(v49, v48, v63) < 0 )
        ExFreePoolWithTag(v50, 0x63617453u);
    }
  }
  if ( (NtGlobalFlag & 0x800000) != 0 )
    RtlInitializeExceptionLog();
  ExInitializeHandleTablePackage();
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
