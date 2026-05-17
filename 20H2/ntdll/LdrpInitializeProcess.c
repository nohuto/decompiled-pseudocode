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

__int64 __fastcall LdrpInitializeProcess(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  int v4; // r13d
  NTSTATUS InformationProcess; // eax
  __int64 ProcessEnvironmentBlock; // r14
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
  __int64 v38; // r12
  __int64 v39; // rax
  void *v40; // r13
  char v41; // al
  __int64 v42; // rcx
  unsigned __int64 v43; // r8
  unsigned __int64 v44; // r9
  unsigned __int64 v45; // rdx
  int v46; // r15d
  int inited; // eax
  __int64 v48; // r12
  HANDLE v49; // rdx
  __int64 NtSystemRoot; // rax
  __int16 v51; // r15
  __int64 Heap; // rax
  BOOL v53; // ecx
  char v54; // al
  __int64 v55; // r15
  int SymbolicLinkObject; // eax
  __int64 v57; // r12
  int v58; // edx
  __int64 v59; // r15
  __int64 v60; // r12
  int v61; // eax
  char *v62; // rax
  __m128i v63; // xmm0
  wchar_t *v64; // xmm0_8
  __int64 v65; // rdx
  __int64 v66; // rcx
  wchar_t *v67; // r15
  __int64 v68; // rax
  bool v69; // r13
  unsigned __int64 v70; // r15
  unsigned __int64 v71; // r12
  __int64 v72; // rdx
  __int64 v73; // r12
  __int64 ModuleEntry; // rax
  __int64 v75; // r15
  __int64 v76; // rcx
  __int64 v77; // rcx
  unsigned __int64 v78; // r8
  unsigned __int64 v79; // r9
  _QWORD *v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rax
  __int64 v83; // r11
  __int64 v84; // rdx
  __int64 v85; // rdx
  int v86; // ecx
  char v87; // r12
  int v88; // ecx
  __int64 v89; // rdx
  _WORD *v90; // r9
  unsigned __int64 v91; // r8
  _WORD *v92; // rax
  _WORD *v93; // r10
  __int16 v94; // r8
  const void *v95; // rcx
  const void *v96; // rax
  unsigned __int64 v97; // r15
  unsigned __int64 v98; // r8
  unsigned __int64 v99; // r9
  int v100; // eax
  char v101; // cl
  __int64 v102; // rax
  __int64 v103; // r15
  __int64 v104; // r13
  unsigned __int64 v105; // r8
  unsigned __int64 v106; // r9
  char v107; // r13
  unsigned __int64 v108; // rcx
  int ProcedureAddressForCaller; // eax
  __int64 v110; // r15
  char v111; // al
  unsigned int v112; // ecx
  int v113; // eax
  __int64 v114; // r9
  __int64 v115; // rcx
  __int64 v116; // rdx
  void (__fastcall *v117)(__int64, __int64); // rax
  __int64 v118; // [rsp+28h] [rbp-3F0h]
  __int64 v119; // [rsp+30h] [rbp-3E8h]
  __int64 v120; // [rsp+38h] [rbp-3E0h]
  int ApplicationKeyOption; // [rsp+50h] [rbp-3C8h] BYREF
  int v122; // [rsp+54h] [rbp-3C4h]
  char v123; // [rsp+58h] [rbp-3C0h] BYREF
  char v124; // [rsp+59h] [rbp-3BFh] BYREF
  char v125[6]; // [rsp+5Ah] [rbp-3BEh] BYREF
  __int128 v126; // [rsp+60h] [rbp-3B8h] BYREF
  __int64 v127; // [rsp+70h] [rbp-3A8h]
  int v128; // [rsp+78h] [rbp-3A0h] BYREF
  int v129; // [rsp+7Ch] [rbp-39Ch] BYREF
  int v130; // [rsp+80h] [rbp-398h]
  HANDLE Handle; // [rsp+88h] [rbp-390h]
  struct _TEB *v132; // [rsp+90h] [rbp-388h]
  HANDLE v133; // [rsp+98h] [rbp-380h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+A0h] [rbp-378h] BYREF
  __int128 v135; // [rsp+B0h] [rbp-368h] BYREF
  unsigned __int16 v136; // [rsp+C0h] [rbp-358h] BYREF
  __int16 v137; // [rsp+C2h] [rbp-356h]
  unsigned __int64 v138; // [rsp+C8h] [rbp-350h]
  __int64 v139; // [rsp+D0h] [rbp-348h] BYREF
  unsigned __int64 v140; // [rsp+D8h] [rbp-340h] BYREF
  HANDLE v141; // [rsp+E0h] [rbp-338h] BYREF
  _DWORD v142[4]; // [rsp+E8h] [rbp-330h] BYREF
  unsigned __int64 v143; // [rsp+F8h] [rbp-320h] BYREF
  __int64 v144; // [rsp+100h] [rbp-318h]
  __int64 v145; // [rsp+108h] [rbp-310h]
  __m128i v146; // [rsp+110h] [rbp-308h] BYREF
  int v147; // [rsp+120h] [rbp-2F8h]
  __int64 v148; // [rsp+128h] [rbp-2F0h]
  int *v149; // [rsp+130h] [rbp-2E8h]
  int v150; // [rsp+138h] [rbp-2E0h]
  __int128 v151; // [rsp+140h] [rbp-2D8h]
  int v152; // [rsp+150h] [rbp-2C8h] BYREF
  const WCHAR *v153; // [rsp+158h] [rbp-2C0h]
  UNICODE_STRING v154; // [rsp+160h] [rbp-2B8h] BYREF
  __int64 (__fastcall *v155)(_BYTE *, __int64); // [rsp+170h] [rbp-2A8h] BYREF
  __int64 v156; // [rsp+178h] [rbp-2A0h] BYREF
  __int64 v157; // [rsp+180h] [rbp-298h] BYREF
  __int64 v158; // [rsp+188h] [rbp-290h]
  __int64 SystemInformation; // [rsp+190h] [rbp-288h] BYREF
  __int64 v160; // [rsp+198h] [rbp-280h] BYREF
  __int64 v161; // [rsp+1A0h] [rbp-278h] BYREF
  __int64 (__fastcall *v162)(_QWORD); // [rsp+1A8h] [rbp-270h] BYREF
  int v163; // [rsp+1B0h] [rbp-268h] BYREF
  _QWORD v164[3]; // [rsp+1B8h] [rbp-260h] BYREF
  _QWORD v165[4]; // [rsp+1D0h] [rbp-248h] BYREF
  __int64 v166; // [rsp+1F0h] [rbp-228h] BYREF
  int v167; // [rsp+1F8h] [rbp-220h]
  __int128 v168; // [rsp+200h] [rbp-218h]
  __int128 v169; // [rsp+210h] [rbp-208h]
  __int128 v170; // [rsp+220h] [rbp-1F8h]
  __int64 v171; // [rsp+230h] [rbp-1E8h]
  __int128 v172; // [rsp+240h] [rbp-1D8h]
  __int64 v173; // [rsp+250h] [rbp-1C8h]
  __int128 v174; // [rsp+260h] [rbp-1B8h]
  __int64 v175; // [rsp+270h] [rbp-1A8h]
  __int128 v176; // [rsp+280h] [rbp-198h]
  __int64 v177; // [rsp+290h] [rbp-188h]
  _OWORD v178[12]; // [rsp+2A0h] [rbp-178h] BYREF
  __int64 v179[15]; // [rsp+360h] [rbp-B8h] BYREF
  char v180; // [rsp+3DCh] [rbp-3Ch]
  __int64 retaddr; // [rsp+418h] [rbp+0h]

  v144 = a2;
  v145 = a1;
  v152 = 1441812;
  v153 = L"\\KnownDlls";
  v3 = (unsigned int)`RtlpGetCookieValue'::`2'::CookieValue;
  v4 = 0;
  if ( !`RtlpGetCookieValue'::`2'::CookieValue )
  {
    InformationProcess = NtQueryInformationProcess(
                           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                           (PROCESSINFOCLASS)(`RtlpGetCookieValue'::`2'::CookieValue + 36),
                           v142,
                           4u,
                           0LL);
    if ( InformationProcess < 0 )
      RtlRaiseStatus((unsigned int)InformationProcess);
    v3 = v142[0];
    `RtlpGetCookieValue'::`2'::CookieValue = v142[0];
  }
  RtlpUnhandledExceptionFilter = __ROR8__(v3, v3 & 0x3F);
  v132 = NtCurrentTeb();
  ProcessEnvironmentBlock = (__int64)v132->ProcessEnvironmentBlock;
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
  v138 = (unsigned __int64)v13;
  v136 = *(_WORD *)(v12 + 96);
  v14 = v136;
  v137 = v136 + 2;
  if ( v136 >= 8u && *v13 == 92 && v13[1] == 63 && v13[2] == 63 && v13[3] == 92 )
  {
    v136 -= 8;
    v137 = v14 - 6;
    v138 = (unsigned __int64)(v13 + 4);
    *(_WORD *)(v12 + 96) -= 8;
    *(_WORD *)(v12 + 98) -= 8;
    *(_QWORD *)(v12 + 104) += 8LL;
  }
  v130 = 1;
  UseCOR = 0;
  LOBYTE(v122) = 0;
  v129 = 0;
  RtlImageNtHeaderEx(3, *(_QWORD *)(ProcessEnvironmentBlock + 16), 0LL, &v139);
  v15 = v139;
  LdrpAppHeaders = v139;
  v16 = 32LL;
  if ( LdrpIsSecureProcess && (*(_BYTE *)(v139 + 22) & 0x20) == 0 )
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
  RtlImageNtHeaderEx(3, a2, 0LL, v164);
  v20 = *(_DWORD *)(v164[0] + 80LL);
  RtlInsertInvertedFunctionTable(a2, v20);
  RtlCreateInvertedFunctionTableCacheEntry(a2, v20);
  LdrpCaptureCriticalThunks();
  LdrProtectMrdata(1);
  if ( LdrControlFlowGuardEnforcedWithExportSuppression(v21) )
    LdrpSuppressedExportOverrideListPtr = (__int64)&LdrpSuppressedExportOverrideList;
  v172 = xmmword_180181390;
  v173 = qword_1801813A0;
  v22 = (_mm_srli_si128((__m128i)xmmword_180181390, 8).m128i_u64[0] >> 4) & 3;
  LdrpEnforceIntegrityContinuity = (_BYTE)v22 == 1;
  if ( (_BYTE)v22 == 1 || (v174 = xmmword_180181390, v175 = qword_1801813A0, v23 = (_BYTE)v22 == 3, v24 = 0, v23) )
    v24 = 1;
  LdrpAuditIntegrityContinuity = v24;
  LODWORD(v25) = LdrpInitializeExecutionOptions(&v136, ProcessEnvironmentBlock, a2, &v141, &v133, (__int64)&v160);
  ApplicationKeyOption = v25;
  if ( (int)v25 < 0 )
  {
    v26 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) == 0 )
      goto LABEL_315;
    LODWORD(v118) = v132->ClientId.UniqueProcess;
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      3983,
      "LdrpInitializeProcess",
      0,
      "Initializing the execution options for the process %lx failed with status 0x%08lx\n",
      v118,
      v25);
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
      v132->ClientId.UniqueProcess);
  v158 = 0LL;
  WowTebOffset = v132->WowTebOffset;
  UseWOW64 = WowTebOffset > 0;
  if ( v15 && *(_WORD *)(v15 + 24) == 267 && WowTebOffset <= 0 )
  {
    UseCOR = 1;
    LOBYTE(v15) = 1;
    v122 = v15;
    v4 = 1;
    LODWORD(v25) = LdrpCorFixupImage(*(_QWORD *)(ProcessEnvironmentBlock + 16));
    ApplicationKeyOption = v25;
    if ( (int)v25 < 0 )
      return (unsigned int)v25;
  }
  else
  {
    LOBYTE(v15) = v122;
  }
  if ( !UseWOW64 && !UseCOR )
  {
    v28 = RtlpImageDirectoryEntryToDataEx(*(_QWORD *)(ProcessEnvironmentBlock + 16), 1, 0xEu, &v163, &v156);
    v29 = v156;
    if ( v28 < 0 )
      v29 = 0LL;
    v156 = v29;
    if ( v29 )
    {
      UseCOR = 1;
      LODWORD(v15) = (unsigned __int8)v15;
      if ( (*(_BYTE *)(v29 + 16) & 1) != 0 )
        LODWORD(v15) = 1;
      v122 = v15;
    }
  }
  LdrpSystemDllBase = v144;
  if ( !UseWOW64 )
    v158 = *(_QWORD *)(ProcessEnvironmentBlock + 728);
  RtlpTimeout = *(_QWORD *)(ProcessEnvironmentBlock + 192);
  v127 = RtlNormalizeProcessParams(*(_QWORD *)(ProcessEnvironmentBlock + 32));
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
    v128 = 24;
    if ( LdrpIsSecureProcess )
    {
      v37 = -1073741772;
    }
    else
    {
      LOBYTE(v119) = 0;
      v37 = RtlQueryImageFileExecutionOptions(&v136, (__int64)L"StackTraceDatabaseSizeInMb", 4u, (__int64)&v128, 4, 0LL);
      v36 = v128;
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
        4283,
        "LdrpInitializeProcess",
        2,
        "Stack trace database size is %Id Mb\n",
        v7 >> 20);
    v165[0] = 0LL;
    v165[1] = 0LL;
    v165[2] = v7;
    RtlControlStackTraceDataBase(0LL, 24LL, v165);
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
  LODWORD(v25) = RtlInitializeHeapManager(&v136);
  ApplicationKeyOption = v25;
  if ( (int)v25 < 0 )
    return (unsigned int)v25;
  v176 = xmmword_180181390;
  v177 = qword_1801813A0;
  if ( (((unsigned __int64)xmmword_180181390 >> 12) & 3) == 1 )
    RtlSetHeapInformation(0LL, 1, 0LL, 0LL);
  v38 = v127;
  v39 = LdrpInitializeProcessHeap(Config, v139, v127);
  v40 = (void *)v39;
  if ( !v39 )
  {
    v41 = LdrpDebugFlags;
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
  *(_QWORD *)(ProcessEnvironmentBlock + 48) = v39;
  RtlInitializeCriticalSection((__int64)&LdrpEnclaveListLock);
  qword_18016CBD8 = (__int64)&LdrpEnclaveList;
  LdrpEnclaveList = (__int64)&LdrpEnclaveList;
  if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x800000) != 0 )
    RtlInitializeExceptionLog();
  RtlpInitializeThreadActivationContextStack((__int64)v132);
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
  v127 = v48;
  v146 = *(__m128i *)(v48 + 96);
  v138 = _mm_srli_si128(v146, 8).m128i_u64[0];
  v49 = v141;
  if ( v141 || v133 )
  {
    ApplicationKeyOption = RtlQueryApplicationKeyOption(
                             (__int64)v133,
                             (__int64)v141,
                             (__int64)L"DebugProcessHeapOnly",
                             4u,
                             (__int64)&v129,
                             4,
                             v119,
                             0LL);
    if ( ApplicationKeyOption >= 0 && dword_1801663E8 && v129 )
    {
      dword_1801663E8 = 0;
      *(_DWORD *)RtlpDebugPageHeapTable &= ~0x400u;
    }
  }
  NtSystemRoot = RtlGetNtSystemRoot(v25, (__int64)v49);
  RtlInitUnicodeStringEx((__int64)&v154, NtSystemRoot);
  v51 = v154.Length + 40;
  Heap = RtlAllocateHeap((__int64)v40, 0, (unsigned int)v154.Length + 38 + 2LL);
  if ( !Heap )
    return 3221225495LL;
  LOWORD(v135) = 0;
  WORD1(v135) = v51;
  *((_QWORD *)&v135 + 1) = Heap;
  RtlAppendUnicodeStringToString((unsigned __int16 *)&v135, (const void **)&v154);
  RtlAppendUnicodeStringToString((unsigned __int16 *)&v135, &SlashSystem32SlashString);
  v53 = Feature_Servicing_2206c_38427506__private_IsEnabled() != 0;
  v54 = *(_BYTE *)(ProcessEnvironmentBlock + 3);
  if ( v53 )
  {
    if ( (v54 & 2) == 0 )
    {
      v55 = 48LL;
      v147 = 48;
      v148 = 0LL;
      v150 = 64;
      v149 = &v152;
      v151 = 0LL;
      LODWORD(v25) = ZwOpenDirectoryObject();
      ApplicationKeyOption = v25;
      if ( (int)v25 < 0 )
      {
        v26 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) == 0 )
          goto LABEL_315;
        LODWORD(v119) = v25;
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          4613,
          "LdrpInitializeProcess",
          0,
          "Failed to open %wZ with status 0x%08lx\n",
          &v152,
          v119);
        goto LABEL_314;
      }
      v147 = 48;
      v148 = LdrpKnownDllDirectoryHandle;
      v150 = 64;
      v149 = (int *)&unk_18011DB00;
      v151 = 0LL;
      LODWORD(v25) = ZwOpenSymbolicLinkObject();
      ApplicationKeyOption = v25;
      if ( (int)v25 < 0 )
      {
        v26 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) == 0 )
          goto LABEL_315;
        LODWORD(v119) = v25;
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          4636,
          "LdrpInitializeProcess",
          0,
          "Failed to open %wZ with status 0x%08lx\n",
          &unk_18011DB00,
          v119);
        goto LABEL_314;
      }
      while ( 1 )
      {
        v57 = RtlAllocateHeap((__int64)v40, 0, v55);
        if ( !v57 )
          return 3221225495LL;
        LdrpKnownDllPath = 0;
        word_18016C012 = v55;
        qword_18016C018 = v57;
        SymbolicLinkObject = NtQuerySymbolicLinkObject();
        LODWORD(v25) = SymbolicLinkObject;
        ApplicationKeyOption = SymbolicLinkObject;
        if ( SymbolicLinkObject >= 0 )
          goto LABEL_158;
        if ( SymbolicLinkObject != -1073741789 )
        {
          v26 = LdrpDebugFlags;
          if ( (LdrpDebugFlags & 3) == 0 )
            goto LABEL_315;
          v58 = 4671;
          goto LABEL_157;
        }
        RtlFreeHeap((__int64)v40, 0, v57);
        v55 = v142[1];
      }
    }
  }
  else if ( (v54 & 0x42) != 2 )
  {
    v59 = 48LL;
    v147 = 48;
    v148 = 0LL;
    v150 = 64;
    v149 = &v152;
    v151 = 0LL;
    LODWORD(v25) = ZwOpenDirectoryObject();
    ApplicationKeyOption = v25;
    if ( (_DWORD)v25 != -1073741772 || (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 0x40) == 0 )
    {
      if ( (int)v25 < 0 )
      {
        v26 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) == 0 )
          goto LABEL_315;
        LODWORD(v119) = v25;
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          4721,
          "LdrpInitializeProcess",
          0,
          "Failed to open %wZ with status 0x%08lx\n",
          &v152,
          v119);
        goto LABEL_314;
      }
      v147 = 48;
      v148 = LdrpKnownDllDirectoryHandle;
      v150 = 64;
      v149 = (int *)&unk_18011DB00;
      v151 = 0LL;
      LODWORD(v25) = ZwOpenSymbolicLinkObject();
      ApplicationKeyOption = v25;
      if ( (int)v25 < 0 )
      {
        v26 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) == 0 )
          goto LABEL_315;
        LODWORD(v119) = v25;
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          4744,
          "LdrpInitializeProcess",
          0,
          "Failed to open %wZ with status 0x%08lx\n",
          &unk_18011DB00,
          v119);
        goto LABEL_314;
      }
      while ( 1 )
      {
        v60 = RtlAllocateHeap((__int64)v40, 0, v59);
        if ( !v60 )
          return 3221225495LL;
        LdrpKnownDllPath = 0;
        word_18016C012 = v59;
        qword_18016C018 = v60;
        v61 = NtQuerySymbolicLinkObject();
        LODWORD(v25) = v61;
        ApplicationKeyOption = v61;
        if ( v61 >= 0 )
        {
LABEL_158:
          NtClose(Handle);
          v48 = v127;
          goto LABEL_159;
        }
        if ( v61 != -1073741789 )
        {
          v26 = LdrpDebugFlags;
          if ( (LdrpDebugFlags & 3) == 0 )
            goto LABEL_315;
          v58 = 4779;
LABEL_157:
          v62 = "Querying the known DLL directory link object failed with status 0x%08lx\n";
          goto LABEL_335;
        }
        RtlFreeHeap((__int64)v40, 0, v60);
        v59 = v142[2];
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
    UnicodeString = v154;
  }
  else
  {
    v63 = *(__m128i *)(v48 + 56);
    *(_QWORD *)&UnicodeString.Length = *(_QWORD *)(v48 + 56);
    v64 = (wchar_t *)_mm_srli_si128(v63, 8).m128i_u64[0];
    UnicodeString.Buffer = v64;
    if ( !v64 || !UnicodeString.Length || !*v64 )
    {
      v67 = (wchar_t *)RtlAllocateHeap((__int64)v40, 0, 8LL);
      UnicodeString.Buffer = v67;
      if ( !v67 )
      {
        v41 = LdrpDebugFlags;
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
      v130 = 0;
      v68 = RtlGetNtSystemRoot(v66, v65);
      *(_DWORD *)v67 = *(_DWORD *)v68;
      v67[2] = *(_WORD *)(v68 + 4);
      UnicodeString.Buffer[3] = 0;
      *(_DWORD *)&UnicodeString.Length = 524294;
    }
  }
  LdrpInitializePolicy();
  v69 = 0;
  v70 = (unsigned __int16)v135;
  if ( (*(_DWORD *)(*(_QWORD *)(ProcessEnvironmentBlock + 32) + 8LL) & 0x20000000) != 0 )
  {
    v69 = (LdrpPolicyBits & 0x100) != 0;
    v70 = 2LL * (unsigned __int16)v135 + 22;
    if ( (LdrpPolicyBits & 0x100) != 0 )
      v70 = (unsigned __int16)v135 + 2LL * (unsigned __int16)v135 + 52;
  }
  v71 = v70;
  if ( (LdrpPolicyBits & 1) == 0 )
  {
    v71 = v70 + 2 * (v154.Length + 9LL);
    if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 2) != 0 )
      *(_WORD *)(v127 + 80) = 0;
  }
  *((_QWORD *)&v126 + 1) = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v71);
  if ( !*((_QWORD *)&v126 + 1) )
  {
    v41 = LdrpDebugFlags;
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
  LOWORD(v126) = 0;
  WORD1(v126) = v71;
  RtlAppendUnicodeStringToString((unsigned __int16 *)&v126, (const void **)&v135);
  v72 = (unsigned __int16)v126;
  *(_WORD *)(*((_QWORD *)&v126 + 1) + 2 * ((unsigned __int64)(unsigned __int16)v126 >> 1) - 2) = 59;
  RtlpSystem32Dirs = v126;
  LdrpSystem32 = v126;
  LOWORD(v72) = v72 - 2;
  LOWORD(LdrpSystem32) = v72;
  if ( (*(_DWORD *)(*(_QWORD *)(ProcessEnvironmentBlock + 32) + 8LL) & 0x20000000) != 0 )
  {
    if ( v69 )
    {
      RtlAppendUnicodeStringToString((unsigned __int16 *)&v126, (const void **)&v135);
      RtlAppendUnicodeToString((unsigned __int16 *)&v126, L"forwarders\\alt;");
    }
    RtlAppendUnicodeStringToString((unsigned __int16 *)&v126, (const void **)&v135);
    RtlAppendUnicodeToString((unsigned __int16 *)&v126, L"forwarders;");
  }
  if ( v71 > v70 )
  {
    RtlAppendUnicodeStringToString((unsigned __int16 *)&v126, (const void **)&v154);
    RtlAppendUnicodeToString((unsigned __int16 *)&v126, L"\\system;");
    RtlAppendUnicodeStringToString((unsigned __int16 *)&v126, (const void **)&v154);
    RtlAppendUnicodeToString((unsigned __int16 *)&v126, L";");
    RtlpSystemDirs = v126;
  }
  if ( (unsigned int)(LdrpIllegalCWDDevices - 1) <= 0xFFFFFFFD )
    LdrpCheckAppDirType(&v146, v72);
  v73 = v144;
  RtlImageNtHeaderEx(3, v144, 0LL, &v143);
  ModuleEntry = LdrpAllocateModuleEntry(0LL);
  v75 = ModuleEntry;
  if ( !ModuleEntry )
  {
    v41 = LdrpDebugFlags;
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
  *(_DWORD *)(*(_QWORD *)(ModuleEntry + 152) + 24LL) = -1;
  *(_WORD *)(**(_QWORD **)(LdrpNtDllDataTableEntry + 152) - 52LL) = -1;
  v76 = LdrpNtDllDataTableEntry;
  *(_DWORD *)(LdrpNtDllDataTableEntry + 104) |= 0x204u;
  *(_QWORD *)(v76 + 248) -= qword_180181300;
  v76 += 72LL;
  *(_OWORD *)v76 = v135;
  RtlAppendUnicodeStringToString((unsigned __int16 *)v76, &NtDllName);
  v77 = LdrpNtDllDataTableEntry;
  *(_OWORD *)(LdrpNtDllDataTableEntry + 88) = *(_OWORD *)&NtDllName;
  *(_QWORD *)(v77 + 48) = v73;
  LdrpInsertDataTableEntry(v77);
  LdrpLogDllState(*(_QWORD *)(LdrpNtDllDataTableEntry + 48), LdrpNtDllDataTableEntry + 72, 0x14A5u);
  LdrpInsertModuleToIndex(LdrpNtDllDataTableEntry, v143, v78, v79);
  LODWORD(v25) = LdrpProcessMappedModule(LdrpNtDllDataTableEntry, 0, 1);
  ApplicationKeyOption = v25;
  if ( (int)v25 < 0 )
    return (unsigned int)v25;
  LdrpLogDllState(*(_QWORD *)(LdrpNtDllDataTableEntry + 48), LdrpNtDllDataTableEntry + 72, 0x14AEu);
  *(_DWORD *)(*(_QWORD *)(LdrpNtDllDataTableEntry + 152) + 56LL) = 9;
  RtlInitializeHistoryTable();
  v80 = (_QWORD *)(v75 + 32);
  v81 = qword_18016C4F0;
  if ( *(__int64 **)(qword_18016C4F0 + 8) != &qword_18016C4F0 )
    __fastfail(3u);
  *v80 = qword_18016C4F0;
  *(_QWORD *)(v75 + 40) = &qword_18016C4F0;
  *(_QWORD *)(v81 + 8) = v80;
  qword_18016C4F0 = v75 + 32;
  LODWORD(v25) = LdrpInitParallelLoadingSupport();
  ApplicationKeyOption = v25;
  if ( (int)v25 < 0 )
  {
    v26 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) == 0 )
      goto LABEL_315;
    v62 = "Failed to initialize Parallel loader, st = 0x%x\n";
    v58 = 5118;
    goto LABEL_335;
  }
  LdrpDrainWorkQueue(0);
  LdrpInitializeDllPath(0LL, 0LL, v179);
  memset(v178, 0, sizeof(v178));
  *(_QWORD *)&v178[1] = v179;
  LODWORD(v178[2]) = 512;
  v178[0] = v146;
  *((_QWORD *)&v178[2] + 1) = &ApplicationKeyOption;
  v82 = LdrpAllocateModuleEntry((__int64)v178);
  v83 = v82;
  if ( !v82 )
  {
    v41 = LdrpDebugFlags;
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
  LdrpImageEntry = v82;
  v84 = 2LL;
  do
  {
    *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 24LL) = -1;
    --v84;
  }
  while ( v84 );
  *(_WORD *)(**(_QWORD **)(LdrpImageEntry + 152) - 52LL) = -1;
  v85 = LdrpImageEntry;
  *(__m128i *)(LdrpImageEntry + 72) = v146;
  *(_DWORD *)(v85 + 104) |= 4u;
  v86 = *(_DWORD *)(v85 + 104);
  if ( (NtCurrentPeb()->BitField & 0x10) != 0 )
  {
    v86 |= 1u;
    *(_DWORD *)(v85 + 104) = v86;
  }
  v87 = v122;
  if ( UseCOR )
  {
    v88 = v86 | 0x400000;
    *(_DWORD *)(v85 + 104) = v88;
    if ( v87 )
      *(_DWORD *)(v85 + 104) = v88 | 0x1000000;
  }
  v89 = LdrpImageEntry;
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 4) != 0 )
    *(_QWORD *)(LdrpImageEntry + 248) = 0LL;
  v90 = 0LL;
  v91 = v146.m128i_i64[1] + v146.m128i_u16[0];
  v92 = (_WORD *)v91;
  if ( v91 && v91 > v146.m128i_i64[1] )
  {
    while ( 1 )
    {
      v93 = v92--;
      if ( *v92 == 92 )
        break;
      if ( (unsigned __int64)v92 <= v146.m128i_i64[1] )
        goto LABEL_216;
    }
    v90 = v93;
  }
