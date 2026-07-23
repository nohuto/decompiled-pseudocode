/*
 * XREFs of LdrpInitializeProcess @ 0x1800D1F00
 * Callers:
 *     _LdrpInitialize @ 0x180074C8C (_LdrpInitialize.c)
 * Callees:
 *     LdrpProcessMappedModule @ 0x18000F9AC (LdrpProcessMappedModule.c)
 *     LdrUnloadDll @ 0x18000FBF0 (LdrUnloadDll.c)
 *     RtlInsertInvertedFunctionTable @ 0x1800108F0 (RtlInsertInvertedFunctionTable.c)
 *     RtlReleasePath @ 0x180011F80 (RtlReleasePath.c)
 *     LdrProtectMrdata @ 0x180012224 (LdrProtectMrdata.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     LdrpInsertDataTableEntry @ 0x180014620 (LdrpInsertDataTableEntry.c)
 *     RtlFreeAnsiString @ 0x180016760 (RtlFreeAnsiString.c)
 *     LdrpInitializeDllPath @ 0x1800169B8 (LdrpInitializeDllPath.c)
 *     LdrLoadDll @ 0x180016A10 (LdrLoadDll.c)
 *     RtlGetNtSystemRoot @ 0x180016BB0 (RtlGetNtSystemRoot.c)
 *     LdrpSnapKernelBaseExtensions @ 0x180016EE4 (LdrpSnapKernelBaseExtensions.c)
 *     RtlAppendUnicodeStringToString @ 0x180017270 (RtlAppendUnicodeStringToString.c)
 *     LdrpMapAndSnapDependency @ 0x180017990 (LdrpMapAndSnapDependency.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x1800197B0 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180019900 (RtlActivateActivationContextUnsafeFast.c)
 *     LdrpCallTlsInitializers @ 0x180019A78 (LdrpCallTlsInitializers.c)
 *     LdrpLogDllState @ 0x18001A6CC (LdrpLogDllState.c)
 *     RtlInitUnicodeStringEx @ 0x18001C270 (RtlInitUnicodeStringEx.c)
 *     LdrpFindLoadedDll @ 0x18001DB20 (LdrpFindLoadedDll.c)
 *     RtlInitializeCriticalSectionEx @ 0x180020BC0 (RtlInitializeCriticalSectionEx.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     LdrGetProcedureAddressForCaller @ 0x18002FDC0 (LdrGetProcedureAddressForCaller.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x180032920 (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlImageNtHeaderEx @ 0x180032AD0 (RtlImageNtHeaderEx.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x1800334E8 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x180035C00 (LdrImageDirectoryEntryToLoadConfig.c)
 *     RtlAppendUnicodeToString @ 0x180037990 (RtlAppendUnicodeToString.c)
 *     LdrpPrepareModuleForExecution @ 0x18003D8C8 (LdrpPrepareModuleForExecution.c)
 *     LdrpReleaseLoaderLock @ 0x18003E6A4 (LdrpReleaseLoaderLock.c)
 *     LdrpAcquireLoaderLock @ 0x18003E704 (LdrpAcquireLoaderLock.c)
 *     EtwEventRegister @ 0x180042EC0 (EtwEventRegister.c)
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x180045ADC (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 *     LdrpInitializeTls @ 0x180047428 (LdrpInitializeTls.c)
 *     RtlSetBits @ 0x1800489E0 (RtlSetBits.c)
 *     RtlpInitEnvironmentBlock @ 0x18004DCE8 (RtlpInitEnvironmentBlock.c)
 *     LdrpDropLastInProgressCount @ 0x18005D97C (LdrpDropLastInProgressCount.c)
 *     RtlpInitCurrentDir @ 0x18005E7C8 (RtlpInitCurrentDir.c)
 *     LdrpDrainWorkQueue @ 0x18005EA04 (LdrpDrainWorkQueue.c)
 *     RtlInitializeCriticalSection @ 0x180061570 (RtlInitializeCriticalSection.c)
 *     LdrpEnableParallelLoading @ 0x180061628 (LdrpEnableParallelLoading.c)
 *     LdrpFreeLoadContextOfNode @ 0x180066650 (LdrpFreeLoadContextOfNode.c)
 *     LdrpAllocateModuleEntry @ 0x18006B450 (LdrpAllocateModuleEntry.c)
 *     LdrpInitShimEngine @ 0x18006B74C (LdrpInitShimEngine.c)
 *     LdrpInitializeGraphRecurse @ 0x18006C048 (LdrpInitializeGraphRecurse.c)
 *     RtlInitializeSListHead @ 0x18006EBA0 (RtlInitializeSListHead.c)
 *     RtlpInitializeThreadActivationContextStack @ 0x1800709D8 (RtlpInitializeThreadActivationContextStack.c)
 *     RtlSetHeapInformation @ 0x180073DB0 (RtlSetHeapInformation.c)
 *     RtlInitializeHistoryTable @ 0x180078C5C (RtlInitializeHistoryTable.c)
 *     RtlQueryApplicationKeyOption @ 0x18007A328 (RtlQueryApplicationKeyOption.c)
 *     RtlQueryImageFileExecutionOptions @ 0x18007A400 (RtlQueryImageFileExecutionOptions.c)
 *     LdrpCodeAuthzInitialize @ 0x18007B340 (LdrpCodeAuthzInitialize.c)
 *     TpInitializePackage @ 0x18007D02C (TpInitializePackage.c)
 *     RtlCreateTagHeap @ 0x18007D0D0 (RtlCreateTagHeap.c)
 *     RtlpInitParameterBlock @ 0x18007D288 (RtlpInitParameterBlock.c)
 *     LdrpInitParallelLoadingSupport @ 0x18007E150 (LdrpInitParallelLoadingSupport.c)
 *     SbObtainTraceHandle @ 0x18007E984 (SbObtainTraceHandle.c)
 *     LdrpInitializePolicy @ 0x18007FB28 (LdrpInitializePolicy.c)
 *     LdrpInsertModuleToIndex @ 0x18007FE40 (LdrpInsertModuleToIndex.c)
 *     LdrpInitializeImportRedirection @ 0x180081BF4 (LdrpInitializeImportRedirection.c)
 *     LdrpInitializePerUserWindowsDirectory @ 0x1800826E4 (LdrpInitializePerUserWindowsDirectory.c)
 *     LdrpCorInitialize @ 0x180082BB4 (LdrpCorInitialize.c)
 *     LdrpProtectAndRelocateImage @ 0x180082ECC (LdrpProtectAndRelocateImage.c)
 *     LdrpLoadWow64 @ 0x180083114 (LdrpLoadWow64.c)
 *     LdrpCorProcessImports @ 0x180084954 (LdrpCorProcessImports.c)
 *     LdrpCorValidateImage @ 0x180085114 (LdrpCorValidateImage.c)
 *     RtlNormalizeProcessParams @ 0x180088D10 (RtlNormalizeProcessParams.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     Feature_Servicing_2206c_38427506__private_IsEnabled @ 0x18009B470 (Feature_Servicing_2206c_38427506__private_IsEnabled.c)
 *     NtClose @ 0x18009D290 (NtClose.c)
 *     NtQueryInformationProcess @ 0x18009D3D0 (NtQueryInformationProcess.c)
 *     NtQuerySystemInformation @ 0x18009D770 (NtQuerySystemInformation.c)
 *     ZwOpenDirectoryObject @ 0x18009DBB0 (ZwOpenDirectoryObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x18009F640 (ZwOpenSymbolicLinkObject.c)
 *     NtQuerySymbolicLinkObject @ 0x18009FC60 (NtQuerySymbolicLinkObject.c)
 *     ZwSetInformationVirtualMemory @ 0x1800A0460 (ZwSetInformationVirtualMemory.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0B90 (_guard_dispatch_icall_nop.c)
 *     InterlockedPushListSList @ 0x1800A0CF0 (InterlockedPushListSList.c)
 *     memset @ 0x1800A4180 (memset.c)
 *     LdrpLogDbgPrint @ 0x1800CDCC8 (LdrpLogDbgPrint.c)
 *     LdrpCorFixupImage @ 0x1800CE878 (LdrpCorFixupImage.c)
 *     LdrpCheckAppDirType @ 0x1800D06FC (LdrpCheckAppDirType.c)
 *     LdrpDoDebuggerBreak @ 0x1800D0920 (LdrpDoDebuggerBreak.c)
 *     LdrpInitializeExecutionOptions @ 0x1800D10CC (LdrpInitializeExecutionOptions.c)
 *     LdrpInitializeNlsInfo @ 0x1800D1EC0 (LdrpInitializeNlsInfo.c)
 *     LdrpInitializeProcessHeap @ 0x1800D4258 (LdrpInitializeProcessHeap.c)
 *     LdrpCaptureCriticalThunks @ 0x1800D4CE4 (LdrpCaptureCriticalThunks.c)
 *     LdrpIsNlsUtf8Process @ 0x1800D4E60 (LdrpIsNlsUtf8Process.c)
 *     AVrfInitializeVerifier @ 0x1800D9B98 (AVrfInitializeVerifier.c)
 *     RtlCreateInvertedFunctionTableCacheEntry @ 0x1800E0D44 (RtlCreateInvertedFunctionTableCacheEntry.c)
 *     RtlInitializeHeapManager @ 0x1800F2804 (RtlInitializeHeapManager.c)
 *     RtlpInitializeNonVolatileFlush @ 0x1800FBF94 (RtlpInitializeNonVolatileFlush.c)
 *     RtlInitializeExceptionLog @ 0x180100A78 (RtlInitializeExceptionLog.c)
 *     RtlControlStackTraceDataBase @ 0x180101228 (RtlControlStackTraceDataBase.c)
 *     RtlRaiseStatus @ 0x180102820 (RtlRaiseStatus.c)
 *     TpSetDefaultPoolCpuSets @ 0x180111EB8 (TpSetDefaultPoolCpuSets.c)
 */

