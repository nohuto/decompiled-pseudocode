/*
 * XREFs of LdrpInitializeProcess @ 0x1800D1D20
 * Callers:
 *     _LdrpInitialize @ 0x180074B8C (_LdrpInitialize.c)
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
 *     LdrpPrepareModuleForExecution @ 0x18003D878 (LdrpPrepareModuleForExecution.c)
 *     LdrpReleaseLoaderLock @ 0x18003E654 (LdrpReleaseLoaderLock.c)
 *     LdrpAcquireLoaderLock @ 0x18003E6B4 (LdrpAcquireLoaderLock.c)
 *     EtwEventRegister @ 0x180042E70 (EtwEventRegister.c)
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x180045A8C (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 *     LdrpInitializeTls @ 0x1800473D8 (LdrpInitializeTls.c)
 *     RtlSetBits @ 0x180048990 (RtlSetBits.c)
 *     RtlpInitEnvironmentBlock @ 0x18004DC98 (RtlpInitEnvironmentBlock.c)
 *     LdrpDropLastInProgressCount @ 0x18005D92C (LdrpDropLastInProgressCount.c)
 *     RtlpInitCurrentDir @ 0x18005E6B8 (RtlpInitCurrentDir.c)
 *     LdrpDrainWorkQueue @ 0x18005E8F4 (LdrpDrainWorkQueue.c)
 *     LdrpEnableParallelLoading @ 0x180061518 (LdrpEnableParallelLoading.c)
 *     LdrpFreeLoadContextOfNode @ 0x180066540 (LdrpFreeLoadContextOfNode.c)
 *     LdrpAllocateModuleEntry @ 0x18006B340 (LdrpAllocateModuleEntry.c)
 *     LdrpInitShimEngine @ 0x18006B63C (LdrpInitShimEngine.c)
 *     LdrpInitializeGraphRecurse @ 0x18006BF38 (LdrpInitializeGraphRecurse.c)
 *     RtlpInitializeThreadActivationContextStack @ 0x1800708D8 (RtlpInitializeThreadActivationContextStack.c)
 *     RtlSetHeapInformation @ 0x180073CB0 (RtlSetHeapInformation.c)
 *     RtlInitializeHistoryTable @ 0x180078B5C (RtlInitializeHistoryTable.c)
 *     RtlQueryApplicationKeyOption @ 0x18007A228 (RtlQueryApplicationKeyOption.c)
 *     RtlQueryImageFileExecutionOptions @ 0x18007A300 (RtlQueryImageFileExecutionOptions.c)
 *     LdrpCodeAuthzInitialize @ 0x18007B240 (LdrpCodeAuthzInitialize.c)
 *     TpInitializePackage @ 0x18007CF2C (TpInitializePackage.c)
 *     RtlCreateTagHeap @ 0x18007CFD0 (RtlCreateTagHeap.c)
 *     RtlpInitParameterBlock @ 0x18007D188 (RtlpInitParameterBlock.c)
 *     LdrpInitParallelLoadingSupport @ 0x18007E050 (LdrpInitParallelLoadingSupport.c)
 *     SbObtainTraceHandle @ 0x18007E884 (SbObtainTraceHandle.c)
 *     LdrpInitializePolicy @ 0x18007FA28 (LdrpInitializePolicy.c)
 *     LdrpInsertModuleToIndex @ 0x18007FD40 (LdrpInsertModuleToIndex.c)
 *     LdrpInitializeImportRedirection @ 0x180081AF4 (LdrpInitializeImportRedirection.c)
 *     LdrpInitializePerUserWindowsDirectory @ 0x1800825E4 (LdrpInitializePerUserWindowsDirectory.c)
 *     LdrpCorInitialize @ 0x180082AB4 (LdrpCorInitialize.c)
 *     LdrpProtectAndRelocateImage @ 0x180082DCC (LdrpProtectAndRelocateImage.c)
 *     LdrpLoadWow64 @ 0x180083014 (LdrpLoadWow64.c)
 *     LdrpCorProcessImports @ 0x180084854 (LdrpCorProcessImports.c)
 *     LdrpCorValidateImage @ 0x180085014 (LdrpCorValidateImage.c)
 *     RtlNormalizeProcessParams @ 0x180088C10 (RtlNormalizeProcessParams.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     NtClose @ 0x18009CFF0 (NtClose.c)
 *     NtQueryInformationProcess @ 0x18009D130 (NtQueryInformationProcess.c)
 *     NtQuerySystemInformation @ 0x18009D4D0 (NtQuerySystemInformation.c)
 *     ZwOpenDirectoryObject @ 0x18009D910 (ZwOpenDirectoryObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x18009F3A0 (ZwOpenSymbolicLinkObject.c)
 *     NtQuerySymbolicLinkObject @ 0x18009F9C0 (NtQuerySymbolicLinkObject.c)
 *     ZwSetInformationVirtualMemory @ 0x1800A01C0 (ZwSetInformationVirtualMemory.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08F0 (_guard_dispatch_icall_nop.c)
 *     InterlockedPushListSList @ 0x1800A0A50 (InterlockedPushListSList.c)
 *     memset @ 0x1800A3EC0 (memset.c)
 *     LdrpLogDbgPrint @ 0x1800CDAE8 (LdrpLogDbgPrint.c)
 *     LdrpCorFixupImage @ 0x1800CE698 (LdrpCorFixupImage.c)
 *     LdrpCheckAppDirType @ 0x1800D051C (LdrpCheckAppDirType.c)
 *     LdrpDoDebuggerBreak @ 0x1800D0740 (LdrpDoDebuggerBreak.c)
 *     LdrpInitializeExecutionOptions @ 0x1800D0EEC (LdrpInitializeExecutionOptions.c)
 *     LdrpInitializeNlsInfo @ 0x1800D1CE0 (LdrpInitializeNlsInfo.c)
 *     LdrpInitializeProcessHeap @ 0x1800D3EBC (LdrpInitializeProcessHeap.c)
 *     LdrpCaptureCriticalThunks @ 0x1800D4944 (LdrpCaptureCriticalThunks.c)
 *     LdrpIsNlsUtf8Process @ 0x1800D4AC0 (LdrpIsNlsUtf8Process.c)
 *     AVrfInitializeVerifier @ 0x1800D97F8 (AVrfInitializeVerifier.c)
 *     RtlCreateInvertedFunctionTableCacheEntry @ 0x1800E09A4 (RtlCreateInvertedFunctionTableCacheEntry.c)
 *     RtlInitializeHeapManager @ 0x1800F22F4 (RtlInitializeHeapManager.c)
 *     RtlpInitializeNonVolatileFlush @ 0x1800FBA84 (RtlpInitializeNonVolatileFlush.c)
 *     RtlInitializeExceptionLog @ 0x180100568 (RtlInitializeExceptionLog.c)
 *     RtlControlStackTraceDataBase @ 0x180100D18 (RtlControlStackTraceDataBase.c)
 *     RtlRaiseStatus @ 0x180102310 (RtlRaiseStatus.c)
 *     TpSetDefaultPoolCpuSets @ 0x1801119A8 (TpSetDefaultPoolCpuSets.c)
 */

