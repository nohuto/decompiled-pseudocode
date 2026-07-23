/*
 * XREFs of LdrpInitializeProcess @ 0x1800D1E80
 * Callers:
 *     _LdrpInitialize @ 0x180075CBC (_LdrpInitialize.c)
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
 *     LdrpPrepareModuleForExecution @ 0x18003D888 (LdrpPrepareModuleForExecution.c)
 *     LdrpReleaseLoaderLock @ 0x18003E664 (LdrpReleaseLoaderLock.c)
 *     LdrpAcquireLoaderLock @ 0x18003E6C4 (LdrpAcquireLoaderLock.c)
 *     EtwEventRegister @ 0x180042E80 (EtwEventRegister.c)
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x180045A9C (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 *     RtlpInitEnvironmentBlock @ 0x18004AFB8 (RtlpInitEnvironmentBlock.c)
 *     LdrpInitializeTls @ 0x180053D54 (LdrpInitializeTls.c)
 *     RtlSetBits @ 0x180055310 (RtlSetBits.c)
 *     LdrpDropLastInProgressCount @ 0x18005EEAC (LdrpDropLastInProgressCount.c)
 *     RtlpInitCurrentDir @ 0x18005FCB8 (RtlpInitCurrentDir.c)
 *     LdrpDrainWorkQueue @ 0x18005FEF4 (LdrpDrainWorkQueue.c)
 *     RtlInitializeCriticalSection @ 0x180062A60 (RtlInitializeCriticalSection.c)
 *     LdrpEnableParallelLoading @ 0x180062B18 (LdrpEnableParallelLoading.c)
 *     LdrpFreeLoadContextOfNode @ 0x180067B40 (LdrpFreeLoadContextOfNode.c)
 *     LdrpAllocateModuleEntry @ 0x18006C480 (LdrpAllocateModuleEntry.c)
 *     LdrpInitShimEngine @ 0x18006C77C (LdrpInitShimEngine.c)
 *     LdrpInitializeGraphRecurse @ 0x18006D078 (LdrpInitializeGraphRecurse.c)
 *     RtlInitializeSListHead @ 0x18006FBD0 (RtlInitializeSListHead.c)
 *     RtlpInitializeThreadActivationContextStack @ 0x180071A08 (RtlpInitializeThreadActivationContextStack.c)
 *     RtlSetHeapInformation @ 0x180074DE0 (RtlSetHeapInformation.c)
 *     RtlInitializeHistoryTable @ 0x180079C8C (RtlInitializeHistoryTable.c)
 *     RtlQueryApplicationKeyOption @ 0x18007B358 (RtlQueryApplicationKeyOption.c)
 *     RtlQueryImageFileExecutionOptions @ 0x18007B430 (RtlQueryImageFileExecutionOptions.c)
 *     LdrpCodeAuthzInitialize @ 0x18007C370 (LdrpCodeAuthzInitialize.c)
 *     TpInitializePackage @ 0x18007D9CC (TpInitializePackage.c)
 *     RtlCreateTagHeap @ 0x18007DA70 (RtlCreateTagHeap.c)
 *     RtlpInitParameterBlock @ 0x18007DC28 (RtlpInitParameterBlock.c)
 *     LdrpInitParallelLoadingSupport @ 0x18007EAF0 (LdrpInitParallelLoadingSupport.c)
 *     SbObtainTraceHandle @ 0x18007F2A4 (SbObtainTraceHandle.c)
 *     LdrpInitializePolicy @ 0x180080448 (LdrpInitializePolicy.c)
 *     LdrpInsertModuleToIndex @ 0x180080760 (LdrpInsertModuleToIndex.c)
 *     LdrpInitializeImportRedirection @ 0x180082514 (LdrpInitializeImportRedirection.c)
 *     LdrpInitializePerUserWindowsDirectory @ 0x180082DF4 (LdrpInitializePerUserWindowsDirectory.c)
 *     LdrpCorInitialize @ 0x1800832C4 (LdrpCorInitialize.c)
 *     LdrpProtectAndRelocateImage @ 0x1800835DC (LdrpProtectAndRelocateImage.c)
 *     LdrpLoadWow64 @ 0x180083824 (LdrpLoadWow64.c)
 *     LdrpCorProcessImports @ 0x180084C94 (LdrpCorProcessImports.c)
 *     LdrpCorValidateImage @ 0x1800855E4 (LdrpCorValidateImage.c)
 *     RtlNormalizeProcessParams @ 0x180089310 (RtlNormalizeProcessParams.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     NtClose @ 0x18009D7E0 (NtClose.c)
 *     NtQueryInformationProcess @ 0x18009D920 (NtQueryInformationProcess.c)
 *     NtQuerySystemInformation @ 0x18009DCC0 (NtQuerySystemInformation.c)
 *     ZwOpenDirectoryObject @ 0x18009E100 (ZwOpenDirectoryObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x18009FBB0 (ZwOpenSymbolicLinkObject.c)
 *     NtQuerySymbolicLinkObject @ 0x1800A01D0 (NtQuerySymbolicLinkObject.c)
 *     ZwSetInformationVirtualMemory @ 0x1800A09F0 (ZwSetInformationVirtualMemory.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1120 (_guard_dispatch_icall_nop.c)
 *     InterlockedPushListSList @ 0x1800A1280 (InterlockedPushListSList.c)
 *     memset @ 0x1800A4740 (memset.c)
 *     LdrpLogDbgPrint @ 0x1800CDC48 (LdrpLogDbgPrint.c)
 *     LdrpCorFixupImage @ 0x1800CE7F8 (LdrpCorFixupImage.c)
 *     LdrpCheckAppDirType @ 0x1800D067C (LdrpCheckAppDirType.c)
 *     LdrpDoDebuggerBreak @ 0x1800D08A0 (LdrpDoDebuggerBreak.c)
 *     LdrpInitializeExecutionOptions @ 0x1800D104C (LdrpInitializeExecutionOptions.c)
 *     LdrpInitializeNlsInfo @ 0x1800D1E40 (LdrpInitializeNlsInfo.c)
 *     LdrpInitializeProcessHeap @ 0x1800D3FCC (LdrpInitializeProcessHeap.c)
 *     LdrpCaptureCriticalThunks @ 0x1800D4A54 (LdrpCaptureCriticalThunks.c)
 *     LdrpIsNlsUtf8Process @ 0x1800D4BD0 (LdrpIsNlsUtf8Process.c)
 *     AVrfInitializeVerifier @ 0x1800D9908 (AVrfInitializeVerifier.c)
 *     RtlCreateInvertedFunctionTableCacheEntry @ 0x1800E0AB4 (RtlCreateInvertedFunctionTableCacheEntry.c)
 *     RtlInitializeHeapManager @ 0x1800F2654 (RtlInitializeHeapManager.c)
 *     RtlpInitializeNonVolatileFlush @ 0x1800FBDF4 (RtlpInitializeNonVolatileFlush.c)
 *     RtlInitializeExceptionLog @ 0x1801008D8 (RtlInitializeExceptionLog.c)
 *     RtlControlStackTraceDataBase @ 0x180101088 (RtlControlStackTraceDataBase.c)
 *     RtlRaiseStatus @ 0x180102680 (RtlRaiseStatus.c)
 *     TpSetDefaultPoolCpuSets @ 0x180111D18 (TpSetDefaultPoolCpuSets.c)
 */

