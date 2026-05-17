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

__int64 __fastcall LdrpInitializeProcess(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  NTSTATUS InformationProcess; // eax
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
  __int64 v15; // r15
  char v16; // al
  unsigned int i; // ecx
  _QWORD *v19; // rax
  unsigned int v20; // ebx
  __int64 v21; // rcx
  unsigned __int64 v22; // rax
  bool v23; // zf
  char v24; // al
  int v25; // ebx
  __int64 v26; // rcx
  char v27; // al
  int WowTebOffset; // ecx
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // r13
  unsigned int *Config; // r15
  unsigned int v33; // eax
  char v34; // al
  _QWORD *v35; // rcx
  int v36; // ecx
  char v37; // al
  unsigned int v38; // eax
  int v39; // ecx
  __int64 v40; // rax
  void *v41; // r12
  char v42; // al
  __int64 v43; // rcx
  unsigned __int64 v44; // r8
  unsigned __int64 v45; // r9
  unsigned __int64 v46; // rdx
  int v47; // r15d
  int inited; // eax
  __int64 v49; // r13
  HANDLE v50; // rdx
  __int64 NtSystemRoot; // rax
  __int16 v52; // r15
  __int64 Heap; // rax
  __int64 v54; // r15
  __int64 v55; // r13
  int SymbolicLinkObject; // eax
  char *v57; // rax
  int v58; // edx
  __m128i v59; // xmm0
  wchar_t *v60; // xmm0_8
  bool v61; // r13
  __int64 v62; // rdx
  __int64 v63; // rcx
  wchar_t *v64; // r15
  __int64 v65; // rax
  unsigned __int64 v66; // r15
  unsigned __int64 v67; // r12
  __int64 v68; // rdx
  unsigned __int64 v69; // r12
  __int64 ModuleEntry; // rax
  __int64 v71; // r15
  __int64 v72; // rcx
  __int64 v73; // rcx
  unsigned __int64 v74; // r8
  unsigned __int64 v75; // r9
  _QWORD *v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rax
  __int64 v79; // r11
  __int64 v80; // rdx
  __int64 v81; // rdx
  int v82; // ecx
  char v83; // r12
  int v84; // ecx
  __int64 v85; // rdx
  unsigned __int64 v86; // r9
  _WORD *v87; // rax
  unsigned __int64 v88; // rcx
  __int16 v89; // r8
  const void *v90; // rcx
  const void *v91; // rax
  unsigned __int64 v92; // r15
  unsigned __int64 v93; // r8
  unsigned __int64 v94; // r9
  int v95; // eax
  char v96; // cl
  __int64 v97; // rax
  __int64 v98; // r15
  __int64 v99; // r13
  unsigned __int64 v100; // r8
  unsigned __int64 v101; // r9
  char v102; // r13
  unsigned __int64 v103; // rcx
  int ProcedureAddressForCaller; // eax
  __int64 v105; // r15
  char v106; // al
  unsigned int v107; // ecx
  int v108; // eax
  __int64 v109; // r9
  __int64 v110; // rcx
  __int64 v111; // rdx
  void (__fastcall *v112)(__int64, __int64); // rax
  __int64 v113; // [rsp+28h] [rbp-400h]
  __int64 v114; // [rsp+30h] [rbp-3F8h]
  __int64 v115; // [rsp+38h] [rbp-3F0h]
  int ApplicationKeyOption; // [rsp+50h] [rbp-3D8h] BYREF
  int v117; // [rsp+54h] [rbp-3D4h]
  char v118; // [rsp+58h] [rbp-3D0h] BYREF
  char v119; // [rsp+59h] [rbp-3CFh] BYREF
  _BYTE v120[6]; // [rsp+5Ah] [rbp-3CEh] BYREF
  __int128 v121; // [rsp+60h] [rbp-3C8h] BYREF
  int v122; // [rsp+70h] [rbp-3B8h] BYREF
  int v123; // [rsp+74h] [rbp-3B4h] BYREF
  int v124; // [rsp+78h] [rbp-3B0h]
  HANDLE v125; // [rsp+80h] [rbp-3A8h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+90h] [rbp-398h] BYREF
  __int128 v127; // [rsp+A0h] [rbp-388h] BYREF
  unsigned __int16 v128; // [rsp+B0h] [rbp-378h] BYREF
  __int16 v129; // [rsp+B2h] [rbp-376h]
  unsigned __int64 v130; // [rsp+B8h] [rbp-370h]
  __int64 v131; // [rsp+C0h] [rbp-368h] BYREF
  unsigned __int64 v132; // [rsp+C8h] [rbp-360h] BYREF
  __int64 v133; // [rsp+D0h] [rbp-358h]
  HANDLE v134; // [rsp+D8h] [rbp-350h] BYREF
  _DWORD v135[4]; // [rsp+E0h] [rbp-348h] BYREF
  unsigned __int64 v136; // [rsp+F0h] [rbp-338h] BYREF
  struct _TEB *v137; // [rsp+F8h] [rbp-330h]
  __int64 v138; // [rsp+100h] [rbp-328h]
  __m128i v139; // [rsp+108h] [rbp-320h] BYREF
  UNICODE_STRING v140; // [rsp+120h] [rbp-308h] BYREF
  __int64 (__fastcall *v141)(_BYTE *, __int64); // [rsp+130h] [rbp-2F8h] BYREF
  __int64 v142[2]; // [rsp+138h] [rbp-2F0h] BYREF
  unsigned __int64 v143; // [rsp+148h] [rbp-2E0h]
  __int64 v144; // [rsp+150h] [rbp-2D8h] BYREF
  __int64 v145; // [rsp+158h] [rbp-2D0h]
  int v146; // [rsp+160h] [rbp-2C8h] BYREF
  const WCHAR *v147; // [rsp+168h] [rbp-2C0h]
  int v148; // [rsp+170h] [rbp-2B8h] BYREF
  __int64 v149; // [rsp+178h] [rbp-2B0h] BYREF
  __int64 SystemInformation; // [rsp+180h] [rbp-2A8h] BYREF
  __int64 v151; // [rsp+188h] [rbp-2A0h] BYREF
  __int64 v152; // [rsp+190h] [rbp-298h] BYREF
  __int64 (__fastcall *v153)(_QWORD); // [rsp+198h] [rbp-290h] BYREF
  int v154; // [rsp+1A0h] [rbp-288h]
  __int64 v155; // [rsp+1A8h] [rbp-280h]
  int *v156; // [rsp+1B0h] [rbp-278h]
  int v157; // [rsp+1B8h] [rbp-270h]
  __int128 v158; // [rsp+1C0h] [rbp-268h]
  __int64 v159; // [rsp+1D0h] [rbp-258h]
  __int64 v160; // [rsp+1D8h] [rbp-250h]
  _QWORD v161[4]; // [rsp+1E0h] [rbp-248h] BYREF
  __int64 v162; // [rsp+200h] [rbp-228h] BYREF
  int v163; // [rsp+208h] [rbp-220h]
  __int128 v164; // [rsp+210h] [rbp-218h]
  __int128 v165; // [rsp+220h] [rbp-208h]
  __int128 v166; // [rsp+230h] [rbp-1F8h]
  __int64 v167; // [rsp+240h] [rbp-1E8h]
  __int128 v168; // [rsp+250h] [rbp-1D8h]
  __int64 v169; // [rsp+260h] [rbp-1C8h]
  __int128 v170; // [rsp+270h] [rbp-1B8h]
  __int64 v171; // [rsp+280h] [rbp-1A8h]
  __int128 v172; // [rsp+290h] [rbp-198h]
  __int64 v173; // [rsp+2A0h] [rbp-188h]
  _OWORD v174[12]; // [rsp+2B0h] [rbp-178h] BYREF
  __int64 v175[15]; // [rsp+370h] [rbp-B8h] BYREF
  char v176; // [rsp+3ECh] [rbp-3Ch]
  __int64 retaddr; // [rsp+428h] [rbp+0h]

  v143 = a2;
  v138 = a1;
  v146 = 1441812;
  v147 = L"\\KnownDlls";
  v3 = (unsigned int)`RtlpGetCookieValue'::`2'::CookieValue;
  if ( !`RtlpGetCookieValue'::`2'::CookieValue )
  {
    InformationProcess = NtQueryInformationProcess(
                           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                           (PROCESSINFOCLASS)(`RtlpGetCookieValue'::`2'::CookieValue + 36),
                           v135,
                           4u,
                           0LL);
    if ( InformationProcess < 0 )
      RtlRaiseStatus((unsigned int)InformationProcess);
    v3 = v135[0];
    `RtlpGetCookieValue'::`2'::CookieValue = v135[0];
  }
  RtlpUnhandledExceptionFilter = __ROR8__(v3, v3 & 0x3F);
  v5 = NtCurrentTeb();
  v137 = v5;
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
  LdrpInitializeNlsInfo((_QWORD *)ProcessEnvironmentBlock);
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
  qword_180168C00 = 0LL;
  qword_180168C10 = 0LL;
  qword_180168C20 = (__int64)&qword_180168C18;
  qword_180168C18 = (__int64)&qword_180168C18;
  RtlpInitializeNonVolatileFlush();
  v12 = *(_QWORD *)(ProcessEnvironmentBlock + 32);
  v13 = (_WORD *)(*(_QWORD *)(v12 + 104) + v12);
  if ( (*(_BYTE *)(v12 + 8) & 1) != 0 )
    v13 = *(_WORD **)(v12 + 104);
  v130 = (unsigned __int64)v13;
  v128 = *(_WORD *)(v12 + 96);
  v14 = v128;
  v129 = v128 + 2;
  if ( v128 >= 8u && *v13 == 92 && v13[1] == 63 && v13[2] == 63 && v13[3] == 92 )
  {
    v128 -= 8;
    v129 = v14 - 6;
    v130 = (unsigned __int64)(v13 + 4);
    *(_WORD *)(v12 + 96) -= 8;
    *(_WORD *)(v12 + 98) -= 8;
    *(_QWORD *)(v12 + 104) += 8LL;
  }
  v124 = 1;
  UseCOR = 0;
  LOBYTE(v117) = 0;
  v123 = 0;
  RtlImageNtHeaderEx(3, *(_QWORD *)(ProcessEnvironmentBlock + 16), 0LL, &v131);
  v15 = v131;
  LdrpAppHeaders = v131;
  if ( LdrpIsSecureProcess && (*(_BYTE *)(v131 + 22) & 0x20) == 0 )
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
  RtlImageNtHeaderEx(3, a2, 0LL, &v149);
  v20 = *(_DWORD *)(v149 + 80);
  RtlInsertInvertedFunctionTable(a2, v20);
  RtlCreateInvertedFunctionTableCacheEntry(a2, v20);
  LdrpCaptureCriticalThunks();
  LdrProtectMrdata(1);
  if ( LdrControlFlowGuardEnforcedWithExportSuppression(v21) )
    LdrpSuppressedExportOverrideListPtr = (__int64)&LdrpSuppressedExportOverrideList;
  v168 = xmmword_18017F390;
  v169 = qword_18017F3A0;
  v22 = (_mm_srli_si128((__m128i)xmmword_18017F390, 8).m128i_u64[0] >> 4) & 3;
  LdrpEnforceIntegrityContinuity = (_BYTE)v22 == 1;
  if ( (_BYTE)v22 == 1 || (v170 = xmmword_18017F390, v171 = qword_18017F3A0, v23 = (_BYTE)v22 == 3, v24 = 0, v23) )
    v24 = 1;
  LdrpAuditIntegrityContinuity = v24;
  v25 = 0;
  LODWORD(v26) = LdrpInitializeExecutionOptions(&v128, ProcessEnvironmentBlock, a2, &v134, &v125, (__int64)&v151);
  ApplicationKeyOption = v26;
  if ( (int)v26 < 0 )
  {
    v27 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        3963,
        "LdrpInitializeProcess",
        0,
        "Initializing the execution options for the process %lx failed with status 0x%08lx\n",
        LODWORD(v5->ClientId.UniqueProcess),
        v26);
      LODWORD(v26) = ApplicationKeyOption;
      v27 = LdrpDebugFlags;
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
  v145 = 0LL;
  WowTebOffset = v137->WowTebOffset;
  UseWOW64 = WowTebOffset > 0;
  if ( v15 && *(_WORD *)(v15 + 24) == 267 && WowTebOffset <= 0 )
  {
    UseCOR = 1;
    LOBYTE(v15) = 1;
    v117 = v15;
    v25 = 1;
    LODWORD(v26) = LdrpCorFixupImage(*(_QWORD *)(ProcessEnvironmentBlock + 16));
    ApplicationKeyOption = v26;
    if ( (int)v26 < 0 )
      return (unsigned int)v26;
  }
  else
  {
    LOBYTE(v15) = v117;
  }
  if ( !UseWOW64 && !UseCOR )
  {
    v29 = RtlpImageDirectoryEntryToDataEx(*(_QWORD *)(ProcessEnvironmentBlock + 16), 1, 0xEu, &v148, v142);
    v30 = v142[0];
    if ( v29 < 0 )
      v30 = 0LL;
    v142[0] = v30;
    if ( v30 )
    {
      UseCOR = 1;
      LODWORD(v15) = (unsigned __int8)v15;
      if ( (*(_BYTE *)(v30 + 16) & 1) != 0 )
        LODWORD(v15) = 1;
      v117 = v15;
    }
  }
  LdrpSystemDllBase = a2;
  if ( !UseWOW64 )
    v145 = *(_QWORD *)(ProcessEnvironmentBlock + 728);
  RtlpTimeout = *(_QWORD *)(ProcessEnvironmentBlock + 192);
  v31 = RtlNormalizeProcessParams(*(_QWORD *)(ProcessEnvironmentBlock + 32));
  if ( UseWOW64 || UseCOR && v25 )
    Config = 0LL;
  else
    Config = LdrImageDirectoryEntryToLoadConfig(*(_QWORD *)(ProcessEnvironmentBlock + 16));
  if ( Config )
  {
    v33 = *Config;
    if ( *Config >= 0x10 )
    {
      *(_DWORD *)(ProcessEnvironmentBlock + 188) &= ~Config[3];
      v33 = *Config;
    }
    if ( v33 >= 0x14 )
    {
      *(_DWORD *)(ProcessEnvironmentBlock + 188) |= Config[4];
      v33 = *Config;
    }
    if ( v33 >= 0x18 && Config[5] )
      RtlpTimeout = -10000LL * (int)Config[5];
  }
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 188) & 2) != 0 )
    LdrpDebugFlags |= 1u;
  v34 = RtlpTimeoutDisable;
  if ( RtlpTimeout < -36000000000LL )
    v34 = 1;
  RtlpTimeoutDisable = v34;
  RtlFailedCriticalDebugAllocations = 0;
  if ( ((unsigned __int8)&RtlCriticalSectionDebugSList & 0xF) != 0 )
    goto LABEL_333;
  RtlCriticalSectionDebugSList = 0LL;
  v35 = &RtlpStaticDebugInfo;
  do
  {
    *v35 = v35 + 6;
    v35 += 6;
  }
  while ( v35 <= qword_180168F60 );
  *v35 = 0LL;
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
    RtlSetBits(*(_QWORD *)(ProcessEnvironmentBlock + 120), 0, 0x13u);
  RtlSetBits(*(_QWORD *)(ProcessEnvironmentBlock + 120), 4u, 1u);
  RtlSetBits(*(_QWORD *)(ProcessEnvironmentBlock + 120), 0x10u, 1u);
  v36 = *(_DWORD *)(ProcessEnvironmentBlock + 188);
  if ( (v36 & 0x1000) != 0 || (v37 = LdrpShouldCreateStackTraceDb) != 0 )
  {
    v38 = 24;
    v122 = 24;
    if ( LdrpIsSecureProcess )
    {
      v39 = -1073741772;
    }
    else
    {
      LOBYTE(v114) = 0;
      v39 = RtlQueryImageFileExecutionOptions(&v128, (__int64)L"StackTraceDatabaseSizeInMb", 4u, (__int64)&v122, 4, 0LL);
      v38 = v122;
    }
    if ( v39 >= 0 && v38 >= 0x18 )
    {
      if ( v38 <= 0x80 )
        v7 = v38 << 20;
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
    v161[0] = 0LL;
    v161[1] = 0LL;
    v161[2] = v7;
    RtlControlStackTraceDataBase(0LL, 24LL, v161);
    v36 = *(_DWORD *)(ProcessEnvironmentBlock + 188);
    v37 = LdrpShouldCreateStackTraceDb;
  }
  if ( (v36 & 0x1000) != 0 || v37 )
    RtlpForceCSDebugInfoCreation = 1;
  if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x400000) != 0 )
  {
    RtlpForceCSDebugInfoCreation = 1;
    RtlpForceCSToUseEvents = 1;
  }
  LODWORD(v26) = RtlInitializeCriticalSectionEx((__int64)&FastPebLock, 0LL, 0);
  ApplicationKeyOption = v26;
  if ( (int)v26 < 0 )
    return (unsigned int)v26;
  *(_QWORD *)(ProcessEnvironmentBlock + 56) = &FastPebLock;
  LODWORD(v26) = RtlInitializeHeapManager(&v128);
  ApplicationKeyOption = v26;
  if ( (int)v26 < 0 )
    return (unsigned int)v26;
  v172 = xmmword_18017F390;
  v173 = qword_18017F3A0;
  if ( (((unsigned __int64)xmmword_18017F390 >> 12) & 3) == 1 )
    RtlSetHeapInformation(0LL, 1, 0LL, 0LL);
  v40 = LdrpInitializeProcessHeap(Config, v131, v31);
  v41 = (void *)v40;
  if ( !v40 )
  {
    v42 = LdrpDebugFlags;
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
  *(_QWORD *)(ProcessEnvironmentBlock + 48) = v40;
  RtlInitializeCriticalSectionEx((__int64)&LdrpEnclaveListLock, 0LL, 0);
  qword_18016ABD8 = (__int64)&LdrpEnclaveList;
  LdrpEnclaveList = (__int64)&LdrpEnclaveList;
  if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x800000) != 0 )
    RtlInitializeExceptionLog();
  RtlpInitializeThreadActivationContextStack((__int64)v137);
  LdrpHeap = (__int64)v41;
  if ( ((unsigned __int8)&EtwpFreeRegistrationList & 0xF) != 0 )