__int64 __fastcall LdrpInitializeProcess(__int64 a1, void *a2)
{
  __int64 v3; // rax
  int v4; // r13d
  int v5; // eax
  __int64 ProcessEnvironmentBlock; // r14
  unsigned __int64 v7; // r12
  int v8; // eax
  bool v9; // cc
  int v10; // eax
  int v11; // eax
  __int64 v12; // rcx
  _WORD *v13; // rdx
  unsigned __int16 v14; // r8
  PIMAGE_NT_HEADERS v15; // r15
  __int64 v16; // rcx
  char v17; // al
  _QWORD *v19; // rax
  unsigned __int64 v20; // rax
  bool v21; // zf
  char v22; // al
  int inited; // ecx
  char v24; // al
  int WowTebOffset; // ecx
  NTSTATUS v26; // eax
  __int64 v27; // rcx
  unsigned int *Config; // r15
  unsigned int v29; // eax
  char v30; // al
  _QWORD *v31; // rcx
  int v32; // ecx
  char v33; // al
  unsigned int v34; // eax
  int v35; // ecx
  PRTL_USER_PROCESS_PARAMETERS v36; // r12
  __int64 v37; // rax
  void *v38; // r13
  char v39; // al
  __int64 v40; // rcx
  int DefaultThreadpoolThreadMaximum; // r15d
  PRTL_USER_PROCESS_PARAMETERS v42; // r12
  const WCHAR *NtSystemRoot; // rax
  unsigned __int16 v44; // r15
  wchar_t *Heap; // rax
  BOOL v46; // ecx
  char v47; // al
  SIZE_T v48; // r15
  NTSTATUS v49; // eax
  wchar_t *v50; // r12
  int v51; // edx
  SIZE_T v52; // r15
  wchar_t *v53; // r12
  NTSTATUS v54; // eax
  char *v55; // rax
  __m128i DosPath; // xmm0
  wchar_t *v57; // xmm0_8
  wchar_t *v58; // r15
  PWSTR v59; // rax
  bool v60; // r13
  unsigned __int64 Length; // r15
  SIZE_T v62; // r12
  __int64 v63; // rdx
  PVOID v64; // r12
  char *ModuleEntry; // rax
  char *v66; // r15
  _UNICODE_STRING *v67; // rcx
  _QWORD *v68; // rcx
  _QWORD *v69; // rax
  __int64 v70; // rdx
  char *v71; // rax
  char *v72; // r11
  __int64 v73; // rdx
  __int64 v74; // rdx
  int v75; // ecx
  char v76; // r12
  int v77; // ecx
  __int64 v78; // rdx
  wchar_t *v79; // r9
  wchar_t *v80; // r8
  wchar_t *v81; // rax
  wchar_t *v82; // r10
  __int16 v83; // r8
  void *v84; // rcx
  void *v85; // rax
  PIMAGE_NT_HEADERS v86; // r15
  int v87; // eax
  char v88; // cl
  char *v89; // rax
  __int64 v90; // r15
  __int64 v91; // r13
  char v92; // r13
  PVOID v93; // rcx
  NTSTATUS ProcedureAddressForCaller; // eax
  __int64 v95; // r15
  char v96; // al
  unsigned int LoaderThreads; // ecx
  int v98; // eax
  __int64 v99; // rcx
  void (*v100)(void); // rax
  PVOID *Callback; // [rsp+28h] [rbp-3F0h]
  __int64 v102; // [rsp+30h] [rbp-3E8h]
  __int64 v103; // [rsp+38h] [rbp-3E0h]
  int ApplicationKeyOption; // [rsp+50h] [rbp-3C8h] BYREF
  int v105; // [rsp+54h] [rbp-3C4h]
  char v106; // [rsp+58h] [rbp-3C0h] BYREF
  char v107; // [rsp+59h] [rbp-3BFh] BYREF
  char v108[6]; // [rsp+5Ah] [rbp-3BEh] BYREF
  _UNICODE_STRING v109; // [rsp+60h] [rbp-3B8h] BYREF
  PRTL_USER_PROCESS_PARAMETERS v110; // [rsp+70h] [rbp-3A8h]
  int v111; // [rsp+78h] [rbp-3A0h] BYREF
  int v112; // [rsp+7Ch] [rbp-39Ch] BYREF
  int v113; // [rsp+80h] [rbp-398h]
  HANDLE LinkHandle; // [rsp+88h] [rbp-390h] BYREF
  struct _TEB *v115; // [rsp+90h] [rbp-388h]
  HANDLE v116; // [rsp+98h] [rbp-380h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+A0h] [rbp-378h] BYREF
  _UNICODE_STRING Destination; // [rsp+B0h] [rbp-368h] BYREF
  unsigned __int16 v119; // [rsp+C0h] [rbp-358h] BYREF
  __int16 v120; // [rsp+C2h] [rbp-356h]
  unsigned __int64 v121; // [rsp+C8h] [rbp-350h]
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+D0h] [rbp-348h] BYREF
  PVOID DllHandle; // [rsp+D8h] [rbp-340h] BYREF
  HANDLE Handle; // [rsp+E0h] [rbp-338h] BYREF
  unsigned int v125; // [rsp+E8h] [rbp-330h] BYREF
  ULONG ReturnedLength; // [rsp+ECh] [rbp-32Ch] BYREF
  ULONG v127; // [rsp+F0h] [rbp-328h] BYREF
  int VmInformation; // [rsp+F4h] [rbp-324h] BYREF
  PIMAGE_NT_HEADERS v129; // [rsp+F8h] [rbp-320h] BYREF
  PVOID BaseOfImage; // [rsp+100h] [rbp-318h]
  __int64 v131; // [rsp+108h] [rbp-310h]
  __m128i ImagePathName; // [rsp+110h] [rbp-308h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+120h] [rbp-2F8h] BYREF
  int v134; // [rsp+150h] [rbp-2C8h] BYREF
  const WCHAR *v135; // [rsp+158h] [rbp-2C0h]
  _UNICODE_STRING DestinationString; // [rsp+160h] [rbp-2B8h] BYREF
  PVOID ProcedureAddress; // [rsp+170h] [rbp-2A8h] BYREF
  __int64 v138; // [rsp+178h] [rbp-2A0h] BYREF
  __int64 **v139; // [rsp+180h] [rbp-298h] BYREF
  __int64 v140; // [rsp+188h] [rbp-290h]
  __int64 SystemInformation; // [rsp+190h] [rbp-288h] BYREF
  __int64 v142; // [rsp+198h] [rbp-280h] BYREF
  _QWORD *v143; // [rsp+1A0h] [rbp-278h] BYREF
  PVOID v144; // [rsp+1A8h] [rbp-270h] BYREF
  unsigned int v145; // [rsp+1B0h] [rbp-268h] BYREF
  PIMAGE_NT_HEADERS v146; // [rsp+1B8h] [rbp-260h] BYREF
  _MEMORY_RANGE_ENTRY VirtualAddresses; // [rsp+1C0h] [rbp-258h] BYREF
  _QWORD v148[4]; // [rsp+1D0h] [rbp-248h] BYREF
  __int64 v149; // [rsp+1F0h] [rbp-228h] BYREF
  int v150; // [rsp+1F8h] [rbp-220h]
  __int128 v151; // [rsp+200h] [rbp-218h]
  __int128 v152; // [rsp+210h] [rbp-208h]
  __int128 v153; // [rsp+220h] [rbp-1F8h]
  __int64 v154; // [rsp+230h] [rbp-1E8h]
  PS_MITIGATION_OPTIONS_MAP MitigationOptionsMap; // [rsp+240h] [rbp-1D8h]
  PS_MITIGATION_OPTIONS_MAP v156; // [rsp+260h] [rbp-1B8h]
  PS_MITIGATION_OPTIONS_MAP v157; // [rsp+280h] [rbp-198h]
  _OWORD v158[12]; // [rsp+2A0h] [rbp-178h] BYREF
  PWSTR Path[15]; // [rsp+360h] [rbp-B8h] BYREF
  char v160; // [rsp+3DCh] [rbp-3Ch]
  PVOID *retaddr; // [rsp+418h] [rbp+0h]

  BaseOfImage = a2;
  v131 = a1;
  v134 = 1441812;
  v135 = L"\\KnownDlls";
  v3 = (unsigned int)`RtlpGetCookieValue'::`2'::CookieValue;
  v4 = 0;
  if ( !`RtlpGetCookieValue'::`2'::CookieValue )
  {
    v5 = NtQueryInformationProcess(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           (PROCESSINFOCLASS)(`RtlpGetCookieValue'::`2'::CookieValue + 36),
           &v125,
           4u,
           0LL);
    if ( v5 < 0 )
      RtlRaiseStatus(v5);
    v3 = v125;
    `RtlpGetCookieValue'::`2'::CookieValue = v125;
  }
  RtlpUnhandledExceptionFilter = __ROR8__(v3, v3 & 0x3F);
  v115 = NtCurrentTeb();
  ProcessEnvironmentBlock = (__int64)v115->ProcessEnvironmentBlock;
  PebLdr = 88;
  byte_18016C4C4 = 1;
  qword_18016C4D8 = (__int64)&qword_18016C4D0;
  qword_18016C4D0 = (__int64)&qword_18016C4D0;
  qword_18016C4E8 = (__int64)&qword_18016C4E0;
  qword_18016C4E0 = (__int64)&qword_18016C4E0;
  qword_18016C4F8 = (__int64)&qword_18016C4F0;
  qword_18016C4F0 = (__int64)&qword_18016C4F0;
  byte_18016C508 = 0;
  qword_18016C510 = 0LL;
  *(_QWORD *)(ProcessEnvironmentBlock + 24) = &PebLdr;
  v7 = 0x8000000LL;
  if ( (unsigned __int8)LdrpIsNlsUtf8Process()
    || (*(_DWORD *)(*(_QWORD *)(ProcessEnvironmentBlock + 32) + 8LL) & 0x8000000) != 0 )
  {
    *(_QWORD *)(ProcessEnvironmentBlock + 160) = 0LL;
    *(_QWORD *)(ProcessEnvironmentBlock + 168) = 0LL;
  }
  LdrpInitializeNlsInfo((PUSHORT *)ProcessEnvironmentBlock);
  v8 = 0;
  v9 = *(_DWORD *)(ProcessEnvironmentBlock + 184) <= 1u;
  if ( *(_DWORD *)(ProcessEnvironmentBlock + 184) > 1u )
    v8 = 10240;
  SRWLockSpinCycleCount = v8;
  v10 = 0;
  if ( !v9 )
    v10 = 10240;
  ConditionVariableSpinCycleCount = v10;
  v11 = 0;
  if ( !v9 )
    v11 = 10240;
  RtlpWaitOnAddressSpinCycleCount = v11;
  memset(&RtlpFcProcessManager, 0, 0xE8uLL);
  memset(&unk_18016AB60, 0, 0xA0uLL);
  memset(qword_18016AB48, 0, 0xA8uLL);
  RunOnce.Value = 0LL;
  SRWLock.0 = 0LL;
  qword_18016AC20 = (__int64)&qword_18016AC18;
  qword_18016AC18 = (__int64)&qword_18016AC18;
  RtlpInitializeNonVolatileFlush();
  v12 = *(_QWORD *)(ProcessEnvironmentBlock + 32);
  v13 = (_WORD *)(*(_QWORD *)(v12 + 104) + v12);
  if ( (*(_BYTE *)(v12 + 8) & 1) != 0 )
    v13 = *(_WORD **)(v12 + 104);
  v121 = (unsigned __int64)v13;
  v119 = *(_WORD *)(v12 + 96);
  v14 = v119;
  v120 = v119 + 2;
  if ( v119 >= 8u && *v13 == 92 && v13[1] == 63 && v13[2] == 63 && v13[3] == 92 )
  {
    v119 -= 8;
    v120 = v14 - 6;
    v121 = (unsigned __int64)(v13 + 4);
    *(_WORD *)(v12 + 96) -= 8;
    *(_WORD *)(v12 + 98) -= 8;
    *(_QWORD *)(v12 + 104) += 8LL;
  }
  v113 = 1;
  UseCOR = 0;
  LOBYTE(v105) = 0;
  v112 = 0;
  RtlImageNtHeaderEx(3u, *(PVOID *)(ProcessEnvironmentBlock + 16), 0LL, &OutHeaders);
  v15 = OutHeaders;
  LdrpAppHeaders = (__int64)OutHeaders;
  v16 = 32LL;
  if ( LdrpIsSecureProcess && (OutHeaders->FileHeader.Characteristics & 0x20) == 0 )
  {
    v17 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        3837,
        "LdrpInitializeProcess",
        0,
        "Secure processes must be large address aware\n");
      v17 = LdrpDebugFlags;
    }
    if ( (v17 & 0x10) != 0 )
      __debugbreak();
    return 3221225659LL;
  }
  v19 = &LdrpHashTable;
  do
  {
    v19[1] = v19;
    *v19 = v19;
    v19 += 2;
    --v16;
  }
  while ( v16 );
  RtlImageNtHeaderEx(3u, a2, 0LL, &v146);
  RtlInsertInvertedFunctionTable((__int64)a2, v146->OptionalHeader.SizeOfImage);
  RtlCreateInvertedFunctionTableCacheEntry(a2);
  LdrpCaptureCriticalThunks();
  LdrProtectMrdata(1);
  if ( LdrControlFlowGuardEnforcedWithExportSuppression() )
    LdrpSuppressedExportOverrideListPtr = (__int64)&LdrpSuppressedExportOverrideList;
  MitigationOptionsMap = LdrSystemDllInitBlock.MitigationOptionsMap;
  v20 = (_mm_srli_si128(*(__m128i *)LdrSystemDllInitBlock.MitigationOptionsMap.Map, 8).m128i_u64[0] >> 4) & 3;
  LdrpEnforceIntegrityContinuity = (_BYTE)v20 == 1;
  if ( (_BYTE)v20 == 1 || (v156 = LdrSystemDllInitBlock.MitigationOptionsMap, v21 = (_BYTE)v20 == 3, v22 = 0, v21) )
    v22 = 1;
  LdrpAuditIntegrityContinuity = v22;
  inited = LdrpInitializeExecutionOptions(&v119, ProcessEnvironmentBlock, (__int64)a2, &Handle, &v116, (__int64)&v142);
  ApplicationKeyOption = inited;
  if ( inited < 0 )
  {
    v24 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) == 0 )
      goto LABEL_315;
    LODWORD(Callback) = v115->ClientId.UniqueProcess;
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      3983,
      "LdrpInitializeProcess",
      0,
      "Initializing the execution options for the process %lx failed with status 0x%08lx\n",
      Callback,
      inited);
    goto LABEL_314;
  }
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 188) & 2) != 0 )
    LdrpDebugFlags |= 1u;
  if ( (LdrpDebugFlags & 5) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      4030,
      "LdrpInitializeProcess",
      2,
      "Initializing process 0x%p\n",
      v115->ClientId.UniqueProcess);
  v140 = 0LL;
  WowTebOffset = v115->WowTebOffset;
  UseWOW64 = WowTebOffset > 0;
  if ( v15 && v15->OptionalHeader.Magic == 267 && WowTebOffset <= 0 )
  {
    UseCOR = 1;
    LOBYTE(v15) = 1;
    v105 = (int)v15;
    v4 = 1;
    inited = LdrpCorFixupImage(*(void **)(ProcessEnvironmentBlock + 16));
    ApplicationKeyOption = inited;
    if ( inited < 0 )
      return (unsigned int)inited;
  }
  else
  {
    LOBYTE(v15) = v105;
  }
  if ( !UseWOW64 && !UseCOR )
  {
    v26 = RtlpImageDirectoryEntryToDataEx(*(_QWORD *)(ProcessEnvironmentBlock + 16), 1, 0xEu, &v145, (char **)&v138);
    v27 = v138;
    if ( v26 < 0 )
      v27 = 0LL;
    v138 = v27;
    if ( v27 )
    {
      UseCOR = 1;
      LODWORD(v15) = (unsigned __int8)v15;
      if ( (*(_BYTE *)(v27 + 16) & 1) != 0 )
        LODWORD(v15) = 1;
      v105 = (int)v15;
    }
  }
  LdrpSystemDllBase = (__int64)BaseOfImage;
  if ( !UseWOW64 )
    v140 = *(_QWORD *)(ProcessEnvironmentBlock + 728);
  RtlpTimeout = *(_QWORD *)(ProcessEnvironmentBlock + 192);
  v110 = RtlNormalizeProcessParams(*(PRTL_USER_PROCESS_PARAMETERS *)(ProcessEnvironmentBlock + 32));
  if ( UseWOW64 || UseCOR && v4 )
    Config = 0LL;
  else
    Config = LdrImageDirectoryEntryToLoadConfig(*(PVOID *)(ProcessEnvironmentBlock + 16));
  if ( Config )
  {
    v29 = *Config;
    if ( *Config >= 0x10 )
    {
      *(_DWORD *)(ProcessEnvironmentBlock + 188) &= ~Config[3];
      v29 = *Config;
    }
    if ( v29 >= 0x14 )
    {
      *(_DWORD *)(ProcessEnvironmentBlock + 188) |= Config[4];
      v29 = *Config;
    }
    if ( v29 >= 0x18 && Config[5] )
      RtlpTimeout = -10000LL * (int)Config[5];
  }
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 188) & 2) != 0 )
    LdrpDebugFlags |= 1u;
  v30 = RtlpTimeoutDisable;
  if ( RtlpTimeout < -36000000000LL )
    v30 = 1;
  RtlpTimeoutDisable = v30;
  RtlFailedCriticalDebugAllocations = 0;
  RtlInitializeSListHead(&RtlCriticalSectionDebugSList);
  v31 = &RtlpStaticDebugInfo;
  do
  {
    *v31 = v31 + 6;
    v31 += 6;
  }
  while ( v31 <= qword_18016AF60 );
  *v31 = 0LL;
  InterlockedPushListSList(&RtlCriticalSectionDebugSList, (signed __int64)&RtlpStaticDebugInfo, qword_18016AF90, 8);
  *(_QWORD *)(ProcessEnvironmentBlock + 120) = &TlsBitMap;
  *(_QWORD *)(ProcessEnvironmentBlock + 568) = &TlsExpansionBitMap;
  memset(&RtlpFlsContext, 0, 0x60uLL);
  xmmword_18016D308 = 0LL;
  xmmword_18016D318 = 0LL;
  xmmword_18016D328 = 0LL;
  xmmword_18016D338 = 0LL;
  qword_18016D350 = (__int64)&qword_18016D348;
  qword_18016D348 = (__int64)&qword_18016D348;
  TlsBitMap = 64;
  qword_18016C448 = ProcessEnvironmentBlock + 128;
  *(_DWORD *)(ProcessEnvironmentBlock + 128) |= 1u;
  TlsExpansionBitMap = 1024;
  qword_18016C428 = ProcessEnvironmentBlock + 576;
  *(_DWORD *)(ProcessEnvironmentBlock + 576) |= 1u;
  if ( UseWOW64 )
    RtlSetBits(*(PRTL_BITMAP *)(ProcessEnvironmentBlock + 120), 0, 0x13u);
  RtlSetBits(*(PRTL_BITMAP *)(ProcessEnvironmentBlock + 120), 4u, 1u);
  RtlSetBits(*(PRTL_BITMAP *)(ProcessEnvironmentBlock + 120), 0x10u, 1u);
  v32 = *(_DWORD *)(ProcessEnvironmentBlock + 188);
  if ( (v32 & 0x1000) != 0 || (v33 = LdrpShouldCreateStackTraceDb) != 0 )
  {
    v34 = 24;
    v111 = 24;
    if ( LdrpIsSecureProcess )
    {
      v35 = -1073741772;
    }
    else
    {
      LOBYTE(v102) = 0;
      v35 = RtlQueryImageFileExecutionOptions(
              &v119,
              (__int64)L"StackTraceDatabaseSizeInMb",
              4LL,
              (__int64)&v111,
              4,
              0LL);
      v34 = v111;
    }
    if ( v35 >= 0 && v34 >= 0x18 )
    {
      if ( v34 <= 0x80 )
        v7 = v34 << 20;
    }
    else
    {
      v7 = 25165824LL;
    }
    if ( (LdrpDebugFlags & 5) != 0 )
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        4283,
        "LdrpInitializeProcess",
        2,
        "Stack trace database size is %Id Mb\n",
        v7 >> 20);
    v148[0] = 0LL;
    v148[1] = 0LL;
    v148[2] = v7;
    RtlControlStackTraceDataBase(0LL, 24LL, v148);
    v32 = *(_DWORD *)(ProcessEnvironmentBlock + 188);
    v33 = LdrpShouldCreateStackTraceDb;
  }
  if ( (v32 & 0x1000) != 0 || v33 )
    RtlpForceCSDebugInfoCreation = 1;
  if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x400000) != 0 )
  {
    RtlpForceCSDebugInfoCreation = 1;
    RtlpForceCSToUseEvents = 1;
  }
  inited = RtlInitializeCriticalSectionEx(&FastPebLock, 0, 0);
  ApplicationKeyOption = inited;
  if ( inited < 0 )
    return (unsigned int)inited;
  *(_QWORD *)(ProcessEnvironmentBlock + 56) = &FastPebLock;
  inited = RtlInitializeHeapManager(&v119);
  ApplicationKeyOption = inited;
  if ( inited < 0 )
    return (unsigned int)inited;
  v157 = LdrSystemDllInitBlock.MitigationOptionsMap;
  if ( ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[0] >> 12) & 3) == 1 )
    RtlSetHeapInformation(0LL, HeapEnableTerminationOnCorruption, 0LL, 0LL);
  v36 = v110;
  v37 = LdrpInitializeProcessHeap(Config, OutHeaders, v110);
  v38 = (void *)v37;
  if ( !v37 )
  {
    v39 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) == 0 )
      goto LABEL_199;
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      4355,
      "LdrpInitializeProcess",
      0,
      "Creating the process heap failed\n");
    goto LABEL_198;
  }
  *(_QWORD *)(ProcessEnvironmentBlock + 48) = v37;
  RtlInitializeCriticalSection(&LdrpEnclaveListLock);
  qword_18016CBD8 = (__int64)&LdrpEnclaveList;
  LdrpEnclaveList = (__int64)&LdrpEnclaveList;
  if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x800000) != 0 )
    RtlInitializeExceptionLog();
  RtlpInitializeThreadActivationContextStack((__int64)v115);
  LdrpHeap = v38;
  if ( ((unsigned __int8)&EtwpFreeRegistrationList & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  EtwpFreeRegistrationList = 0LL;
  PrivateLoggerNotificationEntry = 0LL;
  ApplicationKeyOption = NtQuerySystemInformation(SystemHypervisorSharedPageInformation, &SystemInformation, 8u, 0LL);
  v40 = RtlpHypervisorSharedUserVa;
  if ( ApplicationKeyOption >= 0 )
    v40 = SystemInformation;
  RtlpHypervisorSharedUserVa = v40;
  NtdllBaseTag = RtlCreateTagHeap(v38, 0, (PWSTR)L"NTDLL!", (PWSTR)L"!Process");
  inited = TpInitializePackage();
  ApplicationKeyOption = inited;
  if ( inited < 0 )
    return (unsigned int)inited;
  if ( v36->DefaultThreadpoolCpuSetMaskCount )
    TpSetDefaultPoolCpuSets(v36->DefaultThreadpoolCpuSetMasks);
  DefaultThreadpoolThreadMaximum = v36->DefaultThreadpoolThreadMaximum;
  if ( DefaultThreadpoolThreadMaximum )
  {
    RtlAcquireSRWLockExclusive(&TppPoolpGlobalPoolLock);
    TppPoolpGlobalPoolMaxThreadsOverride = DefaultThreadpoolThreadMaximum;
    RtlReleaseSRWLockExclusive(&TppPoolpGlobalPoolLock);
  }
  EtwEventRegister(&PrivateLoggerNotificationGuid, 0LL, 0LL, &g_hPrivLoggerNotificationProvider);
  EtwEventRegister(&UserDiagnosticGuid, UserDiagnosticProviderCallback, 0LL, &g_hUserDiagnosticProvider);
  EtwEventRegister(&WindowsHeapSnapshotProvider, RtlpHpStackTraceEtwCallback, 0LL, &RtlpHpStackTraceProviderHandle);
  if ( (RtlpHpHeapFeatures & 8) != 0 )
    TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation((ULONGLONG *)&dword_180166698);
  inited = RtlpInitEnvironmentBlock();
  ApplicationKeyOption = inited;
  if ( inited < 0 )
    return (unsigned int)inited;
  inited = RtlpInitParameterBlock();
  ApplicationKeyOption = inited;
  if ( inited < 0 )
    return (unsigned int)inited;
  v42 = *(PRTL_USER_PROCESS_PARAMETERS *)(ProcessEnvironmentBlock + 32);
  v110 = v42;
  ImagePathName = (__m128i)v42->ImagePathName;
  v121 = _mm_srli_si128(ImagePathName, 8).m128i_u64[0];
  if ( Handle || v116 )
  {
    ApplicationKeyOption = RtlQueryApplicationKeyOption(
                             v116,
                             Handle,
                             (__int64)L"DebugProcessHeapOnly",
                             4LL,
                             (__int64)&v112,
                             4,
                             v102,
                             0LL);
    if ( ApplicationKeyOption >= 0 && dword_1801663E8 && v112 )
    {
      dword_1801663E8 = 0;
      *RtlpDebugPageHeapTable &= ~0x400u;
    }
  }
  NtSystemRoot = RtlGetNtSystemRoot();
  RtlInitUnicodeStringEx(&DestinationString, NtSystemRoot);
  v44 = DestinationString.Length + 40;
  Heap = (wchar_t *)RtlAllocateHeap(v38, 0, (unsigned int)DestinationString.Length + 38 + 2LL);
  if ( !Heap )
    return 3221225495LL;
  Destination.Length = 0;
  Destination.MaximumLength = v44;
  Destination.Buffer = Heap;
  RtlAppendUnicodeStringToString(&Destination, &DestinationString);
  RtlAppendUnicodeStringToString(&Destination, &SlashSystem32SlashString);
  v46 = Feature_Servicing_2206c_38427506__private_IsEnabled() != 0;
  v47 = *(_BYTE *)(ProcessEnvironmentBlock + 3);
  if ( v46 )
  {
    if ( (v47 & 2) == 0 )
    {
      v48 = 48LL;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 64;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&v134;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      inited = ZwOpenDirectoryObject(&LdrpKnownDllDirectoryHandle, 3u, &ObjectAttributes);
      ApplicationKeyOption = inited;
      if ( inited < 0 )
      {
        v24 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) == 0 )
          goto LABEL_315;
        LODWORD(v102) = inited;
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          4613,
          "LdrpInitializeProcess",
          0,
          "Failed to open %wZ with status 0x%08lx\n",
          &v134,
          v102);
        goto LABEL_314;
      }
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = LdrpKnownDllDirectoryHandle;
      ObjectAttributes.Attributes = 64;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_18011DB00;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      inited = ZwOpenSymbolicLinkObject(&LinkHandle, 1u, &ObjectAttributes);
      ApplicationKeyOption = inited;
      if ( inited < 0 )
      {
        v24 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) == 0 )
          goto LABEL_315;
        LODWORD(v102) = inited;
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          4636,
          "LdrpInitializeProcess",
          0,
          "Failed to open %wZ with status 0x%08lx\n",
          &unk_18011DB00,
          v102);
        goto LABEL_314;
      }
      while ( 1 )
      {
        v50 = (wchar_t *)RtlAllocateHeap(v38, 0, v48);
        if ( !v50 )
          return 3221225495LL;
        LdrpKnownDllPath.Length = 0;
        LdrpKnownDllPath.MaximumLength = v48;
        LdrpKnownDllPath.Buffer = v50;
        v49 = NtQuerySymbolicLinkObject(LinkHandle, &LdrpKnownDllPath, &ReturnedLength);
        inited = v49;
        ApplicationKeyOption = v49;
        if ( v49 >= 0 )
          goto LABEL_158;
        if ( v49 != -1073741789 )
        {
          v24 = LdrpDebugFlags;
          if ( (LdrpDebugFlags & 3) == 0 )
            goto LABEL_315;
          v51 = 4671;
          goto LABEL_157;
        }
        RtlFreeHeap(v38, 0, v50);
        v48 = ReturnedLength;
      }
    }
  }
  else if ( (v47 & 0x42) != 2 )
  {
    v52 = 48LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v134;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    inited = ZwOpenDirectoryObject(&LdrpKnownDllDirectoryHandle, 3u, &ObjectAttributes);
    ApplicationKeyOption = inited;
    if ( inited != -1073741772 || (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 0x40) == 0 )
    {
      if ( inited < 0 )
      {
        v24 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) == 0 )
          goto LABEL_315;
        LODWORD(v102) = inited;
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          4721,
          "LdrpInitializeProcess",
          0,
          "Failed to open %wZ with status 0x%08lx\n",
          &v134,
          v102);
        goto LABEL_314;
      }
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = LdrpKnownDllDirectoryHandle;
      ObjectAttributes.Attributes = 64;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_18011DB00;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      inited = ZwOpenSymbolicLinkObject(&LinkHandle, 1u, &ObjectAttributes);
      ApplicationKeyOption = inited;
      if ( inited < 0 )
      {
        v24 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) == 0 )
          goto LABEL_315;
        LODWORD(v102) = inited;
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          4744,
          "LdrpInitializeProcess",
          0,
          "Failed to open %wZ with status 0x%08lx\n",
          &unk_18011DB00,
          v102);
        goto LABEL_314;
      }
      while ( 1 )
      {
        v53 = (wchar_t *)RtlAllocateHeap(v38, 0, v52);
        if ( !v53 )
          return 3221225495LL;
        LdrpKnownDllPath.Length = 0;
        LdrpKnownDllPath.MaximumLength = v52;
        LdrpKnownDllPath.Buffer = v53;
        v54 = NtQuerySymbolicLinkObject(LinkHandle, &LdrpKnownDllPath, &v127);
        inited = v54;
        ApplicationKeyOption = v54;
        if ( v54 >= 0 )
        {
LABEL_158:
          NtClose(LinkHandle);
          v42 = v110;
          goto LABEL_159;
        }
        if ( v54 != -1073741789 )
        {
          v24 = LdrpDebugFlags;
          if ( (LdrpDebugFlags & 3) == 0 )
            goto LABEL_315;
          v51 = 4779;
LABEL_157:
          v55 = "Querying the known DLL directory link object failed with status 0x%08lx\n";
          goto LABEL_335;
        }
        RtlFreeHeap(v38, 0, v53);
        v52 = v127;
      }
    }
    if ( (LdrpDebugFlags & 5) != 0 )
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        4711,
        "LdrpInitializeProcess",
        2,
        "KnownDLL directory does not yet exist.  SMSS will create it.\n");
  }