__int64 __fastcall LdrpInitializeProcess(__int64 a1, void *a2)
{
  __int64 v3; // rax
  int v4; // eax
  struct _TEB *v5; // rsi
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
  char v16; // al
  unsigned int i; // ecx
  _QWORD *v19; // rax
  unsigned __int64 v20; // rax
  bool v21; // zf
  char v22; // al
  int v23; // ebx
  int inited; // ecx
  char v25; // al
  int WowTebOffset; // ecx
  NTSTATUS v27; // eax
  __int64 v28; // rcx
  PRTL_USER_PROCESS_PARAMETERS v29; // r13
  unsigned int *Config; // r15
  unsigned int v31; // eax
  char v32; // al
  _QWORD *v33; // rcx
  int v34; // ecx
  char v35; // al
  unsigned int v36; // eax
  int v37; // ecx
  __int64 v38; // rax
  void *v39; // r12
  char v40; // al
  __int64 v41; // rcx
  int DefaultThreadpoolThreadMaximum; // r15d
  __int64 v43; // r13
  const WCHAR *NtSystemRoot; // rax
  unsigned __int16 v45; // r15
  wchar_t *Heap; // rax
  SIZE_T v47; // r15
  wchar_t *v48; // r13
  NTSTATUS v49; // eax
  char *v50; // rax
  int v51; // edx
  __m128i v52; // xmm0
  wchar_t *v53; // xmm0_8
  bool v54; // r13
  wchar_t *v55; // r15
  PWSTR v56; // rax
  unsigned __int64 Length; // r15
  SIZE_T v58; // r12
  __int64 v59; // rdx
  PVOID v60; // r12
  char *ModuleEntry; // rax
  char *v62; // r15
  _UNICODE_STRING *v63; // rcx
  _QWORD *v64; // rcx
  _QWORD *v65; // rax
  __int64 v66; // rdx
  char *v67; // rax
  char *v68; // r11
  __int64 v69; // rdx
  __int64 v70; // rdx
  int v71; // ecx
  char v72; // r12
  int v73; // ecx
  __int64 v74; // rdx
  wchar_t *v75; // r9
  wchar_t *v76; // rax
  wchar_t *v77; // rcx
  __int16 v78; // r8
  void *v79; // rcx
  void *v80; // rax
  PIMAGE_NT_HEADERS v81; // r15
  int v82; // eax
  char v83; // cl
  char *v84; // rax
  __int64 v85; // r15
  __int64 v86; // r13
  char v87; // r13
  PVOID v88; // rcx
  NTSTATUS ProcedureAddressForCaller; // eax
  __int64 v90; // r15
  char v91; // al
  unsigned int v92; // ecx
  int v93; // eax
  __int64 v94; // rcx
  void (*v95)(void); // rax
  PVOID *Callback; // [rsp+28h] [rbp-400h]
  __int64 v97; // [rsp+30h] [rbp-3F8h]
  __int64 v98; // [rsp+38h] [rbp-3F0h]
  int ApplicationKeyOption; // [rsp+50h] [rbp-3D8h] BYREF
  int v100; // [rsp+54h] [rbp-3D4h]
  char v101; // [rsp+58h] [rbp-3D0h] BYREF
  char v102; // [rsp+59h] [rbp-3CFh] BYREF
  _BYTE v103[6]; // [rsp+5Ah] [rbp-3CEh] BYREF
  _UNICODE_STRING v104; // [rsp+60h] [rbp-3C8h] BYREF
  int v105; // [rsp+70h] [rbp-3B8h] BYREF
  int v106; // [rsp+74h] [rbp-3B4h] BYREF
  int v107; // [rsp+78h] [rbp-3B0h]
  HANDLE v108; // [rsp+80h] [rbp-3A8h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+90h] [rbp-398h] BYREF
  _UNICODE_STRING Destination; // [rsp+A0h] [rbp-388h] BYREF
  unsigned __int16 v111; // [rsp+B0h] [rbp-378h] BYREF
  __int16 v112; // [rsp+B2h] [rbp-376h]
  unsigned __int64 v113; // [rsp+B8h] [rbp-370h]
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+C0h] [rbp-368h] BYREF
  PVOID DllHandle; // [rsp+C8h] [rbp-360h] BYREF
  __int64 v116; // [rsp+D0h] [rbp-358h]
  HANDLE Handle; // [rsp+D8h] [rbp-350h] BYREF
  unsigned int v118; // [rsp+E0h] [rbp-348h] BYREF
  ULONG ReturnedLength; // [rsp+E4h] [rbp-344h] BYREF
  int VmInformation; // [rsp+E8h] [rbp-340h] BYREF
  PIMAGE_NT_HEADERS v121; // [rsp+F0h] [rbp-338h] BYREF
  struct _TEB *v122; // [rsp+F8h] [rbp-330h]
  __int64 v123; // [rsp+100h] [rbp-328h]
  __m128i v124; // [rsp+108h] [rbp-320h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+120h] [rbp-308h] BYREF
  PVOID ProcedureAddress; // [rsp+130h] [rbp-2F8h] BYREF
  __int64 v127; // [rsp+138h] [rbp-2F0h] BYREF
  HANDLE LinkHandle; // [rsp+140h] [rbp-2E8h] BYREF
  PVOID BaseOfImage; // [rsp+148h] [rbp-2E0h]
  __int64 **v130; // [rsp+150h] [rbp-2D8h] BYREF
  __int64 v131; // [rsp+158h] [rbp-2D0h]
  int v132; // [rsp+160h] [rbp-2C8h] BYREF
  const WCHAR *v133; // [rsp+168h] [rbp-2C0h]
  unsigned int v134; // [rsp+170h] [rbp-2B8h] BYREF
  PIMAGE_NT_HEADERS v135; // [rsp+178h] [rbp-2B0h] BYREF
  __int64 SystemInformation; // [rsp+180h] [rbp-2A8h] BYREF
  __int64 v137; // [rsp+188h] [rbp-2A0h] BYREF
  _QWORD *v138; // [rsp+190h] [rbp-298h] BYREF
  PVOID v139; // [rsp+198h] [rbp-290h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+1A0h] [rbp-288h] BYREF
  _MEMORY_RANGE_ENTRY VirtualAddresses; // [rsp+1D0h] [rbp-258h] BYREF
  _QWORD v142[4]; // [rsp+1E0h] [rbp-248h] BYREF
  __int64 v143; // [rsp+200h] [rbp-228h] BYREF
  int v144; // [rsp+208h] [rbp-220h]
  __int128 v145; // [rsp+210h] [rbp-218h]
  __int128 v146; // [rsp+220h] [rbp-208h]
  __int128 v147; // [rsp+230h] [rbp-1F8h]
  __int64 v148; // [rsp+240h] [rbp-1E8h]
  PS_MITIGATION_OPTIONS_MAP MitigationOptionsMap; // [rsp+250h] [rbp-1D8h]
  PS_MITIGATION_OPTIONS_MAP v150; // [rsp+270h] [rbp-1B8h]
  PS_MITIGATION_OPTIONS_MAP v151; // [rsp+290h] [rbp-198h]
  _OWORD v152[12]; // [rsp+2B0h] [rbp-178h] BYREF
  PWSTR Path[15]; // [rsp+370h] [rbp-B8h] BYREF
  char v154; // [rsp+3ECh] [rbp-3Ch]
  PVOID *retaddr; // [rsp+428h] [rbp+0h]

  BaseOfImage = a2;
  v123 = a1;
  v132 = 1441812;
  v133 = L"\\KnownDlls";
  v3 = (unsigned int)`RtlpGetCookieValue'::`2'::CookieValue;
  if ( !`RtlpGetCookieValue'::`2'::CookieValue )
  {
    v4 = NtQueryInformationProcess(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           (PROCESSINFOCLASS)(`RtlpGetCookieValue'::`2'::CookieValue + 36),
           &v118,
           4u,
           0LL);
    if ( v4 < 0 )
      RtlRaiseStatus(v4);
    v3 = v118;
    `RtlpGetCookieValue'::`2'::CookieValue = v118;
  }
  RtlpUnhandledExceptionFilter = __ROR8__(v3, v3 & 0x3F);
  v5 = NtCurrentTeb();
  v122 = v5;
  ProcessEnvironmentBlock = (__int64)v5->ProcessEnvironmentBlock;
  PebLdr = 88;
  byte_18016A4C4 = 1;
  qword_18016A4D8 = (__int64)&qword_18016A4D0;
  qword_18016A4D0 = (__int64)&qword_18016A4D0;
  qword_18016A4E8 = (__int64)&qword_18016A4E0;
  qword_18016A4E0 = (__int64)&qword_18016A4E0;
  qword_18016A4F8 = (__int64)&qword_18016A4F0;
  qword_18016A4F0 = (__int64)&qword_18016A4F0;
  byte_18016A508 = 0;
  qword_18016A510 = 0LL;
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
  memset(&unk_180168B60, 0, 0xA0uLL);
  memset(qword_180168B48, 0, 0xA8uLL);
  RunOnce.Value = 0LL;
  SRWLock.0 = 0LL;
  qword_180168C20 = (__int64)&qword_180168C18;
  qword_180168C18 = (__int64)&qword_180168C18;
  RtlpInitializeNonVolatileFlush();
  v12 = *(_QWORD *)(ProcessEnvironmentBlock + 32);
  v13 = (_WORD *)(*(_QWORD *)(v12 + 104) + v12);
  if ( (*(_BYTE *)(v12 + 8) & 1) != 0 )
    v13 = *(_WORD **)(v12 + 104);
  v113 = (unsigned __int64)v13;
  v111 = *(_WORD *)(v12 + 96);
  v14 = v111;
  v112 = v111 + 2;
  if ( v111 >= 8u && *v13 == 92 && v13[1] == 63 && v13[2] == 63 && v13[3] == 92 )
  {
    v111 -= 8;
    v112 = v14 - 6;
    v113 = (unsigned __int64)(v13 + 4);
    *(_WORD *)(v12 + 96) -= 8;
    *(_WORD *)(v12 + 98) -= 8;
    *(_QWORD *)(v12 + 104) += 8LL;
  }
  v107 = 1;
  UseCOR = 0;
  LOBYTE(v100) = 0;
  v106 = 0;
  RtlImageNtHeaderEx(3u, *(PVOID *)(ProcessEnvironmentBlock + 16), 0LL, &OutHeaders);
  v15 = OutHeaders;
  LdrpAppHeaders = (__int64)OutHeaders;
  if ( LdrpIsSecureProcess && (OutHeaders->FileHeader.Characteristics & 0x20) == 0 )
  {
    v16 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        3817,
        "LdrpInitializeProcess",
        0,
        "Secure processes must be large address aware\n");
      v16 = LdrpDebugFlags;
    }
    if ( (v16 & 0x10) != 0 )
      __debugbreak();
    return 3221225659LL;
  }
  for ( i = 0; i < 0x20; ++i )
  {
    v19 = (_QWORD *)((char *)&LdrpHashTable + 16 * i);
    v19[1] = v19;
    *v19 = v19;
  }
  RtlImageNtHeaderEx(3u, a2, 0LL, &v135);
  RtlInsertInvertedFunctionTable((__int64)a2, v135->OptionalHeader.SizeOfImage);
  RtlCreateInvertedFunctionTableCacheEntry(a2);
  LdrpCaptureCriticalThunks();
  LdrProtectMrdata(1);
  if ( LdrControlFlowGuardEnforcedWithExportSuppression() )
    LdrpSuppressedExportOverrideListPtr = (__int64)&LdrpSuppressedExportOverrideList;
  MitigationOptionsMap = LdrSystemDllInitBlock.MitigationOptionsMap;
  v20 = (_mm_srli_si128(*(__m128i *)LdrSystemDllInitBlock.MitigationOptionsMap.Map, 8).m128i_u64[0] >> 4) & 3;
  LdrpEnforceIntegrityContinuity = (_BYTE)v20 == 1;
  if ( (_BYTE)v20 == 1 || (v150 = LdrSystemDllInitBlock.MitigationOptionsMap, v21 = (_BYTE)v20 == 3, v22 = 0, v21) )
    v22 = 1;
  LdrpAuditIntegrityContinuity = v22;
  v23 = 0;
  inited = LdrpInitializeExecutionOptions(&v111, ProcessEnvironmentBlock, (__int64)a2, &Handle, &v108, (__int64)&v137);
  ApplicationKeyOption = inited;
  if ( inited < 0 )
  {
    v25 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        3963,
        "LdrpInitializeProcess",
        0,
        "Initializing the execution options for the process %lx failed with status 0x%08lx\n",
        LODWORD(v5->ClientId.UniqueProcess),
        inited);
      inited = ApplicationKeyOption;
      v25 = LdrpDebugFlags;
    }
    goto LABEL_300;
  }
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 188) & 2) != 0 )
    LdrpDebugFlags |= 1u;
  if ( (LdrpDebugFlags & 5) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      4010,
      "LdrpInitializeProcess",
      2,
      "Initializing process 0x%p\n",
      v5->ClientId.UniqueProcess);
  v131 = 0LL;
  WowTebOffset = v122->WowTebOffset;
  UseWOW64 = WowTebOffset > 0;
  if ( v15 && v15->OptionalHeader.Magic == 267 && WowTebOffset <= 0 )
  {
    UseCOR = 1;
    LOBYTE(v15) = 1;
    v100 = (int)v15;
    v23 = 1;
    inited = LdrpCorFixupImage(*(void **)(ProcessEnvironmentBlock + 16));
    ApplicationKeyOption = inited;
    if ( inited < 0 )
      return (unsigned int)inited;
  }
  else
  {
    LOBYTE(v15) = v100;
  }
  if ( !UseWOW64 && !UseCOR )
  {
    v27 = RtlpImageDirectoryEntryToDataEx(*(_QWORD *)(ProcessEnvironmentBlock + 16), 1, 0xEu, &v134, (char **)&v127);
    v28 = v127;
    if ( v27 < 0 )
      v28 = 0LL;
    v127 = v28;
    if ( v28 )
    {
      UseCOR = 1;
      LODWORD(v15) = (unsigned __int8)v15;
      if ( (*(_BYTE *)(v28 + 16) & 1) != 0 )
        LODWORD(v15) = 1;
      v100 = (int)v15;
    }
  }
  LdrpSystemDllBase = (__int64)a2;
  if ( !UseWOW64 )
    v131 = *(_QWORD *)(ProcessEnvironmentBlock + 728);
  RtlpTimeout = *(_QWORD *)(ProcessEnvironmentBlock + 192);
  v29 = RtlNormalizeProcessParams(*(PRTL_USER_PROCESS_PARAMETERS *)(ProcessEnvironmentBlock + 32));
  if ( UseWOW64 || UseCOR && v23 )
    Config = 0LL;
  else
    Config = LdrImageDirectoryEntryToLoadConfig(*(PVOID *)(ProcessEnvironmentBlock + 16));
  if ( Config )
  {
    v31 = *Config;
    if ( *Config >= 0x10 )
    {
      *(_DWORD *)(ProcessEnvironmentBlock + 188) &= ~Config[3];
      v31 = *Config;
    }
    if ( v31 >= 0x14 )
    {
      *(_DWORD *)(ProcessEnvironmentBlock + 188) |= Config[4];
      v31 = *Config;
    }
    if ( v31 >= 0x18 && Config[5] )
      RtlpTimeout = -10000LL * (int)Config[5];
  }
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 188) & 2) != 0 )
    LdrpDebugFlags |= 1u;
  v32 = RtlpTimeoutDisable;
  if ( RtlpTimeout < -36000000000LL )
    v32 = 1;
  RtlpTimeoutDisable = v32;
  RtlFailedCriticalDebugAllocations = 0;
  if ( ((unsigned __int8)&RtlCriticalSectionDebugSList & 0xF) != 0 )
    goto LABEL_333;
  RtlCriticalSectionDebugSList = 0LL;
  v33 = &RtlpStaticDebugInfo;
  do
  {
    *v33 = v33 + 6;
    v33 += 6;
  }
  while ( v33 <= qword_180168F60 );
  *v33 = 0LL;
  InterlockedPushListSList(&RtlCriticalSectionDebugSList, (signed __int64)&RtlpStaticDebugInfo, qword_180168F90, 8);
  *(_QWORD *)(ProcessEnvironmentBlock + 120) = &TlsBitMap;
  *(_QWORD *)(ProcessEnvironmentBlock + 568) = &TlsExpansionBitMap;
  memset(&RtlpFlsContext, 0, 0x60uLL);
  xmmword_18016B2B8 = 0LL;
  xmmword_18016B2C8 = 0LL;
  xmmword_18016B2D8 = 0LL;
  xmmword_18016B2E8 = 0LL;
  qword_18016B300 = (__int64)&qword_18016B2F8;
  qword_18016B2F8 = (__int64)&qword_18016B2F8;
  TlsBitMap = 64;
  qword_18016A448 = ProcessEnvironmentBlock + 128;
  *(_DWORD *)(ProcessEnvironmentBlock + 128) |= 1u;
  TlsExpansionBitMap = 1024;
  qword_18016A428 = ProcessEnvironmentBlock + 576;
  *(_DWORD *)(ProcessEnvironmentBlock + 576) |= 1u;
  if ( UseWOW64 )
    RtlSetBits(*(PRTL_BITMAP *)(ProcessEnvironmentBlock + 120), 0, 0x13u);
  RtlSetBits(*(PRTL_BITMAP *)(ProcessEnvironmentBlock + 120), 4u, 1u);
  RtlSetBits(*(PRTL_BITMAP *)(ProcessEnvironmentBlock + 120), 0x10u, 1u);
  v34 = *(_DWORD *)(ProcessEnvironmentBlock + 188);
  if ( (v34 & 0x1000) != 0 || (v35 = LdrpShouldCreateStackTraceDb) != 0 )
  {
    v36 = 24;
    v105 = 24;
    if ( LdrpIsSecureProcess )
    {
      v37 = -1073741772;
    }
    else
    {
      LOBYTE(v97) = 0;
      v37 = RtlQueryImageFileExecutionOptions(
              &v111,
              (__int64)L"StackTraceDatabaseSizeInMb",
              4LL,
              (__int64)&v105,
              4,
              0LL);
      v36 = v105;
    }
    if ( v37 >= 0 && v36 >= 0x18 )
    {
      if ( v36 <= 0x80 )
        v7 = v36 << 20;
    }
    else
    {
      v7 = 25165824LL;
    }
    if ( (LdrpDebugFlags & 5) != 0 )
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        4263,
        "LdrpInitializeProcess",
        2,
        "Stack trace database size is %Id Mb\n",
        v7 >> 20);
    v142[0] = 0LL;
    v142[1] = 0LL;
    v142[2] = v7;
    RtlControlStackTraceDataBase(0LL, 24LL, v142);
    v34 = *(_DWORD *)(ProcessEnvironmentBlock + 188);
    v35 = LdrpShouldCreateStackTraceDb;
  }
  if ( (v34 & 0x1000) != 0 || v35 )
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
  inited = RtlInitializeHeapManager(&v111);
  ApplicationKeyOption = inited;
  if ( inited < 0 )
    return (unsigned int)inited;
  v151 = LdrSystemDllInitBlock.MitigationOptionsMap;
  if ( ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[0] >> 12) & 3) == 1 )
    RtlSetHeapInformation(0LL, HeapEnableTerminationOnCorruption, 0LL, 0LL);
  v38 = LdrpInitializeProcessHeap(Config, OutHeaders, v29);
  v39 = (void *)v38;
  if ( !v38 )
  {
    v40 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) == 0 )
      goto LABEL_187;
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      4335,
      "LdrpInitializeProcess",
      0,
      "Creating the process heap failed\n");
    goto LABEL_186;
  }
  *(_QWORD *)(ProcessEnvironmentBlock + 48) = v38;
  RtlInitializeCriticalSectionEx(&LdrpEnclaveListLock, 0, 0);
  qword_18016ABD8 = (__int64)&LdrpEnclaveList;
  LdrpEnclaveList = (__int64)&LdrpEnclaveList;
  if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x800000) != 0 )
    RtlInitializeExceptionLog();
  RtlpInitializeThreadActivationContextStack((__int64)v122);
  LdrpHeap = v39;
  if ( ((unsigned __int8)&EtwpFreeRegistrationList & 0xF) != 0 )