__int64 __fastcall LdrpInitializeProcess(__int64 a1, void *a2)
{
  __int64 v3; // rax
  int v4; // r13d
  int v5; // eax
  __int64 ProcessEnvironmentBlock; // rdi
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
  PRTL_USER_PROCESS_PARAMETERS v36; // r13
  __int64 v37; // rax
  void *v38; // r12
  char v39; // al
  __int64 v40; // rcx
  int DefaultThreadpoolThreadMaximum; // r15d
  PRTL_USER_PROCESS_PARAMETERS v42; // r13
  const WCHAR *NtSystemRoot; // rax
  unsigned __int16 v44; // r15
  wchar_t *Heap; // rax
  SIZE_T v46; // r15
  char *v47; // rax
  int v48; // edx
  NTSTATUS v49; // eax
  wchar_t *v50; // r13
  char *v51; // rax
  int v52; // edx
  __m128i DosPath; // xmm0
  wchar_t *v54; // xmm0_8
  bool v55; // r13
  wchar_t *v56; // r15
  PWSTR v57; // rax
  unsigned __int64 Length; // r15
  SIZE_T v59; // r12
  __int64 v60; // rdx
  PVOID v61; // r12
  char *ModuleEntry; // rax
  char *v63; // r15
  _UNICODE_STRING *v64; // rcx
  _QWORD *v65; // rcx
  _QWORD *v66; // rax
  __int64 v67; // rdx
  char *v68; // rax
  char *v69; // r11
  __int64 v70; // rdx
  __int64 v71; // rdx
  int v72; // ecx
  char v73; // r12
  int v74; // ecx
  __int64 v75; // rdx
  wchar_t *v76; // r9
  wchar_t *v77; // r8
  wchar_t *v78; // rax
  wchar_t *v79; // r10
  __int16 v80; // r8
  void *v81; // rcx
  void *v82; // rax
  PIMAGE_NT_HEADERS v83; // r15
  int v84; // eax
  char v85; // cl
  char *v86; // rax
  __int64 v87; // r15
  __int64 v88; // r13
  char v89; // r13
  PVOID v90; // rcx
  NTSTATUS ProcedureAddressForCaller; // eax
  __int64 v92; // r15
  char v93; // al
  unsigned int LoaderThreads; // ecx
  int v95; // eax
  __int64 v96; // rcx
  void (*v97)(void); // rax
  PVOID *Callback; // [rsp+28h] [rbp-3F0h]
  const _UNICODE_STRING *Callbacka; // [rsp+28h] [rbp-3F0h]
  __int64 v100; // [rsp+30h] [rbp-3E8h]
  __int64 v101; // [rsp+38h] [rbp-3E0h]
  int ApplicationKeyOption; // [rsp+50h] [rbp-3C8h] BYREF
  int v103; // [rsp+54h] [rbp-3C4h]
  char v104; // [rsp+58h] [rbp-3C0h] BYREF
  char v105; // [rsp+59h] [rbp-3BFh] BYREF
  char v106[6]; // [rsp+5Ah] [rbp-3BEh] BYREF
  _UNICODE_STRING v107; // [rsp+60h] [rbp-3B8h] BYREF
  PRTL_USER_PROCESS_PARAMETERS v108; // [rsp+70h] [rbp-3A8h]
  int v109; // [rsp+78h] [rbp-3A0h] BYREF
  int v110; // [rsp+7Ch] [rbp-39Ch] BYREF
  int v111; // [rsp+80h] [rbp-398h]
  struct _TEB *v112; // [rsp+88h] [rbp-390h]
  HANDLE v113; // [rsp+90h] [rbp-388h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+A0h] [rbp-378h] BYREF
  _UNICODE_STRING Destination; // [rsp+B0h] [rbp-368h] BYREF
  unsigned __int16 v116; // [rsp+C0h] [rbp-358h] BYREF
  __int16 v117; // [rsp+C2h] [rbp-356h]
  unsigned __int64 v118; // [rsp+C8h] [rbp-350h]
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+D0h] [rbp-348h] BYREF
  PVOID DllHandle; // [rsp+D8h] [rbp-340h] BYREF
  HANDLE Handle; // [rsp+E0h] [rbp-338h] BYREF
  unsigned int v122; // [rsp+E8h] [rbp-330h] BYREF
  ULONG ReturnedLength; // [rsp+ECh] [rbp-32Ch] BYREF
  int VmInformation; // [rsp+F0h] [rbp-328h] BYREF
  PIMAGE_NT_HEADERS v125; // [rsp+F8h] [rbp-320h] BYREF
  PVOID BaseOfImage; // [rsp+100h] [rbp-318h]
  __int64 v127; // [rsp+108h] [rbp-310h]
  __m128i ImagePathName; // [rsp+110h] [rbp-308h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+120h] [rbp-2F8h] BYREF
  __int64 v130; // [rsp+130h] [rbp-2E8h] BYREF
  HANDLE LinkHandle; // [rsp+138h] [rbp-2E0h] BYREF
  __int64 **v132; // [rsp+140h] [rbp-2D8h] BYREF
  __int64 v133; // [rsp+148h] [rbp-2D0h]
  PVOID ProcedureAddress; // [rsp+150h] [rbp-2C8h] BYREF
  int v135; // [rsp+158h] [rbp-2C0h] BYREF
  const WCHAR *v136; // [rsp+160h] [rbp-2B8h]
  unsigned int v137; // [rsp+168h] [rbp-2B0h] BYREF
  PIMAGE_NT_HEADERS v138; // [rsp+170h] [rbp-2A8h] BYREF
  __int64 SystemInformation; // [rsp+178h] [rbp-2A0h] BYREF
  __int64 v140; // [rsp+180h] [rbp-298h] BYREF
  _QWORD *v141; // [rsp+188h] [rbp-290h] BYREF
  PVOID v142; // [rsp+190h] [rbp-288h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+198h] [rbp-280h] BYREF
  _MEMORY_RANGE_ENTRY VirtualAddresses; // [rsp+1C8h] [rbp-250h] BYREF
  _QWORD v145[3]; // [rsp+1D8h] [rbp-240h] BYREF
  __int64 v146; // [rsp+1F0h] [rbp-228h] BYREF
  int v147; // [rsp+1F8h] [rbp-220h]
  __int128 v148; // [rsp+200h] [rbp-218h]
  __int128 v149; // [rsp+210h] [rbp-208h]
  __int128 v150; // [rsp+220h] [rbp-1F8h]
  __int64 v151; // [rsp+230h] [rbp-1E8h]
  PS_MITIGATION_OPTIONS_MAP MitigationOptionsMap; // [rsp+240h] [rbp-1D8h]
  PS_MITIGATION_OPTIONS_MAP v153; // [rsp+260h] [rbp-1B8h]
  PS_MITIGATION_OPTIONS_MAP v154; // [rsp+280h] [rbp-198h]
  _OWORD v155[12]; // [rsp+2A0h] [rbp-178h] BYREF
  PWSTR Path[15]; // [rsp+360h] [rbp-B8h] BYREF
  char v157; // [rsp+3DCh] [rbp-3Ch]
  PVOID *retaddr; // [rsp+418h] [rbp+0h]

  BaseOfImage = a2;
  v127 = a1;
  v135 = 1441812;
  v136 = L"\\KnownDlls";
  v3 = (unsigned int)`RtlpGetCookieValue'::`2'::CookieValue;
  v4 = 0;
  if ( !`RtlpGetCookieValue'::`2'::CookieValue )
  {
    v5 = NtQueryInformationProcess(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           (PROCESSINFOCLASS)(`RtlpGetCookieValue'::`2'::CookieValue + 36),
           &v122,
           4u,
           0LL);
    if ( v5 < 0 )
      RtlRaiseStatus(v5);
    v3 = v122;
    `RtlpGetCookieValue'::`2'::CookieValue = v122;
  }
  RtlpUnhandledExceptionFilter = __ROR8__(v3, v3 & 0x3F);
  v112 = NtCurrentTeb();
  ProcessEnvironmentBlock = (__int64)v112->ProcessEnvironmentBlock;
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
  v118 = (unsigned __int64)v13;
  v116 = *(_WORD *)(v12 + 96);
  v14 = v116;
  v117 = v116 + 2;
  if ( v116 >= 8u && *v13 == 92 && v13[1] == 63 && v13[2] == 63 && v13[3] == 92 )
  {
    v116 -= 8;
    v117 = v14 - 6;
    v118 = (unsigned __int64)(v13 + 4);
    *(_WORD *)(v12 + 96) -= 8;
    *(_WORD *)(v12 + 98) -= 8;
    *(_QWORD *)(v12 + 104) += 8LL;
  }
  v111 = 1;
  UseCOR = 0;
  LOBYTE(v103) = 0;
  v110 = 0;
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
        3832,
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
  RtlImageNtHeaderEx(3u, a2, 0LL, &v138);
  RtlInsertInvertedFunctionTable((__int64)a2, v138->OptionalHeader.SizeOfImage);
  RtlCreateInvertedFunctionTableCacheEntry(a2);
  LdrpCaptureCriticalThunks();
  LdrProtectMrdata(1);
  if ( LdrControlFlowGuardEnforcedWithExportSuppression() )
    LdrpSuppressedExportOverrideListPtr = (__int64)&LdrpSuppressedExportOverrideList;
  MitigationOptionsMap = LdrSystemDllInitBlock.MitigationOptionsMap;
  v20 = (_mm_srli_si128(*(__m128i *)LdrSystemDllInitBlock.MitigationOptionsMap.Map, 8).m128i_u64[0] >> 4) & 3;
  LdrpEnforceIntegrityContinuity = (_BYTE)v20 == 1;
  if ( (_BYTE)v20 == 1 || (v153 = LdrSystemDllInitBlock.MitigationOptionsMap, v21 = (_BYTE)v20 == 3, v22 = 0, v21) )
    v22 = 1;
  LdrpAuditIntegrityContinuity = v22;
  inited = LdrpInitializeExecutionOptions(&v116, ProcessEnvironmentBlock, (__int64)a2, &Handle, &v113, (__int64)&v140);
  ApplicationKeyOption = inited;
  if ( inited < 0 )
  {
    v24 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) == 0 )
      goto LABEL_316;
    LODWORD(Callback) = v112->ClientId.UniqueProcess;
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      3978,
      "LdrpInitializeProcess",
      0,
      "Initializing the execution options for the process %lx failed with status 0x%08lx\n",
      Callback,
      inited);
    goto LABEL_315;
  }
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 188) & 2) != 0 )
    LdrpDebugFlags |= 1u;
  if ( (LdrpDebugFlags & 5) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      4025,
      "LdrpInitializeProcess",
      2,
      "Initializing process 0x%p\n",
      v112->ClientId.UniqueProcess);
  v133 = 0LL;
  WowTebOffset = v112->WowTebOffset;
  UseWOW64 = WowTebOffset > 0;
  if ( v15 && v15->OptionalHeader.Magic == 267 && WowTebOffset <= 0 )
  {
    UseCOR = 1;
    LOBYTE(v15) = 1;
    v103 = (int)v15;
    v4 = 1;
    inited = LdrpCorFixupImage(*(void **)(ProcessEnvironmentBlock + 16));
    ApplicationKeyOption = inited;
    if ( inited < 0 )
      return (unsigned int)inited;
  }
  else
  {
    LOBYTE(v15) = v103;
  }
  if ( !UseWOW64 && !UseCOR )
  {
    v26 = RtlpImageDirectoryEntryToDataEx(*(_QWORD *)(ProcessEnvironmentBlock + 16), 1, 0xEu, &v137, (char **)&v130);
    v27 = v130;
    if ( v26 < 0 )
      v27 = 0LL;
    v130 = v27;
    if ( v27 )
    {
      UseCOR = 1;
      LODWORD(v15) = (unsigned __int8)v15;
      if ( (*(_BYTE *)(v27 + 16) & 1) != 0 )
        LODWORD(v15) = 1;
      v103 = (int)v15;
    }
  }
  LdrpSystemDllBase = (__int64)BaseOfImage;
  if ( !UseWOW64 )
    v133 = *(_QWORD *)(ProcessEnvironmentBlock + 728);
  RtlpTimeout = *(_QWORD *)(ProcessEnvironmentBlock + 192);
  v108 = RtlNormalizeProcessParams(*(PRTL_USER_PROCESS_PARAMETERS *)(ProcessEnvironmentBlock + 32));
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
    v109 = 24;
    if ( LdrpIsSecureProcess )
    {
      v35 = -1073741772;
    }
    else
    {
      LOBYTE(v100) = 0;
      v35 = RtlQueryImageFileExecutionOptions(
              &v116,
              (__int64)L"StackTraceDatabaseSizeInMb",
              4LL,
              (__int64)&v109,
              4,
              0LL);
      v34 = v109;
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
        4278,
        "LdrpInitializeProcess",
        2,
        "Stack trace database size is %Id Mb\n",
        v7 >> 20);
    v145[0] = 0LL;
    v145[1] = 0LL;
    v145[2] = v7;
    RtlControlStackTraceDataBase(0LL, 24LL, v145);
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
  inited = RtlInitializeHeapManager(&v116);
  ApplicationKeyOption = inited;
  if ( inited < 0 )
    return (unsigned int)inited;
  v154 = LdrSystemDllInitBlock.MitigationOptionsMap;
  if ( ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[0] >> 12) & 3) == 1 )
    RtlSetHeapInformation(0LL, HeapEnableTerminationOnCorruption, 0LL, 0LL);
  v36 = v108;
  v37 = LdrpInitializeProcessHeap(Config, OutHeaders, v108);
  v38 = (void *)v37;
  if ( !v37 )
  {
    v39 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) == 0 )
      goto LABEL_180;
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      4350,
      "LdrpInitializeProcess",
      0,
      "Creating the process heap failed\n");
    goto LABEL_179;
  }
  *(_QWORD *)(ProcessEnvironmentBlock + 48) = v37;
  RtlInitializeCriticalSection(&LdrpEnclaveListLock);
  qword_18016CBD8 = (__int64)&LdrpEnclaveList;
  LdrpEnclaveList = (__int64)&LdrpEnclaveList;
  if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x800000) != 0 )
    RtlInitializeExceptionLog();
  RtlpInitializeThreadActivationContextStack((__int64)v112);
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
  v108 = v42;
  ImagePathName = (__m128i)v42->ImagePathName;
  v118 = _mm_srli_si128(ImagePathName, 8).m128i_u64[0];
  if ( Handle || v113 )
  {
    ApplicationKeyOption = RtlQueryApplicationKeyOption(
                             v113,
                             Handle,
                             (__int64)L"DebugProcessHeapOnly",
                             4LL,
                             (__int64)&v110,
                             4,
                             v100,
                             0LL);
    if ( ApplicationKeyOption >= 0 && dword_1801663E8 && v110 )
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
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 2) == 0 )
  {
    v46 = 48LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v135;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    LdrProtectMrdata(0);
    ApplicationKeyOption = ZwOpenDirectoryObject(&LdrpKnownDllDirectoryHandle, 3u, &ObjectAttributes);
    LdrProtectMrdata(1);
    inited = ApplicationKeyOption;
    if ( ApplicationKeyOption >= 0 )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = LdrpKnownDllDirectoryHandle;
      ObjectAttributes.Attributes = 64;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_18011DAF0;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      inited = ZwOpenSymbolicLinkObject(&LinkHandle, 1u, &ObjectAttributes);
      ApplicationKeyOption = inited;
      if ( inited >= 0 )
      {
        while ( 1 )
        {
          v50 = (wchar_t *)RtlAllocateHeap(v38, 0, v46);
          if ( !v50 )
            return 3221225495LL;
          LdrpKnownDllPath.Length = 0;
          LdrpKnownDllPath.MaximumLength = v46;
          LdrpKnownDllPath.Buffer = v50;
          v49 = NtQuerySymbolicLinkObject(LinkHandle, &LdrpKnownDllPath, &ReturnedLength);
          inited = v49;
          ApplicationKeyOption = v49;
          if ( v49 >= 0 )
          {
            NtClose(LinkHandle);
            v42 = v108;
            goto LABEL_140;
          }
          if ( v49 != -1073741789 )
          {
            v24 = LdrpDebugFlags;
            if ( (LdrpDebugFlags & 3) == 0 )
              goto LABEL_316;
            v51 = "Querying the known DLL directory link object failed with status 0x%08lx\n";
            v52 = 4668;
            goto LABEL_314;
          }
          RtlFreeHeap(v38, 0, v50);
          v46 = ReturnedLength;
        }
      }
      v24 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) == 0 )
        goto LABEL_316;
      LODWORD(v100) = inited;
      Callbacka = (const _UNICODE_STRING *)&unk_18011DAF0;
      v47 = "Failed to open %wZ with status 0x%08lx\n";
      v48 = 4633;
    }
    else
    {
      v24 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) == 0 )
        goto LABEL_316;
      LODWORD(v100) = ApplicationKeyOption;
      Callbacka = (const _UNICODE_STRING *)&v135;
      v47 = "Failed to open %wZ with status 0x%08lx\n";
      v48 = 4610;
    }
    goto LABEL_274;
  }
