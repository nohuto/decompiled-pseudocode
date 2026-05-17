/*
 * XREFs of LdrpInitializeProcess @ 0x1800D1EC0
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
 *     NtClose @ 0x18009D820 (NtClose.c)
 *     NtQueryInformationProcess @ 0x18009D960 (NtQueryInformationProcess.c)
 *     NtQuerySystemInformation @ 0x18009DD00 (NtQuerySystemInformation.c)
 *     ZwOpenDirectoryObject @ 0x18009E140 (ZwOpenDirectoryObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x18009FBF0 (ZwOpenSymbolicLinkObject.c)
 *     NtQuerySymbolicLinkObject @ 0x1800A0210 (NtQuerySymbolicLinkObject.c)
 *     ZwSetInformationVirtualMemory @ 0x1800A0A30 (ZwSetInformationVirtualMemory.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1160 (_guard_dispatch_icall_nop.c)
 *     InterlockedPushListSList @ 0x1800A12C0 (InterlockedPushListSList.c)
 *     memset @ 0x1800A4780 (memset.c)
 *     LdrpLogDbgPrint @ 0x1800CDC88 (LdrpLogDbgPrint.c)
 *     LdrpCorFixupImage @ 0x1800CE838 (LdrpCorFixupImage.c)
 *     LdrpCheckAppDirType @ 0x1800D06BC (LdrpCheckAppDirType.c)
 *     LdrpDoDebuggerBreak @ 0x1800D08E0 (LdrpDoDebuggerBreak.c)
 *     LdrpInitializeExecutionOptions @ 0x1800D108C (LdrpInitializeExecutionOptions.c)
 *     LdrpInitializeNlsInfo @ 0x1800D1E80 (LdrpInitializeNlsInfo.c)
 *     LdrpInitializeProcessHeap @ 0x1800D400C (LdrpInitializeProcessHeap.c)
 *     LdrpCaptureCriticalThunks @ 0x1800D4A94 (LdrpCaptureCriticalThunks.c)
 *     LdrpIsNlsUtf8Process @ 0x1800D4C10 (LdrpIsNlsUtf8Process.c)
 *     AVrfInitializeVerifier @ 0x1800D9948 (AVrfInitializeVerifier.c)
 *     RtlCreateInvertedFunctionTableCacheEntry @ 0x1800E0AF4 (RtlCreateInvertedFunctionTableCacheEntry.c)
 *     RtlInitializeHeapManager @ 0x1800F2694 (RtlInitializeHeapManager.c)
 *     RtlpInitializeNonVolatileFlush @ 0x1800FBE34 (RtlpInitializeNonVolatileFlush.c)
 *     RtlInitializeExceptionLog @ 0x180100918 (RtlInitializeExceptionLog.c)
 *     RtlControlStackTraceDataBase @ 0x1801010C8 (RtlControlStackTraceDataBase.c)
 *     RtlRaiseStatus @ 0x1801026C0 (RtlRaiseStatus.c)
 *     TpSetDefaultPoolCpuSets @ 0x180111D58 (TpSetDefaultPoolCpuSets.c)
 */