LABEL_333:
    RtlRaiseStatus(-2147483646);
  EtwpFreeRegistrationList = 0LL;
  PrivateLoggerNotificationEntry = 0LL;
  ApplicationKeyOption = NtQuerySystemInformation(SystemHypervisorSharedPageInformation, &SystemInformation, 8u, 0LL);
  v41 = RtlpHypervisorSharedUserVa;
  if ( ApplicationKeyOption >= 0 )
    v41 = SystemInformation;
  RtlpHypervisorSharedUserVa = v41;
  NtdllBaseTag = RtlCreateTagHeap(v39, 0, (PWSTR)L"NTDLL!", (PWSTR)L"!Process");
  inited = TpInitializePackage();
  ApplicationKeyOption = inited;
  if ( inited < 0 )
    return (unsigned int)inited;
  if ( v29->DefaultThreadpoolCpuSetMaskCount )
    TpSetDefaultPoolCpuSets(v29->DefaultThreadpoolCpuSetMasks);
  DefaultThreadpoolThreadMaximum = v29->DefaultThreadpoolThreadMaximum;
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
    TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation((ULONGLONG *)&dword_1801645C8);
  inited = RtlpInitEnvironmentBlock();
  ApplicationKeyOption = inited;
  if ( inited < 0 )
    return (unsigned int)inited;
  inited = RtlpInitParameterBlock();
  ApplicationKeyOption = inited;
  if ( inited < 0 )
    return (unsigned int)inited;
  v43 = *(_QWORD *)(ProcessEnvironmentBlock + 32);
  v116 = v43;
  v124 = *(__m128i *)(v43 + 96);
  v113 = _mm_srli_si128(v124, 8).m128i_u64[0];
  if ( Handle || v108 )
  {
    ApplicationKeyOption = RtlQueryApplicationKeyOption(
                             v108,
                             Handle,
                             (__int64)L"DebugProcessHeapOnly",
                             4LL,
                             (__int64)&v106,
                             4,
                             v97,
                             0LL);
    if ( ApplicationKeyOption >= 0 && dword_1801649B8 && v106 )
    {
      dword_1801649B8 = 0;
      *RtlpDebugPageHeapTable &= ~0x400u;
    }
  }
  NtSystemRoot = RtlGetNtSystemRoot();
  RtlInitUnicodeStringEx(&DestinationString, NtSystemRoot);
  v45 = DestinationString.Length + 40;
  Heap = (wchar_t *)RtlAllocateHeap(v39, 0, (unsigned int)DestinationString.Length + 38 + 2LL);
  if ( !Heap )
    return 3221225495LL;
  Destination.Length = 0;
  Destination.MaximumLength = v45;
  Destination.Buffer = Heap;
  RtlAppendUnicodeStringToString(&Destination, &DestinationString);
  RtlAppendUnicodeStringToString(&Destination, &SlashSystem32SlashString);
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 0x42) != 2 )
  {
    v47 = 48LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v132;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    inited = ZwOpenDirectoryObject(&LdrpKnownDllDirectoryHandle, 3u, &ObjectAttributes);
    ApplicationKeyOption = inited;
    if ( inited != -1073741772 || (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 0x40) == 0 )
    {
      if ( inited < 0 )
      {
        v25 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) == 0 )
          goto LABEL_300;
        LODWORD(v97) = inited;
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          4605,
          "LdrpInitializeProcess",
          0,
          "Failed to open %wZ with status 0x%08lx\n",
          &v132,
          v97);
        goto LABEL_299;
      }
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = LdrpKnownDllDirectoryHandle;
      ObjectAttributes.Attributes = 64;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_18011D340;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      inited = ZwOpenSymbolicLinkObject(&LinkHandle, 1u, &ObjectAttributes);
      ApplicationKeyOption = inited;
      if ( inited >= 0 )
      {
        while ( 1 )
        {
          v48 = (wchar_t *)RtlAllocateHeap(v39, 0, v47);
          if ( !v48 )
            return 3221225495LL;
          LdrpKnownDllPath.Length = 0;
          LdrpKnownDllPath.MaximumLength = v47;
          LdrpKnownDllPath.Buffer = v48;
          v49 = NtQuerySymbolicLinkObject(LinkHandle, &LdrpKnownDllPath, &ReturnedLength);
          inited = v49;
          ApplicationKeyOption = v49;
          if ( v49 >= 0 )
          {
            NtClose(LinkHandle);
            v43 = v116;
            goto LABEL_147;
          }
          if ( v49 != -1073741789 )
          {
            v25 = LdrpDebugFlags;
            if ( (LdrpDebugFlags & 3) == 0 )
              goto LABEL_300;
            v50 = "Querying the known DLL directory link object failed with status 0x%08lx\n";
            v51 = 4663;
            goto LABEL_320;
          }
          RtlFreeHeap(v39, 0, v48);
          v47 = ReturnedLength;
        }
      }
      v25 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LODWORD(v97) = inited;
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          4628,
          "LdrpInitializeProcess",
          0,
          "Failed to open %wZ with status 0x%08lx\n",
          &unk_18011D340,
          v97);