LABEL_140:
  if ( UseWOW64 || LdrpIsSecureProcess )
  {
    UnicodeString = DestinationString;
    v55 = 0;
  }
  else
  {
    DosPath = (__m128i)v42->CurrentDirectory.DosPath;
    *(_QWORD *)&UnicodeString.Length = *(_QWORD *)&v42->CurrentDirectory.DosPath.Length;
    v54 = (wchar_t *)_mm_srli_si128(DosPath, 8).m128i_u64[0];
    UnicodeString.Buffer = v54;
    v55 = 0;
    if ( !v54 || !UnicodeString.Length || !*v54 )
    {
      v56 = (wchar_t *)RtlAllocateHeap(v38, 0, 8uLL);
      UnicodeString.Buffer = v56;
      if ( !v56 )
      {
        v39 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) == 0 )
          goto LABEL_180;
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          4715,
          "LdrpInitializeProcess",
          0,
          "Allocating a buffer to hold the current working directory failed\n");
        goto LABEL_179;
      }
      v111 = 0;
      v57 = RtlGetNtSystemRoot();
      *(_DWORD *)v56 = *(_DWORD *)v57;
      v56[2] = v57[2];
      UnicodeString.Buffer[3] = 0;
      *(_DWORD *)&UnicodeString.Length = 524294;
    }
  }
  LdrpInitializePolicy();
  Length = Destination.Length;
  if ( (*(_DWORD *)(*(_QWORD *)(ProcessEnvironmentBlock + 32) + 8LL) & 0x20000000) != 0 )
  {
    v55 = (LdrpPolicyBits & 0x100) != 0;
    Length = 2LL * Destination.Length + 22;
    if ( (LdrpPolicyBits & 0x100) != 0 )
      Length = Destination.Length + 2LL * Destination.Length + 52;
  }
  v59 = Length;
  if ( (LdrpPolicyBits & 1) == 0 )
  {
    v59 = Length + 2 * (DestinationString.Length + 9LL);
    if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 2) != 0 )
      v108->DllPath.Length = 0;
  }
  v107.Buffer = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v59);
  if ( !v107.Buffer )
  {
    v39 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) == 0 )
      goto LABEL_180;
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      4806,
      "LdrpInitializeProcess",
      0,
      "Failed to allocate the system dirs string!\n");
    goto LABEL_179;
  }
  v107.Length = 0;
  v107.MaximumLength = v59;
  RtlAppendUnicodeStringToString(&v107, &Destination);
  v60 = v107.Length;
  v107.Buffer[((unsigned __int64)v107.Length >> 1) - 1] = 59;
  RtlpSystem32Dirs = (__int128)v107;
  LdrpSystem32 = v107;
  LOWORD(v60) = v60 - 2;
  LdrpSystem32.Length = v60;
  if ( (*(_DWORD *)(*(_QWORD *)(ProcessEnvironmentBlock + 32) + 8LL) & 0x20000000) != 0 )
  {
    if ( v55 )
    {
      RtlAppendUnicodeStringToString(&v107, &Destination);
      RtlAppendUnicodeToString(&v107, L"forwarders\\alt;");
    }
    RtlAppendUnicodeStringToString(&v107, &Destination);
    RtlAppendUnicodeToString(&v107, L"forwarders;");
  }
  if ( v59 > Length )
  {
    RtlAppendUnicodeStringToString(&v107, &DestinationString);
    RtlAppendUnicodeToString(&v107, L"\\system;");
    RtlAppendUnicodeStringToString(&v107, &DestinationString);
    RtlAppendUnicodeToString(&v107, L";");
    RtlpSystemDirs = v107;
  }
  if ( (unsigned int)(LdrpIllegalCWDDevices - 1) <= 0xFFFFFFFD )
    LdrpCheckAppDirType((_UNICODE_STRING *)&ImagePathName, v60);
  v61 = BaseOfImage;
  RtlImageNtHeaderEx(3u, BaseOfImage, 0LL, &v125);
  ModuleEntry = LdrpAllocateModuleEntry(0LL);
  v63 = ModuleEntry;
  if ( !ModuleEntry )
  {
    v39 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) == 0 )
      goto LABEL_180;
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      4926,
      "LdrpInitializeProcess",
      0,
      "Allocating a data table entry for the system DLL failed\n");
    goto LABEL_179;
  }
  LdrpNtDllDataTableEntry = ModuleEntry;
  *(_DWORD *)(*((_QWORD *)ModuleEntry + 19) + 24LL) = -1;
  *(_WORD *)(**((_QWORD **)LdrpNtDllDataTableEntry + 19) - 52LL) = -1;
  v64 = (_UNICODE_STRING *)LdrpNtDllDataTableEntry;
  *((_DWORD *)LdrpNtDllDataTableEntry + 26) |= 0x204u;
  v64[15].Buffer = (wchar_t *)((char *)v64[15].Buffer - LdrSystemDllInitBlock.SystemDllNativeRelocation);
  v64 = (_UNICODE_STRING *)((char *)v64 + 72);
  *v64 = Destination;
  RtlAppendUnicodeStringToString(v64, &NtDllName);
  v65 = LdrpNtDllDataTableEntry;
  *(UNICODE_STRING *)((char *)LdrpNtDllDataTableEntry + 88) = NtDllName;
  v65[6] = v61;
  LdrpInsertDataTableEntry((__int64)v65);
  LdrpLogDllState(*((_QWORD *)LdrpNtDllDataTableEntry + 6), (__int64)LdrpNtDllDataTableEntry + 72, 0x14A5u);
  LdrpInsertModuleToIndex((__int64)LdrpNtDllDataTableEntry, (__int64)v125);
  inited = LdrpProcessMappedModule((__int64)LdrpNtDllDataTableEntry, 0, 1);
  ApplicationKeyOption = inited;
  if ( inited < 0 )
    return (unsigned int)inited;
  LdrpLogDllState(*((_QWORD *)LdrpNtDllDataTableEntry + 6), (__int64)LdrpNtDllDataTableEntry + 72, 0x14AEu);
  *(_DWORD *)(*((_QWORD *)LdrpNtDllDataTableEntry + 19) + 56LL) = 9;
  RtlInitializeHistoryTable();
  v66 = v63 + 32;
  v67 = qword_18016C4F0;
  if ( *(__int64 **)(qword_18016C4F0 + 8) != &qword_18016C4F0 )
    __fastfail(3u);
  *v66 = qword_18016C4F0;
  *((_QWORD *)v63 + 5) = &qword_18016C4F0;
  *(_QWORD *)(v67 + 8) = v66;
  qword_18016C4F0 = (__int64)(v63 + 32);
  inited = LdrpInitParallelLoadingSupport();
  ApplicationKeyOption = inited;
  if ( inited < 0 )
  {
    v24 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) == 0 )
      goto LABEL_316;
    v51 = "Failed to initialize Parallel loader, st = 0x%x\n";
    v52 = 5005;