__int64 __fastcall LdrpInitializeProcess(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  int v4; // r13d
  NTSTATUS InformationProcess; // eax
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
  __int64 v16; // rcx
  char v17; // al
  _QWORD *v19; // rax
  unsigned int v20; // ebx
  __int64 v21; // rcx
  unsigned __int64 v22; // rax
  bool v23; // zf
  char v24; // al
  __int64 v25; // rcx
  char v26; // al
  int WowTebOffset; // ecx
  int v28; // eax
  __int64 v29; // rcx
  unsigned int *Config; // r15
  unsigned int v31; // eax
  char v32; // al
  _QWORD *v33; // rcx
  int v34; // ecx
  char v35; // al
  unsigned int v36; // eax
  int v37; // ecx
  __int64 v38; // r13
  __int64 v39; // rax
  void *v40; // r12
  char v41; // al
  __int64 v42; // rcx
  unsigned __int64 v43; // r8
  unsigned __int64 v44; // r9
  unsigned __int64 v45; // rdx
  int v46; // r15d
  int inited; // eax
  __int64 v48; // r13
  HANDLE v49; // rdx
  __int64 NtSystemRoot; // rax
  __int16 v51; // r15
  __int64 Heap; // rax
  __int64 v53; // r15
  char *v54; // rax
  int v55; // edx
  int SymbolicLinkObject; // eax
  __int64 v57; // r13
  char *v58; // rax
  int v59; // edx
  __m128i v60; // xmm0
  wchar_t *v61; // xmm0_8
  bool v62; // r13
  __int64 v63; // rdx
  __int64 v64; // rcx
  wchar_t *v65; // r15
  __int64 v66; // rax
  unsigned __int64 v67; // r15
  unsigned __int64 v68; // r12
  __int64 v69; // rdx
  __int64 v70; // r12
  __int64 ModuleEntry; // rax
  __int64 v72; // r15
  __int64 v73; // rcx
  __int64 v74; // rcx
  unsigned __int64 v75; // r8
  unsigned __int64 v76; // r9
  _QWORD *v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rax
  __int64 v80; // r11
  __int64 v81; // rdx
  __int64 v82; // rdx
  int v83; // ecx
  char v84; // r12
  int v85; // ecx
  __int64 v86; // rdx
  _WORD *v87; // r9
  unsigned __int64 v88; // r8
  _WORD *v89; // rax
  _WORD *v90; // r10
  __int16 v91; // r8
  const void *v92; // rcx
  const void *v93; // rax
  unsigned __int64 v94; // r15
  unsigned __int64 v95; // r8
  unsigned __int64 v96; // r9
  int v97; // eax
  char v98; // cl
  __int64 v99; // rax
  __int64 v100; // r15
  __int64 v101; // r13
  unsigned __int64 v102; // r8
  unsigned __int64 v103; // r9
  char v104; // r13
  unsigned __int64 v105; // rcx
  int ProcedureAddressForCaller; // eax
  __int64 v107; // r15
  char v108; // al
  unsigned int v109; // ecx
  int v110; // eax
  __int64 v111; // r9
  __int64 v112; // rcx
  __int64 v113; // rdx
  void (__fastcall *v114)(__int64, __int64); // rax
  __int64 v115; // [rsp+28h] [rbp-3F0h]
  int *v116; // [rsp+28h] [rbp-3F0h]
  __int64 v117; // [rsp+30h] [rbp-3E8h]
  __int64 v118; // [rsp+38h] [rbp-3E0h]
  int ApplicationKeyOption; // [rsp+50h] [rbp-3C8h] BYREF
  int v120; // [rsp+54h] [rbp-3C4h]
  char v121; // [rsp+58h] [rbp-3C0h] BYREF
  char v122; // [rsp+59h] [rbp-3BFh] BYREF
  char v123[6]; // [rsp+5Ah] [rbp-3BEh] BYREF
  __int128 v124; // [rsp+60h] [rbp-3B8h] BYREF
  __int64 v125; // [rsp+70h] [rbp-3A8h]
  int v126; // [rsp+78h] [rbp-3A0h] BYREF
  int v127; // [rsp+7Ch] [rbp-39Ch] BYREF
  int v128; // [rsp+80h] [rbp-398h]
  struct _TEB *v129; // [rsp+88h] [rbp-390h]
  HANDLE v130; // [rsp+90h] [rbp-388h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+A0h] [rbp-378h] BYREF
  __int128 v132; // [rsp+B0h] [rbp-368h] BYREF
  unsigned __int16 v133; // [rsp+C0h] [rbp-358h] BYREF
  __int16 v134; // [rsp+C2h] [rbp-356h]
  unsigned __int64 v135; // [rsp+C8h] [rbp-350h]
  __int64 v136; // [rsp+D0h] [rbp-348h] BYREF
  unsigned __int64 v137; // [rsp+D8h] [rbp-340h] BYREF
  HANDLE v138; // [rsp+E0h] [rbp-338h] BYREF
  _DWORD v139[4]; // [rsp+E8h] [rbp-330h] BYREF
  unsigned __int64 v140; // [rsp+F8h] [rbp-320h] BYREF
  __int64 v141; // [rsp+100h] [rbp-318h]
  __int64 v142; // [rsp+108h] [rbp-310h]
  __m128i v143; // [rsp+110h] [rbp-308h] BYREF
  UNICODE_STRING v144; // [rsp+120h] [rbp-2F8h] BYREF
  __int64 v145[2]; // [rsp+130h] [rbp-2E8h] BYREF
  __int64 v146; // [rsp+140h] [rbp-2D8h] BYREF
  __int64 v147; // [rsp+148h] [rbp-2D0h]
  __int64 (__fastcall *v148)(_BYTE *, __int64); // [rsp+150h] [rbp-2C8h] BYREF
  int v149; // [rsp+158h] [rbp-2C0h] BYREF
  const WCHAR *v150; // [rsp+160h] [rbp-2B8h]
  int v151; // [rsp+168h] [rbp-2B0h] BYREF
  __int64 v152; // [rsp+170h] [rbp-2A8h] BYREF
  __int64 SystemInformation; // [rsp+178h] [rbp-2A0h] BYREF
  __int64 v154; // [rsp+180h] [rbp-298h] BYREF
  __int64 v155; // [rsp+188h] [rbp-290h] BYREF
  __int64 (__fastcall *v156)(_QWORD); // [rsp+190h] [rbp-288h] BYREF
  int v157; // [rsp+198h] [rbp-280h]
  __int64 v158; // [rsp+1A0h] [rbp-278h]
  int *v159; // [rsp+1A8h] [rbp-270h]
  int v160; // [rsp+1B0h] [rbp-268h]
  __int128 v161; // [rsp+1B8h] [rbp-260h]
  __int64 v162; // [rsp+1C8h] [rbp-250h]
  __int64 v163; // [rsp+1D0h] [rbp-248h]
  _QWORD v164[3]; // [rsp+1D8h] [rbp-240h] BYREF
  __int64 v165; // [rsp+1F0h] [rbp-228h] BYREF
  int v166; // [rsp+1F8h] [rbp-220h]
  __int128 v167; // [rsp+200h] [rbp-218h]
  __int128 v168; // [rsp+210h] [rbp-208h]
  __int128 v169; // [rsp+220h] [rbp-1F8h]
  __int64 v170; // [rsp+230h] [rbp-1E8h]
  __int128 v171; // [rsp+240h] [rbp-1D8h]
  __int64 v172; // [rsp+250h] [rbp-1C8h]
  __int128 v173; // [rsp+260h] [rbp-1B8h]
  __int64 v174; // [rsp+270h] [rbp-1A8h]
  __int128 v175; // [rsp+280h] [rbp-198h]
  __int64 v176; // [rsp+290h] [rbp-188h]
  _OWORD v177[12]; // [rsp+2A0h] [rbp-178h] BYREF
  __int64 v178[15]; // [rsp+360h] [rbp-B8h] BYREF
  char v179; // [rsp+3DCh] [rbp-3Ch]
  __int64 retaddr; // [rsp+418h] [rbp+0h]

  v141 = a2;
  v142 = a1;
  v149 = 1441812;
  v150 = L"\\KnownDlls";
  v3 = (unsigned int)`RtlpGetCookieValue'::`2'::CookieValue;
  v4 = 0;
  if ( !`RtlpGetCookieValue'::`2'::CookieValue )
  {
    InformationProcess = NtQueryInformationProcess(
                           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                           (PROCESSINFOCLASS)(`RtlpGetCookieValue'::`2'::CookieValue + 36),
                           v139,
                           4u,
                           0LL);
    if ( InformationProcess < 0 )
      RtlRaiseStatus((unsigned int)InformationProcess);
    v3 = v139[0];
    `RtlpGetCookieValue'::`2'::CookieValue = v139[0];
  }
  RtlpUnhandledExceptionFilter = __ROR8__(v3, v3 & 0x3F);
  v129 = NtCurrentTeb();
  ProcessEnvironmentBlock = (__int64)v129->ProcessEnvironmentBlock;
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
  memset(&unk_18016AB60, 0, 0xA0uLL);
  memset(qword_18016AB48, 0, 0xA8uLL);
  qword_18016AC00 = 0LL;
  qword_18016AC10 = 0LL;
  qword_18016AC20 = (__int64)&qword_18016AC18;
  qword_18016AC18 = (__int64)&qword_18016AC18;
  RtlpInitializeNonVolatileFlush();
  v12 = *(_QWORD *)(ProcessEnvironmentBlock + 32);
  v13 = (_WORD *)(*(_QWORD *)(v12 + 104) + v12);
  if ( (*(_BYTE *)(v12 + 8) & 1) != 0 )
    v13 = *(_WORD **)(v12 + 104);
  v135 = (unsigned __int64)v13;
  v133 = *(_WORD *)(v12 + 96);
  v14 = v133;
  v134 = v133 + 2;
  if ( v133 >= 8u && *v13 == 92 && v13[1] == 63 && v13[2] == 63 && v13[3] == 92 )
  {
    v133 -= 8;
    v134 = v14 - 6;
    v135 = (unsigned __int64)(v13 + 4);
    *(_WORD *)(v12 + 96) -= 8;
    *(_WORD *)(v12 + 98) -= 8;
    *(_QWORD *)(v12 + 104) += 8LL;
  }
  v128 = 1;
  UseCOR = 0;
  LOBYTE(v120) = 0;
  v127 = 0;
  RtlImageNtHeaderEx(3, *(_QWORD *)(ProcessEnvironmentBlock + 16), 0LL, &v136);
  v15 = v136;
  LdrpAppHeaders = v136;
  v16 = 32LL;
  if ( LdrpIsSecureProcess && (*(_BYTE *)(v136 + 22) & 0x20) == 0 )
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
  RtlImageNtHeaderEx(3, a2, 0LL, &v152);
  v20 = *(_DWORD *)(v152 + 80);
  RtlInsertInvertedFunctionTable(a2, v20);
  RtlCreateInvertedFunctionTableCacheEntry(a2, v20);
  LdrpCaptureCriticalThunks();
  LdrProtectMrdata(1);
  if ( LdrControlFlowGuardEnforcedWithExportSuppression(v21) )
    LdrpSuppressedExportOverrideListPtr = (__int64)&LdrpSuppressedExportOverrideList;
  v171 = xmmword_180181390;
  v172 = qword_1801813A0;
  v22 = (_mm_srli_si128((__m128i)xmmword_180181390, 8).m128i_u64[0] >> 4) & 3;
  LdrpEnforceIntegrityContinuity = (_BYTE)v22 == 1;
  if ( (_BYTE)v22 == 1 || (v173 = xmmword_180181390, v174 = qword_1801813A0, v23 = (_BYTE)v22 == 3, v24 = 0, v23) )
    v24 = 1;
  LdrpAuditIntegrityContinuity = v24;
  LODWORD(v25) = LdrpInitializeExecutionOptions(&v133, ProcessEnvironmentBlock, a2, &v138, &v130, (__int64)&v154);
  ApplicationKeyOption = v25;
  if ( (int)v25 < 0 )
  {
    v26 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) == 0 )
      goto LABEL_316;
    LODWORD(v115) = v129->ClientId.UniqueProcess;
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      3978,
      "LdrpInitializeProcess",
      0,
      "Initializing the execution options for the process %lx failed with status 0x%08lx\n",
      v115,
      v25);
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
      v129->ClientId.UniqueProcess);
  v147 = 0LL;
  WowTebOffset = v129->WowTebOffset;
  UseWOW64 = WowTebOffset > 0;
  if ( v15 && *(_WORD *)(v15 + 24) == 267 && WowTebOffset <= 0 )
  {
    UseCOR = 1;
    LOBYTE(v15) = 1;
    v120 = v15;
    v4 = 1;
    LODWORD(v25) = LdrpCorFixupImage(*(_QWORD *)(ProcessEnvironmentBlock + 16));
    ApplicationKeyOption = v25;
    if ( (int)v25 < 0 )
      return (unsigned int)v25;
  }
  else
  {
    LOBYTE(v15) = v120;
  }
  if ( !UseWOW64 && !UseCOR )
  {
    v28 = RtlpImageDirectoryEntryToDataEx(*(_QWORD *)(ProcessEnvironmentBlock + 16), 1, 0xEu, &v151, v145);
    v29 = v145[0];
    if ( v28 < 0 )
      v29 = 0LL;
    v145[0] = v29;
    if ( v29 )
    {
      UseCOR = 1;
      LODWORD(v15) = (unsigned __int8)v15;
      if ( (*(_BYTE *)(v29 + 16) & 1) != 0 )
        LODWORD(v15) = 1;
      v120 = v15;
    }
  }
  LdrpSystemDllBase = v141;
  if ( !UseWOW64 )
    v147 = *(_QWORD *)(ProcessEnvironmentBlock + 728);
  RtlpTimeout = *(_QWORD *)(ProcessEnvironmentBlock + 192);
  v125 = RtlNormalizeProcessParams(*(_QWORD *)(ProcessEnvironmentBlock + 32));
  if ( UseWOW64 || UseCOR && v4 )
    Config = 0LL;
  else
    Config = LdrImageDirectoryEntryToLoadConfig(*(_QWORD *)(ProcessEnvironmentBlock + 16));
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
  RtlInitializeSListHead(&RtlCriticalSectionDebugSList);
  v33 = &RtlpStaticDebugInfo;
  do
  {
    *v33 = v33 + 6;
    v33 += 6;
  }
  while ( v33 <= qword_18016AF60 );
  *v33 = 0LL;
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
    RtlSetBits(*(_QWORD *)(ProcessEnvironmentBlock + 120), 0, 0x13u);
  RtlSetBits(*(_QWORD *)(ProcessEnvironmentBlock + 120), 4u, 1u);
  RtlSetBits(*(_QWORD *)(ProcessEnvironmentBlock + 120), 0x10u, 1u);
  v34 = *(_DWORD *)(ProcessEnvironmentBlock + 188);
  if ( (v34 & 0x1000) != 0 || (v35 = LdrpShouldCreateStackTraceDb) != 0 )
  {
    v36 = 24;
    v126 = 24;
    if ( LdrpIsSecureProcess )
    {
      v37 = -1073741772;
    }
    else
    {
      LOBYTE(v117) = 0;
      v37 = RtlQueryImageFileExecutionOptions(&v133, (__int64)L"StackTraceDatabaseSizeInMb", 4u, (__int64)&v126, 4, 0LL);
      v36 = v126;
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
        4278,
        "LdrpInitializeProcess",
        2,
        "Stack trace database size is %Id Mb\n",
        v7 >> 20);
    v164[0] = 0LL;
    v164[1] = 0LL;
    v164[2] = v7;
    RtlControlStackTraceDataBase(0LL, 24LL, v164);
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
  LODWORD(v25) = RtlInitializeCriticalSectionEx((__int64)&FastPebLock, 0LL, 0);
  ApplicationKeyOption = v25;
  if ( (int)v25 < 0 )
    return (unsigned int)v25;
  *(_QWORD *)(ProcessEnvironmentBlock + 56) = &FastPebLock;
  LODWORD(v25) = RtlInitializeHeapManager(&v133);
  ApplicationKeyOption = v25;
  if ( (int)v25 < 0 )
    return (unsigned int)v25;
  v175 = xmmword_180181390;
  v176 = qword_1801813A0;
  if ( (((unsigned __int64)xmmword_180181390 >> 12) & 3) == 1 )
    RtlSetHeapInformation(0LL, 1, 0LL, 0LL);
  v38 = v125;
  v39 = LdrpInitializeProcessHeap(Config, v136, v125);
  v40 = (void *)v39;
  if ( !v39 )
  {
    v41 = LdrpDebugFlags;
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
  *(_QWORD *)(ProcessEnvironmentBlock + 48) = v39;
  RtlInitializeCriticalSection((__int64)&LdrpEnclaveListLock);
  qword_18016CBD8 = (__int64)&LdrpEnclaveList;
  LdrpEnclaveList = (__int64)&LdrpEnclaveList;
  if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x800000) != 0 )
    RtlInitializeExceptionLog();
  RtlpInitializeThreadActivationContextStack((__int64)v129);
  LdrpHeap = (__int64)v40;
  if ( ((unsigned __int8)&EtwpFreeRegistrationList & 0xF) != 0 )
    RtlRaiseStatus(2147483650LL);
  EtwpFreeRegistrationList = 0LL;
  PrivateLoggerNotificationEntry = 0LL;
  ApplicationKeyOption = NtQuerySystemInformation(SystemHypervisorSharedPageInformation, &SystemInformation, 8u, 0LL);
  v42 = RtlpHypervisorSharedUserVa;
  if ( ApplicationKeyOption >= 0 )
    v42 = SystemInformation;
  RtlpHypervisorSharedUserVa = v42;
  NtdllBaseTag = RtlCreateTagHeap(v40, 0, (__int64)L"NTDLL!", L"!Process");
  LODWORD(v25) = TpInitializePackage();
  ApplicationKeyOption = v25;
  if ( (int)v25 < 0 )
    return (unsigned int)v25;
  v45 = *(unsigned int *)(v38 + 1080);
  if ( (_DWORD)v45 )
    TpSetDefaultPoolCpuSets(*(void **)(v38 + 1072));
  v46 = *(_DWORD *)(v38 + 1084);
  if ( v46 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&TppPoolpGlobalPoolLock, v45, v43, v44);
    TppPoolpGlobalPoolMaxThreadsOverride = v46;
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
    TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation((__int64 *)&dword_180166698);
  LODWORD(v25) = RtlpInitEnvironmentBlock();
  ApplicationKeyOption = v25;
  if ( (int)v25 < 0 )
    return (unsigned int)v25;
  inited = RtlpInitParameterBlock();
  v25 = (unsigned int)inited;
  ApplicationKeyOption = inited;
  if ( inited < 0 )
    return (unsigned int)v25;
  v48 = *(_QWORD *)(ProcessEnvironmentBlock + 32);
  v125 = v48;
  v143 = *(__m128i *)(v48 + 96);
  v135 = _mm_srli_si128(v143, 8).m128i_u64[0];
  v49 = v138;
  if ( v138 || v130 )
  {
    ApplicationKeyOption = RtlQueryApplicationKeyOption(
                             (__int64)v130,
                             (__int64)v138,
                             (__int64)L"DebugProcessHeapOnly",
                             4u,
                             (__int64)&v127,
                             4,
                             v117,
                             0LL);
    if ( ApplicationKeyOption >= 0 && dword_1801663E8 && v127 )
    {
      dword_1801663E8 = 0;
      *(_DWORD *)RtlpDebugPageHeapTable &= ~0x400u;
    }
  }
  NtSystemRoot = RtlGetNtSystemRoot(v25, (__int64)v49);
  RtlInitUnicodeStringEx((__int64)&v144, NtSystemRoot);
  v51 = v144.Length + 40;
  Heap = RtlAllocateHeap((__int64)v40, 0, (unsigned int)v144.Length + 38 + 2LL);
  if ( !Heap )
    return 3221225495LL;
  LOWORD(v132) = 0;
  WORD1(v132) = v51;
  *((_QWORD *)&v132 + 1) = Heap;
  RtlAppendUnicodeStringToString((unsigned __int16 *)&v132, (const void **)&v144);
  RtlAppendUnicodeStringToString((unsigned __int16 *)&v132, &SlashSystem32SlashString);
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 2) == 0 )
  {
    v53 = 48LL;
    v157 = 48;
    v158 = 0LL;
    v160 = 64;
    v159 = &v149;
    v161 = 0LL;
    LdrProtectMrdata(0);
    ApplicationKeyOption = ZwOpenDirectoryObject();
    LdrProtectMrdata(1);
    LODWORD(v25) = ApplicationKeyOption;
    if ( ApplicationKeyOption >= 0 )
    {
      v157 = 48;
      v158 = LdrpKnownDllDirectoryHandle;
      v160 = 64;
      v159 = (int *)&unk_18011DAF0;
      v161 = 0LL;
      LODWORD(v25) = ZwOpenSymbolicLinkObject();
      ApplicationKeyOption = v25;
      if ( (int)v25 >= 0 )
      {
        while ( 1 )
        {
          v57 = RtlAllocateHeap((__int64)v40, 0, v53);
          if ( !v57 )
            return 3221225495LL;
          LdrpKnownDllPath = 0;
          word_18016C012 = v53;
          qword_18016C018 = v57;
          SymbolicLinkObject = NtQuerySymbolicLinkObject();
          LODWORD(v25) = SymbolicLinkObject;
          ApplicationKeyOption = SymbolicLinkObject;
          if ( SymbolicLinkObject >= 0 )
          {
            NtClose((HANDLE)v145[1]);
            v48 = v125;
            goto LABEL_140;
          }
          if ( SymbolicLinkObject != -1073741789 )
          {
            v26 = LdrpDebugFlags;
            if ( (LdrpDebugFlags & 3) == 0 )
              goto LABEL_316;
            v58 = "Querying the known DLL directory link object failed with status 0x%08lx\n";
            v59 = 4668;
            goto LABEL_314;
          }
          RtlFreeHeap((__int64)v40, 0, v57);
          v53 = v139[1];
        }
      }
      v26 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) == 0 )
        goto LABEL_316;
      LODWORD(v117) = v25;
      v116 = (int *)&unk_18011DAF0;
      v54 = "Failed to open %wZ with status 0x%08lx\n";
      v55 = 4633;
    }
    else
    {
      v26 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) == 0 )
        goto LABEL_316;
      LODWORD(v117) = ApplicationKeyOption;
      v116 = &v149;
      v54 = "Failed to open %wZ with status 0x%08lx\n";
      v55 = 4610;
    }
    goto LABEL_274;
  }