LABEL_299:
        inited = ApplicationKeyOption;
        v25 = LdrpDebugFlags;
        goto LABEL_300;
      }
      goto LABEL_300;
    }
    if ( (LdrpDebugFlags & 5) != 0 )
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        4595,
        "LdrpInitializeProcess",
        2,
        "KnownDLL directory does not yet exist.  SMSS will create it.\n");
  }
LABEL_147:
  if ( UseWOW64 || LdrpIsSecureProcess )
  {
    UnicodeString = DestinationString;
    v54 = 0;
  }
  else
  {
    v52 = *(__m128i *)(v43 + 56);
    *(_QWORD *)&UnicodeString.Length = *(_QWORD *)(v43 + 56);
    v53 = (wchar_t *)_mm_srli_si128(v52, 8).m128i_u64[0];
    UnicodeString.Buffer = v53;
    v54 = 0;
    if ( !v53 || !UnicodeString.Length || !*v53 )
    {
      v55 = (wchar_t *)RtlAllocateHeap(v39, 0, 8uLL);
      UnicodeString.Buffer = v55;
      if ( !v55 )
      {
        v40 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) == 0 )
          goto LABEL_187;
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          4711,
          "LdrpInitializeProcess",
          0,
          "Allocating a buffer to hold the current working directory failed\n");
        goto LABEL_186;
      }
      v107 = 0;
      v56 = RtlGetNtSystemRoot();
      *(_DWORD *)v55 = *(_DWORD *)v56;
      v55[2] = v56[2];
      UnicodeString.Buffer[3] = 0;
      *(_DWORD *)&UnicodeString.Length = 524294;
    }
  }
  LdrpInitializePolicy();
  Length = Destination.Length;
  if ( (*(_DWORD *)(*(_QWORD *)(ProcessEnvironmentBlock + 32) + 8LL) & 0x20000000) != 0 )
  {
    v54 = (LdrpPolicyBits & 0x100) != 0;
    Length = 2LL * Destination.Length + 22;
    if ( (LdrpPolicyBits & 0x100) != 0 )
      Length = Destination.Length + 2LL * Destination.Length + 52;
  }
  v58 = Length;
  if ( (LdrpPolicyBits & 1) == 0 )
  {
    v58 = Length + 2 * (DestinationString.Length + 9LL);
    if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 2) != 0 )
      *(_WORD *)(v116 + 80) = 0;
  }
  v104.Buffer = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v58);
  if ( !v104.Buffer )
  {
    v40 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) == 0 )
      goto LABEL_187;
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      4802,
      "LdrpInitializeProcess",
      0,
      "Failed to allocate the system dirs string!\n");
    goto LABEL_186;
  }
  v104.Length = 0;
  v104.MaximumLength = v58;
  RtlAppendUnicodeStringToString(&v104, &Destination);
  v59 = v104.Length;
  v104.Buffer[((unsigned __int64)v104.Length >> 1) - 1] = 59;
  RtlpSystem32Dirs = (__int128)v104;
  LdrpSystem32 = v104;
  LOWORD(v59) = v59 - 2;
  LdrpSystem32.Length = v59;
  if ( (*(_DWORD *)(*(_QWORD *)(ProcessEnvironmentBlock + 32) + 8LL) & 0x20000000) != 0 )
  {
    if ( v54 )
    {
      RtlAppendUnicodeStringToString(&v104, &Destination);
      RtlAppendUnicodeToString(&v104, L"forwarders\\alt;");
    }
    RtlAppendUnicodeStringToString(&v104, &Destination);
    RtlAppendUnicodeToString(&v104, L"forwarders;");
  }
  if ( v58 > Length )
  {
    RtlAppendUnicodeStringToString(&v104, &DestinationString);
    RtlAppendUnicodeToString(&v104, L"\\system;");
    RtlAppendUnicodeStringToString(&v104, &DestinationString);
    RtlAppendUnicodeToString(&v104, L";");
    RtlpSystemDirs = v104;
  }
  if ( (unsigned int)(LdrpIllegalCWDDevices - 1) <= 0xFFFFFFFD )
    LdrpCheckAppDirType((_UNICODE_STRING *)&v124, v59);
  v60 = BaseOfImage;
  RtlImageNtHeaderEx(3u, BaseOfImage, 0LL, &v121);
  ModuleEntry = LdrpAllocateModuleEntry(0LL);
  v62 = ModuleEntry;
  if ( !ModuleEntry )
  {
    v40 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) == 0 )
      goto LABEL_187;
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      4922,
      "LdrpInitializeProcess",
      0,
      "Allocating a data table entry for the system DLL failed\n");
    goto LABEL_186;
  }
  LdrpNtDllDataTableEntry = ModuleEntry;
  *(_DWORD *)(*((_QWORD *)ModuleEntry + 19) + 24LL) = -1;
  *(_WORD *)(**((_QWORD **)LdrpNtDllDataTableEntry + 19) - 52LL) = -1;
  v63 = (_UNICODE_STRING *)LdrpNtDllDataTableEntry;
  *((_DWORD *)LdrpNtDllDataTableEntry + 26) |= 0x204u;
  v63[15].Buffer = (wchar_t *)((char *)v63[15].Buffer - LdrSystemDllInitBlock.SystemDllNativeRelocation);
  v63 = (_UNICODE_STRING *)((char *)v63 + 72);
  *v63 = Destination;
  RtlAppendUnicodeStringToString(v63, &NtDllName);
  v64 = LdrpNtDllDataTableEntry;
  *(UNICODE_STRING *)((char *)LdrpNtDllDataTableEntry + 88) = NtDllName;
  v64[6] = v60;
  LdrpInsertDataTableEntry((__int64)v64);
  LdrpLogDllState(*((_QWORD *)LdrpNtDllDataTableEntry + 6), (__int64)LdrpNtDllDataTableEntry + 72, 0x14A5u);
  LdrpInsertModuleToIndex((__int64)LdrpNtDllDataTableEntry, (__int64)v121);
  inited = LdrpProcessMappedModule((__int64)LdrpNtDllDataTableEntry, 0, 1);
  ApplicationKeyOption = inited;
  if ( inited < 0 )
    return (unsigned int)inited;
  LdrpLogDllState(*((_QWORD *)LdrpNtDllDataTableEntry + 6), (__int64)LdrpNtDllDataTableEntry + 72, 0x14AEu);
  *(_DWORD *)(*((_QWORD *)LdrpNtDllDataTableEntry + 19) + 56LL) = 9;
  RtlInitializeHistoryTable();
  v65 = v62 + 32;
  v66 = qword_18016A4F0;
  if ( *(__int64 **)(qword_18016A4F0 + 8) != &qword_18016A4F0 )
    __fastfail(3u);
  *v65 = qword_18016A4F0;
  *((_QWORD *)v62 + 5) = &qword_18016A4F0;
  *(_QWORD *)(v66 + 8) = v65;
  qword_18016A4F0 = (__int64)(v62 + 32);
  inited = LdrpInitParallelLoadingSupport();
  ApplicationKeyOption = inited;
  if ( inited < 0 )
  {
    v25 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) == 0 )
      goto LABEL_300;
    v50 = "Failed to initialize Parallel loader, st = 0x%x\n";
    v51 = 5001;
    goto LABEL_320;
  }
  LdrpDrainWorkQueue(0);
  LdrpInitializeDllPath(0LL, 0LL, (const WCHAR **)Path);
  memset(v152, 0, sizeof(v152));
  *(_QWORD *)&v152[1] = Path;
  LODWORD(v152[2]) = 512;
  v152[0] = v124;
  *((_QWORD *)&v152[2] + 1) = &ApplicationKeyOption;
  v67 = LdrpAllocateModuleEntry((__int64)v152);
  v68 = v67;
  if ( !v67 )
  {
    v40 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) == 0 )
      goto LABEL_187;
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      5022,
      "LdrpInitializeProcess",
      0,
      "Allocating a data table entry for the executable failed\n");
    goto LABEL_186;
  }
  LdrpImageEntry = (__int64)v67;
  v69 = 2LL;
  do
  {
    *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 24LL) = -1;
    --v69;
  }
  while ( v69 );
  *(_WORD *)(**(_QWORD **)(LdrpImageEntry + 152) - 52LL) = -1;
  v70 = LdrpImageEntry;
  *(__m128i *)(LdrpImageEntry + 72) = v124;
  *(_DWORD *)(v70 + 104) |= 4u;
  v71 = *(_DWORD *)(v70 + 104);
  if ( (NtCurrentPeb()->BitField & 0x10) != 0 )
  {
    v71 |= 1u;
    *(_DWORD *)(v70 + 104) = v71;
  }
  v72 = v100;
  if ( UseCOR )
  {
    v73 = v71 | 0x400000;
    *(_DWORD *)(v70 + 104) = v73;
    if ( v72 )
      *(_DWORD *)(v70 + 104) = v73 | 0x1000000;
  }
  v74 = LdrpImageEntry;
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 4) != 0 )
    *(_QWORD *)(LdrpImageEntry + 248) = 0LL;
  v75 = 0LL;
  v76 = (wchar_t *)(v124.m128i_i64[1] + v124.m128i_u16[0]);
  if ( v76 )
  {
    while ( 1 )
    {
      v77 = v76--;
      if ( (unsigned __int64)v77 <= v124.m128i_i64[1] )
        break;
      if ( *v76 == 92 )
      {
        v75 = v77;
        break;
      }
    }
  }
  if ( v75 )
  {
    v78 = v124.m128i_i16[4] + v124.m128i_i16[0] - (_WORD)v75;
    *(_WORD *)(v74 + 88) = v78;
    if ( v124.m128i_u16[1] - (unsigned __int64)v124.m128i_u16[0] >= 2 )
      v78 += 2;
    *(_WORD *)(v74 + 90) = v78;
    *(_QWORD *)(v74 + 96) = v75;
  }
  else
  {
    *(_OWORD *)(v74 + 88) = *(_OWORD *)(v68 + 72);
  }
  v79 = *(void **)(ProcessEnvironmentBlock + 16);
  v80 = v79;
  v81 = OutHeaders;
  if ( (void *)OutHeaders->OptionalHeader.ImageBase != v79 && !v72 && !UseWOW64 )
  {
    inited = LdrpProtectAndRelocateImage(v79);
    ApplicationKeyOption = inited;
    if ( inited < 0 )
      return (unsigned int)inited;
    v80 = *(void **)(ProcessEnvironmentBlock + 16);
    v74 = LdrpImageEntry;
  }
  *(_QWORD *)(v74 + 48) = v80;
  LdrpInsertDataTableEntry(v74);
  if ( (LdrpDebugFlags & 5) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      5145,
      "LdrpInitializeProcess",
      2,
      "Beginning execution of %wZ (%wZ)\n\tCurrent directory: %wZ\n\tPackage directories: %wZ\n",
      LdrpImageEntry + 88,
      LdrpImageEntry + 72,
      &UnicodeString,
      &LdrpAppPackagesPath);
  LdrpLogDllState(*(_QWORD *)(LdrpImageEntry + 48), LdrpImageEntry + 72, 0x14A5u);
  LdrpInsertModuleToIndex(LdrpImageEntry, (__int64)v81);
  inited = LdrpProcessMappedModule(LdrpImageEntry, 0, UseWOW64 == 0);
  ApplicationKeyOption = inited;
  if ( inited < 0 )
    return (unsigned int)inited;
  *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 56LL) = 9;
  v82 = RtlpInitCurrentDir(&UnicodeString.Length);
  ApplicationKeyOption = v82;
  if ( v82 < 0 )
  {
    v83 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LODWORD(v97) = v82;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        5182,
        "LdrpInitializeProcess",
        0,
        "Initializing the current directory to \"%wZ\" failed with status 0x%08lx\n",
        &UnicodeString,
        v97);
      v83 = LdrpDebugFlags;
    }
    if ( (v83 & 0x10) != 0 )
      __debugbreak();
  }
  if ( !v107 )
    RtlFreeAnsiString(&UnicodeString);
  if ( AvrfAppVerifierMode )
  {
    v84 = LdrpAllocateModuleEntry(0LL);
    v85 = (__int64)v84;
    if ( !v84 )
    {
      v40 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) == 0 )
      {
LABEL_187:
        if ( (v40 & 0x10) != 0 )
          __debugbreak();
        return 3221225495LL;
      }
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        5205,
        "LdrpInitializeProcess",
        0,
        "Allocating a data table entry for the application verifier DLL failed\n");