LABEL_159:
  if ( UseWOW64 || LdrpIsSecureProcess )
  {
    UnicodeString = DestinationString;
  }
  else
  {
    DosPath = (__m128i)v42->CurrentDirectory.DosPath;
    *(_QWORD *)&UnicodeString.Length = *(_QWORD *)&v42->CurrentDirectory.DosPath.Length;
    v57 = (wchar_t *)_mm_srli_si128(DosPath, 8).m128i_u64[0];
    UnicodeString.Buffer = v57;
    if ( !v57 || !UnicodeString.Length || !*v57 )
    {
      v58 = (wchar_t *)RtlAllocateHeap(v38, 0, 8uLL);
      UnicodeString.Buffer = v58;
      if ( !v58 )
      {
        v39 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) == 0 )
          goto LABEL_199;
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          4828,
          "LdrpInitializeProcess",
          0,
          "Allocating a buffer to hold the current working directory failed\n");
        goto LABEL_198;
      }
      v113 = 0;
      v59 = RtlGetNtSystemRoot();
      *(_DWORD *)v58 = *(_DWORD *)v59;
      v58[2] = v59[2];
      UnicodeString.Buffer[3] = 0;
      *(_DWORD *)&UnicodeString.Length = 524294;
    }
  }
  LdrpInitializePolicy();
  v60 = 0;
  Length = Destination.Length;
  if ( (*(_DWORD *)(*(_QWORD *)(ProcessEnvironmentBlock + 32) + 8LL) & 0x20000000) != 0 )
  {
    v60 = (LdrpPolicyBits & 0x100) != 0;
    Length = 2LL * Destination.Length + 22;
    if ( (LdrpPolicyBits & 0x100) != 0 )
      Length = Destination.Length + 2LL * Destination.Length + 52;
  }
  v62 = Length;
  if ( (LdrpPolicyBits & 1) == 0 )
  {
    v62 = Length + 2 * (DestinationString.Length + 9LL);
    if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 2) != 0 )
      v110->DllPath.Length = 0;
  }
  v109.Buffer = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v62);
  if ( !v109.Buffer )
  {
    v39 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) == 0 )
      goto LABEL_199;
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      4919,
      "LdrpInitializeProcess",
      0,
      "Failed to allocate the system dirs string!\n");
    goto LABEL_198;
  }
  v109.Length = 0;
  v109.MaximumLength = v62;
  RtlAppendUnicodeStringToString(&v109, &Destination);
  v63 = v109.Length;
  v109.Buffer[((unsigned __int64)v109.Length >> 1) - 1] = 59;
  RtlpSystem32Dirs = (__int128)v109;
  LdrpSystem32 = v109;
  LOWORD(v63) = v63 - 2;
  LdrpSystem32.Length = v63;
  if ( (*(_DWORD *)(*(_QWORD *)(ProcessEnvironmentBlock + 32) + 8LL) & 0x20000000) != 0 )
  {
    if ( v60 )
    {
      RtlAppendUnicodeStringToString(&v109, &Destination);
      RtlAppendUnicodeToString(&v109, L"forwarders\\alt;");
    }
    RtlAppendUnicodeStringToString(&v109, &Destination);
    RtlAppendUnicodeToString(&v109, L"forwarders;");
  }
  if ( v62 > Length )
  {
    RtlAppendUnicodeStringToString(&v109, &DestinationString);
    RtlAppendUnicodeToString(&v109, L"\\system;");
    RtlAppendUnicodeStringToString(&v109, &DestinationString);
    RtlAppendUnicodeToString(&v109, L";");
    RtlpSystemDirs = v109;
  }
  if ( (unsigned int)(LdrpIllegalCWDDevices - 1) <= 0xFFFFFFFD )
    LdrpCheckAppDirType((_UNICODE_STRING *)&ImagePathName, v63);
  v64 = BaseOfImage;
  RtlImageNtHeaderEx(3u, BaseOfImage, 0LL, &v129);
  ModuleEntry = LdrpAllocateModuleEntry(0LL);
  v66 = ModuleEntry;
  if ( !ModuleEntry )
  {
    v39 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) == 0 )
      goto LABEL_199;
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      5039,
      "LdrpInitializeProcess",
      0,
      "Allocating a data table entry for the system DLL failed\n");
    goto LABEL_198;
  }
  LdrpNtDllDataTableEntry = ModuleEntry;
  *(_DWORD *)(*((_QWORD *)ModuleEntry + 19) + 24LL) = -1;
  *(_WORD *)(**((_QWORD **)LdrpNtDllDataTableEntry + 19) - 52LL) = -1;
  v67 = (_UNICODE_STRING *)LdrpNtDllDataTableEntry;
  *((_DWORD *)LdrpNtDllDataTableEntry + 26) |= 0x204u;
  v67[15].Buffer = (wchar_t *)((char *)v67[15].Buffer - LdrSystemDllInitBlock.SystemDllNativeRelocation);
  v67 = (_UNICODE_STRING *)((char *)v67 + 72);
  *v67 = Destination;
  RtlAppendUnicodeStringToString(v67, &NtDllName);
  v68 = LdrpNtDllDataTableEntry;
  *(UNICODE_STRING *)((char *)LdrpNtDllDataTableEntry + 88) = NtDllName;
  v68[6] = v64;
  LdrpInsertDataTableEntry((__int64)v68);
  LdrpLogDllState(*((_QWORD *)LdrpNtDllDataTableEntry + 6), (__int64)LdrpNtDllDataTableEntry + 72, 0x14A5u);
  LdrpInsertModuleToIndex((__int64)LdrpNtDllDataTableEntry, (__int64)v129);
  inited = LdrpProcessMappedModule((__int64)LdrpNtDllDataTableEntry, 0, 1);
  ApplicationKeyOption = inited;
  if ( inited < 0 )
    return (unsigned int)inited;
  LdrpLogDllState(*((_QWORD *)LdrpNtDllDataTableEntry + 6), (__int64)LdrpNtDllDataTableEntry + 72, 0x14AEu);
  *(_DWORD *)(*((_QWORD *)LdrpNtDllDataTableEntry + 19) + 56LL) = 9;
  RtlInitializeHistoryTable();
  v69 = v66 + 32;
  v70 = qword_18016C4F0;
  if ( *(__int64 **)(qword_18016C4F0 + 8) != &qword_18016C4F0 )
    __fastfail(3u);
  *v69 = qword_18016C4F0;
  *((_QWORD *)v66 + 5) = &qword_18016C4F0;
  *(_QWORD *)(v70 + 8) = v69;
  qword_18016C4F0 = (__int64)(v66 + 32);
  inited = LdrpInitParallelLoadingSupport();
  ApplicationKeyOption = inited;
  if ( inited < 0 )
  {
    v24 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) == 0 )
      goto LABEL_315;
    v55 = "Failed to initialize Parallel loader, st = 0x%x\n";
    v51 = 5118;
    goto LABEL_335;
  }
  LdrpDrainWorkQueue(0);
  LdrpInitializeDllPath(0LL, 0LL, (const WCHAR **)Path);
  memset(v158, 0, sizeof(v158));
  *(_QWORD *)&v158[1] = Path;
  LODWORD(v158[2]) = 512;
  v158[0] = ImagePathName;
  *((_QWORD *)&v158[2] + 1) = &ApplicationKeyOption;
  v71 = LdrpAllocateModuleEntry((__int64)v158);
  v72 = v71;
  if ( !v71 )
  {
    v39 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) == 0 )
      goto LABEL_199;
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      5139,
      "LdrpInitializeProcess",
      0,
      "Allocating a data table entry for the executable failed\n");
    goto LABEL_198;
  }
  LdrpImageEntry = (__int64)v71;
  v73 = 2LL;
  do
  {
    *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 24LL) = -1;
    --v73;
  }
  while ( v73 );
  *(_WORD *)(**(_QWORD **)(LdrpImageEntry + 152) - 52LL) = -1;
  v74 = LdrpImageEntry;
  *(__m128i *)(LdrpImageEntry + 72) = ImagePathName;
  *(_DWORD *)(v74 + 104) |= 4u;
  v75 = *(_DWORD *)(v74 + 104);
  if ( (NtCurrentPeb()->BitField & 0x10) != 0 )
  {
    v75 |= 1u;
    *(_DWORD *)(v74 + 104) = v75;
  }
  v76 = v105;
  if ( UseCOR )
  {
    v77 = v75 | 0x400000;
    *(_DWORD *)(v74 + 104) = v77;
    if ( v76 )
      *(_DWORD *)(v74 + 104) = v77 | 0x1000000;
  }
  v78 = LdrpImageEntry;
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 4) != 0 )
    *(_QWORD *)(LdrpImageEntry + 248) = 0LL;
  v79 = 0LL;
  v80 = (wchar_t *)(ImagePathName.m128i_i64[1] + ImagePathName.m128i_u16[0]);
  v81 = v80;
  if ( v80 && (unsigned __int64)v80 > ImagePathName.m128i_i64[1] )
  {
    while ( 1 )
    {
      v82 = v81--;
      if ( *v81 == 92 )
        break;
      if ( (unsigned __int64)v81 <= ImagePathName.m128i_i64[1] )
        goto LABEL_216;
    }
    v79 = v82;
  }
