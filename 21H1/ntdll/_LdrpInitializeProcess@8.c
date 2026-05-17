/*
 * XREFs of _LdrpInitializeProcess@8 @ 0x4B32A2D0
 * Callers:
 *     __LdrpInitialize@8 @ 0x4B2E6327 (__LdrpInitialize@8.c)
 * Callees:
 *     _LdrpCorInitialize@4 @ 0x4B2A6100 (_LdrpCorInitialize@4.c)
 *     _LdrpInitShimEngine@4 @ 0x4B2A63CD (_LdrpInitShimEngine@4.c)
 *     _RtlQueryApplicationKeyOption@32 @ 0x4B2A6C1D (_RtlQueryApplicationKeyOption@32.c)
 *     _LdrpCorProcessImports@4 @ 0x4B2A6D1F (_LdrpCorProcessImports@4.c)
 *     _LdrpCorValidateImage@4 @ 0x4B2A6D90 (_LdrpCorValidateImage@4.c)
 *     _RtlInitializeHeapLogging@0 @ 0x4B2AE064 (_RtlInitializeHeapLogging@0.c)
 *     _EtwEventRegister@16 @ 0x4B2AE0A0 (_EtwEventRegister@16.c)
 *     _LdrpEnableParallelLoading@4 @ 0x4B2AEBCB (_LdrpEnableParallelLoading@4.c)
 *     _SbObtainTraceHandle@4 @ 0x4B2B8430 (_SbObtainTraceHandle@4.c)
 *     _RtlInsertInvertedFunctionTable@8 @ 0x4B2B9D0A (_RtlInsertInvertedFunctionTable@8.c)
 *     _LdrImageDirectoryEntryToLoadConfig@4 @ 0x4B2BA82F (_LdrImageDirectoryEntryToLoadConfig@4.c)
 *     _RtlImageDirectoryEntryToData@16 @ 0x4B2BDDE0 (_RtlImageDirectoryEntryToData@16.c)
 *     _RtlImageNtHeaderEx@20 @ 0x4B2BE540 (_RtlImageNtHeaderEx@20.c)
 *     _LdrStandardizeSystemPath@4 @ 0x4B2BFCB0 (_LdrStandardizeSystemPath@4.c)
 *     _RtlAppendUnicodeToString@8 @ 0x4B2BFE00 (_RtlAppendUnicodeToString@8.c)
 *     _RtlGetNtSystemRoot@0 @ 0x4B2C0180 (_RtlGetNtSystemRoot@0.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlFreeAnsiString@4 @ 0x4B2C3B40 (_RtlFreeAnsiString@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _LdrpMapAndSnapDependency@4 @ 0x4B2CB3D0 (_LdrpMapAndSnapDependency@4.c)
 *     @RtlDeactivateActivationContextUnsafeFast@4 @ 0x4B2CC6C0 (@RtlDeactivateActivationContextUnsafeFast@4.c)
 *     _LdrUnloadDll@4 @ 0x4B2CCD40 (_LdrUnloadDll@4.c)
 *     _LdrGetProcedureAddressForCaller@24 @ 0x4B2CCED0 (_LdrGetProcedureAddressForCaller@24.c)
 *     @RtlActivateActivationContextUnsafeFast@8 @ 0x4B2CDC10 (@RtlActivateActivationContextUnsafeFast@8.c)
 *     _LdrLoadDll@16 @ 0x4B2CDD70 (_LdrLoadDll@16.c)
 *     _LdrpLogDllState@12 @ 0x4B2CDF06 (_LdrpLogDllState@12.c)
 *     _LdrpSnapKernelBaseExtensions@0 @ 0x4B2CE517 (_LdrpSnapKernelBaseExtensions@0.c)
 *     _LdrpCallTlsInitializers@8 @ 0x4B2CF073 (_LdrpCallTlsInitializers@8.c)
 *     _LdrControlFlowGuardEnforcedWithExportSuppression@0 @ 0x4B2D00AD (_LdrControlFlowGuardEnforcedWithExportSuppression@0.c)
 *     _LdrpProcessMappedModule@16 @ 0x4B2D05EC (_LdrpProcessMappedModule@16.c)
 *     _LdrpAllocateModuleEntry@4 @ 0x4B2D0962 (_LdrpAllocateModuleEntry@4.c)
 *     _RtlAppendUnicodeStringToString@8 @ 0x4B2D10A0 (_RtlAppendUnicodeStringToString@8.c)
 *     _LdrpInsertDataTableEntry@4 @ 0x4B2D15EF (_LdrpInsertDataTableEntry@4.c)
 *     _LdrpInitializeGraphRecurse@12 @ 0x4B2D1904 (_LdrpInitializeGraphRecurse@12.c)
 *     _LdrpDrainWorkQueue@4 @ 0x4B2D19AF (_LdrpDrainWorkQueue@4.c)
 *     _RtlInitUnicodeStringEx@8 @ 0x4B2D1CE0 (_RtlInitUnicodeStringEx@8.c)
 *     _LdrpPrepareModuleForExecution@8 @ 0x4B2D2176 (_LdrpPrepareModuleForExecution@8.c)
 *     _LdrpReleaseLoaderLock@16 @ 0x4B2D26DD (_LdrpReleaseLoaderLock@16.c)
 *     _LdrpAcquireLoaderLock@0 @ 0x4B2D2725 (_LdrpAcquireLoaderLock@0.c)
 *     _RtlpInitEnvironmentBlock@0 @ 0x4B2DAF42 (_RtlpInitEnvironmentBlock@0.c)
 *     _LdrpFreeLoadContextOfNode@8 @ 0x4B2DDEB6 (_LdrpFreeLoadContextOfNode@8.c)
 *     _RtlReleasePath@4 @ 0x4B2DE7B0 (_RtlReleasePath@4.c)
 *     _LdrpInitParallelLoadingSupport@0 @ 0x4B2DFB52 (_LdrpInitParallelLoadingSupport@0.c)
 *     _RtlInitializeCriticalSectionEx@12 @ 0x4B2DFB90 (_RtlInitializeCriticalSectionEx@12.c)
 *     _LdrpInitializeTls@0 @ 0x4B2E14F7 (_LdrpInitializeTls@0.c)
 *     _RtlSetBits@12 @ 0x4B2E1AA0 (_RtlSetBits@12.c)
 *     _LdrProtectMrdata@4 @ 0x4B2E1D36 (_LdrProtectMrdata@4.c)
 *     _RtlpInitCurrentDir@4 @ 0x4B2E412F (_RtlpInitCurrentDir@4.c)
 *     _RtlpInitializeThreadActivationContextStack@4 @ 0x4B2E4934 (_RtlpInitializeThreadActivationContextStack@4.c)
 *     _LdrpIsImageArmadilloProtected@4 @ 0x4B2E760B (_LdrpIsImageArmadilloProtected@4.c)
 *     _LdrpDropLastInProgressCount@0 @ 0x4B2E79C9 (_LdrpDropLastInProgressCount@0.c)
 *     _LdrpCodeAuthzInitialize@0 @ 0x4B2E82F2 (_LdrpCodeAuthzInitialize@0.c)
 *     _RtlQueryImageFileExecutionOptions@28 @ 0x4B2E9700 (_RtlQueryImageFileExecutionOptions@28.c)
 *     _LdrpFindLoadedDll@12 @ 0x4B2E9CFC (_LdrpFindLoadedDll@12.c)
 *     _TpInitializePackage@0 @ 0x4B2EA4C0 (_TpInitializePackage@0.c)
 *     _RtlCreateTagHeap@16 @ 0x4B2EA550 (_RtlCreateTagHeap@16.c)
 *     _RtlpInitParameterBlock@0 @ 0x4B2EA5B7 (_RtlpInitParameterBlock@0.c)
 *     _LdrpInsertModuleToIndex@8 @ 0x4B2EBA2D (_LdrpInsertModuleToIndex@8.c)
 *     _LdrpInitializePolicy@0 @ 0x4B2EBB2B (_LdrpInitializePolicy@0.c)
 *     _LdrpInitializeImportRedirection@0 @ 0x4B2EC596 (_LdrpInitializeImportRedirection@0.c)
 *     _LdrpInitializePerUserWindowsDirectory@4 @ 0x4B2EC686 (_LdrpInitializePerUserWindowsDirectory@4.c)
 *     _RtlSetHeapInformation@16 @ 0x4B2ECAF0 (_RtlSetHeapInformation@16.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwQueryInformationProcess@20 @ 0x4B2F2AF0 (_ZwQueryInformationProcess@20.c)
 *     _ZwSetInformationProcess@16 @ 0x4B2F2B40 (_ZwSetInformationProcess@16.c)
 *     _NtQuerySystemInformation@16 @ 0x4B2F2CE0 (_NtQuerySystemInformation@16.c)
 *     _ZwOpenDirectoryObject@12 @ 0x4B2F2F00 (_ZwOpenDirectoryObject@12.c)
 *     _NtOpenSymbolicLinkObject@12 @ 0x4B2F3C50 (_NtOpenSymbolicLinkObject@12.c)
 *     _ZwQuerySymbolicLinkObject@12 @ 0x4B2F3F60 (_ZwQuerySymbolicLinkObject@12.c)
 *     _NtSetInformationVirtualMemory@24 @ 0x4B2F4360 (_NtSetInformationVirtualMemory@24.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     __SEH_prolog4_GS @ 0x4B307B20 (__SEH_prolog4_GS.c)
 *     _RtlRaiseStatus@4 @ 0x4B308980 (_RtlRaiseStatus@4.c)
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 *     _LdrpLogDbgPrint @ 0x4B32E582 (_LdrpLogDbgPrint.c)
 *     _LdrpProtectAndRelocateImage@20 @ 0x4B3310B1 (_LdrpProtectAndRelocateImage@20.c)
 *     _LdrpCheckAppDirType@4 @ 0x4B33145D (_LdrpCheckAppDirType@4.c)
 *     _LdrpCheckForSafeDiscImage@4 @ 0x4B33155E (_LdrpCheckForSafeDiscImage@4.c)
 *     _LdrpCheckForSecuROMImage@4 @ 0x4B33163B (_LdrpCheckForSecuROMImage@4.c)
 *     _LdrpDoDebuggerBreak@0 @ 0x4B331A37 (_LdrpDoDebuggerBreak@0.c)
 *     _LdrpInitializeExecutionOptions@24 @ 0x4B331EB9 (_LdrpInitializeExecutionOptions@24.c)
 *     _LdrpInitializeNlsInfo@4 @ 0x4B332D65 (_LdrpInitializeNlsInfo@4.c)
 *     _LdrpInitializeProcessHeap@12 @ 0x4B332D8F (_LdrpInitializeProcessHeap@12.c)
 *     _LdrpLoadDelegatedNtdll@4 @ 0x4B3331FC (_LdrpLoadDelegatedNtdll@4.c)
 *     _LdrpCaptureCriticalThunks@0 @ 0x4B333BB3 (_LdrpCaptureCriticalThunks@0.c)
 *     _LdrpIsNlsUtf8Process@0 @ 0x4B333E8F (_LdrpIsNlsUtf8Process@0.c)
 *     _LdrpEntrySectionValid@8 @ 0x4B334854 (_LdrpEntrySectionValid@8.c)
 *     _AVrfInitializeVerifier@24 @ 0x4B338523 (_AVrfInitializeVerifier@24.c)
 *     _RtlNormalizeProcessParams@4 @ 0x4B33FCE0 (_RtlNormalizeProcessParams@4.c)
 *     _RtlpInitDeferredCriticalSection@0 @ 0x4B34A7FC (_RtlpInitDeferredCriticalSection@0.c)
 *     _RtlInitializeHeapManager@4 @ 0x4B356A3E (_RtlInitializeHeapManager@4.c)
 *     _RtlInitializeProcessExceptionChain@4 @ 0x4B3665BC (_RtlInitializeProcessExceptionChain@4.c)
 *     _RtlInitializeExceptionLog@4 @ 0x4B368689 (_RtlInitializeExceptionLog@4.c)
 *     _RtlpInitializeStackTraceDatabase@12 @ 0x4B369163 (_RtlpInitializeStackTraceDatabase@12.c)
 *     _RtlpInitFeatureConfiguration@0 @ 0x4B3699BE (_RtlpInitFeatureConfiguration@0.c)
 *     _RtlCreateInvertedFunctionTableCacheEntry@8 @ 0x4B36D377 (_RtlCreateInvertedFunctionTableCacheEntry@8.c)
 *     _TpSetDefaultPoolCpuSets@8 @ 0x4B383BD4 (_TpSetDefaultPoolCpuSets@8.c)
 */