LABEL_186:
      v40 = LdrpDebugFlags;
      goto LABEL_187;
    }
    *(_DWORD *)(*((_QWORD *)v84 + 19) + 24LL) = -1;
    *(_WORD *)(**((_QWORD **)v84 + 19) - 52LL) = -1;
    v86 = v137;
    *((_DWORD *)v84 + 26) |= *(_DWORD *)(v137 + 104);
    *((_QWORD *)v84 + 31) = *(_QWORD *)(v86 + 248);
    *((_WORD *)v84 + 55) = 0;
    *(_OWORD *)(v84 + 72) = *(_OWORD *)(v86 + 72);
    *(_OWORD *)(v84 + 88) = *(_OWORD *)(v86 + 88);
    *((_DWORD *)v84 + 32) = *(_DWORD *)(v86 + 128);
    *((_QWORD *)v84 + 6) = *(_QWORD *)(v86 + 48);
    LdrpInsertDataTableEntry((__int64)v84);
    LdrpLogDllState(*(_QWORD *)(v85 + 48), v85 + 72, 0x14A5u);
    inited = RtlImageNtHeaderEx(3u, *(PVOID *)(v85 + 48), 0LL, &v121);
    ApplicationKeyOption = inited;
    if ( inited < 0 )
      return (unsigned int)inited;
    LdrpInsertModuleToIndex(v85, (__int64)v121);
    inited = LdrpProcessMappedModule(v85, 0, 1);
    ApplicationKeyOption = inited;
    if ( inited < 0 )
      return (unsigned int)inited;
    *(_QWORD *)(v85 + 56) = *(_QWORD *)(v86 + 56);
    LdrpLogDllState(*(_QWORD *)(v85 + 48), v85 + 72, 0x14ADu);
    *(_DWORD *)(*(_QWORD *)(v85 + 152) + 56LL) = 7;
    if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x100) == 0 && (AvrfAppVerifierMode & 2) == 0 )
    {
      v101 = 0;
      inited = LdrpInitializeGraphRecurse(*(__int64 **)(v85 + 152), 0LL, &v101);
      ApplicationKeyOption = inited;
    }
    else
    {
      inited = AVrfInitializeVerifier(0, 0, 0, 1, (__int64)BaseOfImage, 0LL);
      ApplicationKeyOption = inited;
      if ( inited >= 0 && (AvrfAppVerifierMode & 2) != 0 )
      {
        *(_DWORD *)(*(_QWORD *)(v85 + 152) + 56LL) = 9;
        inited = ApplicationKeyOption;
      }
    }
    if ( inited < 0 )
      return (unsigned int)inited;
    v81 = OutHeaders;
  }
  LdrpDropLastInProgressCount();
  if ( !UseWOW64 )
  {
    v130 = 0LL;
    if ( UseCOR )
    {
      inited = LdrpCorInitialize((PVOID *)&v130);
      ApplicationKeyOption = inited;
      if ( inited < 0 )
        return (unsigned int)inited;
      v87 = v100;
      if ( (_BYTE)v100 )
      {
        inited = LdrpCorValidateImage(*(_QWORD *)(ProcessEnvironmentBlock + 16));
        ApplicationKeyOption = inited;
        if ( inited < 0 )
          return (unsigned int)inited;
      }
      if ( (v122->SameTebFlags & 0x400) != 0 )
        *(_QWORD *)(v123 + 128) = __ROR8__(LdrpCorExeMainRoutine, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330];
    }
    else
    {
      v87 = v100;
    }
    inited = LdrpInitializeTls();
    ApplicationKeyOption = inited;
    if ( inited < 0 )
    {
      v25 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) == 0 )
        goto LABEL_300;
      v50 = "Initializing TLS slots failed with status 0x%08lx\n";
      v51 = 5432;
      goto LABEL_320;
    }
    if ( v130 )
    {
      v102 = 0;
      inited = LdrpInitializeGraphRecurse(v130[19], 0LL, &v102);
      ApplicationKeyOption = inited;
      if ( inited < 0 )
      {
        v25 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) == 0 )
          goto LABEL_300;
        v50 = "DllMain of MSCOREE (or its dependents) failed with status 0x%08lx\n";
        v51 = 5451;
        goto LABEL_320;
      }
    }
    inited = LdrpInitializeImportRedirection();
    ApplicationKeyOption = inited;
    if ( inited < 0 )
    {
      v25 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) == 0 )
        goto LABEL_300;
      v50 = "Loading of import redirection module failed with status 0x%08x\n";
      v51 = 5467;
      goto LABEL_320;
    }
    ProcedureAddress = 0LL;
    if ( (unsigned __int16)(v81->OptionalHeader.Subsystem - 2) <= 1u )
    {
      inited = LdrLoadDll((PWSTR)0x4001, 0LL, (PUNICODE_STRING)&LdrpKernel32DllName, &DllHandle);
      ApplicationKeyOption = inited;
      if ( inited < 0 )
      {
        if ( inited != -1073741515 )
        {
          v25 = LdrpDebugFlags;
          if ( (LdrpDebugFlags & 3) == 0 )
            goto LABEL_300;
          LODWORD(v97) = inited;
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5625,
            "LdrpInitializeProcess",
            0,
            "Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
            &LdrpKernel32DllName,
            v97);
          goto LABEL_299;
        }
        inited = LdrLoadDll((PWSTR)0x4001, 0LL, (PUNICODE_STRING)&LdrpKernelbaseDllName, &DllHandle);
        ApplicationKeyOption = inited;
        if ( inited < 0 )
        {
          v25 = LdrpDebugFlags;
          if ( (LdrpDebugFlags & 3) == 0 )
            goto LABEL_300;
          LODWORD(v97) = inited;
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5598,
            "LdrpInitializeProcess",
            0,
            "Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
            &LdrpKernelbaseDllName,
            v97);
          goto LABEL_299;
        }
        inited = LdrpCodeAuthzInitialize();
        ApplicationKeyOption = inited;
        if ( (int)(inited + 0x80000000) >= 0 && inited != -1073741515 )
        {
          v25 = LdrpDebugFlags;
          if ( (LdrpDebugFlags & 3) == 0 )
            goto LABEL_300;
          v50 = "LdrpCodeAuthzInitialize failed with status 0x%08lx\n";
          v51 = 5614;
          goto LABEL_320;
        }
        ApplicationKeyOption = 0;
        v88 = DllHandle;
      }
      else
      {
        inited = LdrGetProcedureAddressForCaller(
                   DllHandle,
                   (PANSI_STRING)&stru_18011D3A0,
                   0,
                   &Kernel32ThreadInitThunkFunction,
                   0,
                   retaddr);
        ApplicationKeyOption = inited;
        if ( inited < 0 )
        {
          v25 = LdrpDebugFlags;
          if ( (LdrpDebugFlags & 3) == 0 )
            goto LABEL_300;
          LODWORD(v98) = inited;
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5512,
            "LdrpInitializeProcess",
            0,
            "Locating procedure \"%Z\" in Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
            &stru_18011D3A0,
            &LdrpKernel32DllName,
            v98);
          goto LABEL_299;
        }
        LdrGetProcedureAddressForCaller(DllHandle, (PANSI_STRING)&stru_18011D3C0, 0, &ProcedureAddress, 0, retaddr);
        inited = LdrpSnapKernelBaseExtensions();
        ApplicationKeyOption = inited;
        if ( inited < 0 )
          return (unsigned int)inited;
        inited = LdrpCodeAuthzInitialize();
        ApplicationKeyOption = inited;
        if ( inited < 0 )
          return (unsigned int)inited;
        inited = LdrpFindLoadedDll(&LdrpKernelbaseDllName.Length, 0LL, (PVOID *)&v138);
        ApplicationKeyOption = inited;
        if ( inited < 0 )
        {
          v25 = LdrpDebugFlags;
          if ( (LdrpDebugFlags & 3) == 0 )
            goto LABEL_300;
          LODWORD(v97) = inited;
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5580,
            "LdrpInitializeProcess",
            0,
            "Finding \"%wZ\" failed with status 0x%08lx\n",
            &LdrpKernelbaseDllName,
            v97);
          goto LABEL_299;
        }
        v88 = (PVOID)v138[6];
      }
      ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(
                                    v88,
                                    (PANSI_STRING)&stru_18011D420,
                                    0,
                                    &v139,
                                    0,
                                    retaddr);
      inited = ProcedureAddressForCaller;
      ApplicationKeyOption = ProcedureAddressForCaller;
      if ( ProcedureAddressForCaller < 0 )
      {
        v25 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) == 0 )
          goto LABEL_300;
        v50 = "Finding KernelbasePostInit failed with status 0x%08lx\n";
        v51 = 5643;
        goto LABEL_320;
      }
      inited = ((__int64 (__fastcall *)(_QWORD))v139)((unsigned int)ProcedureAddressForCaller);
      ApplicationKeyOption = inited;
      if ( inited < 0 )
      {
        v25 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) == 0 )
          goto LABEL_300;
        v50 = "Calling KernelbasePostInit failed with status 0x%08lx\n";
        v51 = 5651;
        goto LABEL_320;
      }
      ApplicationKeyOption = 0;
    }
    LdrpDrainWorkQueue(0);
    SbObtainTraceHandle(0LL);
    v90 = v131;
    if ( v131 && *(_DWORD *)(v131 + 528) )
    {
      *(_QWORD *)(ProcessEnvironmentBlock + 736) = 0LL;
      LdrpInitShimEngine(v90);
    }
    v91 = RtlpForceCSDebugInfoCreation;
    if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x400000) != 0 )
      v91 = 1;
    RtlpForceCSDebugInfoCreation = v91;
    if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x10000000) != 0 )
    {
      *(_DWORD *)(v116 + 1036) = 1;
      v92 = 1;
    }
    else
    {
      v92 = *(_DWORD *)(v116 + 1036);
    }
    LdrpEnableParallelLoading(v92);
    LdrInitState = 1;
    *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 56LL) = 2;
    **((_DWORD **)&v152[2] + 1) = 0;
    if ( v87 )
    {
      v93 = LdrpCorProcessImports(LdrpImageEntry);
    }
    else
    {
      LODWORD(v152[2]) |= 1u;
      LdrpMapAndSnapDependency((__int64)v152);
      LdrpDrainWorkQueue(1);
      inited = ApplicationKeyOption;
      if ( ApplicationKeyOption < 0 )
        goto LABEL_308;
      v93 = LdrpPrepareModuleForExecution(LdrpImageEntry, *((__int64 *)&v152[2] + 1));
    }
    ApplicationKeyOption = v93;
    inited = v93;
    if ( v93 >= 0 )
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
      LdrpProcessInitContextRecord = v123;
      LdrpDrainWorkQueue(0);
      LdrpAcquireLoaderLock();
      v103[0] = 0;
      ApplicationKeyOption = LdrpInitializeGraphRecurse(
                               *(__int64 **)(LdrpImageEntry + 152),
                               *((__int64 *)&v152[2] + 1),
                               v103);
      LdrpReleaseLoaderLock(v94, 9, ApplicationKeyOption);
      LdrpFreeLoadContextOfNode(*(_QWORD **)(LdrpImageEntry + 152), *((__int64 *)&v152[2] + 1));
      LdrpDropLastInProgressCount();
      LdrpProcessInitContextRecord = 0LL;
      if ( v154 )
        RtlReleasePath(Path[0]);
      inited = ApplicationKeyOption;
      if ( ApplicationKeyOption >= 0 )
      {
        if ( *(_WORD *)(LdrpImageEntry + 110) )
        {
          v143 = 72LL;
          v144 = 1;
          v145 = 0LL;
          v146 = 0LL;
          v147 = 0LL;
          v148 = 0LL;
          RtlActivateActivationContextUnsafeFast((__int64)&v143, *(_QWORD *)(LdrpImageEntry + 136));
          LdrpCallTlsInitializers(1u, LdrpImageEntry);
          RtlDeactivateActivationContextUnsafeFast((__int64)&v143);
        }
        if ( g_ShimsEnabled
          && !((unsigned __int8 (__fastcall *)(unsigned __int16 *, __int64))(__ROR8__(
                                                                               g_pfnSE_InstallAfterInit,
                                                                               64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))(
                &v111,
                v90) )
        {
          g_ShimsEnabled = 0;
          LdrUnloadDll(g_pShimEngineModule);
          g_pShimEngineModule = 0LL;
        }
        v95 = *(void (**)(void))(ProcessEnvironmentBlock + 560);
        if ( v95 )
          v95();
        goto LABEL_328;
      }
      v25 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        v50 = "Running the init routines of the executable's static imports failed with status 0x%08lx\n";
        v51 = 6005;
        goto LABEL_320;
      }