LABEL_333:
    RtlRaiseStatus(2147483650LL);
  EtwpFreeRegistrationList = 0LL;
  PrivateLoggerNotificationEntry = 0LL;
  ApplicationKeyOption = NtQuerySystemInformation(SystemHypervisorSharedPageInformation, &SystemInformation, 8u, 0LL);
  v43 = RtlpHypervisorSharedUserVa;
  if ( ApplicationKeyOption >= 0 )
    v43 = SystemInformation;
  RtlpHypervisorSharedUserVa = v43;
  NtdllBaseTag = RtlCreateTagHeap(v41, 0, (__int64)L"NTDLL!", L"!Process");
  LODWORD(v26) = TpInitializePackage();
  ApplicationKeyOption = v26;
  if ( (int)v26 < 0 )
    return (unsigned int)v26;
  v46 = *(unsigned int *)(v31 + 1080);
  if ( (_DWORD)v46 )
    TpSetDefaultPoolCpuSets(*(void **)(v31 + 1072));
  v47 = *(_DWORD *)(v31 + 1084);
  if ( v47 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&TppPoolpGlobalPoolLock, v46, v44, v45);
    TppPoolpGlobalPoolMaxThreadsOverride = v47;
    RtlReleaseSRWLockExclusive(&TppPoolpGlobalPoolLock);
  }
  EtwEventRegister((int)&PrivateLoggerNotificationGuid, 0LL, 0LL, (__int64)&g_hPrivLoggerNotificationProvider);
  EtwEventRegister(
    (int)&UserDiagnosticGuid,
    (__int64)UserDiagnosticProviderCallback,
    0LL,
    (__int64)&g_hUserDiagnosticProvider);
  EtwEventRegister(
    (int)&WindowsHeapSnapshotProvider,
    (__int64)RtlpHpStackTraceEtwCallback,
    0LL,
    (__int64)&RtlpHpStackTraceProviderHandle);
  if ( (RtlpHpHeapFeatures & 8) != 0 )
    TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation((__int64 *)&dword_1801645C8);
  LODWORD(v26) = RtlpInitEnvironmentBlock();
  ApplicationKeyOption = v26;
  if ( (int)v26 < 0 )
    return (unsigned int)v26;
  inited = RtlpInitParameterBlock();
  v26 = (unsigned int)inited;
  ApplicationKeyOption = inited;
  if ( inited < 0 )
    return (unsigned int)v26;
  v49 = *(_QWORD *)(ProcessEnvironmentBlock + 32);
  v133 = v49;
  v139 = *(__m128i *)(v49 + 96);
  v130 = _mm_srli_si128(v139, 8).m128i_u64[0];
  v50 = v134;
  if ( v134 || v125 )
  {
    ApplicationKeyOption = RtlQueryApplicationKeyOption(
                             (__int64)v125,
                             (__int64)v134,
                             (__int64)L"DebugProcessHeapOnly",
                             4u,
                             (__int64)&v123,
                             4,
                             v114,
                             0LL);
    if ( ApplicationKeyOption >= 0 && dword_1801649B8 && v123 )
    {
      dword_1801649B8 = 0;
      *(_DWORD *)RtlpDebugPageHeapTable &= ~0x400u;
    }
  }
  NtSystemRoot = RtlGetNtSystemRoot(v26, (__int64)v50);
  RtlInitUnicodeStringEx((__int64)&v140, NtSystemRoot);
  v52 = v140.Length + 40;
  Heap = RtlAllocateHeap((__int64)v41, 0, (unsigned int)v140.Length + 38 + 2LL);
  if ( !Heap )
    return 3221225495LL;
  LOWORD(v127) = 0;
  WORD1(v127) = v52;
  *((_QWORD *)&v127 + 1) = Heap;
  RtlAppendUnicodeStringToString((unsigned __int16 *)&v127, (const void **)&v140);
  RtlAppendUnicodeStringToString((unsigned __int16 *)&v127, &SlashSystem32SlashString);
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 0x42) != 2 )
  {
    v54 = 48LL;
    v154 = 48;
    v155 = 0LL;
    v157 = 64;
    v156 = &v146;
    v158 = 0LL;
    LODWORD(v26) = ZwOpenDirectoryObject();
    ApplicationKeyOption = v26;
    if ( (_DWORD)v26 != -1073741772 || (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 0x40) == 0 )
    {
      if ( (int)v26 < 0 )
      {
        v27 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) == 0 )
          goto LABEL_300;
        LODWORD(v114) = v26;
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          4605,
          "LdrpInitializeProcess",
          0,
          "Failed to open %wZ with status 0x%08lx\n",
          &v146,
          v114);
        goto LABEL_299;
      }
      v154 = 48;
      v155 = LdrpKnownDllDirectoryHandle;
      v157 = 64;
      v156 = (int *)&unk_18011D340;
      v158 = 0LL;
      LODWORD(v26) = ZwOpenSymbolicLinkObject();
      ApplicationKeyOption = v26;
      if ( (int)v26 >= 0 )
      {
        while ( 1 )
        {
          v55 = RtlAllocateHeap((__int64)v41, 0, v54);
          if ( !v55 )
            return 3221225495LL;
          LdrpKnownDllPath = 0;
          word_18016A012 = v54;
          qword_18016A018 = v55;
          SymbolicLinkObject = NtQuerySymbolicLinkObject();
          LODWORD(v26) = SymbolicLinkObject;
          ApplicationKeyOption = SymbolicLinkObject;
          if ( SymbolicLinkObject >= 0 )
          {
            NtClose((HANDLE)v142[1]);
            v49 = v133;
            goto LABEL_147;
          }
          if ( SymbolicLinkObject != -1073741789 )
          {
            v27 = LdrpDebugFlags;
            if ( (LdrpDebugFlags & 3) == 0 )
              goto LABEL_300;
            v57 = "Querying the known DLL directory link object failed with status 0x%08lx\n";
            v58 = 4663;
            goto LABEL_320;
          }
          RtlFreeHeap((__int64)v41, 0, v55);
          v54 = v135[1];
        }
      }
      v27 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LODWORD(v114) = v26;
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          4628,
          "LdrpInitializeProcess",
          0,
          "Failed to open %wZ with status 0x%08lx\n",
          &unk_18011D340,
          v114);