LABEL_314:
    LODWORD(Callback) = inited;
    LdrpLogDbgPrint((unsigned int)"minkernel\\ntdll\\ldrinit.c", v52, "LdrpInitializeProcess", 0, v51, Callback);
    goto LABEL_315;
  }
  LdrpDrainWorkQueue(0);
  LdrpInitializeDllPath(0LL, 0LL, (const WCHAR **)Path);
  memset(v155, 0, sizeof(v155));
  *(_QWORD *)&v155[1] = Path;
  LODWORD(v155[2]) = 512;
  v155[0] = ImagePathName;
  *((_QWORD *)&v155[2] + 1) = &ApplicationKeyOption;
  v68 = LdrpAllocateModuleEntry((__int64)v155);
  v69 = v68;
  if ( !v68 )
  {
    v39 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) == 0 )
      goto LABEL_180;
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      5026,
      "LdrpInitializeProcess",
      0,
      "Allocating a data table entry for the executable failed\n");
    goto LABEL_179;
  }
  LdrpImageEntry = (__int64)v68;
  v70 = 2LL;
  do
  {
    *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 24LL) = -1;
    --v70;
  }
  while ( v70 );
  *(_WORD *)(**(_QWORD **)(LdrpImageEntry + 152) - 52LL) = -1;
  v71 = LdrpImageEntry;
  *(__m128i *)(LdrpImageEntry + 72) = ImagePathName;
  *(_DWORD *)(v71 + 104) |= 4u;
  v72 = *(_DWORD *)(v71 + 104);
  if ( (NtCurrentPeb()->BitField & 0x10) != 0 )
  {
    v72 |= 1u;
    *(_DWORD *)(v71 + 104) = v72;
  }
  v73 = v103;
  if ( UseCOR )
  {
    v74 = v72 | 0x400000;
    *(_DWORD *)(v71 + 104) = v74;
    if ( v73 )
      *(_DWORD *)(v71 + 104) = v74 | 0x1000000;
  }
  v75 = LdrpImageEntry;
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 4) != 0 )
    *(_QWORD *)(LdrpImageEntry + 248) = 0LL;
  v76 = 0LL;
  v77 = (wchar_t *)(ImagePathName.m128i_i64[1] + ImagePathName.m128i_u16[0]);
  v78 = v77;
  if ( v77 && (unsigned __int64)v77 > ImagePathName.m128i_i64[1] )
  {
    while ( 1 )
    {
      v79 = v78--;
      if ( *v78 == 92 )
        break;
      if ( (unsigned __int64)v78 <= ImagePathName.m128i_i64[1] )
        goto LABEL_197;
    }
    v76 = v79;
  }