LABEL_300:
      if ( (v25 & 0x10) != 0 )
        __debugbreak();
      return (unsigned int)inited;
    }
LABEL_308:
    v25 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      v50 = "Walking the import tables of the executable and its static imports failed with status 0x%08lx\n";
      v51 = 5863;
LABEL_320:
      LODWORD(Callback) = inited;
      LdrpLogDbgPrint((unsigned int)"minkernel\\ntdll\\ldrinit.c", v51, "LdrpInitializeProcess", 0, v50, Callback);
      goto LABEL_299;
    }
    goto LABEL_300;
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
  if ( v108 )
  {
    NtClose(v108);
    v108 = 0LL;
  }
  inited = LdrpLoadWow64(&Destination);
  ApplicationKeyOption = inited;
  if ( inited < 0 )
    return (unsigned int)inited;
  if ( *(_BYTE *)(ProcessEnvironmentBlock + 2) )
    LdrpDoDebuggerBreak();
  LdrInitState = 3;
  _interlockedbittestandreset((volatile signed __int32 *)(ProcessEnvironmentBlock + 80), 1u);
  g_LdrpWow64LdrpInitialize(v123);
LABEL_328:
  if ( Handle )
    NtClose(Handle);
  if ( v108 )
    NtClose(v108);
  return 0LL;
}