LABEL_216:
  if ( v90 )
  {
    v94 = v91 - (_WORD)v90;
    *(_WORD *)(v89 + 88) = v94;
    if ( v146.m128i_u16[1] - (unsigned __int64)v146.m128i_u16[0] >= 2 )
      v94 += 2;
    *(_WORD *)(v89 + 90) = v94;
    *(_QWORD *)(v89 + 96) = v90;
  }
  else
  {
    *(_OWORD *)(v89 + 88) = *(_OWORD *)(v83 + 72);
  }
  v95 = *(const void **)(ProcessEnvironmentBlock + 16);
  v96 = v95;
  v97 = v139;
  if ( *(const void **)(v139 + 48) != v95 && !v87 && !UseWOW64 )
  {
    LODWORD(v25) = LdrpProtectAndRelocateImage(v95);
    ApplicationKeyOption = v25;
    if ( (int)v25 < 0 )
      return (unsigned int)v25;
    v96 = *(const void **)(ProcessEnvironmentBlock + 16);
    v89 = LdrpImageEntry;
  }
  *(_QWORD *)(v89 + 48) = v96;
  LdrpInsertDataTableEntry(v89);
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
  LdrpInsertModuleToIndex(LdrpImageEntry, v97, v98, v99);
  LODWORD(v25) = LdrpProcessMappedModule(LdrpImageEntry, 0, UseWOW64 == 0);
  ApplicationKeyOption = v25;
  if ( (int)v25 < 0 )
    return (unsigned int)v25;
  *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 56LL) = 9;
  v100 = RtlpInitCurrentDir(&UnicodeString.Length);
  ApplicationKeyOption = v100;
  if ( v100 < 0 )
  {
    v101 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LODWORD(v119) = v100;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        5299,
        "LdrpInitializeProcess",
        0,
        "Initializing the current directory to \"%wZ\" failed with status 0x%08lx\n",
        &UnicodeString,
        v119);
      v101 = LdrpDebugFlags;
    }
    if ( (v101 & 0x10) != 0 )
      __debugbreak();
  }
  if ( !v130 )
    RtlFreeAnsiString(&UnicodeString);
  if ( AvrfAppVerifierMode )
  {
    v102 = LdrpAllocateModuleEntry(0LL);
    v103 = v102;
    if ( !v102 )
    {
      v41 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) == 0 )
      {
LABEL_199:
        if ( (v41 & 0x10) != 0 )
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
      v41 = LdrpDebugFlags;
      goto LABEL_199;
    }
    *(_DWORD *)(*(_QWORD *)(v102 + 152) + 24LL) = -1;
    *(_WORD *)(**(_QWORD **)(v102 + 152) - 52LL) = -1;
    v104 = v160;
    *(_DWORD *)(v102 + 104) |= *(_DWORD *)(v160 + 104);
    *(_QWORD *)(v102 + 248) = *(_QWORD *)(v104 + 248);
    *(_WORD *)(v102 + 110) = 0;
    *(_OWORD *)(v102 + 72) = *(_OWORD *)(v104 + 72);
    *(_OWORD *)(v102 + 88) = *(_OWORD *)(v104 + 88);
    *(_DWORD *)(v102 + 128) = *(_DWORD *)(v104 + 128);
    *(_QWORD *)(v102 + 48) = *(_QWORD *)(v104 + 48);
    LdrpInsertDataTableEntry(v102);
    LdrpLogDllState(*(_QWORD *)(v103 + 48), v103 + 72, 0x14A5u);
    LODWORD(v25) = RtlImageNtHeaderEx(3, *(_QWORD *)(v103 + 48), 0LL, &v143);
    ApplicationKeyOption = v25;
    if ( (int)v25 < 0 )
      return (unsigned int)v25;
    LdrpInsertModuleToIndex(v103, v143, v105, v106);
    LODWORD(v25) = LdrpProcessMappedModule(v103, 0, 1);
    ApplicationKeyOption = v25;
    if ( (int)v25 < 0 )
      return (unsigned int)v25;
    *(_QWORD *)(v103 + 56) = *(_QWORD *)(v104 + 56);
    LdrpLogDllState(*(_QWORD *)(v103 + 48), v103 + 72, 0x14ADu);
    *(_DWORD *)(*(_QWORD *)(v103 + 152) + 56LL) = 7;
    if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x100) != 0 || (AvrfAppVerifierMode & 2) != 0 )
    {
      LODWORD(v25) = AVrfInitializeVerifier(0, 0, 0, 1, v144, 0LL);
      ApplicationKeyOption = v25;
      if ( (int)v25 >= 0 && (AvrfAppVerifierMode & 2) != 0 )
      {
        *(_DWORD *)(*(_QWORD *)(v103 + 152) + 56LL) = 9;
        LODWORD(v25) = ApplicationKeyOption;
      }
    }
    else
    {
      v123 = 0;
      LODWORD(v25) = LdrpInitializeGraphRecurse(*(__int64 **)(v103 + 152), 0LL, &v123);
      ApplicationKeyOption = v25;
    }
    if ( (int)v25 < 0 )
      return (unsigned int)v25;
    v97 = v139;
  }
  LdrpDropLastInProgressCount();
  if ( !UseWOW64 )
  {
    v157 = 0LL;
    if ( UseCOR )
    {
      LODWORD(v25) = LdrpCorInitialize(&v157);
      ApplicationKeyOption = v25;
      if ( (int)v25 < 0 )
        return (unsigned int)v25;
      v107 = v122;
      if ( (_BYTE)v122 )
      {
        LODWORD(v25) = LdrpCorValidateImage(*(_QWORD *)(ProcessEnvironmentBlock + 16));
        ApplicationKeyOption = v25;
        if ( (int)v25 < 0 )
          return (unsigned int)v25;
      }
      if ( (v132->SameTebFlags & 0x400) != 0 )
        *(_QWORD *)(v145 + 128) = __ROR8__(LdrpCorExeMainRoutine, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330];
    }
    else
    {
      v107 = v122;
    }
    LODWORD(v25) = LdrpInitializeTls();
    ApplicationKeyOption = v25;
    if ( (int)v25 < 0 )
    {
      v26 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) == 0 )
        goto LABEL_315;
      v62 = "Initializing TLS slots failed with status 0x%08lx\n";
      v58 = 5549;
      goto LABEL_335;
    }
    if ( v157 )
    {
      v124 = 0;
      LODWORD(v25) = LdrpInitializeGraphRecurse(*(__int64 **)(v157 + 152), 0LL, &v124);
      ApplicationKeyOption = v25;
      if ( (int)v25 < 0 )
      {
        v26 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) == 0 )
          goto LABEL_315;
        v62 = "DllMain of MSCOREE (or its dependents) failed with status 0x%08lx\n";
        v58 = 5568;
        goto LABEL_335;
      }
    }
    LODWORD(v25) = LdrpInitializeImportRedirection();
    ApplicationKeyOption = v25;
    if ( (int)v25 < 0 )
    {
      v26 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) == 0 )
        goto LABEL_315;
      v62 = "Loading of import redirection module failed with status 0x%08x\n";
      v58 = 5584;
      goto LABEL_335;
    }
    v155 = 0LL;
    if ( (unsigned __int16)(*(_WORD *)(v97 + 92) - 2) <= 1u )
    {
      LODWORD(v25) = LdrLoadDll(16385LL, 0LL, (__int64)LdrpKernel32DllName, &v140);
      ApplicationKeyOption = v25;
      if ( (int)v25 < 0 )
      {
        if ( (_DWORD)v25 != -1073741515 )
        {
          v26 = LdrpDebugFlags;
          if ( (LdrpDebugFlags & 3) == 0 )
            goto LABEL_315;
          LODWORD(v119) = v25;
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5742,
            "LdrpInitializeProcess",
            0,
            "Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
            LdrpKernel32DllName,
            v119);
          goto LABEL_314;
        }
        LODWORD(v25) = LdrLoadDll(16385LL, 0LL, (__int64)LdrpKernelbaseDllName, &v140);
        ApplicationKeyOption = v25;
        if ( (int)v25 < 0 )
        {
          v26 = LdrpDebugFlags;
          if ( (LdrpDebugFlags & 3) == 0 )
            goto LABEL_315;
          LODWORD(v119) = v25;
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5715,
            "LdrpInitializeProcess",
            0,
            "Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
            LdrpKernelbaseDllName,
            v119);
          goto LABEL_314;
        }
        LODWORD(v25) = LdrpCodeAuthzInitialize();
        ApplicationKeyOption = v25;
        if ( (int)(v25 + 0x80000000) >= 0 && (_DWORD)v25 != -1073741515 )
        {
          v26 = LdrpDebugFlags;
          if ( (LdrpDebugFlags & 3) == 0 )
            goto LABEL_315;
          v62 = "LdrpCodeAuthzInitialize failed with status 0x%08lx\n";
          v58 = 5731;
          goto LABEL_335;
        }
        ApplicationKeyOption = 0;
        v108 = v140;
      }
      else
      {
        LODWORD(v25) = LdrGetProcedureAddressForCaller(
                         v140,
                         &qword_18011DB10,
                         0,
                         &Kernel32ThreadInitThunkFunction,
                         0,
                         retaddr);
        ApplicationKeyOption = v25;
        if ( (int)v25 < 0 )
        {
          v26 = LdrpDebugFlags;
          if ( (LdrpDebugFlags & 3) == 0 )
            goto LABEL_315;
          LODWORD(v120) = v25;
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5629,
            "LdrpInitializeProcess",
            0,
            "Locating procedure \"%Z\" in Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
            &qword_18011DB10,
            LdrpKernel32DllName,
            v120);
          goto LABEL_314;
        }
        LdrGetProcedureAddressForCaller(v140, &qword_18011DB20, 0, &v155, 0, retaddr);
        LODWORD(v25) = LdrpSnapKernelBaseExtensions();
        ApplicationKeyOption = v25;
        if ( (int)v25 < 0 )
          return (unsigned int)v25;
        LODWORD(v25) = LdrpCodeAuthzInitialize();
        ApplicationKeyOption = v25;
        if ( (int)v25 < 0 )
          return (unsigned int)v25;
        LODWORD(v25) = LdrpFindLoadedDll(LdrpKernelbaseDllName, 0, &v161);
        ApplicationKeyOption = v25;
        if ( (int)v25 < 0 )
        {
          v26 = LdrpDebugFlags;
          if ( (LdrpDebugFlags & 3) == 0 )
            goto LABEL_315;
          LODWORD(v119) = v25;
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5697,
            "LdrpInitializeProcess",
            0,
            "Finding \"%wZ\" failed with status 0x%08lx\n",
            LdrpKernelbaseDllName,
            v119);
          goto LABEL_314;
        }
        v108 = *(_QWORD *)(v161 + 48);
      }
      ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(v108, &qword_18011DB40, 0, &v162, 0, retaddr);
      LODWORD(v25) = ProcedureAddressForCaller;
      ApplicationKeyOption = ProcedureAddressForCaller;
      if ( ProcedureAddressForCaller < 0 )
      {
        v26 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) == 0 )
          goto LABEL_315;
        v62 = "Finding KernelbasePostInit failed with status 0x%08lx\n";
        v58 = 5760;
        goto LABEL_335;
      }
      LODWORD(v25) = v162((unsigned int)ProcedureAddressForCaller);
      ApplicationKeyOption = v25;
      if ( (int)v25 < 0 )
      {
        v26 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) == 0 )
          goto LABEL_315;
        v62 = "Calling KernelbasePostInit failed with status 0x%08lx\n";
        v58 = 5768;
        goto LABEL_335;
      }
      ApplicationKeyOption = 0;
    }
    LdrpDrainWorkQueue(0);
    SbObtainTraceHandle(0LL);
    v110 = v158;
    if ( v158 && *(_DWORD *)(v158 + 528) )
    {
      *(_QWORD *)(ProcessEnvironmentBlock + 736) = 0LL;
      LdrpInitShimEngine(v110);
    }
    v111 = RtlpForceCSDebugInfoCreation;
    if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x400000) != 0 )
      v111 = 1;
    RtlpForceCSDebugInfoCreation = v111;
    if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x10000000) != 0 )
    {
      *(_DWORD *)(v127 + 1036) = 1;
      v112 = 1;
    }
    else
    {
      v112 = *(_DWORD *)(v127 + 1036);
    }
    LdrpEnableParallelLoading(v112);
    LdrInitState = 1;
    *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 56LL) = 2;
    **((_DWORD **)&v178[2] + 1) = 0;
    if ( v107 )
    {
      v113 = LdrpCorProcessImports(LdrpImageEntry);
    }
    else
    {
      LODWORD(v178[2]) |= 1u;
      LdrpMapAndSnapDependency((__int64)v178);
      LdrpDrainWorkQueue(1);
      LODWORD(v25) = ApplicationKeyOption;
      if ( ApplicationKeyOption < 0 )
        goto LABEL_323;
      v113 = LdrpPrepareModuleForExecution(LdrpImageEntry, *((__int64 *)&v178[2] + 1));
    }
    ApplicationKeyOption = v113;
    LODWORD(v25) = v113;
    if ( v113 >= 0 )
    {
      LdrInitState = 2;
      v142[3] = 1;
      v164[1] = *(_QWORD *)(LdrpImageEntry + 48);
      v164[2] = 4096LL;
      ZwSetInformationVirtualMemory();
      if ( *(_BYTE *)(ProcessEnvironmentBlock + 2) )
        LdrpDoDebuggerBreak();
      LdrpDropLastInProgressCount();
      if ( Kernel32ThreadInitThunkFunction )
      {
        LODWORD(v25) = Kernel32ThreadInitThunkFunction(1LL, 0LL, 0LL, v114);
        ApplicationKeyOption = v25;
        if ( (int)v25 < 0 )
          return (unsigned int)v25;
        LODWORD(v25) = LdrpInitializePerUserWindowsDirectory(v155);
        ApplicationKeyOption = v25;
        if ( (int)v25 < 0 )
          return (unsigned int)v25;
      }
      LdrpProcessInitContextRecord = v145;
      LdrpDrainWorkQueue(0);
      LdrpAcquireLoaderLock();
      v125[0] = 0;
      ApplicationKeyOption = LdrpInitializeGraphRecurse(
                               *(__int64 **)(LdrpImageEntry + 152),
                               *((__int64 *)&v178[2] + 1),
                               v125);
      LdrpReleaseLoaderLock(v115, 9LL, (unsigned int)ApplicationKeyOption);
      LdrpFreeLoadContextOfNode(*(_QWORD **)(LdrpImageEntry + 152), *((__int64 *)&v178[2] + 1));
      LdrpDropLastInProgressCount();
      LdrpProcessInitContextRecord = 0LL;
      if ( v180 )
        RtlReleasePath(v179[0]);
      v25 = (unsigned int)ApplicationKeyOption;
      if ( ApplicationKeyOption >= 0 )
      {
        v116 = LdrpImageEntry;
        if ( *(_WORD *)(LdrpImageEntry + 110) )
        {
          v166 = 72LL;
          v167 = 1;
          v168 = 0LL;
          v169 = 0LL;
          v170 = 0LL;
          v171 = 0LL;
          RtlActivateActivationContextUnsafeFast((__int64)&v166, *(_QWORD *)(LdrpImageEntry + 136));
          LdrpCallTlsInitializers(1u, LdrpImageEntry);
          RtlDeactivateActivationContextUnsafeFast((__int64)&v166);
        }
        if ( g_ShimsEnabled
          && !((unsigned __int8 (__fastcall *)(unsigned __int16 *, __int64))(__ROR8__(
                                                                               g_pfnSE_InstallAfterInit,
                                                                               64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))(
                &v136,
                v110) )
        {
          g_ShimsEnabled = 0;
          LdrUnloadDll(g_pShimEngineModule);
          g_pShimEngineModule = 0LL;
        }
        v117 = *(void (__fastcall **)(__int64, __int64))(ProcessEnvironmentBlock + 560);
        if ( v117 )
          v117(v25, v116);
        goto LABEL_343;
      }
      v26 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        v62 = "Running the init routines of the executable's static imports failed with status 0x%08lx\n";
        v58 = 6122;
        goto LABEL_335;
      }
LABEL_315:
      if ( (v26 & 0x10) != 0 )
        __debugbreak();
      return (unsigned int)v25;
    }