LABEL_299:
        LODWORD(v26) = ApplicationKeyOption;
        v27 = LdrpDebugFlags;
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
    UnicodeString = v140;
    v61 = 0;
  }
  else
  {
    v59 = *(__m128i *)(v49 + 56);
    *(_QWORD *)&UnicodeString.Length = *(_QWORD *)(v49 + 56);
    v60 = (wchar_t *)_mm_srli_si128(v59, 8).m128i_u64[0];
    UnicodeString.Buffer = v60;
    v61 = 0;
    if ( !v60 || !UnicodeString.Length || !*v60 )
    {
      v64 = (wchar_t *)RtlAllocateHeap((__int64)v41, 0, 8LL);
      UnicodeString.Buffer = v64;
      if ( !v64 )
      {
        v42 = LdrpDebugFlags;
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
      v124 = 0;
      v65 = RtlGetNtSystemRoot(v63, v62);
      *(_DWORD *)v64 = *(_DWORD *)v65;
      v64[2] = *(_WORD *)(v65 + 4);
      UnicodeString.Buffer[3] = 0;
      *(_DWORD *)&UnicodeString.Length = 524294;
    }
  }
  LdrpInitializePolicy();
  v66 = (unsigned __int16)v127;
  if ( (*(_DWORD *)(*(_QWORD *)(ProcessEnvironmentBlock + 32) + 8LL) & 0x20000000) != 0 )
  {
    v61 = (LdrpPolicyBits & 0x100) != 0;
    v66 = 2LL * (unsigned __int16)v127 + 22;
    if ( (LdrpPolicyBits & 0x100) != 0 )
      v66 = (unsigned __int16)v127 + 2LL * (unsigned __int16)v127 + 52;
  }
  v67 = v66;
  if ( (LdrpPolicyBits & 1) == 0 )
  {
    v67 = v66 + 2 * (v140.Length + 9LL);
    if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 2) != 0 )
      *(_WORD *)(v133 + 80) = 0;
  }
  *((_QWORD *)&v121 + 1) = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v67);
  if ( !*((_QWORD *)&v121 + 1) )
  {
    v42 = LdrpDebugFlags;
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
  LOWORD(v121) = 0;
  WORD1(v121) = v67;
  RtlAppendUnicodeStringToString((unsigned __int16 *)&v121, (const void **)&v127);
  v68 = (unsigned __int16)v121;
  *(_WORD *)(*((_QWORD *)&v121 + 1) + 2 * ((unsigned __int64)(unsigned __int16)v121 >> 1) - 2) = 59;
  RtlpSystem32Dirs = v121;
  LdrpSystem32 = v121;
  LOWORD(v68) = v68 - 2;
  LOWORD(LdrpSystem32) = v68;
  if ( (*(_DWORD *)(*(_QWORD *)(ProcessEnvironmentBlock + 32) + 8LL) & 0x20000000) != 0 )
  {
    if ( v61 )
    {
      RtlAppendUnicodeStringToString((unsigned __int16 *)&v121, (const void **)&v127);
      RtlAppendUnicodeToString((unsigned __int16 *)&v121, L"forwarders\\alt;");
    }
    RtlAppendUnicodeStringToString((unsigned __int16 *)&v121, (const void **)&v127);
    RtlAppendUnicodeToString((unsigned __int16 *)&v121, L"forwarders;");
  }
  if ( v67 > v66 )
  {
    RtlAppendUnicodeStringToString((unsigned __int16 *)&v121, (const void **)&v140);
    RtlAppendUnicodeToString((unsigned __int16 *)&v121, L"\\system;");
    RtlAppendUnicodeStringToString((unsigned __int16 *)&v121, (const void **)&v140);
    RtlAppendUnicodeToString((unsigned __int16 *)&v121, L";");
    RtlpSystemDirs = v121;
  }
  if ( (unsigned int)(LdrpIllegalCWDDevices - 1) <= 0xFFFFFFFD )
    LdrpCheckAppDirType(&v139, v68);
  v69 = v143;
  RtlImageNtHeaderEx(3, v143, 0LL, &v136);
  ModuleEntry = LdrpAllocateModuleEntry(0LL);
  v71 = ModuleEntry;
  if ( !ModuleEntry )
  {
    v42 = LdrpDebugFlags;
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
  *(_DWORD *)(*(_QWORD *)(ModuleEntry + 152) + 24LL) = -1;
  *(_WORD *)(**(_QWORD **)(LdrpNtDllDataTableEntry + 152) - 52LL) = -1;
  v72 = LdrpNtDllDataTableEntry;
  *(_DWORD *)(LdrpNtDllDataTableEntry + 104) |= 0x204u;
  *(_QWORD *)(v72 + 248) -= qword_18017F300;
  v72 += 72LL;
  *(_OWORD *)v72 = v127;
  RtlAppendUnicodeStringToString((unsigned __int16 *)v72, &NtDllName);
  v73 = LdrpNtDllDataTableEntry;
  *(_OWORD *)(LdrpNtDllDataTableEntry + 88) = *(_OWORD *)&NtDllName;
  *(_QWORD *)(v73 + 48) = v69;
  LdrpInsertDataTableEntry(v73);
  LdrpLogDllState(*(_QWORD *)(LdrpNtDllDataTableEntry + 48), LdrpNtDllDataTableEntry + 72, 0x14A5u);
  LdrpInsertModuleToIndex(LdrpNtDllDataTableEntry, v136, v74, v75);
  LODWORD(v26) = LdrpProcessMappedModule(LdrpNtDllDataTableEntry, 0, 1);
  ApplicationKeyOption = v26;
  if ( (int)v26 < 0 )
    return (unsigned int)v26;
  LdrpLogDllState(*(_QWORD *)(LdrpNtDllDataTableEntry + 48), LdrpNtDllDataTableEntry + 72, 0x14AEu);
  *(_DWORD *)(*(_QWORD *)(LdrpNtDllDataTableEntry + 152) + 56LL) = 9;
  RtlInitializeHistoryTable();
  v76 = (_QWORD *)(v71 + 32);
  v77 = qword_18016A4F0;
  if ( *(__int64 **)(qword_18016A4F0 + 8) != &qword_18016A4F0 )
    __fastfail(3u);
  *v76 = qword_18016A4F0;
  *(_QWORD *)(v71 + 40) = &qword_18016A4F0;
  *(_QWORD *)(v77 + 8) = v76;
  qword_18016A4F0 = v71 + 32;
  LODWORD(v26) = LdrpInitParallelLoadingSupport();
  ApplicationKeyOption = v26;
  if ( (int)v26 < 0 )
  {
    v27 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) == 0 )
      goto LABEL_300;
    v57 = "Failed to initialize Parallel loader, st = 0x%x\n";
    v58 = 5001;
    goto LABEL_320;
  }
  LdrpDrainWorkQueue(0);
  LdrpInitializeDllPath(0LL, 0LL, v175);
  memset(v174, 0, sizeof(v174));
  *(_QWORD *)&v174[1] = v175;
  LODWORD(v174[2]) = 512;
  v174[0] = v139;
  *((_QWORD *)&v174[2] + 1) = &ApplicationKeyOption;
  v78 = LdrpAllocateModuleEntry((__int64)v174);
  v79 = v78;
  if ( !v78 )
  {
    v42 = LdrpDebugFlags;
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
  LdrpImageEntry = v78;
  v80 = 2LL;
  do
  {
    *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 24LL) = -1;
    --v80;
  }
  while ( v80 );
  *(_WORD *)(**(_QWORD **)(LdrpImageEntry + 152) - 52LL) = -1;
  v81 = LdrpImageEntry;
  *(__m128i *)(LdrpImageEntry + 72) = v139;
  *(_DWORD *)(v81 + 104) |= 4u;
  v82 = *(_DWORD *)(v81 + 104);
  if ( (NtCurrentPeb()->BitField & 0x10) != 0 )
  {
    v82 |= 1u;
    *(_DWORD *)(v81 + 104) = v82;
  }
  v83 = v117;
  if ( UseCOR )
  {
    v84 = v82 | 0x400000;
    *(_DWORD *)(v81 + 104) = v84;
    if ( v83 )
      *(_DWORD *)(v81 + 104) = v84 | 0x1000000;
  }
  v85 = LdrpImageEntry;
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 4) != 0 )
    *(_QWORD *)(LdrpImageEntry + 248) = 0LL;
  v86 = 0LL;
  v87 = (_WORD *)(v139.m128i_i64[1] + v139.m128i_u16[0]);
  if ( v87 )
  {
    while ( 1 )
    {
      v88 = (unsigned __int64)v87--;
      if ( v88 <= v139.m128i_i64[1] )
        break;
      if ( *v87 == 92 )
      {
        v86 = v88;
        break;
      }
    }
  }
  if ( v86 )
  {
    v89 = v139.m128i_i16[4] + v139.m128i_i16[0] - v86;
    *(_WORD *)(v85 + 88) = v89;
    if ( v139.m128i_u16[1] - (unsigned __int64)v139.m128i_u16[0] >= 2 )
      v89 += 2;
    *(_WORD *)(v85 + 90) = v89;
    *(_QWORD *)(v85 + 96) = v86;
  }
  else
  {
    *(_OWORD *)(v85 + 88) = *(_OWORD *)(v79 + 72);
  }
  v90 = *(const void **)(ProcessEnvironmentBlock + 16);
  v91 = v90;
  v92 = v131;
  if ( *(const void **)(v131 + 48) != v90 && !v83 && !UseWOW64 )
  {
    LODWORD(v26) = LdrpProtectAndRelocateImage(v90);
    ApplicationKeyOption = v26;
    if ( (int)v26 < 0 )
      return (unsigned int)v26;
    v91 = *(const void **)(ProcessEnvironmentBlock + 16);
    v85 = LdrpImageEntry;
  }
  *(_QWORD *)(v85 + 48) = v91;
  LdrpInsertDataTableEntry(v85);
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
  LdrpInsertModuleToIndex(LdrpImageEntry, v92, v93, v94);
  LODWORD(v26) = LdrpProcessMappedModule(LdrpImageEntry, 0, UseWOW64 == 0);
  ApplicationKeyOption = v26;
  if ( (int)v26 < 0 )
    return (unsigned int)v26;
  *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 56LL) = 9;
  v95 = RtlpInitCurrentDir(&UnicodeString.Length);
  ApplicationKeyOption = v95;
  if ( v95 < 0 )
  {
    v96 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LODWORD(v114) = v95;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        5182,
        "LdrpInitializeProcess",
        0,
        "Initializing the current directory to \"%wZ\" failed with status 0x%08lx\n",
        &UnicodeString,
        v114);
      v96 = LdrpDebugFlags;
    }
    if ( (v96 & 0x10) != 0 )
      __debugbreak();
  }
  if ( !v124 )
    RtlFreeAnsiString(&UnicodeString);
  if ( AvrfAppVerifierMode )
  {
    v97 = LdrpAllocateModuleEntry(0LL);
    v98 = v97;
    if ( !v97 )
    {
      v42 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) == 0 )
      {
LABEL_187:
        if ( (v42 & 0x10) != 0 )
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
      v42 = LdrpDebugFlags;
      goto LABEL_187;
    }
    *(_DWORD *)(*(_QWORD *)(v97 + 152) + 24LL) = -1;
    *(_WORD *)(**(_QWORD **)(v97 + 152) - 52LL) = -1;
    v99 = v151;
    *(_DWORD *)(v97 + 104) |= *(_DWORD *)(v151 + 104);
    *(_QWORD *)(v97 + 248) = *(_QWORD *)(v99 + 248);
    *(_WORD *)(v97 + 110) = 0;
    *(_OWORD *)(v97 + 72) = *(_OWORD *)(v99 + 72);
    *(_OWORD *)(v97 + 88) = *(_OWORD *)(v99 + 88);
    *(_DWORD *)(v97 + 128) = *(_DWORD *)(v99 + 128);
    *(_QWORD *)(v97 + 48) = *(_QWORD *)(v99 + 48);
    LdrpInsertDataTableEntry(v97);
    LdrpLogDllState(*(_QWORD *)(v98 + 48), v98 + 72, 0x14A5u);
    LODWORD(v26) = RtlImageNtHeaderEx(3, *(_QWORD *)(v98 + 48), 0LL, &v136);
    ApplicationKeyOption = v26;
    if ( (int)v26 < 0 )
      return (unsigned int)v26;
    LdrpInsertModuleToIndex(v98, v136, v100, v101);
    LODWORD(v26) = LdrpProcessMappedModule(v98, 0, 1);
    ApplicationKeyOption = v26;
    if ( (int)v26 < 0 )
      return (unsigned int)v26;
    *(_QWORD *)(v98 + 56) = *(_QWORD *)(v99 + 56);
    LdrpLogDllState(*(_QWORD *)(v98 + 48), v98 + 72, 0x14ADu);
    *(_DWORD *)(*(_QWORD *)(v98 + 152) + 56LL) = 7;
    if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x100) == 0 && (AvrfAppVerifierMode & 2) == 0 )
    {
      v118 = 0;
      LODWORD(v26) = LdrpInitializeGraphRecurse(*(__int64 **)(v98 + 152), 0LL, &v118);
      ApplicationKeyOption = v26;
    }
    else
    {
      LODWORD(v26) = AVrfInitializeVerifier(0, 0, 0, 1, v143, 0LL);
      ApplicationKeyOption = v26;
      if ( (int)v26 >= 0 && (AvrfAppVerifierMode & 2) != 0 )
      {
        *(_DWORD *)(*(_QWORD *)(v98 + 152) + 56LL) = 9;
        LODWORD(v26) = ApplicationKeyOption;
      }
    }
    if ( (int)v26 < 0 )
      return (unsigned int)v26;
    v92 = v131;
  }
  LdrpDropLastInProgressCount();
  if ( !UseWOW64 )
  {
    v144 = 0LL;
    if ( UseCOR )
    {
      LODWORD(v26) = LdrpCorInitialize(&v144);
      ApplicationKeyOption = v26;
      if ( (int)v26 < 0 )
        return (unsigned int)v26;
      v102 = v117;
      if ( (_BYTE)v117 )
      {
        LODWORD(v26) = LdrpCorValidateImage(*(_QWORD *)(ProcessEnvironmentBlock + 16));
        ApplicationKeyOption = v26;
        if ( (int)v26 < 0 )
          return (unsigned int)v26;
      }
      if ( (v137->SameTebFlags & 0x400) != 0 )
        *(_QWORD *)(v138 + 128) = __ROR8__(LdrpCorExeMainRoutine, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330];
    }
    else
    {
      v102 = v117;
    }
    LODWORD(v26) = LdrpInitializeTls();
    ApplicationKeyOption = v26;
    if ( (int)v26 < 0 )
    {
      v27 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) == 0 )
        goto LABEL_300;
      v57 = "Initializing TLS slots failed with status 0x%08lx\n";
      v58 = 5432;
      goto LABEL_320;
    }
    if ( v144 )
    {
      v119 = 0;
      LODWORD(v26) = LdrpInitializeGraphRecurse(*(__int64 **)(v144 + 152), 0LL, &v119);
      ApplicationKeyOption = v26;
      if ( (int)v26 < 0 )
      {
        v27 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) == 0 )
          goto LABEL_300;
        v57 = "DllMain of MSCOREE (or its dependents) failed with status 0x%08lx\n";
        v58 = 5451;
        goto LABEL_320;
      }
    }
    LODWORD(v26) = LdrpInitializeImportRedirection();
    ApplicationKeyOption = v26;
    if ( (int)v26 < 0 )
    {
      v27 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) == 0 )
        goto LABEL_300;
      v57 = "Loading of import redirection module failed with status 0x%08x\n";
      v58 = 5467;
      goto LABEL_320;
    }
    v141 = 0LL;
    if ( (unsigned __int16)(*(_WORD *)(v92 + 92) - 2) <= 1u )
    {
      LODWORD(v26) = LdrLoadDll(16385LL, 0LL, (__int64)LdrpKernel32DllName, &v132);
      ApplicationKeyOption = v26;
      if ( (int)v26 < 0 )
      {
        if ( (_DWORD)v26 != -1073741515 )
        {
          v27 = LdrpDebugFlags;
          if ( (LdrpDebugFlags & 3) == 0 )
            goto LABEL_300;
          LODWORD(v114) = v26;
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5625,
            "LdrpInitializeProcess",
            0,
            "Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
            LdrpKernel32DllName,
            v114);
          goto LABEL_299;
        }
        LODWORD(v26) = LdrLoadDll(16385LL, 0LL, (__int64)LdrpKernelbaseDllName, &v132);
        ApplicationKeyOption = v26;
        if ( (int)v26 < 0 )
        {
          v27 = LdrpDebugFlags;
          if ( (LdrpDebugFlags & 3) == 0 )
            goto LABEL_300;
          LODWORD(v114) = v26;
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5598,
            "LdrpInitializeProcess",
            0,
            "Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
            LdrpKernelbaseDllName,
            v114);
          goto LABEL_299;
        }
        LODWORD(v26) = LdrpCodeAuthzInitialize();
        ApplicationKeyOption = v26;
        if ( (int)(v26 + 0x80000000) >= 0 && (_DWORD)v26 != -1073741515 )
        {
          v27 = LdrpDebugFlags;
          if ( (LdrpDebugFlags & 3) == 0 )
            goto LABEL_300;
          v57 = "LdrpCodeAuthzInitialize failed with status 0x%08lx\n";
          v58 = 5614;
          goto LABEL_320;
        }
        ApplicationKeyOption = 0;
        v103 = v132;
      }
      else
      {
        LODWORD(v26) = LdrGetProcedureAddressForCaller(
                         v132,
                         &qword_18011D3A0,
                         0,
                         &Kernel32ThreadInitThunkFunction,
                         0,
                         retaddr);
        ApplicationKeyOption = v26;
        if ( (int)v26 < 0 )
        {
          v27 = LdrpDebugFlags;
          if ( (LdrpDebugFlags & 3) == 0 )
            goto LABEL_300;
          LODWORD(v115) = v26;
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5512,
            "LdrpInitializeProcess",
            0,
            "Locating procedure \"%Z\" in Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
            &qword_18011D3A0,
            LdrpKernel32DllName,
            v115);
          goto LABEL_299;
        }
        LdrGetProcedureAddressForCaller(v132, &qword_18011D3C0, 0, &v141, 0, retaddr);
        LODWORD(v26) = LdrpSnapKernelBaseExtensions();
        ApplicationKeyOption = v26;
        if ( (int)v26 < 0 )
          return (unsigned int)v26;
        LODWORD(v26) = LdrpCodeAuthzInitialize();
        ApplicationKeyOption = v26;
        if ( (int)v26 < 0 )
          return (unsigned int)v26;
        LODWORD(v26) = LdrpFindLoadedDll(LdrpKernelbaseDllName, 0, &v152);
        ApplicationKeyOption = v26;
        if ( (int)v26 < 0 )
        {
          v27 = LdrpDebugFlags;
          if ( (LdrpDebugFlags & 3) == 0 )
            goto LABEL_300;
          LODWORD(v114) = v26;
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5580,
            "LdrpInitializeProcess",
            0,
            "Finding \"%wZ\" failed with status 0x%08lx\n",
            LdrpKernelbaseDllName,
            v114);
          goto LABEL_299;
        }
        v103 = *(_QWORD *)(v152 + 48);
      }
      ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(v103, &qword_18011D420, 0, &v153, 0, retaddr);
      LODWORD(v26) = ProcedureAddressForCaller;
      ApplicationKeyOption = ProcedureAddressForCaller;
      if ( ProcedureAddressForCaller < 0 )
      {
        v27 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) == 0 )
          goto LABEL_300;
        v57 = "Finding KernelbasePostInit failed with status 0x%08lx\n";
        v58 = 5643;
        goto LABEL_320;
      }
      LODWORD(v26) = v153((unsigned int)ProcedureAddressForCaller);
      ApplicationKeyOption = v26;
      if ( (int)v26 < 0 )
      {
        v27 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) == 0 )
          goto LABEL_300;
        v57 = "Calling KernelbasePostInit failed with status 0x%08lx\n";
        v58 = 5651;
        goto LABEL_320;
      }
      ApplicationKeyOption = 0;
    }
    LdrpDrainWorkQueue(0);
    SbObtainTraceHandle(0LL);
    v105 = v145;
    if ( v145 && *(_DWORD *)(v145 + 528) )
    {
      *(_QWORD *)(ProcessEnvironmentBlock + 736) = 0LL;
      LdrpInitShimEngine(v105);
    }
    v106 = RtlpForceCSDebugInfoCreation;
    if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x400000) != 0 )
      v106 = 1;
    RtlpForceCSDebugInfoCreation = v106;
    if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x10000000) != 0 )
    {
      *(_DWORD *)(v133 + 1036) = 1;
      v107 = 1;
    }
    else
    {
      v107 = *(_DWORD *)(v133 + 1036);
    }
    LdrpEnableParallelLoading(v107);
    LdrInitState = 1;
    *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 56LL) = 2;
    **((_DWORD **)&v174[2] + 1) = 0;
    if ( v102 )
    {
      v108 = LdrpCorProcessImports(LdrpImageEntry);
    }
    else
    {
      LODWORD(v174[2]) |= 1u;
      LdrpMapAndSnapDependency((__int64)v174);
      LdrpDrainWorkQueue(1);
      LODWORD(v26) = ApplicationKeyOption;
      if ( ApplicationKeyOption < 0 )
        goto LABEL_308;
      v108 = LdrpPrepareModuleForExecution(LdrpImageEntry, *((__int64 *)&v174[2] + 1));
    }
    ApplicationKeyOption = v108;
    LODWORD(v26) = v108;
    if ( v108 >= 0 )
    {
      LdrInitState = 2;
      v135[2] = 1;
      v159 = *(_QWORD *)(LdrpImageEntry + 48);
      v160 = 4096LL;
      ZwSetInformationVirtualMemory();
      if ( *(_BYTE *)(ProcessEnvironmentBlock + 2) )
        LdrpDoDebuggerBreak();
      LdrpDropLastInProgressCount();
      if ( Kernel32ThreadInitThunkFunction )
      {
        LODWORD(v26) = Kernel32ThreadInitThunkFunction(1LL, 0LL, 0LL, v109);
        ApplicationKeyOption = v26;
        if ( (int)v26 < 0 )
          return (unsigned int)v26;
        LODWORD(v26) = LdrpInitializePerUserWindowsDirectory(v141);
        ApplicationKeyOption = v26;
        if ( (int)v26 < 0 )
          return (unsigned int)v26;
      }
      LdrpProcessInitContextRecord = v138;
      LdrpDrainWorkQueue(0);
      LdrpAcquireLoaderLock();
      v120[0] = 0;
      ApplicationKeyOption = LdrpInitializeGraphRecurse(
                               *(__int64 **)(LdrpImageEntry + 152),
                               *((__int64 *)&v174[2] + 1),
                               v120);
      LdrpReleaseLoaderLock(v110, 9LL, (unsigned int)ApplicationKeyOption);
      LdrpFreeLoadContextOfNode(*(_QWORD **)(LdrpImageEntry + 152), *((__int64 *)&v174[2] + 1));
      LdrpDropLastInProgressCount();
      LdrpProcessInitContextRecord = 0LL;
      if ( v176 )
        RtlReleasePath(v175[0]);
      v26 = (unsigned int)ApplicationKeyOption;
      if ( ApplicationKeyOption >= 0 )
      {
        v111 = LdrpImageEntry;
        if ( *(_WORD *)(LdrpImageEntry + 110) )
        {
          v162 = 72LL;
          v163 = 1;
          v164 = 0LL;
          v165 = 0LL;
          v166 = 0LL;
          v167 = 0LL;
          RtlActivateActivationContextUnsafeFast((__int64)&v162, *(_QWORD *)(LdrpImageEntry + 136));
          LdrpCallTlsInitializers(1u, LdrpImageEntry);
          RtlDeactivateActivationContextUnsafeFast((__int64)&v162);
        }
        if ( g_ShimsEnabled
          && !((unsigned __int8 (__fastcall *)(unsigned __int16 *, __int64))(__ROR8__(
                                                                               g_pfnSE_InstallAfterInit,
                                                                               64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))(
                &v128,
                v105) )
        {
          g_ShimsEnabled = 0;
          LdrUnloadDll(g_pShimEngineModule);
          g_pShimEngineModule = 0LL;
        }
        v112 = *(void (__fastcall **)(__int64, __int64))(ProcessEnvironmentBlock + 560);
        if ( v112 )
          v112(v26, v111);
        goto LABEL_328;
      }
      v27 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        v57 = "Running the init routines of the executable's static imports failed with status 0x%08lx\n";
        v58 = 6005;
        goto LABEL_320;
      }
LABEL_300:
      if ( (v27 & 0x10) != 0 )
        __debugbreak();
      return (unsigned int)v26;
    }