LABEL_140:
  if ( UseWOW64 || LdrpIsSecureProcess )
  {
    UnicodeString = v144;
    v62 = 0;
  }
  else
  {
    v60 = *(__m128i *)(v48 + 56);
    *(_QWORD *)&UnicodeString.Length = *(_QWORD *)(v48 + 56);
    v61 = (wchar_t *)_mm_srli_si128(v60, 8).m128i_u64[0];
    UnicodeString.Buffer = v61;
    v62 = 0;
    if ( !v61 || !UnicodeString.Length || !*v61 )
    {
      v65 = (wchar_t *)RtlAllocateHeap((__int64)v40, 0, 8LL);
      UnicodeString.Buffer = v65;
      if ( !v65 )
      {
        v41 = LdrpDebugFlags;
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
      v128 = 0;
      v66 = RtlGetNtSystemRoot(v64, v63);
      *(_DWORD *)v65 = *(_DWORD *)v66;
      v65[2] = *(_WORD *)(v66 + 4);
      UnicodeString.Buffer[3] = 0;
      *(_DWORD *)&UnicodeString.Length = 524294;
    }
  }
  LdrpInitializePolicy();
  v67 = (unsigned __int16)v132;
  if ( (*(_DWORD *)(*(_QWORD *)(ProcessEnvironmentBlock + 32) + 8LL) & 0x20000000) != 0 )
  {
    v62 = (LdrpPolicyBits & 0x100) != 0;
    v67 = 2LL * (unsigned __int16)v132 + 22;
    if ( (LdrpPolicyBits & 0x100) != 0 )
      v67 = (unsigned __int16)v132 + 2LL * (unsigned __int16)v132 + 52;
  }
  v68 = v67;
  if ( (LdrpPolicyBits & 1) == 0 )
  {
    v68 = v67 + 2 * (v144.Length + 9LL);
    if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 2) != 0 )
      *(_WORD *)(v125 + 80) = 0;
  }
  *((_QWORD *)&v124 + 1) = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v68);
  if ( !*((_QWORD *)&v124 + 1) )
  {
    v41 = LdrpDebugFlags;
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
  LOWORD(v124) = 0;
  WORD1(v124) = v68;
  RtlAppendUnicodeStringToString((unsigned __int16 *)&v124, (const void **)&v132);
  v69 = (unsigned __int16)v124;
  *(_WORD *)(*((_QWORD *)&v124 + 1) + 2 * ((unsigned __int64)(unsigned __int16)v124 >> 1) - 2) = 59;
  RtlpSystem32Dirs = v124;
  LdrpSystem32 = v124;
  LOWORD(v69) = v69 - 2;
  LOWORD(LdrpSystem32) = v69;
  if ( (*(_DWORD *)(*(_QWORD *)(ProcessEnvironmentBlock + 32) + 8LL) & 0x20000000) != 0 )
  {
    if ( v62 )
    {
      RtlAppendUnicodeStringToString((unsigned __int16 *)&v124, (const void **)&v132);
      RtlAppendUnicodeToString((unsigned __int16 *)&v124, L"forwarders\\alt;");
    }
    RtlAppendUnicodeStringToString((unsigned __int16 *)&v124, (const void **)&v132);
    RtlAppendUnicodeToString((unsigned __int16 *)&v124, L"forwarders;");
  }
  if ( v68 > v67 )
  {
    RtlAppendUnicodeStringToString((unsigned __int16 *)&v124, (const void **)&v144);
    RtlAppendUnicodeToString((unsigned __int16 *)&v124, L"\\system;");
    RtlAppendUnicodeStringToString((unsigned __int16 *)&v124, (const void **)&v144);
    RtlAppendUnicodeToString((unsigned __int16 *)&v124, L";");
    RtlpSystemDirs = v124;
  }
  if ( (unsigned int)(LdrpIllegalCWDDevices - 1) <= 0xFFFFFFFD )
    LdrpCheckAppDirType(&v143, v69);
  v70 = v141;
  RtlImageNtHeaderEx(3, v141, 0LL, &v140);
  ModuleEntry = LdrpAllocateModuleEntry(0LL);
  v72 = ModuleEntry;
  if ( !ModuleEntry )
  {
    v41 = LdrpDebugFlags;
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
  *(_DWORD *)(*(_QWORD *)(ModuleEntry + 152) + 24LL) = -1;
  *(_WORD *)(**(_QWORD **)(LdrpNtDllDataTableEntry + 152) - 52LL) = -1;
  v73 = LdrpNtDllDataTableEntry;
  *(_DWORD *)(LdrpNtDllDataTableEntry + 104) |= 0x204u;
  *(_QWORD *)(v73 + 248) -= qword_180181300;
  v73 += 72LL;
  *(_OWORD *)v73 = v132;
  RtlAppendUnicodeStringToString((unsigned __int16 *)v73, &NtDllName);
  v74 = LdrpNtDllDataTableEntry;
  *(_OWORD *)(LdrpNtDllDataTableEntry + 88) = *(_OWORD *)&NtDllName;
  *(_QWORD *)(v74 + 48) = v70;
  LdrpInsertDataTableEntry(v74);
  LdrpLogDllState(*(_QWORD *)(LdrpNtDllDataTableEntry + 48), LdrpNtDllDataTableEntry + 72, 0x14A5u);
  LdrpInsertModuleToIndex(LdrpNtDllDataTableEntry, v140, v75, v76);
  LODWORD(v25) = LdrpProcessMappedModule(LdrpNtDllDataTableEntry, 0, 1);
  ApplicationKeyOption = v25;
  if ( (int)v25 < 0 )
    return (unsigned int)v25;
  LdrpLogDllState(*(_QWORD *)(LdrpNtDllDataTableEntry + 48), LdrpNtDllDataTableEntry + 72, 0x14AEu);
  *(_DWORD *)(*(_QWORD *)(LdrpNtDllDataTableEntry + 152) + 56LL) = 9;
  RtlInitializeHistoryTable();
  v77 = (_QWORD *)(v72 + 32);
  v78 = qword_18016C4F0;
  if ( *(__int64 **)(qword_18016C4F0 + 8) != &qword_18016C4F0 )
    __fastfail(3u);
  *v77 = qword_18016C4F0;
  *(_QWORD *)(v72 + 40) = &qword_18016C4F0;
  *(_QWORD *)(v78 + 8) = v77;
  qword_18016C4F0 = v72 + 32;
  LODWORD(v25) = LdrpInitParallelLoadingSupport();
  ApplicationKeyOption = v25;
  if ( (int)v25 < 0 )
  {
    v26 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) == 0 )
      goto LABEL_316;
    v58 = "Failed to initialize Parallel loader, st = 0x%x\n";
    v59 = 5005;
LABEL_314:
    LODWORD(v115) = v25;
    LdrpLogDbgPrint((unsigned int)"minkernel\\ntdll\\ldrinit.c", v59, "LdrpInitializeProcess", 0, v58, v115);
    goto LABEL_315;
  }
  LdrpDrainWorkQueue(0);
  LdrpInitializeDllPath(0LL, 0LL, v178);
  memset(v177, 0, sizeof(v177));
  *(_QWORD *)&v177[1] = v178;
  LODWORD(v177[2]) = 512;
  v177[0] = v143;
  *((_QWORD *)&v177[2] + 1) = &ApplicationKeyOption;
  v79 = LdrpAllocateModuleEntry((__int64)v177);
  v80 = v79;
  if ( !v79 )
  {
    v41 = LdrpDebugFlags;
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
  LdrpImageEntry = v79;
  v81 = 2LL;
  do
  {
    *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 24LL) = -1;
    --v81;
  }
  while ( v81 );
  *(_WORD *)(**(_QWORD **)(LdrpImageEntry + 152) - 52LL) = -1;
  v82 = LdrpImageEntry;
  *(__m128i *)(LdrpImageEntry + 72) = v143;
  *(_DWORD *)(v82 + 104) |= 4u;
  v83 = *(_DWORD *)(v82 + 104);
  if ( (NtCurrentPeb()->BitField & 0x10) != 0 )
  {
    v83 |= 1u;
    *(_DWORD *)(v82 + 104) = v83;
  }
  v84 = v120;
  if ( UseCOR )
  {
    v85 = v83 | 0x400000;
    *(_DWORD *)(v82 + 104) = v85;
    if ( v84 )
      *(_DWORD *)(v82 + 104) = v85 | 0x1000000;
  }
  v86 = LdrpImageEntry;
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 4) != 0 )
    *(_QWORD *)(LdrpImageEntry + 248) = 0LL;
  v87 = 0LL;
  v88 = v143.m128i_i64[1] + v143.m128i_u16[0];
  v89 = (_WORD *)v88;
  if ( v88 && v88 > v143.m128i_i64[1] )
  {
    while ( 1 )
    {
      v90 = v89--;
      if ( *v89 == 92 )
        break;
      if ( (unsigned __int64)v89 <= v143.m128i_i64[1] )
        goto LABEL_197;
    }
    v87 = v90;
  }