LABEL_197:
  if ( v76 )
  {
    v80 = (_WORD)v77 - (_WORD)v76;
    *(_WORD *)(v75 + 88) = v80;
    if ( ImagePathName.m128i_u16[1] - (unsigned __int64)ImagePathName.m128i_u16[0] >= 2 )
      v80 += 2;
    *(_WORD *)(v75 + 90) = v80;
    *(_QWORD *)(v75 + 96) = v76;
  }
  else
  {
    *(_OWORD *)(v75 + 88) = *(_OWORD *)(v69 + 72);
  }
  v81 = *(void **)(ProcessEnvironmentBlock + 16);
  v82 = v81;
  v83 = OutHeaders;
  if ( (void *)OutHeaders->OptionalHeader.ImageBase != v81 && !v73 && !UseWOW64 )
  {
    inited = LdrpProtectAndRelocateImage(v81);
    ApplicationKeyOption = inited;
    if ( inited < 0 )
      return (unsigned int)inited;
    v82 = *(void **)(ProcessEnvironmentBlock + 16);
    v75 = LdrpImageEntry;
  }
  *(_QWORD *)(v75 + 48) = v82;
  LdrpInsertDataTableEntry(v75);
  if ( (LdrpDebugFlags & 5) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      5149,
      "LdrpInitializeProcess",
      2,
      "Beginning execution of %wZ (%wZ)\n\tCurrent directory: %wZ\n\tPackage directories: %wZ\n",
      LdrpImageEntry + 88,
      LdrpImageEntry + 72,
      &UnicodeString,
      &LdrpAppPackagesPath);
  LdrpLogDllState(*(_QWORD *)(LdrpImageEntry + 48), LdrpImageEntry + 72, 0x14A5u);
  LdrpInsertModuleToIndex(LdrpImageEntry, (__int64)v83);
  inited = LdrpProcessMappedModule(LdrpImageEntry, 0, UseWOW64 == 0);
  ApplicationKeyOption = inited;
  if ( inited < 0 )
    return (unsigned int)inited;
  *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 56LL) = 9;
  v84 = RtlpInitCurrentDir(&UnicodeString.Length);
  ApplicationKeyOption = v84;
  if ( v84 < 0 )
  {
    v85 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LODWORD(v100) = v84;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        5186,
        "LdrpInitializeProcess",
        0,
        "Initializing the current directory to \"%wZ\" failed with status 0x%08lx\n",
        &UnicodeString,
        v100);
      v85 = LdrpDebugFlags;
    }
    if ( (v85 & 0x10) != 0 )
      __debugbreak();
  }
  if ( !v111 )
    RtlFreeAnsiString(&UnicodeString);
  if ( AvrfAppVerifierMode )
  {
    v86 = LdrpAllocateModuleEntry(0LL);
    v87 = (__int64)v86;
    if ( !v86 )
    {
      v39 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) == 0 )
      {
LABEL_180:
        if ( (v39 & 0x10) != 0 )
          __debugbreak();
        return 3221225495LL;
      }
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        5209,
        "LdrpInitializeProcess",
        0,
        "Allocating a data table entry for the application verifier DLL failed\n");