LABEL_308:
    v27 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      v57 = "Walking the import tables of the executable and its static imports failed with status 0x%08lx\n";
      v58 = 5863;
LABEL_320:
      LODWORD(v113) = v26;
      LdrpLogDbgPrint((unsigned int)"minkernel\\ntdll\\ldrinit.c", v58, "LdrpInitializeProcess", 0, v57, v113);
      goto LABEL_299;
    }
    goto LABEL_300;
  }
  if ( v134 )
  {
    NtClose(v134);
    v134 = 0LL;
    if ( LdrpLargePageDllKeyHandle )
    {
      NtClose(LdrpLargePageDllKeyHandle);
      LdrpLargePageDllKeyHandle = 0LL;
    }
  }
  if ( v125 )
  {
    NtClose(v125);
    v125 = 0LL;
  }
  LODWORD(v26) = LdrpLoadWow64((const void **)&v127);
  ApplicationKeyOption = v26;
  if ( (int)v26 < 0 )
    return (unsigned int)v26;
  if ( *(_BYTE *)(ProcessEnvironmentBlock + 2) )
    LdrpDoDebuggerBreak();
  LdrInitState = 3;
  _interlockedbittestandreset((volatile signed __int32 *)(ProcessEnvironmentBlock + 80), 1u);
  g_LdrpWow64LdrpInitialize(v138);
LABEL_328:
  if ( v134 )
    NtClose(v134);
  if ( v125 )
    NtClose(v125);
  return 0LL;
}