LABEL_197:
  if ( v87 )
  {
    v91 = v88 - (_WORD)v87;
    *(_WORD *)(v86 + 88) = v91;
    if ( v143.m128i_u16[1] - (unsigned __int64)v143.m128i_u16[0] >= 2 )
      v91 += 2;
    *(_WORD *)(v86 + 90) = v91;
    *(_QWORD *)(v86 + 96) = v87;
  }
  else
  {
    *(_OWORD *)(v86 + 88) = *(_OWORD *)(v80 + 72);
  }
  v92 = *(const void **)(ProcessEnvironmentBlock + 16);
  v93 = v92;
  v94 = v136;
  if ( *(const void **)(v136 + 48) != v92 && !v84 && !UseWOW64 )
  {
    LODWORD(v25) = LdrpProtectAndRelocateImage(v92);
    ApplicationKeyOption = v25;
    if ( (int)v25 < 0 )
      return (unsigned int)v25;
    v93 = *(const void **)(ProcessEnvironmentBlock + 16);
    v86 = LdrpImageEntry;
  }
  *(_QWORD *)(v86 + 48) = v93;
  LdrpInsertDataTableEntry(v86);
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
  LdrpInsertModuleToIndex(LdrpImageEntry, v94, v95, v96);
  LODWORD(v25) = LdrpProcessMappedModule(LdrpImageEntry, 0, UseWOW64 == 0);
  ApplicationKeyOption = v25;
  if ( (int)v25 < 0 )
    return (unsigned int)v25;
  *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 56LL) = 9;
  v97 = RtlpInitCurrentDir(&UnicodeString.Length);
  ApplicationKeyOption = v97;
  if ( v97 < 0 )
  {
    v98 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LODWORD(v117) = v97;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        5186,
        "LdrpInitializeProcess",
        0,
        "Initializing the current directory to \"%wZ\" failed with status 0x%08lx\n",
        &UnicodeString,
        v117);
      v98 = LdrpDebugFlags;
    }
    if ( (v98 & 0x10) != 0 )
      __debugbreak();
  }
  if ( !v128 )
    RtlFreeAnsiString(&UnicodeString);
  if ( AvrfAppVerifierMode )
  {
    v99 = LdrpAllocateModuleEntry(0LL);
    v100 = v99;
    if ( !v99 )
    {
      v41 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) == 0 )
      {
LABEL_180:
        if ( (v41 & 0x10) != 0 )
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
      v41 = LdrpDebugFlags;
      goto LABEL_180;
    }
    *(_DWORD *)(*(_QWORD *)(v99 + 152) + 24LL) = -1;
    *(_WORD *)(**(_QWORD **)(v99 + 152) - 52LL) = -1;
    v101 = v154;
    *(_DWORD *)(v99 + 104) |= *(_DWORD *)(v154 + 104);
    *(_QWORD *)(v99 + 248) = *(_QWORD *)(v101 + 248);
    *(_WORD *)(v99 + 110) = 0;
    *(_OWORD *)(v99 + 72) = *(_OWORD *)(v101 + 72);
    *(_OWORD *)(v99 + 88) = *(_OWORD *)(v101 + 88);
    *(_DWORD *)(v99 + 128) = *(_DWORD *)(v101 + 128);
    *(_QWORD *)(v99 + 48) = *(_QWORD *)(v101 + 48);
    LdrpInsertDataTableEntry(v99);
    LdrpLogDllState(*(_QWORD *)(v100 + 48), v100 + 72, 0x14A5u);
    LODWORD(v25) = RtlImageNtHeaderEx(3, *(_QWORD *)(v100 + 48), 0LL, &v140);
    ApplicationKeyOption = v25;
    if ( (int)v25 < 0 )
      return (unsigned int)v25;
    LdrpInsertModuleToIndex(v100, v140, v102, v103);
    LODWORD(v25) = LdrpProcessMappedModule(v100, 0, 1);
    ApplicationKeyOption = v25;
    if ( (int)v25 < 0 )
      return (unsigned int)v25;
    *(_QWORD *)(v100 + 56) = *(_QWORD *)(v101 + 56);
    LdrpLogDllState(*(_QWORD *)(v100 + 48), v100 + 72, 0x14ADu);
    *(_DWORD *)(*(_QWORD *)(v100 + 152) + 56LL) = 7;
    if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x100) != 0 || (AvrfAppVerifierMode & 2) != 0 )
    {
      LODWORD(v25) = AVrfInitializeVerifier(0, 0, 0, 1, v141, 0LL);
      ApplicationKeyOption = v25;
      if ( (int)v25 >= 0 && (AvrfAppVerifierMode & 2) != 0 )
      {
        *(_DWORD *)(*(_QWORD *)(v100 + 152) + 56LL) = 9;
        LODWORD(v25) = ApplicationKeyOption;
      }
    }
    else
    {
      v121 = 0;
      LODWORD(v25) = LdrpInitializeGraphRecurse(*(__int64 **)(v100 + 152), 0LL, &v121);
      ApplicationKeyOption = v25;
    }
    if ( (int)v25 < 0 )
      return (unsigned int)v25;
    v94 = v136;
  }
  LdrpDropLastInProgressCount();
  if ( UseWOW64 )
  {
    if ( v138 )
    {
      NtClose(v138);
      v138 = 0LL;
      if ( LdrpLargePageDllKeyHandle )
      {
        NtClose(LdrpLargePageDllKeyHandle);
        LdrpLargePageDllKeyHandle = 0LL;
      }
    }
    if ( v130 )
    {
      NtClose(v130);
      v130 = 0LL;
    }
    LODWORD(v25) = LdrpLoadWow64((const void **)&v132);
    ApplicationKeyOption = v25;
    if ( (int)v25 < 0 )
      return (unsigned int)v25;
    if ( *(_BYTE *)(ProcessEnvironmentBlock + 2) )
      LdrpDoDebuggerBreak();
    LdrInitState = 3;
    _interlockedbittestandreset((volatile signed __int32 *)(ProcessEnvironmentBlock + 80), 1u);
    g_LdrpWow64LdrpInitialize(v142);
    goto LABEL_325;
  }
  v146 = 0LL;
  if ( UseCOR )
  {
    LODWORD(v25) = LdrpCorInitialize(&v146);
    ApplicationKeyOption = v25;
    if ( (int)v25 < 0 )
      return (unsigned int)v25;
    v104 = v120;
    if ( (_BYTE)v120 )
    {
      LODWORD(v25) = LdrpCorValidateImage(*(_QWORD *)(ProcessEnvironmentBlock + 16));
      ApplicationKeyOption = v25;
      if ( (int)v25 < 0 )
        return (unsigned int)v25;
    }
    if ( (v129->SameTebFlags & 0x400) != 0 )
      *(_QWORD *)(v142 + 128) = __ROR8__(LdrpCorExeMainRoutine, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330];
  }
  else
  {
    v104 = v120;
  }
  LODWORD(v25) = LdrpInitializeTls();
  ApplicationKeyOption = v25;
  if ( (int)v25 < 0 )
  {
    v26 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) == 0 )
      goto LABEL_316;
    v58 = "Initializing TLS slots failed with status 0x%08lx\n";
    v59 = 5436;
    goto LABEL_314;
  }
  if ( v146 )
  {
    v122 = 0;
    LODWORD(v25) = LdrpInitializeGraphRecurse(*(__int64 **)(v146 + 152), 0LL, &v122);
    ApplicationKeyOption = v25;
    if ( (int)v25 < 0 )
    {
      v26 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) == 0 )
        goto LABEL_316;
      v58 = "DllMain of MSCOREE (or its dependents) failed with status 0x%08lx\n";
      v59 = 5455;
      goto LABEL_314;
    }
  }
  LODWORD(v25) = LdrpInitializeImportRedirection();
  ApplicationKeyOption = v25;
  if ( (int)v25 < 0 )
  {
    v26 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) == 0 )
      goto LABEL_316;
    v58 = "Loading of import redirection module failed with status 0x%08x\n";
    v59 = 5471;
    goto LABEL_314;
  }
  v148 = 0LL;
  if ( (unsigned __int16)(*(_WORD *)(v94 + 92) - 2) <= 1u )
  {
    LODWORD(v25) = LdrLoadDll(16385LL, 0LL, (__int64)LdrpKernel32DllName, &v137);
    ApplicationKeyOption = v25;
    if ( (int)v25 < 0 )
    {
      if ( (_DWORD)v25 != -1073741515 )
      {
        v26 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) == 0 )
          goto LABEL_316;
        LODWORD(v117) = v25;
        v116 = (int *)LdrpKernel32DllName;
        v54 = "Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n";
        v55 = 5629;
        goto LABEL_274;
      }
      LODWORD(v25) = LdrLoadDll(16385LL, 0LL, (__int64)LdrpKernelbaseDllName, &v137);
      ApplicationKeyOption = v25;
      if ( (int)v25 < 0 )
      {
        v26 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) == 0 )
          goto LABEL_316;
        v54 = "Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n";
        v55 = 5602;
        goto LABEL_273;
      }
      LODWORD(v25) = LdrpCodeAuthzInitialize();
      ApplicationKeyOption = v25;
      if ( (int)(v25 + 0x80000000) >= 0 && (_DWORD)v25 != -1073741515 )
      {
        v26 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) == 0 )
          goto LABEL_316;
        v58 = "LdrpCodeAuthzInitialize failed with status 0x%08lx\n";
        v59 = 5618;
        goto LABEL_314;
      }
      ApplicationKeyOption = 0;
      v105 = v137;
    }
    else
    {
      LODWORD(v25) = LdrGetProcedureAddressForCaller(
                       v137,
                       &qword_18011DB00,
                       0,
                       &Kernel32ThreadInitThunkFunction,
                       0,
                       retaddr);
      ApplicationKeyOption = v25;
      if ( (int)v25 < 0 )
      {
        v26 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) == 0 )
          goto LABEL_316;
        LODWORD(v118) = v25;
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          5516,
          "LdrpInitializeProcess",
          0,
          "Locating procedure \"%Z\" in Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
          &qword_18011DB00,
          LdrpKernel32DllName,
          v118);
        goto LABEL_315;
      }
      LdrGetProcedureAddressForCaller(v137, &qword_18011DB10, 0, &v148, 0, retaddr);
      LODWORD(v25) = LdrpSnapKernelBaseExtensions();
      ApplicationKeyOption = v25;
      if ( (int)v25 < 0 )
        return (unsigned int)v25;
      LODWORD(v25) = LdrpCodeAuthzInitialize();
      ApplicationKeyOption = v25;
      if ( (int)v25 < 0 )
        return (unsigned int)v25;
      LODWORD(v25) = LdrpFindLoadedDll(LdrpKernelbaseDllName, 0, &v155);
      ApplicationKeyOption = v25;
      if ( (int)v25 < 0 )
      {
        v26 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) == 0 )
          goto LABEL_316;
        v54 = "Finding \"%wZ\" failed with status 0x%08lx\n";
        v55 = 5584;