LABEL_179:
      v39 = LdrpDebugFlags;
      goto LABEL_180;
    }
    *(_DWORD *)(*((_QWORD *)v86 + 19) + 24LL) = -1;
    *(_WORD *)(**((_QWORD **)v86 + 19) - 52LL) = -1;
    v88 = v140;
    *((_DWORD *)v86 + 26) |= *(_DWORD *)(v140 + 104);
    *((_QWORD *)v86 + 31) = *(_QWORD *)(v88 + 248);
    *((_WORD *)v86 + 55) = 0;
    *(_OWORD *)(v86 + 72) = *(_OWORD *)(v88 + 72);
    *(_OWORD *)(v86 + 88) = *(_OWORD *)(v88 + 88);
    *((_DWORD *)v86 + 32) = *(_DWORD *)(v88 + 128);
    *((_QWORD *)v86 + 6) = *(_QWORD *)(v88 + 48);
    LdrpInsertDataTableEntry((__int64)v86);
    LdrpLogDllState(*(_QWORD *)(v87 + 48), v87 + 72, 0x14A5u);
    inited = RtlImageNtHeaderEx(3u, *(PVOID *)(v87 + 48), 0LL, &v125);
    ApplicationKeyOption = inited;
    if ( inited < 0 )
      return (unsigned int)inited;
    LdrpInsertModuleToIndex(v87, (__int64)v125);
    inited = LdrpProcessMappedModule(v87, 0, 1);
    ApplicationKeyOption = inited;
    if ( inited < 0 )
      return (unsigned int)inited;
    *(_QWORD *)(v87 + 56) = *(_QWORD *)(v88 + 56);
    LdrpLogDllState(*(_QWORD *)(v87 + 48), v87 + 72, 0x14ADu);
    *(_DWORD *)(*(_QWORD *)(v87 + 152) + 56LL) = 7;
    if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x100) != 0 || (AvrfAppVerifierMode & 2) != 0 )
    {
      inited = AVrfInitializeVerifier(0, 0, 0, 1, (__int64)BaseOfImage, 0LL);
      ApplicationKeyOption = inited;
      if ( inited >= 0 && (AvrfAppVerifierMode & 2) != 0 )
      {
        *(_DWORD *)(*(_QWORD *)(v87 + 152) + 56LL) = 9;
        inited = ApplicationKeyOption;
      }
    }
    else
    {
      v104 = 0;
      inited = LdrpInitializeGraphRecurse(*(__int64 **)(v87 + 152), 0LL, &v104);
      ApplicationKeyOption = inited;
    }
    if ( inited < 0 )
      return (unsigned int)inited;
    v83 = OutHeaders;
  }
  LdrpDropLastInProgressCount();
  if ( UseWOW64 )
  {
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
    if ( v113 )
    {
      NtClose(v113);
      v113 = 0LL;
    }
    inited = LdrpLoadWow64(&Destination);
    ApplicationKeyOption = inited;
    if ( inited < 0 )
      return (unsigned int)inited;
    if ( *(_BYTE *)(ProcessEnvironmentBlock + 2) )
      LdrpDoDebuggerBreak();
    LdrInitState = 3;
    _interlockedbittestandreset((volatile signed __int32 *)(ProcessEnvironmentBlock + 80), 1u);
    g_LdrpWow64LdrpInitialize(v127);
    goto LABEL_325;
  }
  v132 = 0LL;
  if ( UseCOR )
  {
    inited = LdrpCorInitialize((PVOID *)&v132);
    ApplicationKeyOption = inited;
    if ( inited < 0 )
      return (unsigned int)inited;
    v89 = v103;
    if ( (_BYTE)v103 )
    {
      inited = LdrpCorValidateImage(*(_QWORD *)(ProcessEnvironmentBlock + 16));
      ApplicationKeyOption = inited;
      if ( inited < 0 )
        return (unsigned int)inited;
    }
    if ( (v112->SameTebFlags & 0x400) != 0 )
      *(_QWORD *)(v127 + 128) = __ROR8__(LdrpCorExeMainRoutine, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330];
  }
  else
  {
    v89 = v103;
  }
  inited = LdrpInitializeTls();
  ApplicationKeyOption = inited;
  if ( inited < 0 )
  {
    v24 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) == 0 )
      goto LABEL_316;
    v51 = "Initializing TLS slots failed with status 0x%08lx\n";
    v52 = 5436;
    goto LABEL_314;
  }
  if ( v132 )
  {
    v105 = 0;
    inited = LdrpInitializeGraphRecurse(v132[19], 0LL, &v105);
    ApplicationKeyOption = inited;
    if ( inited < 0 )
    {
      v24 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) == 0 )
        goto LABEL_316;
      v51 = "DllMain of MSCOREE (or its dependents) failed with status 0x%08lx\n";
      v52 = 5455;
      goto LABEL_314;
    }
  }
  inited = LdrpInitializeImportRedirection();
  ApplicationKeyOption = inited;
  if ( inited < 0 )
  {
    v24 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) == 0 )
      goto LABEL_316;
    v51 = "Loading of import redirection module failed with status 0x%08x\n";
    v52 = 5471;
    goto LABEL_314;
  }
  ProcedureAddress = 0LL;
  if ( (unsigned __int16)(v83->OptionalHeader.Subsystem - 2) <= 1u )
  {
    inited = LdrLoadDll((PWSTR)0x4001, 0LL, (PUNICODE_STRING)&LdrpKernel32DllName, &DllHandle);
    ApplicationKeyOption = inited;
    if ( inited < 0 )
    {
      if ( inited != -1073741515 )
      {
        v24 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) == 0 )
          goto LABEL_316;
        LODWORD(v100) = inited;
        Callbacka = &LdrpKernel32DllName;
        v47 = "Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n";
        v48 = 5629;
        goto LABEL_274;
      }
      inited = LdrLoadDll((PWSTR)0x4001, 0LL, (PUNICODE_STRING)&LdrpKernelbaseDllName, &DllHandle);
      ApplicationKeyOption = inited;
      if ( inited < 0 )
      {
        v24 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) == 0 )
          goto LABEL_316;
        v47 = "Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n";
        v48 = 5602;
        goto LABEL_273;
      }
      inited = LdrpCodeAuthzInitialize();
      ApplicationKeyOption = inited;
      if ( (int)(inited + 0x80000000) >= 0 && inited != -1073741515 )
      {
        v24 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) == 0 )
          goto LABEL_316;
        v51 = "LdrpCodeAuthzInitialize failed with status 0x%08lx\n";
        v52 = 5618;
        goto LABEL_314;
      }
      ApplicationKeyOption = 0;
      v90 = DllHandle;
    }
    else
    {
      inited = LdrGetProcedureAddressForCaller(
                 DllHandle,
                 (PANSI_STRING)&stru_18011DB00,
                 0,
                 &Kernel32ThreadInitThunkFunction,
                 0,
                 retaddr);
      ApplicationKeyOption = inited;
      if ( inited < 0 )
      {
        v24 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) == 0 )
          goto LABEL_316;
        LODWORD(v101) = inited;
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          5516,
          "LdrpInitializeProcess",
          0,
          "Locating procedure \"%Z\" in Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
          &stru_18011DB00,
          &LdrpKernel32DllName,
          v101);
        goto LABEL_315;
      }
      LdrGetProcedureAddressForCaller(DllHandle, (PANSI_STRING)&stru_18011DB10, 0, &ProcedureAddress, 0, retaddr);
      inited = LdrpSnapKernelBaseExtensions();
      ApplicationKeyOption = inited;
      if ( inited < 0 )
        return (unsigned int)inited;
      inited = LdrpCodeAuthzInitialize();
      ApplicationKeyOption = inited;
      if ( inited < 0 )
        return (unsigned int)inited;
      inited = LdrpFindLoadedDll(&LdrpKernelbaseDllName.Length, 0LL, (PVOID *)&v141);
      ApplicationKeyOption = inited;
      if ( inited < 0 )
      {
        v24 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) == 0 )
          goto LABEL_316;
        v47 = "Finding \"%wZ\" failed with status 0x%08lx\n";
        v48 = 5584;