int __fastcall LdrpInitializeProcess(int a1, unsigned int a2)
{
  int v2; // eax
  int InformationProcess; // eax
  int v4; // eax
  unsigned int *p_InheritedAddressSpace; // esi
  bool v6; // cc
  unsigned int v7; // ecx
  _WORD *v8; // edx
  unsigned __int16 v9; // di
  _BYTE *v10; // edi
  char v11; // al
  int result; // eax
  int *v13; // eax
  int v14; // ecx
  int v15; // esi
  int v16; // edx
  char v17; // al
  char v19; // cl
  bool v20; // al
  struct _TEB *v21; // eax
  int WowTebOffset; // ecx
  unsigned int *v23; // eax
  unsigned int v24; // eax
  int v25; // ecx
  int v26; // edi
  unsigned int *v27; // esi
  char v28; // cl
  int v29; // ecx
  _BYTE *v30; // eax
  unsigned int *Config; // eax
  unsigned int v32; // ecx
  signed int v33; // eax
  unsigned int v34; // ecx
  char v35; // al
  unsigned int v36; // eax
  int v37; // ecx
  unsigned int v38; // edi
  int v39; // eax
  _DWORD *v40; // edi
  char v41; // al
  unsigned int *v42; // esi
  int v43; // eax
  int v44; // ecx
  _WORD *NtSystemRoot; // eax
  int Heap; // eax
  int v47; // eax
  int v48; // eax
  wchar_t *v49; // eax
  int v50; // eax
  int v51; // ecx
  unsigned int *v52; // eax
  void *v53; // ecx
  int ModuleEntry; // eax
  int v55; // esi
  _DWORD *v56; // ecx
  int v57; // edx
  _DWORD *v58; // esi
  int v59; // ecx
  _DWORD *v60; // esi
  int v61; // eax
  _DWORD *v62; // eax
  _DWORD *v63; // edx
  int v64; // ecx
  int v65; // ecx
  unsigned int *v66; // esi
  wchar_t *v67; // eax
  wchar_t *v68; // ecx
  wchar_t *v69; // ecx
  __int16 v70; // ax
  unsigned int v71; // eax
  unsigned int v72; // eax
  _DWORD *v73; // esi
  int v74; // ecx
  int inited; // eax
  char v76; // cl
  int v77; // eax
  _DWORD *v78; // ecx
  _DWORD *v79; // ecx
  int v80; // ecx
  unsigned int *v81; // ecx
  unsigned int *v82; // ecx
  int v83; // ecx
  __int16 v84; // cx
  char v85; // cl
  int v86; // eax
  unsigned __int16 v87; // dx
  int v88; // ecx
  void *v89; // ecx
  unsigned int v90; // ecx
  _DWORD *v91; // ecx
  int v92; // ecx
  int v93; // ecx
  _DWORD *v94; // edi
  unsigned __int8 (__thiscall *v95)(_DWORD, unsigned __int16 *, _DWORD *); // ecx
  void (__thiscall *v96)(unsigned int); // esi
  int v97; // [esp-18h] [ebp-270h]
  int v98; // [esp-14h] [ebp-26Ch]
  int v99; // [esp-14h] [ebp-26Ch]
  const char *v100; // [esp-Ch] [ebp-264h]
  int v101; // [esp-Ch] [ebp-264h]
  int *UniqueProcess; // [esp-8h] [ebp-260h]
  const char *v103; // [esp-8h] [ebp-260h]
  int v104; // [esp-8h] [ebp-260h]
  const char *v105; // [esp-8h] [ebp-260h]
  int v106; // [esp-4h] [ebp-25Ch]
  int v107; // [esp-4h] [ebp-25Ch]
  int v108; // [esp-4h] [ebp-25Ch]
  NTSTATUS v109; // [esp-4h] [ebp-25Ch]
  int v110; // [esp-4h] [ebp-25Ch]
  int v111[27]; // [esp+10h] [ebp-248h] BYREF
  int v112[9]; // [esp+7Ch] [ebp-1DCh] BYREF
  _DWORD v113[2]; // [esp+A0h] [ebp-1B8h] BYREF
  int v114; // [esp+A8h] [ebp-1B0h] BYREF
  int SystemInformation; // [esp+ACh] [ebp-1ACh] BYREF
  int v116; // [esp+B0h] [ebp-1A8h] BYREF
  int v117; // [esp+B4h] [ebp-1A4h] BYREF
  int v118; // [esp+B8h] [ebp-1A0h]
  int *v119; // [esp+BCh] [ebp-19Ch]
  int v120; // [esp+C0h] [ebp-198h]
  int v121; // [esp+C4h] [ebp-194h]
  int v122; // [esp+C8h] [ebp-190h]
  const void *v123[2]; // [esp+CCh] [ebp-18Ch] BYREF
  _WORD v124[2]; // [esp+D4h] [ebp-184h] BYREF
  const WCHAR *v125; // [esp+D8h] [ebp-180h]
  int v126; // [esp+DCh] [ebp-17Ch] BYREF
  HANDLE Handle; // [esp+E0h] [ebp-178h] BYREF
  int v128; // [esp+E4h] [ebp-174h]
  int v129; // [esp+E8h] [ebp-170h] BYREF
  int (__thiscall *v130)(_DWORD); // [esp+ECh] [ebp-16Ch] BYREF
  int v131; // [esp+F0h] [ebp-168h]
  int (__stdcall *v132)(_BYTE *, int); // [esp+F4h] [ebp-164h] BYREF
  int v133; // [esp+F8h] [ebp-160h]
  int v134; // [esp+FCh] [ebp-15Ch] BYREF
  UNICODE_STRING v135; // [esp+100h] [ebp-158h] BYREF
  int v136; // [esp+10Ch] [ebp-14Ch] BYREF
  int v137; // [esp+110h] [ebp-148h] BYREF
  _DWORD *v138; // [esp+114h] [ebp-144h]
  HANDLE v139; // [esp+118h] [ebp-140h] BYREF
  HANDLE v140; // [esp+11Ch] [ebp-13Ch] BYREF
  struct _TEB *v141; // [esp+120h] [ebp-138h]
  unsigned __int16 v142; // [esp+124h] [ebp-134h] BYREF
  __int16 v143; // [esp+126h] [ebp-132h]
  _WORD *v144; // [esp+128h] [ebp-130h]
  _DWORD *v145; // [esp+12Ch] [ebp-12Ch] BYREF
  int v146; // [esp+130h] [ebp-128h] BYREF
  const void *v147; // [esp+134h] [ebp-124h] BYREF
  int v148; // [esp+138h] [ebp-120h]
  int v149; // [esp+13Ch] [ebp-11Ch] BYREF
  unsigned int v150; // [esp+140h] [ebp-118h]
  UNICODE_STRING UnicodeString; // [esp+144h] [ebp-114h] BYREF
  unsigned int v152; // [esp+14Ch] [ebp-10Ch] BYREF
  unsigned int v153; // [esp+150h] [ebp-108h]
  _DWORD *v154; // [esp+154h] [ebp-104h] BYREF
  char v155; // [esp+159h] [ebp-FFh] BYREF
  char v156; // [esp+15Ah] [ebp-FEh] BYREF
  char v157; // [esp+15Bh] [ebp-FDh] BYREF
  int v158; // [esp+15Ch] [ebp-FCh] BYREF
  void *v159; // [esp+160h] [ebp-F8h]
  wchar_t *v160; // [esp+164h] [ebp-F4h] BYREF
  unsigned int v161; // [esp+168h] [ebp-F0h]
  int v162; // [esp+16Ch] [ebp-ECh] BYREF
  int v163; // [esp+170h] [ebp-E8h]
  int v164; // [esp+174h] [ebp-E4h] BYREF
  int v165; // [esp+178h] [ebp-E0h] BYREF
  unsigned int *v166; // [esp+17Ch] [ebp-DCh]
  unsigned int *v167; // [esp+180h] [ebp-D8h]
  bool v168; // [esp+186h] [ebp-D2h]
  char v169; // [esp+187h] [ebp-D1h]
  NTSTATUS v170; // [esp+188h] [ebp-D0h] BYREF
  int v171[20]; // [esp+18Ch] [ebp-CCh] BYREF
  _QWORD v172[3]; // [esp+1DCh] [ebp-7Ch] BYREF
  _QWORD v173[3]; // [esp+1F4h] [ebp-64h] BYREF
  _QWORD v174[3]; // [esp+20Ch] [ebp-4Ch] BYREF
  _QWORD v175[3]; // [esp+224h] [ebp-34h] BYREF
  CPPEH_RECORD ms_exc; // [esp+240h] [ebp-18h]
  int retaddr; // [esp+25Ch] [ebp+4h]

  v153 = a2;
  v131 = a1;
  v124[0] = 24;
  v124[1] = 26;
  v125 = L"\\KnownDlls32";
  v123[0] = (const void *)1310739;
  v123[1] = "BaseQueryModuleData";
  RtlInitializeProcessExceptionChain(dword_4B3A92E0);
  v2 = `RtlpGetCookieValue'::`2'::CookieValue;
  if ( !`RtlpGetCookieValue'::`2'::CookieValue )
  {
    InformationProcess = ZwQueryInformationProcess(-1, 36, (int)&v116, 4, 0);
    if ( InformationProcess < 0 )
      RtlRaiseStatus(InformationProcess);
    v2 = v116;
    `RtlpGetCookieValue'::`2'::CookieValue = v116;
  }
  RtlpUnhandledExceptionFilter = __ROR4__(v2, v2 & 0x1F);
  if ( !v2 )
  {
    v4 = ZwQueryInformationProcess(-1, 36, (int)&v137, 4, 0);
    if ( v4 < 0 )
      RtlRaiseStatus(v4);
    v2 = v137;
    `RtlpGetCookieValue'::`2'::CookieValue = v137;
  }
  RtlpUserCallbackExceptionFilter = __ROR4__(v2, v2 & 0x1F);
  v141 = NtCurrentTeb();
  p_InheritedAddressSpace = (unsigned int *)&v141->ProcessEnvironmentBlock->InheritedAddressSpace;
  v166 = p_InheritedAddressSpace;
  v161 = 48;
  PebLdr = 48;
  byte_4B3A5D84 = 1;
  dword_4B3A5D90 = (int)&dword_4B3A5D8C;
  dword_4B3A5D8C = (int)&dword_4B3A5D8C;
  dword_4B3A5D98 = (int)&dword_4B3A5D94;
  dword_4B3A5D94 = (int)&dword_4B3A5D94;
  dword_4B3A5DA0 = (int)&dword_4B3A5D9C;
  dword_4B3A5D9C = (int)&dword_4B3A5D9C;
  byte_4B3A5DA8 = 0;
  dword_4B3A5DAC = 0;
  p_InheritedAddressSpace[3] = (unsigned int)&PebLdr;
  if ( (unsigned __int8)LdrpIsNlsUtf8Process() || (*(_DWORD *)(p_InheritedAddressSpace[4] + 8) & 0x8000000) != 0 )
  {
    p_InheritedAddressSpace[22] = 0;
    p_InheritedAddressSpace[23] = 0;
  }
  LdrpInitializeNlsInfo(p_InheritedAddressSpace);
  SRWLockSpinCycleCount = 0;
  v6 = p_InheritedAddressSpace[25] <= 1;
  if ( p_InheritedAddressSpace[25] > 1 )
    SRWLockSpinCycleCount = 10240;
  ConditionVariableSpinCycleCount = 0;
  if ( !v6 )
    ConditionVariableSpinCycleCount = 10240;
  RtlpWaitOnAddressSpinCycleCount = 0;
  if ( !v6 )
    RtlpWaitOnAddressSpinCycleCount = 10240;
  RtlpInitFeatureConfiguration();
  v7 = p_InheritedAddressSpace[4];
  v8 = *(_WORD **)(v7 + 60);
  if ( (*(_BYTE *)(v7 + 8) & 1) == 0 )
    v8 = (_WORD *)((char *)v8 + v7);
  v144 = v8;
  v9 = *(_WORD *)(v7 + 56);
  v142 = v9;
  v143 = v9 + 2;
  if ( v9 >= 8u && *v8 == 92 )
  {
    p_InheritedAddressSpace = v166;
    if ( v8[1] == 63 )
    {
      p_InheritedAddressSpace = v166;
      if ( v8[2] == 63 && v8[3] == 92 )
      {
        v142 = v9 - 8;
        v143 = v9 - 6;
        v144 = v8 + 4;
        *(_WORD *)(v7 + 56) -= 8;
        *(_WORD *)(v7 + 58) -= 8;
        *(_DWORD *)(v7 + 60) += 8;
      }
    }
  }
  v128 = 1;
  UseCOR = 0;
  v169 = 0;
  v145 = 0;
  RtlImageNtHeaderEx(3, p_InheritedAddressSpace[2], 0, 0, &v165);
  v10 = (_BYTE *)v165;
  LdrpAppHeaders = v165;
  if ( LdrpIsSecureProcess && (*(_BYTE *)(v165 + 22) & 0x20) == 0 )
  {
    v11 = ShowSnaps;
    if ( (ShowSnaps & 3) != 0 )
    {
      LdrpLogDbgPrint(
        "minkernel\\ntdll\\ldrinit.c",
        3817,
        "LdrpInitializeProcess",
        0,
        "Secure processes must be large address aware\n");
      v11 = ShowSnaps;
    }
    if ( (v11 & 0x10) != 0 )
      __debugbreak();
    return -1073741637;
  }
  v13 = LdrpHashTable;
  v14 = 32;
  do
  {
    v13[1] = (int)v13;
    *v13 = (int)v13;
    v13 += 2;
    --v14;
  }
  while ( v14 );
  RtlImageNtHeaderEx(3, v153, 0, 0, &v162);
  v15 = *(_DWORD *)(v162 + 80);
  RtlInsertInvertedFunctionTable(v153, v15);
  RtlCreateInvertedFunctionTableCacheEntry(v153, v15);
  LdrpCaptureCriticalThunks();
  LdrProtectMrdata(1);
  if ( LdrControlFlowGuardEnforcedWithExportSuppression() )
    LdrpSuppressedExportOverrideListPtr = (int)&LdrpSuppressedExportOverrideList;
  v16 = 3;
  if ( (MEMORY[0x7FFE02D5] & 3) != 0 )
    v17 = v10[95] & 1;
  else
    v17 = 0;
  if ( v17 )
  {
    LdrpNXProcessPermanent = 1;
  }
  else if ( (MEMORY[0x7FFE02D5] & 0xC) != 4 && LdrpIsImageArmadilloProtected(v10) )
  {
    RtlpProcessECVPolicy = 1;
  }
  v133 = 6;
  qmemcpy(v172, &unk_4B3A92E8, sizeof(v172));
  v136 = HIDWORD(v172[0]) >> 4;
  switch ( v16 & (unsigned int)(v172[0] >> 4) )
  {
    case 1u:
      RtlpProcessECVPolicy = 0;
      break;
    case 2u:
      RtlpProcessECVPolicy = 1;
      break;
    case 3u:
      RtlpProcessECVPolicy = 2;
      break;
  }
  qmemcpy(v173, &unk_4B3A92E8, sizeof(v173));
  v19 = v16 & (v173[1] >> 4);
  v136 = 0;
  LdrpEnforceIntegrityContinuity = v19 == 1;
  v20 = 1;
  if ( v19 != 1 )
  {
    qmemcpy(v174, &unk_4B3A92E8, sizeof(v174));
    v136 = 0;
    if ( ((unsigned __int8)v16 & (unsigned __int8)(v174[1] >> 4)) != (_BYTE)v16 )
      v20 = 0;
  }
  LdrpAuditIntegrityContinuity = v20;
  v21 = NtCurrentTeb();
  WowTebOffset = v21->WowTebOffset;
  if ( WowTebOffset < 0 )
    v21 = (struct _TEB *)((char *)v21 + WowTebOffset);
  if ( v21 == (struct _TEB *)v21->NtTib.Self )
    v23 = (unsigned int *)v21->TlsSlots[10];
  else
    v23 = (unsigned int *)v21[1].GdiTebBatch.Buffer[189];
  v24 = *v23;
  NativePageSize = v24;
  v25 = 0;
  NativePageShift = 0;
  if ( (v24 & 1) == 0 )
  {
    do
    {
      v24 >>= 1;
      ++v25;
    }
    while ( (v24 & 1) == 0 );
    NativePageShift = v25;
  }
  v26 = v153;
  v27 = v166;
  result = LdrpInitializeExecutionOptions(v153, &v139, &v140, &v154);
  v170 = result;
  if ( result < 0 )
  {
    v28 = ShowSnaps;
    if ( (ShowSnaps & 3) == 0 )
      goto LABEL_374;
    v106 = result;
    UniqueProcess = (int *)v141->ClientId.UniqueProcess;
    v100 = "Initializing the execution options for the process %lx failed with status 0x%08lx\n";
    v97 = 3963;
LABEL_145:
    LdrpLogDbgPrint("minkernel\\ntdll\\ldrinit.c", v97, "LdrpInitializeProcess", 0, v100, UniqueProcess, v106);
    goto LABEL_373;
  }
  LdrpLoadDelegatedNtdll(v139);
  if ( LdrpDelegatedNtdllBase )
  {
    v27[3] = 0;
    LdrpProcessInitialized = 2;
    return 0;
  }
  if ( (v27[26] & 2) != 0 )
  {
    v29 = 1;
    ShowSnaps |= 1u;
  }
  if ( (ShowSnaps & 5) != 0 )
    LdrpLogDbgPrint(
      "minkernel\\ntdll\\ldrinit.c",
      4010,
      "LdrpInitializeProcess",
      2,
      "Initializing process 0x%p\n",
      v141->ClientId.UniqueProcess);
  if ( !UseCOR )
  {
    v30 = RtlImageDirectoryEntryToData((void *)v29, v27[2], 1, 14, (int)&v136);
    if ( v30 )
    {
      UseCOR = 1;
      if ( (v30[16] & 1) != 0 )
        v169 = 1;
    }
  }
  LdrpSystemDllBase = v26;
  v138 = (_DWORD *)v27[122];
  RtlpTimeout = *((_QWORD *)v27 + 14);
  v163 = RtlNormalizeProcessParams(v27[4]);
  Config = LdrImageDirectoryEntryToLoadConfig((void *)v27[2]);
  v167 = Config;
  if ( Config )
  {
    v32 = *Config;
    if ( *Config >= 0x10 )
    {
      v27[26] &= ~Config[3];
      v32 = *Config;
    }
    if ( v32 >= 0x14 )
    {
      v27[26] |= Config[4];
      v32 = *Config;
    }
    if ( v32 >= 0x18 )
    {
      v33 = Config[5];
      if ( v33 )
        RtlpTimeout = -10000LL * v33;
    }
  }
  if ( (v27[26] & 2) != 0 )
    ShowSnaps |= 1u;
  if ( RtlpTimeout < -36000000000LL )
    RtlpTimeoutDisable = 1;
  result = RtlpInitDeferredCriticalSection();
  v170 = result;
  if ( result >= 0 )
  {
    v27[16] = (unsigned int)&TlsBitMap;
    v27[84] = (unsigned int)&TlsExpansionBitMap;
    memset(&RtlpFlsContext, 0, 0x30u);
    memset(dword_4B3A66D4, 0, sizeof(dword_4B3A66D4));
    dword_4B3A66F8 = (int)&dword_4B3A66F4;
    dword_4B3A66F4 = (int)&dword_4B3A66F4;
    TlsBitMap = 64;
    dword_4B3A5D34 = (int)(v27 + 17);
    *((_BYTE *)v27 + 68) |= 1u;
    TlsExpansionBitMap = 1024;
    dword_4B3A5D1C = (int)(v27 + 85);
    *((_BYTE *)v27 + 340) |= 1u;
    RtlSetBits(v27[16], 0x10u, 1u);
    v34 = v27[26];
    if ( (v34 & 0x1000) != 0 || (v35 = LdrpShouldCreateStackTraceDb) != 0 )
    {
      v36 = 16;
      v126 = 16;
      if ( LdrpIsSecureProcess )
      {
        v37 = -1073741772;
      }
      else
      {
        v37 = RtlQueryImageFileExecutionOptions(&v142, (int)L"StackTraceDatabaseSizeInMb", 4, &v126, 4u, 0, 0);
        v36 = v126;
      }
      if ( v37 >= 0 && v36 >= 0x10 )
      {
        if ( v36 <= 0x80 )
          v38 = v36 << 20;
        else
          v38 = 0x8000000;
      }
      else
      {
        v38 = 0x1000000;
      }
      if ( (ShowSnaps & 5) != 0 )
        LdrpLogDbgPrint(
          "minkernel\\ntdll\\ldrinit.c",
          4263,
          "LdrpInitializeProcess",
          2,
          "Stack trace database size is %Id Mb\n",
          v38 >> 20);
      RtlpInitializeStackTraceDatabase(v38);
      v34 = v27[26];
      v35 = LdrpShouldCreateStackTraceDb;
    }
    if ( (v34 & 0x1000) != 0 || v35 )
      RtlpForceCSDebugInfoCreation = 1;
    if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x400000) != 0 )
    {
      RtlpForceCSDebugInfoCreation = 1;
      RtlpForceCSToUseEvents = 1;
    }
    result = RtlInitializeCriticalSectionEx(&FastPebLock, 0, 0);
    v170 = result;
    if ( result >= 0 )
    {
      v27[7] = (unsigned int)&FastPebLock;
      result = RtlInitializeHeapManager(&v142);
      v170 = result;
      if ( result >= 0 )
      {
        qmemcpy(v175, &unk_4B3A92E8, sizeof(v175));
        v136 = 0;
        if ( ((v175[0] >> 12) & 3) == 1 )
          RtlSetHeapInformation(0, 1, 0, 0);
        v39 = LdrpInitializeProcessHeap(v163);
        v40 = (_DWORD *)v39;
        v137 = v39;
        if ( !v39 )
        {
          v41 = ShowSnaps;
          if ( (ShowSnaps & 3) == 0 )
            goto LABEL_195;
          LdrpLogDbgPrint(
            "minkernel\\ntdll\\ldrinit.c",
            4335,
            "LdrpInitializeProcess",
            0,
            "Creating the process heap failed\n");
          goto LABEL_194;
        }
        v42 = v166;
        v166[6] = v39;
        if ( (v42[26] & 0x800000) != 0 )
          RtlInitializeExceptionLog();
        RtlpInitializeThreadActivationContextStack(v141);
        LdrpHeap = (int)v40;
        EtwpFreeRegistrationList = 0;
        dword_4B3A41E4 = 0;
        PrivateLoggerNotificationEntry = 0;
        v170 = NtQuerySystemInformation(SystemHypervisorSharedPageInformation, &SystemInformation, 4u, 0);
        if ( v170 >= 0 )
          RtlpHypervisorSharedUserVa = SystemInformation;
        NtdllBaseTag = RtlCreateTagHeap(v40, 0, L"NTDLL!", L"!Process");
        result = TpInitializePackage();
        v170 = result;
        if ( result >= 0 )
        {
          v43 = v163;
          if ( *(_DWORD *)(v163 + 696) )
          {
            TpSetDefaultPoolCpuSets(*(void **)(v163 + 692));
            v43 = v163;
          }
          v162 = *(_DWORD *)(v43 + 700);
          if ( v162 )
          {
            RtlAcquireSRWLockExclusive(&TppPoolpGlobalPoolLock);
            TppPoolpGlobalPoolMaxThreadsOverride = v162;
            RtlReleaseSRWLockExclusive(&TppPoolpGlobalPoolLock);
          }
          EtwEventRegister((void *)&PrivateLoggerNotificationGuid, 0, 0, (int)&g_hPrivLoggerNotificationProvider);
          EtwEventRegister(UserDiagnosticGuid, (int)UserDiagnosticProviderCallback, 0, (int)&g_hUserDiagnosticProvider);
          RtlInitializeHeapLogging();
          result = RtlpInitEnvironmentBlock();
          v170 = result;
          if ( result >= 0 )
          {
            result = RtlpInitParameterBlock();
            v170 = result;
            if ( result >= 0 )
            {
              v44 = v42[4];
              v163 = v44;
              v149 = *(_DWORD *)(v44 + 56);
              v150 = *(_DWORD *)(v44 + 60);
              v144 = (_WORD *)v150;
              if ( v139 || v140 )
              {
                v170 = RtlQueryApplicationKeyOption(
                         (int)v140,
                         (int)v139,
                         (int)L"DebugProcessHeapOnly",
                         4,
                         &v145,
                         4,
                         v44,
                         0);
                if ( v170 >= 0 && dword_4B3A373C && v145 )
                {
                  dword_4B3A373C = 0;
                  *(_DWORD *)RtlpDebugPageHeapTable &= ~0x400u;
                }
              }
              NtSystemRoot = (_WORD *)RtlGetNtSystemRoot();
              RtlInitUnicodeStringEx((int)&v135, NtSystemRoot);
              v162 = v135.Length + 40;
              Heap = RtlAllocateHeap((int)v40, 0, v162);
              if ( !Heap )
                return -1073741801;
              LOWORD(v147) = 0;
              HIWORD(v147) = v162;
              v148 = Heap;
              RtlAppendUnicodeStringToString((unsigned __int16 *)&v147, (const void **)&v135);
              RtlAppendUnicodeStringToString((unsigned __int16 *)&v147, (const void **)&SlashSystem32SlashString);
              if ( (*((_BYTE *)v42 + 3) & 0x42) != 2 )
              {
                v117 = 24;
                v118 = 0;
                v120 = 64;
                v119 = (int *)v124;
                v121 = 0;
                v122 = 0;
                result = ZwOpenDirectoryObject((int)&LdrpKnownDllDirectoryHandle, 3, (int)&v117);
                v170 = result;
                if ( result != -1073741772 || (*((_BYTE *)v42 + 3) & 0x40) == 0 )
                {
                  if ( result < 0 )
                  {
                    v28 = ShowSnaps;
                    if ( (ShowSnaps & 3) == 0 )
                      goto LABEL_374;
                    v106 = result;
                    UniqueProcess = (int *)v124;
                    v100 = "Failed to open %wZ with status 0x%08lx\n";
                    v97 = 4605;
                    goto LABEL_145;
                  }
                  v117 = 24;
                  v118 = LdrpKnownDllDirectoryHandle;
                  v120 = 64;
                  v119 = &dword_4B281710;
                  v121 = 0;
                  v122 = 0;
                  result = NtOpenSymbolicLinkObject((int)&Handle, 1, (int)&v117);
                  v170 = result;
                  if ( result < 0 )
                  {
                    v28 = ShowSnaps;
                    if ( (ShowSnaps & 3) == 0 )
                      goto LABEL_374;
                    v106 = result;
                    UniqueProcess = &dword_4B281710;
                    v100 = "Failed to open %wZ with status 0x%08lx\n";
                    v97 = 4628;
                    goto LABEL_145;
                  }
                  v47 = 48;
                  while ( 1 )
                  {
                    v48 = RtlAllocateHeap((int)v40, 0, v47);
                    v162 = v48;
                    if ( !v48 )
                      return -1073741801;
                    LdrpKnownDllPath = 0;
                    word_4B3A5A92 = v161;
                    dword_4B3A5A94 = v48;
                    result = ZwQuerySymbolicLinkObject((int)Handle, (int)&LdrpKnownDllPath, (int)&v160);
                    v170 = result;
                    if ( result >= 0 )
                    {
                      NtClose(Handle);
                      LdrStandardizeSystemPath((unsigned __int16 *)&LdrpKnownDllPath);
                      goto LABEL_154;
                    }
                    if ( result != -1073741789 )
                    {
                      v28 = ShowSnaps;
                      if ( (ShowSnaps & 3) == 0 )
                        goto LABEL_374;
                      v107 = result;
                      v103 = "Querying the known DLL directory link object failed with status 0x%08lx\n";
                      v98 = 4663;
                      goto LABEL_190;
                    }
                    RtlFreeHeap((int)v40, 0, v162);
                    v47 = (int)v160;
                    v161 = (unsigned int)v160;
                  }
                }
                if ( (ShowSnaps & 5) != 0 )
                  LdrpLogDbgPrint(
                    "minkernel\\ntdll\\ldrinit.c",
                    4595,
                    "LdrpInitializeProcess",
                    2,
                    "KnownDLL directory does not yet exist.  SMSS will create it.\n");
              }
LABEL_154:
              if ( LdrpIsSecureProcess )
              {
                UnicodeString = v135;
              }
              else
              {
                *(_DWORD *)&UnicodeString.Length = *(_DWORD *)(v163 + 36);
                v49 = *(wchar_t **)(v163 + 40);
                UnicodeString.Buffer = v49;
                if ( !v49 || !UnicodeString.Length || !*v49 )
                {
                  v160 = (wchar_t *)RtlAllocateHeap(v137, 0, 8);
                  UnicodeString.Buffer = v160;
                  if ( !v160 )
                  {
                    v41 = ShowSnaps;
                    if ( (ShowSnaps & 3) == 0 )
                      goto LABEL_195;
                    LdrpLogDbgPrint(
                      "minkernel\\ntdll\\ldrinit.c",
                      4711,
                      "LdrpInitializeProcess",
                      0,
                      "Allocating a buffer to hold the current working directory failed\n");
                    goto LABEL_194;
                  }
                  v128 = 0;
                  v50 = RtlGetNtSystemRoot();
                  *(_DWORD *)v160 = *(_DWORD *)v50;
                  UnicodeString.Buffer[2] = *(_WORD *)(v50 + 4);
                  UnicodeString.Buffer[3] = 0;
                  UnicodeString.Length = 6;
                  UnicodeString.MaximumLength = 8;
                }
              }
              LdrpInitializePolicy();
              v168 = 0;
              v51 = (unsigned __int16)v147;
              v161 = (unsigned __int16)v147;
              if ( (*(_DWORD *)(v42[4] + 8) & 0x20000000) != 0 )
              {
                v168 = (LdrpPolicyBits & 0x100) != 0;
                v51 = 2 * (unsigned __int16)v147 + 22;
                v161 = v51;
                if ( (LdrpPolicyBits & 0x100) != 0 )
                {
                  v51 += (unsigned __int16)v147 + 30;
                  v161 = v51;
                  v168 = (LdrpPolicyBits & 0x100) != 0;
                }
              }
              v52 = (unsigned int *)v51;
              v167 = (unsigned int *)v51;
              if ( (LdrpPolicyBits & 1) == 0 )
              {
                v52 = (unsigned int *)(v51 + 2 * (v135.Length + 9));
                v167 = v52;
                if ( (*((_BYTE *)v42 + 3) & 2) != 0 )
                  *(_WORD *)(v163 + 48) = 0;
              }
              v159 = (void *)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)v52);
              if ( !v159 )
              {
                v41 = ShowSnaps;
                if ( (ShowSnaps & 3) == 0 )
                  goto LABEL_195;
                LdrpLogDbgPrint(
                  "minkernel\\ntdll\\ldrinit.c",
                  4802,
                  "LdrpInitializeProcess",
                  0,
                  "Failed to allocate the system dirs string!\n");
                goto LABEL_194;
              }
              LOWORD(v158) = 0;
              HIWORD(v158) = (_WORD)v167;
              RtlAppendUnicodeStringToString((unsigned __int16 *)&v158, &v147);
              v53 = v159;
              *((_WORD *)v159 + ((unsigned __int16)v158 >> 1) - 1) = 59;
              RtlpSystem32Dirs = v158;
              dword_4B3A6604 = v53;
              LdrpSystem32 = v158;
              dword_4B3A5D2C = (int)v53;
              LOWORD(LdrpSystem32) = v158 - 2;
              if ( (*(_DWORD *)(v42[4] + 8) & 0x20000000) != 0 )
              {
                if ( v168 )
                {
                  RtlAppendUnicodeStringToString((unsigned __int16 *)&v158, &v147);
                  RtlAppendUnicodeToString((unsigned __int16 *)&v158, L"forwarders\\alt;");
                }
                RtlAppendUnicodeStringToString((unsigned __int16 *)&v158, &v147);
                RtlAppendUnicodeToString((unsigned __int16 *)&v158, L"forwarders;");
              }
              if ( (unsigned int)v167 > v161 )
              {
                RtlAppendUnicodeStringToString((unsigned __int16 *)&v158, (const void **)&v135);
                RtlAppendUnicodeToString((unsigned __int16 *)&v158, L"\\system;");
                RtlAppendUnicodeStringToString((unsigned __int16 *)&v158, (const void **)&v135);
                RtlAppendUnicodeToString((unsigned __int16 *)&v158, L";");
                RtlpSystemDirs = v158;
                dword_4B3A660C = v159;
              }
              if ( LdrpIllegalCWDDevices && LdrpIllegalCWDDevices != -1 )
                LdrpCheckAppDirType(&v149);
              RtlImageNtHeaderEx(3, v153, 0, 0, &v134);
              ModuleEntry = LdrpAllocateModuleEntry(0);
              v145 = (_DWORD *)ModuleEntry;
              if ( !ModuleEntry )
              {
                v41 = ShowSnaps;
                if ( (ShowSnaps & 3) == 0 )
                  goto LABEL_195;
                LdrpLogDbgPrint(
                  "minkernel\\ntdll\\ldrinit.c",
                  4922,
                  "LdrpInitializeProcess",
                  0,
                  "Allocating a data table entry for the system DLL failed\n");
                goto LABEL_194;
              }
              LdrpNtDllDataTableEntry = ModuleEntry;
              *(_DWORD *)(*(_DWORD *)(ModuleEntry + 80) + 12) = -1;
              *(_WORD *)(**(_DWORD **)(ModuleEntry + 80) - 28) = -1;
              *(_DWORD *)(ModuleEntry + 52) |= 0x204u;
              *(_DWORD *)(ModuleEntry + 128) -= dword_4B3A9250;
              v55 = ModuleEntry + 36;
              *(_DWORD *)(ModuleEntry + 36) = v147;
              *(_DWORD *)(ModuleEntry + 40) = v148;
              RtlAppendUnicodeStringToString((unsigned __int16 *)(ModuleEntry + 36), (const void **)&NtDllName);
              v56 = v145;
              v145[11] = NtDllName;
              v56[12] = L"ntdll.dll";
              v56[6] = v153;
              LdrpInsertDataTableEntry(v56);
              v57 = v55;
              v58 = v145;
              LdrpLogDllState(v145[6], v57, 5285);
              LdrpInsertModuleToIndex((_DWORD *)LdrpNtDllDataTableEntry, v134);
              result = LdrpProcessMappedModule((unsigned int *)LdrpNtDllDataTableEntry, 0, v59, v59);
              v170 = result;
              if ( result < 0 )
                return result;
              LdrpLogDllState(*(_DWORD *)(LdrpNtDllDataTableEntry + 24), LdrpNtDllDataTableEntry + 36, 5294);
              *(_DWORD *)(*(_DWORD *)(LdrpNtDllDataTableEntry + 80) + 32) = 9;
              v60 = v58 + 4;
              v61 = dword_4B3A5D9C;
              if ( *(int **)(dword_4B3A5D9C + 4) != &dword_4B3A5D9C )
                __fastfail(3u);
              *v60 = dword_4B3A5D9C;
              v60[1] = &dword_4B3A5D9C;
              *(_DWORD *)(v61 + 4) = v60;
              dword_4B3A5D9C = (int)v60;
              result = LdrpInitParallelLoadingSupport();
              v170 = result;
              if ( result < 0 )
              {
                v28 = ShowSnaps;
                if ( (ShowSnaps & 3) == 0 )
                  goto LABEL_374;
                v107 = result;
                v103 = "Failed to initialize Parallel loader, st = 0x%x\n";
                v98 = 5001;
LABEL_190:
                LdrpLogDbgPrint("minkernel\\ntdll\\ldrinit.c", v98, "LdrpInitializeProcess", 0, v103, v107);
                goto LABEL_373;
              }
              LdrpDrainWorkQueue(0);
              memset(v171, 0, sizeof(v171));
              memset(v111, 0, sizeof(v111));
              v111[2] = (int)v171;
              v111[4] = 512;
              v111[0] = v149;
              v111[1] = v150;
              v111[6] = (int)&v170;
              v62 = (_DWORD *)LdrpAllocateModuleEntry(v111);
              v63 = v62;
              if ( !v62 )
              {
                v41 = ShowSnaps;
                if ( (ShowSnaps & 3) == 0 )
                  goto LABEL_195;
                LdrpLogDbgPrint(
                  "minkernel\\ntdll\\ldrinit.c",
                  5022,
                  "LdrpInitializeProcess",
                  0,
                  "Allocating a data table entry for the executable failed\n");
                goto LABEL_194;
              }
              LdrpImageEntry = (int)v62;
              *(_DWORD *)(v62[20] + 12) = -1;
              *(_DWORD *)(v62[20] + 12) = -1;
              *(_WORD *)(*(_DWORD *)v62[20] - 28) = -1;
              v62[9] = v149;
              v62[10] = v150;
              v62[13] |= 4u;
              v64 = v62[13];
              if ( (NtCurrentPeb()->BitField & 0x10) != 0 )
              {
                v64 |= 1u;
                v62[13] = v64;
              }
              if ( UseCOR )
              {
                v65 = v64 | 0x400000;
                v62[13] = v65;
                if ( v169 )
                  v62[13] = v65 | 0x1000000;
              }
              v66 = v166;
              if ( (*((_BYTE *)v166 + 3) & 4) != 0 )
                v62[32] = 0;
              v161 = 0;
              v67 = (wchar_t *)(v150 + (unsigned __int16)v149);
              v68 = v67;
              if ( v67 && (unsigned int)v67 > v150 )
              {
                while ( 1 )
                {
                  v160 = v68--;
                  v66 = v166;
                  if ( *v68 == 92 )
                    break;
                  if ( (unsigned int)v68 <= v150 )
                    goto LABEL_210;
                }
                v69 = v160;
                v161 = (unsigned int)v160;
              }
              else
              {
LABEL_210:
                v69 = 0;
              }
              if ( v69 )
              {
                v160 = (wchar_t *)((char *)v67 - (char *)v69);
                v162 = (unsigned __int16)((_WORD)v67 - (_WORD)v69);
                *((_WORD *)v63 + 22) = (_WORD)v67 - (_WORD)v69;
                if ( HIWORD(v149) - (unsigned int)(unsigned __int16)v149 < 2 )
                  v70 = v162;
                else
                  v70 = (_WORD)v160 + 2;
                *((_WORD *)v63 + 23) = v70;
                v71 = v161;
              }
              else
              {
                v63[11] = v63[9];
                v71 = v63[10];
              }
              v63[12] = v71;
              v72 = v66[2];
              if ( *(_DWORD *)(v165 + 52) != v72 && !v169 )
              {
                result = LdrpProtectAndRelocateImage(v101, v104, v108);
                v170 = result;
                if ( result < 0 )
                  return result;
                v72 = v66[2];
              }
              v73 = (_DWORD *)LdrpImageEntry;
              *(_DWORD *)(LdrpImageEntry + 24) = v72;
              LdrpInsertDataTableEntry(v73);
              if ( (ShowSnaps & 5) != 0 )
                LdrpLogDbgPrint(
                  "minkernel\\ntdll\\ldrinit.c",
                  5145,
                  "LdrpInitializeProcess",
                  2,
                  "Beginning execution of %wZ (%wZ)\n\tCurrent directory: %wZ\n\tPackage directories: %wZ\n",
                  v73 + 11,
                  v73 + 9,
                  &UnicodeString,
                  &LdrpAppPackagesPath);
              LdrpLogDllState(*(_DWORD *)(LdrpImageEntry + 24), LdrpImageEntry + 36, 5285);
              LdrpInsertModuleToIndex((_DWORD *)LdrpImageEntry, v165);
              result = LdrpProcessMappedModule((unsigned int *)LdrpImageEntry, 0, v74, v74);
              v170 = result;
              if ( result >= 0 )
              {
                *(_DWORD *)(*(_DWORD *)(LdrpImageEntry + 80) + 32) = 9;
                inited = RtlpInitCurrentDir(&UnicodeString);
                v170 = inited;
                if ( inited < 0 )
                {
                  v76 = ShowSnaps;
                  if ( (ShowSnaps & 3) != 0 )
                  {
                    LdrpLogDbgPrint(
                      "minkernel\\ntdll\\ldrinit.c",
                      5182,
                      "LdrpInitializeProcess",
                      0,
                      "Initializing the current directory to \"%wZ\" failed with status 0x%08lx\n",
                      &UnicodeString,
                      inited);
                    v76 = ShowSnaps;
                  }
                  if ( (v76 & 0x10) != 0 )
                    __debugbreak();
                }
                if ( !v128 )
                  RtlFreeAnsiString(&UnicodeString);
                if ( !AvrfAppVerifierMode )
                  goto LABEL_245;
                v77 = LdrpAllocateModuleEntry(0);
                v167 = (unsigned int *)v77;
                if ( !v77 )
                {
                  v41 = ShowSnaps;
                  if ( (ShowSnaps & 3) == 0 )
                  {
LABEL_195:
                    if ( (v41 & 0x10) != 0 )
                      __debugbreak();
                    return -1073741801;
                  }
                  LdrpLogDbgPrint(
                    "minkernel\\ntdll\\ldrinit.c",
                    5205,
                    "LdrpInitializeProcess",
                    0,
                    "Allocating a data table entry for the application verifier DLL failed\n");
LABEL_194:
                  v41 = ShowSnaps;
                  goto LABEL_195;
                }
                *(_DWORD *)(*(_DWORD *)(v77 + 80) + 12) = -1;
                *(_WORD *)(**(_DWORD **)(v77 + 80) - 28) = -1;
                *(_DWORD *)(v77 + 52) |= v154[13];
                *(_DWORD *)(v77 + 128) = v154[32];
                *(_WORD *)(v77 + 58) = 0;
                v160 = (wchar_t *)(v77 + 36);
                v78 = v154;
                *(_DWORD *)(v77 + 36) = v154[9];
                *(_DWORD *)(v77 + 40) = v78[10];
                v79 = v154;
                *(_DWORD *)(v77 + 44) = v154[11];
                *(_DWORD *)(v77 + 48) = v79[12];
                *(_DWORD *)(v77 + 68) = v154[17];
                *(_DWORD *)(v77 + 24) = v154[6];
                LdrpInsertDataTableEntry((_DWORD *)v77);
                LdrpLogDllState(v167[6], (int)v160, 5285);
                result = RtlImageNtHeaderEx(3, v167[6], 0, 0, &v134);
                v170 = result;
                if ( result >= 0 )
                {
                  LdrpInsertModuleToIndex(v167, v134);
                  result = LdrpProcessMappedModule(v167, 0, v80, v80);
                  v170 = result;
                  if ( result >= 0 )
                  {
                    v81 = v167;
                    v167[7] = v154[7];
                    LdrpLogDllState(v81[6], (int)(v81 + 9), 5293);
                    v82 = v167;
                    *(_DWORD *)(v167[20] + 32) = 7;
                    if ( (v166[26] & 0x100) != 0 || (AvrfAppVerifierMode & 2) != 0 )
                    {
                      result = AVrfInitializeVerifier(0, 1, v153, 0);
                      v170 = result;
                      if ( result < 0 )
                        return result;
                      if ( (AvrfAppVerifierMode & 2) != 0 )
                      {
                        *(_DWORD *)(v167[20] + 32) = 9;
                        result = v170;
                      }
                    }
                    else
                    {
                      v157 = 0;
                      result = LdrpInitializeGraphRecurse((_DWORD *)v82[20], 0, &v157);
                      v170 = result;
                    }
                    if ( result >= 0 )
                    {
LABEL_245:
                      LdrpDropLastInProgressCount();
                      v129 = 0;
                      if ( UseCOR )
                      {
                        result = LdrpCorInitialize(&v129);
                        v170 = result;
                        if ( result < 0 )
                          return result;
                        if ( v169 )
                        {
                          result = LdrpCorValidateImage((void *)v166[2]);
                          v170 = result;
                          if ( result < 0 )
                            return result;
                        }
                        v83 = 1024;
                        if ( (v141->SameTebFlags & 0x400) != 0 )
                        {
                          v83 = 32 - (MEMORY[0x7FFE0330] & 0x1F);
                          *(_DWORD *)(v131 + 176) = __ROR4__(LdrpCorExeMainRoutine, v83) ^ MEMORY[0x7FFE0330];
                        }
                      }
                      result = LdrpInitializeTls((void *)v83);
                      v170 = result;
                      if ( result < 0 )
                      {
                        v28 = ShowSnaps;
                        if ( (ShowSnaps & 3) == 0 )
                          goto LABEL_374;
                        v109 = result;
                        v105 = "Initializing TLS slots failed with status 0x%08lx\n";
                        v99 = 5432;
                        goto LABEL_358;
                      }
                      if ( v129 )
                      {
                        v156 = 0;
                        result = LdrpInitializeGraphRecurse(*(_DWORD **)(v129 + 80), 0, &v156);
                        v170 = result;
                        if ( result < 0 )
                        {
                          v28 = ShowSnaps;
                          if ( (ShowSnaps & 3) == 0 )
                            goto LABEL_374;
                          v109 = result;
                          v105 = "DllMain of MSCOREE (or its dependents) failed with status 0x%08lx\n";
                          v99 = 5451;
                          goto LABEL_358;
                        }
                      }
                      result = LdrpInitializeImportRedirection();
                      v170 = result;
                      if ( result < 0 )
                      {
                        v28 = ShowSnaps;
                        if ( (ShowSnaps & 3) == 0 )
                          goto LABEL_374;
                        v109 = result;
                        v105 = "Loading of import redirection module failed with status 0x%08x\n";
                        v99 = 5467;
                        goto LABEL_358;
                      }
                      v132 = 0;
                      v84 = *(_WORD *)(v165 + 92);
                      if ( v84 != 2 && v84 != 3 )
                      {
LABEL_296:
                        v86 = RtlpProcessECVPolicy;
                        if ( RtlpProcessECVPolicy == -1 )
                        {
                          v170 = ZwQueryInformationProcess(-1, 34, (int)&v164, 4, 0);
                          if ( v170 >= 0 && (v164 & 0x48) == 0x48 )
                          {
                            v86 = 1;
                            goto LABEL_308;
                          }
                          v86 = (MEMORY[0x7FFE02D5] >> 2) & 3;
                          RtlpProcessECVPolicy = v86;
                        }
                        if ( v86 == 2 )
                        {
                          v87 = *(_WORD *)(v165 + 72);
                          if ( v87 > (unsigned __int16)v133 || v87 == (_WORD)v133 && *(_WORD *)(v165 + 74) >= 2u )
                          {
                            v86 = 0;
                            RtlpProcessECVPolicy = 0;
                          }
                        }
                        if ( v86 != 3 )
                        {
LABEL_309:
                          v164 = 0;
                          if ( (MEMORY[0x7FFE02D5] & 3) == 1 || LdrpNXProcessPermanent )
                          {
                            v110 = 13;
                          }
                          else
                          {
                            v88 = 0;
                            if ( (MEMORY[0x7FFE02D5] & 3) != 0 )
                              goto LABEL_315;
                            v110 = 10;
                          }
                          v88 = v110;
                          v164 = v110;
LABEL_315:
                          if ( v88 )
                          {
                            LdrpNXProcessPermanent = 1;
                            if ( v86 == 1 )
                              v164 = v88 | 0x40;
                            ZwSetInformationProcess(-1, 34, (int)&v164, 4);
                          }
                          LdrpDrainWorkQueue(0);
                          SbObtainTraceHandle(0);
                          v89 = v138;
                          if ( v138 && v138[132] )
                          {
                            v166[123] = 0;
                            LdrpInitShimEngine(v89);
                          }
                          v90 = 1;
                          if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x400000) != 0 )
                            RtlpForceCSDebugInfoCreation = 1;
                          if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x10000000) != 0 )
                            *(_DWORD *)(v163 + 672) = 1;
                          else
                            v90 = *(_DWORD *)(v163 + 672);
                          LdrpEnableParallelLoading(v90);
                          LdrInitState = 1;
                          v91 = (_DWORD *)LdrpImageEntry;
                          *(_DWORD *)(*(_DWORD *)(LdrpImageEntry + 80) + 32) = 2;
                          *(_DWORD *)v111[6] = 0;
                          if ( v169 )
                          {
                            result = LdrpCorProcessImports(v91);
                          }
                          else
                          {
                            v111[4] |= 1u;
                            LdrpMapAndSnapDependency(v111);
                            LdrpDrainWorkQueue((void *)1);
                            result = v170;
                            if ( v170 < 0 )
                            {
LABEL_332:
                              v28 = ShowSnaps;
                              if ( (ShowSnaps & 3) == 0 )
                                goto LABEL_374;
                              v109 = result;
                              v105 = "Walking the import tables of the executable and its static imports failed with status 0x%08lx\n";
                              v99 = 5863;
                              goto LABEL_358;
                            }
                            result = LdrpPrepareModuleForExecution(LdrpImageEntry, v111[6]);
                          }
                          v170 = result;
                          if ( result < 0 )
                            goto LABEL_332;
                          LdrInitState = 2;
                          v146 = 1;
                          v113[0] = *(_DWORD *)(LdrpImageEntry + 24);
                          v113[1] = 4096;
                          NtSetInformationVirtualMemory(-1, 4, 1, (int)v113, (int)&v146, 4);
                          if ( *((_BYTE *)v166 + 2) )
                            LdrpDoDebuggerBreak();
                          LdrpDropLastInProgressCount();
                          if ( LdrpNXProcessPermanent )
                          {
LABEL_350:
                            v146 = (int)Kernel32ThreadInitThunkFunction;
                            if ( Kernel32ThreadInitThunkFunction )
                            {
                              result = ((int (__fastcall *)(int, _DWORD, _DWORD))v146)(1, 0, 0);
                              v170 = result;
                              if ( result < 0 )
                                return result;
                              result = LdrpInitializePerUserWindowsDirectory(v132);
                              v170 = result;
                              if ( result < 0 )
                                return result;
                            }
                            LdrpProcessInitContextRecord = v131;
                            LdrpDrainWorkQueue(0);
                            LdrpAcquireLoaderLock();
                            v155 = 0;
                            v170 = LdrpInitializeGraphRecurse(*(_DWORD **)(LdrpImageEntry + 80), v111[6], &v155);
                            LdrpReleaseLoaderLock(v93, 9, v170, v93);
                            LdrpFreeLoadContextOfNode(*(_DWORD **)(LdrpImageEntry + 80), v111[6]);
                            LdrpDropLastInProgressCount();
                            LdrpProcessInitContextRecord = 0;
                            if ( LOBYTE(v171[19]) )
                              RtlReleasePath(v171[0]);
                            result = v170;
                            if ( v170 >= 0 )
                            {
                              if ( *(_WORD *)(LdrpImageEntry + 58) )
                              {
                                v112[0] = 36;
                                v112[1] = 1;
                                memset(&v112[2], 0, 0x1Cu);
                                RtlActivateActivationContextUnsafeFast(v112, *(_DWORD *)(LdrpImageEntry + 72));
                                ms_exc.registration.TryLevel = 0;
                                LdrpCallTlsInitializers(1, LdrpImageEntry);
                                ms_exc.registration.TryLevel = -2;
                                v94 = v138;
                                RtlDeactivateActivationContextUnsafeFast(v112);
                              }
                              else
                              {
                                v94 = v138;
                              }
                              if ( g_ShimsEnabled )
                              {
                                v95 = (unsigned __int8 (__thiscall *)(_DWORD, unsigned __int16 *, _DWORD *))(MEMORY[0x7FFE0330] ^ __ROR4__(g_pfnSE_InstallAfterInit, 32 - (MEMORY[0x7FFE0330] & 0x1F)));
                                if ( !v95(v95, &v142, v94) )
                                {
                                  g_ShimsEnabled = 0;
                                  LdrUnloadDll(g_pShimEngineModule);
                                  g_pShimEngineModule = 0;
                                }
                              }
                              v96 = (void (__thiscall *)(unsigned int))v166[83];
                              if ( v96 )
                                v96(v166[83]);
                              if ( v139 )
                                NtClose(v139);
                              if ( v140 )
                                NtClose(v140);
                              return 0;
                            }
                            v28 = ShowSnaps;
                            if ( (ShowSnaps & 3) == 0 )
                              goto LABEL_374;
                            v109 = v170;
                            v105 = "Running the init routines of the executable's static imports failed with status 0x%08lx\n";
                            v99 = 6005;
LABEL_358:
                            LdrpLogDbgPrint("minkernel\\ntdll\\ldrinit.c", v99, "LdrpInitializeProcess", 0, v105, v109);
                            goto LABEL_373;
                          }
                          v92 = 2;
                          if ( (MEMORY[0x7FFE02D5] & 3) != 2
                            || (*(_DWORD *)(v163 + 8) & 0x20000) != 0
                            || *(_WORD *)(v165 + 92) == 1 )
                          {
                            if ( !(unsigned __int8)LdrpCheckForSecuROMImage(v165)
                              && (unsigned __int8)LdrpEntrySectionValid(v165)
                              && !(unsigned __int8)LdrpCheckForSafeDiscImage(v165) )
                            {
                              v164 = 0;
                              v92 = 0;
LABEL_346:
                              if ( RtlpProcessECVPolicy == 1 )
                              {
                                v92 |= 0x40u;
                                v164 = v92;
                              }
                              if ( v92 )
                                ZwSetInformationProcess(-1, 34, (int)&v164, 4);
                              goto LABEL_350;
                            }
                            v92 = 2;
                          }
                          v164 = 2;
                          goto LABEL_346;
                        }
                        v86 = (MEMORY[0x7FFE02D5] >> 2) & 3;
LABEL_308:
                        RtlpProcessECVPolicy = v86;
                        goto LABEL_309;
                      }
                      result = LdrLoadDll(16385, 0, (unsigned __int16 *)&LdrpKernel32DllName, &v152);
                      v170 = result;
                      if ( result < 0 )
                      {
                        if ( result != -1073741515 )
                        {
                          v28 = ShowSnaps;
                          if ( (ShowSnaps & 3) == 0 )
                            goto LABEL_374;
                          LdrpLogDbgPrint(
                            "minkernel\\ntdll\\ldrinit.c",
                            5625,
                            "LdrpInitializeProcess",
                            0,
                            "Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
                            &LdrpKernel32DllName,
                            result);
LABEL_373:
                          v28 = ShowSnaps;
                          result = v170;
LABEL_374:
                          if ( (v28 & 0x10) != 0 )
                            __debugbreak();
                          return result;
                        }
                        result = LdrLoadDll(16385, 0, (unsigned __int16 *)&LdrpKernelbaseDllName, &v152);
                        v170 = result;
                        if ( result < 0 )
                        {
                          v28 = ShowSnaps;
                          if ( (ShowSnaps & 3) == 0 )
                            goto LABEL_374;
                          LdrpLogDbgPrint(
                            "minkernel\\ntdll\\ldrinit.c",
                            5598,
                            "LdrpInitializeProcess",
                            0,
                            "Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
                            &LdrpKernelbaseDllName,
                            result);
                          goto LABEL_373;
                        }
                        result = LdrpCodeAuthzInitialize();
                        v170 = result;
                        if ( result < 0 && result != -1073741515 )
                        {
                          v28 = ShowSnaps;
                          if ( (ShowSnaps & 3) == 0 )
                            goto LABEL_374;
                          v109 = result;
                          v105 = "LdrpCodeAuthzInitialize failed with status 0x%08lx\n";
                          v99 = 5614;
                          goto LABEL_358;
                        }
                        v170 = 0;
                        goto LABEL_289;
                      }
                      result = LdrGetProcedureAddressForCaller(
                                 v152,
                                 (const void **)&dword_4B281718,
                                 0,
                                 &Kernel32ThreadInitThunkFunction,
                                 0,
                                 retaddr);
                      v170 = result;
                      if ( result < 0 )
                      {
                        v28 = ShowSnaps;
                        if ( (ShowSnaps & 3) == 0 )
                          goto LABEL_374;
                        LdrpLogDbgPrint(
                          "minkernel\\ntdll\\ldrinit.c",
                          5512,
                          "LdrpInitializeProcess",
                          0,
                          "Locating procedure \"%Z\" in Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
                          &dword_4B281718,
                          &LdrpKernel32DllName,
                          result);
                        goto LABEL_373;
                      }
                      LdrGetProcedureAddressForCaller(v152, (const void **)&dword_4B281720, 0, &v132, 0, retaddr);
                      result = LdrGetProcedureAddressForCaller(v152, v123, 0, &Kernel32BaseQueryModuleData, 0, retaddr);
                      v170 = result;
                      if ( result >= 0 )
                        goto LABEL_380;
                      v85 = ShowSnaps;
                      if ( (ShowSnaps & 3) != 0 )
                      {
                        LdrpLogDbgPrint(
                          "minkernel\\ntdll\\ldrinit.c",
                          5535,
                          "LdrpInitializeProcess",
                          1,
                          "Locating procedure \"%Z\" in Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
                          v123,
                          &LdrpKernel32DllName,
                          result);
                        v85 = ShowSnaps;
                        result = v170;
                      }
                      if ( (v85 & 0x40) != 0 )
                        __debugbreak();
                      Kernel32BaseQueryModuleData = 0;
                      if ( result == -1073741702 || result == -1073741511 )
                      {
LABEL_380:
                        result = LdrpSnapKernelBaseExtensions();
                        v170 = result;
                        if ( result >= 0 )
                        {
                          result = LdrpCodeAuthzInitialize();
                          v170 = result;
                          if ( result >= 0 )
                          {
                            result = LdrpFindLoadedDll((unsigned __int16 *)&LdrpKernelbaseDllName, &v114);
                            v170 = result;
                            if ( result < 0 )
                            {
                              v28 = ShowSnaps;
                              if ( (ShowSnaps & 3) == 0 )
                                goto LABEL_374;
                              LdrpLogDbgPrint(
                                "minkernel\\ntdll\\ldrinit.c",
                                5580,
                                "LdrpInitializeProcess",
                                0,
                                "Finding \"%wZ\" failed with status 0x%08lx\n",
                                &LdrpKernelbaseDllName,
                                result);
                              goto LABEL_373;
                            }
                            v152 = *(_DWORD *)(v114 + 24);
LABEL_289:
                            result = LdrGetProcedureAddressForCaller(
                                       v152,
                                       (const void **)&dword_4B281730,
                                       0,
                                       &v130,
                                       0,
                                       retaddr);
                            v170 = result;
                            if ( result < 0 )
                            {
                              v28 = ShowSnaps;
                              if ( (ShowSnaps & 3) == 0 )
                                goto LABEL_374;
                              v109 = result;
                              v105 = "Finding KernelbasePostInit failed with status 0x%08lx\n";
                              v99 = 5643;
                              goto LABEL_358;
                            }
                            result = v130(v130);
                            v170 = result;
                            if ( result < 0 )
                            {
                              v28 = ShowSnaps;
                              if ( (ShowSnaps & 3) == 0 )
                                goto LABEL_374;
                              v109 = result;
                              v105 = "Calling KernelbasePostInit failed with status 0x%08lx\n";
                              v99 = 5651;
                              goto LABEL_358;
                            }
                            v170 = 0;
                            goto LABEL_296;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