LABEL_216:
  if ( v79 )
  {
    v83 = (_WORD)v80 - (_WORD)v79;
    *(_WORD *)(v78 + 88) = v83;
    if ( ImagePathName.m128i_u16[1] - (unsigned __int64)ImagePathName.m128i_u16[0] >= 2 )
      v83 += 2;
    *(_WORD *)(v78 + 90) = v83;
    *(_QWORD *)(v78 + 96) = v79;
  }
  else
  {
    *(_OWORD *)(v78 + 88) = *(_OWORD *)(v72 + 72);
  }
  v84 = *(void **)(ProcessEnvironmentBlock + 16);
  v85 = v84;
  v86 = OutHeaders;
  if ( (void *)OutHeaders->OptionalHeader.ImageBase != v84 && !v76 && !UseWOW64 )
  {
    inited = LdrpProtectAndRelocateImage(v84);
    ApplicationKeyOption = inited;
    if ( inited < 0 )
      return (unsigned int)inited;
    v85 = *(void **)(ProcessEnvironmentBlock + 16);
    v78 = LdrpImageEntry;
  }
  *(_QWORD *)(v78 + 48) = v85;
  LdrpInsertDataTableEntry(v78);
  if ( (LdrpDebugFlags & 5) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      5262,
      "LdrpInitializeProcess",
      2,
      "Beginning execution of %wZ (%wZ)\n\tCurrent directory: %wZ\n\tPackage directories: %wZ\n",
      LdrpImageEntry + 88,
      LdrpImageEntry + 72,
      &UnicodeString,
      &LdrpAppPackagesPath);
  LdrpLogDllState(*(_QWORD *)(LdrpImageEntry + 48), LdrpImageEntry + 72, 0x14A5u);
  LdrpInsertModuleToIndex(LdrpImageEntry, (__int64)v86);
  inited = LdrpProcessMappedModule(LdrpImageEntry, 0, UseWOW64 == 0);
  ApplicationKeyOption = inited;
  if ( inited < 0 )
    return (unsigned int)inited;
  *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 56LL) = 9;
  v87 = RtlpInitCurrentDir(&UnicodeString.Length);
  ApplicationKeyOption = v87;
  if ( v87 < 0 )
  {
    v88 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LODWORD(v102) = v87;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        5299,
        "LdrpInitializeProcess",
        0,
        "Initializing the current directory to \"%wZ\" failed with status 0x%08lx\n",
        &UnicodeString,
        v102);
      v88 = LdrpDebugFlags;
    }
    if ( (v88 & 0x10) != 0 )
      __debugbreak();
  }
  if ( !v113 )
    RtlFreeAnsiString(&UnicodeString);
  if ( AvrfAppVerifierMode )
  {
    v89 = LdrpAllocateModuleEntry(0LL);
    v90 = (__int64)v89;
    if ( !v89 )
    {
      v39 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) == 0 )
      {
LABEL_199:
        if ( (v39 & 0x10) != 0 )
          __debugbreak();
        return 3221225495LL;
      }
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        5322,
        "LdrpInitializeProcess",
        0,
        "Allocating a data table entry for the application verifier DLL failed\n");