LABEL_273:
        LODWORD(v100) = inited;
        Callbacka = &LdrpKernelbaseDllName;
LABEL_274:
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          v48,
          "LdrpInitializeProcess",
          0,
          v47,
          Callbacka,
          v100);
LABEL_315:
        inited = ApplicationKeyOption;
        v24 = LdrpDebugFlags;
LABEL_316:
        if ( (v24 & 0x10) != 0 )
          __debugbreak();
        return (unsigned int)inited;
      }
      v90 = (PVOID)v141[6];
    }
    ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(
                                  v90,
                                  (PANSI_STRING)&stru_18011DB30,
                                  0,
                                  &v142,
                                  0,
                                  retaddr);
    inited = ProcedureAddressForCaller;
    ApplicationKeyOption = ProcedureAddressForCaller;
    if ( ProcedureAddressForCaller < 0 )
    {
      v24 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) == 0 )
        goto LABEL_316;
      v51 = "Finding KernelbasePostInit failed with status 0x%08lx\n";
      v52 = 5647;
      goto LABEL_314;
    }
    inited = ((__int64 (__fastcall *)(_QWORD))v142)((unsigned int)ProcedureAddressForCaller);
    ApplicationKeyOption = inited;
    if ( inited < 0 )
    {
      v24 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) == 0 )
        goto LABEL_316;
      v51 = "Calling KernelbasePostInit failed with status 0x%08lx\n";
      v52 = 5655;
      goto LABEL_314;
    }
    ApplicationKeyOption = 0;
  }
  LdrpDrainWorkQueue(0);
  SbObtainTraceHandle(0LL);
  v92 = v133;
  if ( v133 && *(_DWORD *)(v133 + 528) )
  {
    *(_QWORD *)(ProcessEnvironmentBlock + 736) = 0LL;
    LdrpInitShimEngine(v92);
  }
  v93 = RtlpForceCSDebugInfoCreation;
  if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x400000) != 0 )
    v93 = 1;
  RtlpForceCSDebugInfoCreation = v93;
  if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x10000000) != 0 )
  {
    v108->LoaderThreads = 1;
    LoaderThreads = 1;
  }
  else
  {
    LoaderThreads = v108->LoaderThreads;
  }
  LdrpEnableParallelLoading(LoaderThreads);
  LdrInitState = 1;
  *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 56LL) = 2;
  **((_DWORD **)&v155[2] + 1) = 0;
  if ( v89 )
  {
    v95 = LdrpCorProcessImports(LdrpImageEntry);
  }
  else
  {
    LODWORD(v155[2]) |= 1u;
    LdrpMapAndSnapDependency((__int64)v155);
    LdrpDrainWorkQueue(1);
    inited = ApplicationKeyOption;
    if ( ApplicationKeyOption < 0 )
    {
LABEL_302:
      v24 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) == 0 )
        goto LABEL_316;
      v51 = "Walking the import tables of the executable and its static imports failed with status 0x%08lx\n";
      v52 = 5867;
      goto LABEL_314;
    }
    v95 = LdrpPrepareModuleForExecution(LdrpImageEntry, *((__int64 *)&v155[2] + 1));
  }
  ApplicationKeyOption = v95;
  inited = v95;
  if ( v95 < 0 )
    goto LABEL_302;
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
  LdrpProcessInitContextRecord = v127;
  LdrpDrainWorkQueue(0);
  LdrpAcquireLoaderLock();
  v106[0] = 0;
  ApplicationKeyOption = LdrpInitializeGraphRecurse(
                           *(__int64 **)(LdrpImageEntry + 152),
                           *((__int64 *)&v155[2] + 1),
                           v106);
  LdrpReleaseLoaderLock(v96, 9, ApplicationKeyOption);
  LdrpFreeLoadContextOfNode(*(_QWORD **)(LdrpImageEntry + 152), *((__int64 *)&v155[2] + 1));
  LdrpDropLastInProgressCount();
  LdrpProcessInitContextRecord = 0LL;
  if ( v157 )
    RtlReleasePath(Path[0]);
  inited = ApplicationKeyOption;
  if ( ApplicationKeyOption < 0 )
  {
    v24 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) == 0 )
      goto LABEL_316;
    v51 = "Running the init routines of the executable's static imports failed with status 0x%08lx\n";
    v52 = 6009;
    goto LABEL_314;
  }
  if ( *(_WORD *)(LdrpImageEntry + 110) )
  {
    v146 = 72LL;
    v147 = 1;
    v148 = 0LL;
    v149 = 0LL;
    v150 = 0LL;
    v151 = 0LL;
    RtlActivateActivationContextUnsafeFast((__int64)&v146, *(_QWORD *)(LdrpImageEntry + 136));
    LdrpCallTlsInitializers(1u, LdrpImageEntry);
    RtlDeactivateActivationContextUnsafeFast((__int64)&v146);
  }
  if ( g_ShimsEnabled
    && !((unsigned __int8 (__fastcall *)(unsigned __int16 *, __int64))(__ROR8__(
                                                                         g_pfnSE_InstallAfterInit,
                                                                         64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))(
          &v116,
          v92) )
  {
    g_ShimsEnabled = 0;
    LdrUnloadDll(g_pShimEngineModule);
    g_pShimEngineModule = 0LL;
  }
  v97 = *(void (**)(void))(ProcessEnvironmentBlock + 560);
  if ( v97 )
    v97();
LABEL_325:
  if ( Handle )
    NtClose(Handle);
  if ( v113 )
    NtClose(v113);
  return 0LL;
}