LABEL_273:
        LODWORD(v117) = v25;
        v116 = (int *)LdrpKernelbaseDllName;
LABEL_274:
        LdrpLogDbgPrint((unsigned int)"minkernel\\ntdll\\ldrinit.c", v55, "LdrpInitializeProcess", 0, v54, v116, v117);
LABEL_315:
        LODWORD(v25) = ApplicationKeyOption;
        v26 = LdrpDebugFlags;
LABEL_316:
        if ( (v26 & 0x10) != 0 )
          __debugbreak();
        return (unsigned int)v25;
      }
      v105 = *(_QWORD *)(v155 + 48);
    }
    ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(v105, &qword_18011DB30, 0, &v156, 0, retaddr);
    LODWORD(v25) = ProcedureAddressForCaller;
    ApplicationKeyOption = ProcedureAddressForCaller;
    if ( ProcedureAddressForCaller < 0 )
    {
      v26 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) == 0 )
        goto LABEL_316;
      v58 = "Finding KernelbasePostInit failed with status 0x%08lx\n";
      v59 = 5647;
      goto LABEL_314;
    }
    LODWORD(v25) = v156((unsigned int)ProcedureAddressForCaller);
    ApplicationKeyOption = v25;
    if ( (int)v25 < 0 )
    {
      v26 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) == 0 )
        goto LABEL_316;
      v58 = "Calling KernelbasePostInit failed with status 0x%08lx\n";
      v59 = 5655;
      goto LABEL_314;
    }
    ApplicationKeyOption = 0;
  }
  LdrpDrainWorkQueue(0);
  SbObtainTraceHandle(0LL);
  v107 = v147;
  if ( v147 && *(_DWORD *)(v147 + 528) )
  {
    *(_QWORD *)(ProcessEnvironmentBlock + 736) = 0LL;
    LdrpInitShimEngine(v107);
  }
  v108 = RtlpForceCSDebugInfoCreation;
  if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x400000) != 0 )
    v108 = 1;
  RtlpForceCSDebugInfoCreation = v108;
  if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x10000000) != 0 )
  {
    *(_DWORD *)(v125 + 1036) = 1;
    v109 = 1;
  }
  else
  {
    v109 = *(_DWORD *)(v125 + 1036);
  }
  LdrpEnableParallelLoading(v109);
  LdrInitState = 1;
  *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 56LL) = 2;
  **((_DWORD **)&v177[2] + 1) = 0;
  if ( v104 )
  {
    v110 = LdrpCorProcessImports(LdrpImageEntry);
  }
  else
  {
    LODWORD(v177[2]) |= 1u;
    LdrpMapAndSnapDependency((__int64)v177);
    LdrpDrainWorkQueue(1);
    LODWORD(v25) = ApplicationKeyOption;
    if ( ApplicationKeyOption < 0 )
    {
LABEL_302:
      v26 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) == 0 )
        goto LABEL_316;
      v58 = "Walking the import tables of the executable and its static imports failed with status 0x%08lx\n";
      v59 = 5867;
      goto LABEL_314;
    }
    v110 = LdrpPrepareModuleForExecution(LdrpImageEntry, *((__int64 *)&v177[2] + 1));
  }
  ApplicationKeyOption = v110;
  LODWORD(v25) = v110;
  if ( v110 < 0 )
    goto LABEL_302;
  LdrInitState = 2;
  v139[2] = 1;
  v162 = *(_QWORD *)(LdrpImageEntry + 48);
  v163 = 4096LL;
  ZwSetInformationVirtualMemory();
  if ( *(_BYTE *)(ProcessEnvironmentBlock + 2) )
    LdrpDoDebuggerBreak();
  LdrpDropLastInProgressCount();
  if ( Kernel32ThreadInitThunkFunction )
  {
    LODWORD(v25) = Kernel32ThreadInitThunkFunction(1LL, 0LL, 0LL, v111);
    ApplicationKeyOption = v25;
    if ( (int)v25 < 0 )
      return (unsigned int)v25;
    LODWORD(v25) = LdrpInitializePerUserWindowsDirectory(v148);
    ApplicationKeyOption = v25;
    if ( (int)v25 < 0 )
      return (unsigned int)v25;
  }
  LdrpProcessInitContextRecord = v142;
  LdrpDrainWorkQueue(0);
  LdrpAcquireLoaderLock();
  v123[0] = 0;
  ApplicationKeyOption = LdrpInitializeGraphRecurse(
                           *(__int64 **)(LdrpImageEntry + 152),
                           *((__int64 *)&v177[2] + 1),
                           v123);
  LdrpReleaseLoaderLock(v112, 9LL, (unsigned int)ApplicationKeyOption);
  LdrpFreeLoadContextOfNode(*(_QWORD **)(LdrpImageEntry + 152), *((__int64 *)&v177[2] + 1));
  LdrpDropLastInProgressCount();
  LdrpProcessInitContextRecord = 0LL;
  if ( v179 )
    RtlReleasePath(v178[0]);
  v25 = (unsigned int)ApplicationKeyOption;
  if ( ApplicationKeyOption < 0 )
  {
    v26 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) == 0 )
      goto LABEL_316;
    v58 = "Running the init routines of the executable's static imports failed with status 0x%08lx\n";
    v59 = 6009;
    goto LABEL_314;
  }
  v113 = LdrpImageEntry;
  if ( *(_WORD *)(LdrpImageEntry + 110) )
  {
    v165 = 72LL;
    v166 = 1;
    v167 = 0LL;
    v168 = 0LL;
    v169 = 0LL;
    v170 = 0LL;
    RtlActivateActivationContextUnsafeFast((__int64)&v165, *(_QWORD *)(LdrpImageEntry + 136));
    LdrpCallTlsInitializers(1u, LdrpImageEntry);
    RtlDeactivateActivationContextUnsafeFast((__int64)&v165);
  }
  if ( g_ShimsEnabled
    && !((unsigned __int8 (__fastcall *)(unsigned __int16 *, __int64))(__ROR8__(
                                                                         g_pfnSE_InstallAfterInit,
                                                                         64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))(
          &v133,
          v107) )
  {
    g_ShimsEnabled = 0;
    LdrUnloadDll(g_pShimEngineModule);
    g_pShimEngineModule = 0LL;
  }
  v114 = *(void (__fastcall **)(__int64, __int64))(ProcessEnvironmentBlock + 560);
  if ( v114 )
    v114(v25, v113);
LABEL_325:
  if ( v138 )
    NtClose(v138);
  if ( v130 )
    NtClose(v130);
  return 0LL;
}