LABEL_198:
      v39 = LdrpDebugFlags;
      goto LABEL_199;
    }
    *(_DWORD *)(*((_QWORD *)v89 + 19) + 24LL) = -1;
    *(_WORD *)(**((_QWORD **)v89 + 19) - 52LL) = -1;
    v91 = v142;
    *((_DWORD *)v89 + 26) |= *(_DWORD *)(v142 + 104);
    *((_QWORD *)v89 + 31) = *(_QWORD *)(v91 + 248);
    *((_WORD *)v89 + 55) = 0;
    *(_OWORD *)(v89 + 72) = *(_OWORD *)(v91 + 72);
    *(_OWORD *)(v89 + 88) = *(_OWORD *)(v91 + 88);
    *((_DWORD *)v89 + 32) = *(_DWORD *)(v91 + 128);
    *((_QWORD *)v89 + 6) = *(_QWORD *)(v91 + 48);
    LdrpInsertDataTableEntry((__int64)v89);
    LdrpLogDllState(*(_QWORD *)(v90 + 48), v90 + 72, 0x14A5u);
    inited = RtlImageNtHeaderEx(3u, *(PVOID *)(v90 + 48), 0LL, &v129);
    ApplicationKeyOption = inited;
    if ( inited < 0 )
      return (unsigned int)inited;
    LdrpInsertModuleToIndex(v90, (__int64)v129);
    inited = LdrpProcessMappedModule(v90, 0, 1);
    ApplicationKeyOption = inited;
    if ( inited < 0 )
      return (unsigned int)inited;
    *(_QWORD *)(v90 + 56) = *(_QWORD *)(v91 + 56);
    LdrpLogDllState(*(_QWORD *)(v90 + 48), v90 + 72, 0x14ADu);
    *(_DWORD *)(*(_QWORD *)(v90 + 152) + 56LL) = 7;
    if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x100) != 0 || (AvrfAppVerifierMode & 2) != 0 )
    {
      inited = AVrfInitializeVerifier(0, 0, 0, 1, (__int64)BaseOfImage, 0LL);
      ApplicationKeyOption = inited;
      if ( inited >= 0 && (AvrfAppVerifierMode & 2) != 0 )
      {
        *(_DWORD *)(*(_QWORD *)(v90 + 152) + 56LL) = 9;
        inited = ApplicationKeyOption;
      }
    }
    else
    {
      v106 = 0;
      inited = LdrpInitializeGraphRecurse(*(__int64 **)(v90 + 152), 0LL, &v106);
      ApplicationKeyOption = inited;
    }
    if ( inited < 0 )
      return (unsigned int)inited;
    v86 = OutHeaders;
  }
  LdrpDropLastInProgressCount();
  if ( !UseWOW64 )
  {
    v139 = 0LL;
    if ( UseCOR )
    {
      inited = LdrpCorInitialize((PVOID *)&v139);
      ApplicationKeyOption = inited;
      if ( inited < 0 )
        return (unsigned int)inited;
      v92 = v105;
      if ( (_BYTE)v105 )
      {
        inited = LdrpCorValidateImage(*(_QWORD *)(ProcessEnvironmentBlock + 16));
        ApplicationKeyOption = inited;
        if ( inited < 0 )
          return (unsigned int)inited;
      }
      if ( (v115->SameTebFlags & 0x400) != 0 )
        *(_QWORD *)(v131 + 128) = __ROR8__(LdrpCorExeMainRoutine, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330];
    }
    else
    {
      v92 = v105;
    }
    inited = LdrpInitializeTls();
    ApplicationKeyOption = inited;
    if ( inited < 0 )
    {
      v24 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) == 0 )
        goto LABEL_315;
      v55 = "Initializing TLS slots failed with status 0x%08lx\n";
      v51 = 5549;
      goto LABEL_335;
    }
    if ( v139 )
    {
      v107 = 0;
      inited = LdrpInitializeGraphRecurse(v139[19], 0LL, &v107);
      ApplicationKeyOption = inited;
      if ( inited < 0 )
      {
        v24 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) == 0 )
          goto LABEL_315;
        v55 = "DllMain of MSCOREE (or its dependents) failed with status 0x%08lx\n";
        v51 = 5568;
        goto LABEL_335;
      }
    }
    inited = LdrpInitializeImportRedirection();
    ApplicationKeyOption = inited;
    if ( inited < 0 )
    {
      v24 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) == 0 )
        goto LABEL_315;
      v55 = "Loading of import redirection module failed with status 0x%08x\n";
      v51 = 5584;
      goto LABEL_335;
    }
    ProcedureAddress = 0LL;
    if ( (unsigned __int16)(v86->OptionalHeader.Subsystem - 2) <= 1u )
    {
      inited = LdrLoadDll((PWSTR)0x4001, 0LL, (PUNICODE_STRING)&LdrpKernel32DllName, &DllHandle);
      ApplicationKeyOption = inited;
      if ( inited < 0 )
      {
        if ( inited != -1073741515 )
        {
          v24 = LdrpDebugFlags;
          if ( (LdrpDebugFlags & 3) == 0 )
            goto LABEL_315;
          LODWORD(v102) = inited;
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5742,
            "LdrpInitializeProcess",
            0,
            "Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
            &LdrpKernel32DllName,
            v102);
          goto LABEL_314;
        }
        inited = LdrLoadDll((PWSTR)0x4001, 0LL, (PUNICODE_STRING)&LdrpKernelbaseDllName, &DllHandle);
        ApplicationKeyOption = inited;
        if ( inited < 0 )
        {
          v24 = LdrpDebugFlags;
          if ( (LdrpDebugFlags & 3) == 0 )
            goto LABEL_315;
          LODWORD(v102) = inited;
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5715,
            "LdrpInitializeProcess",
            0,
            "Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
            &LdrpKernelbaseDllName,
            v102);
          goto LABEL_314;
        }
        inited = LdrpCodeAuthzInitialize();
        ApplicationKeyOption = inited;
        if ( (int)(inited + 0x80000000) >= 0 && inited != -1073741515 )
        {
          v24 = LdrpDebugFlags;
          if ( (LdrpDebugFlags & 3) == 0 )
            goto LABEL_315;
          v55 = "LdrpCodeAuthzInitialize failed with status 0x%08lx\n";
          v51 = 5731;
          goto LABEL_335;
        }
        ApplicationKeyOption = 0;
        v93 = DllHandle;
      }
      else
      {
        inited = LdrGetProcedureAddressForCaller(
                   DllHandle,
                   (PANSI_STRING)&stru_18011DB10,
                   0,
                   &Kernel32ThreadInitThunkFunction,
                   0,
                   retaddr);
        ApplicationKeyOption = inited;
        if ( inited < 0 )
        {
          v24 = LdrpDebugFlags;
          if ( (LdrpDebugFlags & 3) == 0 )
            goto LABEL_315;
          LODWORD(v103) = inited;
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5629,
            "LdrpInitializeProcess",
            0,
            "Locating procedure \"%Z\" in Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
            &stru_18011DB10,
            &LdrpKernel32DllName,
            v103);
          goto LABEL_314;
        }
        LdrGetProcedureAddressForCaller(DllHandle, (PANSI_STRING)&stru_18011DB20, 0, &ProcedureAddress, 0, retaddr);
        inited = LdrpSnapKernelBaseExtensions();
        ApplicationKeyOption = inited;
        if ( inited < 0 )
          return (unsigned int)inited;
        inited = LdrpCodeAuthzInitialize();
        ApplicationKeyOption = inited;
        if ( inited < 0 )
          return (unsigned int)inited;
        inited = LdrpFindLoadedDll(&LdrpKernelbaseDllName.Length, 0LL, (PVOID *)&v143);
        ApplicationKeyOption = inited;
        if ( inited < 0 )
        {
          v24 = LdrpDebugFlags;
          if ( (LdrpDebugFlags & 3) == 0 )
            goto LABEL_315;
          LODWORD(v102) = inited;
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5697,
            "LdrpInitializeProcess",
            0,
            "Finding \"%wZ\" failed with status 0x%08lx\n",
            &LdrpKernelbaseDllName,
            v102);
          goto LABEL_314;
        }
        v93 = (PVOID)v143[6];
      }
      ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(
                                    v93,
                                    (PANSI_STRING)&stru_18011DB40,
                                    0,
                                    &v144,
                                    0,
                                    retaddr);
      inited = ProcedureAddressForCaller;
      ApplicationKeyOption = ProcedureAddressForCaller;
      if ( ProcedureAddressForCaller < 0 )
      {
        v24 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) == 0 )
          goto LABEL_315;
        v55 = "Finding KernelbasePostInit failed with status 0x%08lx\n";
        v51 = 5760;
        goto LABEL_335;
      }
      inited = ((__int64 (__fastcall *)(_QWORD))v144)((unsigned int)ProcedureAddressForCaller);
      ApplicationKeyOption = inited;
      if ( inited < 0 )
      {
        v24 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) == 0 )
          goto LABEL_315;
        v55 = "Calling KernelbasePostInit failed with status 0x%08lx\n";
        v51 = 5768;
        goto LABEL_335;
      }
      ApplicationKeyOption = 0;
    }
    LdrpDrainWorkQueue(0);
    SbObtainTraceHandle(0LL);
    v95 = v140;
    if ( v140 && *(_DWORD *)(v140 + 528) )
    {
      *(_QWORD *)(ProcessEnvironmentBlock + 736) = 0LL;
      LdrpInitShimEngine(v95);
    }
    v96 = RtlpForceCSDebugInfoCreation;
    if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x400000) != 0 )
      v96 = 1;
    RtlpForceCSDebugInfoCreation = v96;
    if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x10000000) != 0 )
    {
      v110->LoaderThreads = 1;
      LoaderThreads = 1;
    }
    else
    {
      LoaderThreads = v110->LoaderThreads;
    }
    LdrpEnableParallelLoading(LoaderThreads);
    LdrInitState = 1;
    *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 56LL) = 2;
    **((_DWORD **)&v158[2] + 1) = 0;
    if ( v92 )
    {
      v98 = LdrpCorProcessImports(LdrpImageEntry);
    }
    else
    {
      LODWORD(v158[2]) |= 1u;
      LdrpMapAndSnapDependency((__int64)v158);
      LdrpDrainWorkQueue(1);
      inited = ApplicationKeyOption;
      if ( ApplicationKeyOption < 0 )
        goto LABEL_323;
      v98 = LdrpPrepareModuleForExecution(LdrpImageEntry, *((__int64 *)&v158[2] + 1));
    }
    ApplicationKeyOption = v98;
    inited = v98;
    if ( v98 >= 0 )
    {
      LdrInitState = 2;
      VmInformation = 1;
      VirtualAddresses.VirtualAddress = *(PVOID *)(LdrpImageEntry + 48);
      VirtualAddresses.NumberOfBytes = 4096LL;
      ZwSetInformationVirtualMemory(
        (HANDLE)0xFFFFFFFFFFFFFFFFLL,
        VmImageHotPatchInformation,
        1uLL,
        &VirtualAddresses,
        &VmInformation,
        4u);
      if ( *(_BYTE *)(ProcessEnvironmentBlock + 2) )
        LdrpDoDebuggerBreak();
      LdrpDropLastInProgressCount();
      if ( Kernel32ThreadInitThunkFunction )
      {
        inited = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))Kernel32ThreadInitThunkFunction)(1LL, 0LL, 0LL);
        ApplicationKeyOption = inited;
        if ( inited < 0 )
          return (unsigned int)inited;
        inited = LdrpInitializePerUserWindowsDirectory((__int64 (__fastcall *)(_BYTE *, __int64))ProcedureAddress);
        ApplicationKeyOption = inited;
        if ( inited < 0 )
          return (unsigned int)inited;
      }
      LdrpProcessInitContextRecord = v131;
      LdrpDrainWorkQueue(0);
      LdrpAcquireLoaderLock();
      v108[0] = 0;
      ApplicationKeyOption = LdrpInitializeGraphRecurse(
                               *(__int64 **)(LdrpImageEntry + 152),
                               *((__int64 *)&v158[2] + 1),
                               v108);
      LdrpReleaseLoaderLock(v99, 9, ApplicationKeyOption);
      LdrpFreeLoadContextOfNode(*(_QWORD **)(LdrpImageEntry + 152), *((__int64 *)&v158[2] + 1));
      LdrpDropLastInProgressCount();
      LdrpProcessInitContextRecord = 0LL;
      if ( v160 )
        RtlReleasePath(Path[0]);
      inited = ApplicationKeyOption;
      if ( ApplicationKeyOption >= 0 )
      {
        if ( *(_WORD *)(LdrpImageEntry + 110) )
        {
          v149 = 72LL;
          v150 = 1;
          v151 = 0LL;
          v152 = 0LL;
          v153 = 0LL;
          v154 = 0LL;
          RtlActivateActivationContextUnsafeFast((__int64)&v149, *(_QWORD *)(LdrpImageEntry + 136));
          LdrpCallTlsInitializers(1u, LdrpImageEntry);
          RtlDeactivateActivationContextUnsafeFast((__int64)&v149);
        }
        if ( g_ShimsEnabled
          && !((unsigned __int8 (__fastcall *)(unsigned __int16 *, __int64))(__ROR8__(
                                                                               g_pfnSE_InstallAfterInit,
                                                                               64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))(
                &v119,
                v95) )
        {
          g_ShimsEnabled = 0;
          LdrUnloadDll(g_pShimEngineModule);
          g_pShimEngineModule = 0LL;
        }
        v100 = *(void (**)(void))(ProcessEnvironmentBlock + 560);
        if ( v100 )
          v100();
        goto LABEL_343;
      }
      v24 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        v55 = "Running the init routines of the executable's static imports failed with status 0x%08lx\n";
        v51 = 6122;
        goto LABEL_335;
      }