LABEL_323:
    v26 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      v62 = "Walking the import tables of the executable and its static imports failed with status 0x%08lx\n";
      v58 = 5980;
LABEL_335:
      LODWORD(v118) = v25;
      LdrpLogDbgPrint((unsigned int)"minkernel\\ntdll\\ldrinit.c", v58, "LdrpInitializeProcess", 0, v62, v118);
LABEL_314:
      LODWORD(v25) = ApplicationKeyOption;
      v26 = LdrpDebugFlags;
      goto LABEL_315;
    }
    goto LABEL_315;
  }
  if ( v141 )
  {
    NtClose(v141);
    v141 = 0LL;
    if ( LdrpLargePageDllKeyHandle )
    {
      NtClose(LdrpLargePageDllKeyHandle);
      LdrpLargePageDllKeyHandle = 0LL;
    }
  }
  if ( v133 )
  {
    NtClose(v133);
    v133 = 0LL;
  }
  LODWORD(v25) = LdrpLoadWow64((const void **)&v135);
  ApplicationKeyOption = v25;
  if ( (int)v25 < 0 )
    return (unsigned int)v25;
  if ( *(_BYTE *)(ProcessEnvironmentBlock + 2) )
    LdrpDoDebuggerBreak();
  LdrInitState = 3;
  _interlockedbittestandreset((volatile signed __int32 *)(ProcessEnvironmentBlock + 80), 1u);
  g_LdrpWow64LdrpInitialize(v145);
LABEL_343:
  if ( v141 )
    NtClose(v141);
  if ( v133 )
    NtClose(v133);
  return 0LL;
}