LABEL_315:
      if ( (v24 & 0x10) != 0 )
        __debugbreak();
      return (unsigned int)inited;
    }
LABEL_323:
    v24 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      v55 = "Walking the import tables of the executable and its static imports failed with status 0x%08lx\n";
      v51 = 5980;
LABEL_335:
      LODWORD(Callback) = inited;
      LdrpLogDbgPrint((unsigned int)"minkernel\\ntdll\\ldrinit.c", v51, "LdrpInitializeProcess", 0, v55, Callback);
LABEL_314:
      inited = ApplicationKeyOption;
      v24 = LdrpDebugFlags;
      goto LABEL_315;
    }
    goto LABEL_315;
  }
  if ( Handle )
  {
    NtClose(Handle);
    Handle = 0LL;
    if ( LdrpLargePageDllKeyHandle )
    {
      NtClose(LdrpLargePageDllKeyHandle);
      LdrpLargePageDllKeyHandle = 0LL;
    }
  }
  if ( v116 )
  {
    NtClose(v116);
    v116 = 0LL;
  }
  inited = LdrpLoadWow64(&Destination);
  ApplicationKeyOption = inited;
  if ( inited < 0 )
    return (unsigned int)inited;
  if ( *(_BYTE *)(ProcessEnvironmentBlock + 2) )
    LdrpDoDebuggerBreak();
  LdrInitState = 3;
  _interlockedbittestandreset((volatile signed __int32 *)(ProcessEnvironmentBlock + 80), 1u);
  g_LdrpWow64LdrpInitialize(v131);
LABEL_343:
  if ( Handle )
    NtClose(Handle);
  if ( v116 )
    NtClose(v116);
  return 0LL;
}
