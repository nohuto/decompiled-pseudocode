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

int __fastcall LdrpInitializeProcess(int a1, void *a2)
{
  PULONG v2; // eax
  int v3; // eax
  int v4; // eax
  _PEB *ProcessEnvironmentBlock; // esi
  bool v6; // cc
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // ecx
  wchar_t *Buffer; // edx
  unsigned __int16 Length; // di
  PIMAGE_NT_HEADERS v10; // edi
  char v11; // al
  int result; // eax
  int *v13; // eax
  int v14; // ecx
  int v15; // edx
  char v16; // al
  char v18; // cl
  bool v19; // al
  struct _TEB *v20; // eax
  int WowTebOffset; // ecx
  unsigned int *v22; // eax
  unsigned int v23; // eax
  int v24; // ecx
  PVOID v25; // edi
  _PEB *v26; // esi
  char v27; // cl
  _BYTE *v28; // eax
  int *Config; // eax
  unsigned int v30; // ecx
  int v31; // eax
  unsigned int NtGlobalFlag; // ecx
  char v33; // al
  ULONG v34; // eax
  NTSTATUS v35; // ecx
  unsigned int v36; // edi
  void *v37; // eax
  void *v38; // edi
  char v39; // al
  _PEB *v40; // esi
  PRTL_USER_PROCESS_PARAMETERS v41; // eax
  int v42; // ecx
  const WCHAR *NtSystemRoot; // eax
  PVOID Heap; // eax
  ULONG v45; // eax
  _IMAGE_NT_HEADERS64 *v46; // eax
  wchar_t *v47; // eax
  PWSTR v48; // eax
  int v49; // ecx
  int *v50; // eax
  wchar_t *v51; // ecx
  char *ModuleEntry; // eax
  char *v53; // esi
  ULONG v54; // ecx
  int v55; // edx
  ULONG v56; // esi
  int v57; // ecx
  _DWORD *v58; // esi
  int v59; // eax
  char *v60; // eax
  char *v61; // edx
  int v62; // ecx
  int v63; // ecx
  _PEB *v64; // esi
  _WORD *v65; // eax
  _WORD *v66; // ecx
  ULONG v67; // ecx
  __int16 v68; // ax
  ULONG v69; // eax
  void *ImageBaseAddress; // eax
  int v71; // esi
  int v72; // ecx
  int inited; // eax
  char v74; // cl
  char *v75; // eax
  _DWORD *v76; // ecx
  _DWORD *v77; // ecx
  int v78; // ecx
  int *v79; // ecx
  int *v80; // ecx
  WORD Subsystem; // cx
  char v82; // cl
  int v83; // eax
  WORD MajorSubsystemVersion; // dx
  int v85; // ecx
  void *v86; // ecx
  unsigned int LoaderThreads; // ecx
  _DWORD *v88; // ecx
  int v89; // ecx
  int v90; // ecx
  _DWORD *v91; // edi
  unsigned __int8 (__thiscall *v92)(_DWORD, unsigned __int16 *, _DWORD *); // ecx
  void (__stdcall *PostProcessInitRoutine)(); // esi
  int v94; // [esp-18h] [ebp-270h]
  int v95; // [esp-14h] [ebp-26Ch]
  int v96; // [esp-14h] [ebp-26Ch]
  size_t v97; // [esp-10h] [ebp-268h]
  ULONG_PTR v98; // [esp-10h] [ebp-268h]
  const char *v99; // [esp-Ch] [ebp-264h]
  int v100; // [esp-Ch] [ebp-264h]
  int *UniqueProcess; // [esp-8h] [ebp-260h]
  const char *v102; // [esp-8h] [ebp-260h]
  int v103; // [esp-8h] [ebp-260h]
  const char *v104; // [esp-8h] [ebp-260h]
  size_t v105; // [esp-4h] [ebp-25Ch]
  int v106; // [esp-4h] [ebp-25Ch]
  SIZE_T v107; // [esp-4h] [ebp-25Ch]
  SIZE_T v108; // [esp-4h] [ebp-25Ch]
  int v109; // [esp-4h] [ebp-25Ch]
  size_t v110; // [esp-4h] [ebp-25Ch]
  int v111; // [esp-4h] [ebp-25Ch]
  NTSTATUS v112; // [esp-4h] [ebp-25Ch]
  int v113; // [esp-4h] [ebp-25Ch]
  ULONG v114; // [esp+0h] [ebp-258h]
  _DWORD v115[4]; // [esp+10h] [ebp-248h] BYREF
  int v116; // [esp+20h] [ebp-238h]
  NTSTATUS *v117; // [esp+28h] [ebp-230h]
  int v118[9]; // [esp+7Ch] [ebp-1DCh] BYREF
  _DWORD v119[2]; // [esp+A0h] [ebp-1B8h] BYREF
  int v120; // [esp+A8h] [ebp-1B0h] BYREF
  int SystemInformation; // [esp+ACh] [ebp-1ACh] BYREF
  ULONG *ProcessInformation; // [esp+B0h] [ebp-1A8h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+B4h] [ebp-1A4h] BYREF
  _STRING ProcedureName; // [esp+CCh] [ebp-18Ch] BYREF
  _WORD v125[2]; // [esp+D4h] [ebp-184h] BYREF
  const WCHAR *v126; // [esp+D8h] [ebp-180h]
  ULONG v127; // [esp+DCh] [ebp-17Ch] BYREF
  HANDLE LinkHandle; // [esp+E0h] [ebp-178h] BYREF
  int v129; // [esp+E4h] [ebp-174h]
  int v130; // [esp+E8h] [ebp-170h] BYREF
  PVOID v131; // [esp+ECh] [ebp-16Ch] BYREF
  int v132; // [esp+F0h] [ebp-168h]
  PVOID ProcedureAddress; // [esp+F4h] [ebp-164h] BYREF
  int v134; // [esp+F8h] [ebp-160h]
  PIMAGE_NT_HEADERS v135; // [esp+FCh] [ebp-15Ch] BYREF
  _UNICODE_STRING DestinationString; // [esp+100h] [ebp-158h] BYREF
  ULONG Size; // [esp+10Ch] [ebp-14Ch] BYREF
  PVOID HeapHandle; // [esp+110h] [ebp-148h] BYREF
  _DWORD *pShimData; // [esp+114h] [ebp-144h]
  HANDLE Handle; // [esp+118h] [ebp-140h] BYREF
  HANDLE KeyHandle; // [esp+11Ch] [ebp-13Ch] BYREF
  struct _TEB *v142; // [esp+120h] [ebp-138h]
  unsigned __int16 v143; // [esp+124h] [ebp-134h] BYREF
  __int16 v144; // [esp+126h] [ebp-132h]
  wchar_t *v145; // [esp+128h] [ebp-130h]
  ULONG Value; // [esp+12Ch] [ebp-12Ch] BYREF
  _MEMORY_RANGE_ENTRY VirtualAddresses; // [esp+130h] [ebp-128h] BYREF
  unsigned int v148; // [esp+140h] [ebp-118h]
  _UNICODE_STRING UnicodeString; // [esp+144h] [ebp-114h] BYREF
  PVOID DllHandle; // [esp+14Ch] [ebp-10Ch] BYREF
  PVOID BaseOfImage; // [esp+150h] [ebp-108h]
  _DWORD *v152; // [esp+154h] [ebp-104h] BYREF
  char v153; // [esp+159h] [ebp-FFh] BYREF
  char v154; // [esp+15Ah] [ebp-FEh] BYREF
  char v155; // [esp+15Bh] [ebp-FDh] BYREF
  _UNICODE_STRING v156; // [esp+15Ch] [ebp-FCh] BYREF
  ULONG ReturnedLength; // [esp+164h] [ebp-F4h] BYREF
  ULONG v158; // [esp+168h] [ebp-F0h]
  PIMAGE_NT_HEADERS DefaultThreadpoolThreadMaximum; // [esp+16Ch] [ebp-ECh] BYREF
  PRTL_USER_PROCESS_PARAMETERS v160; // [esp+170h] [ebp-E8h]
  int v161; // [esp+174h] [ebp-E4h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [esp+178h] [ebp-E0h] BYREF
  _PEB *v163; // [esp+17Ch] [ebp-DCh]
  int *v164; // [esp+180h] [ebp-D8h]
  bool v165; // [esp+186h] [ebp-D2h]
  char v166; // [esp+187h] [ebp-D1h]
  NTSTATUS v167; // [esp+188h] [ebp-D0h] BYREF
  PWSTR Path[19]; // [esp+18Ch] [ebp-CCh] BYREF
  char v169; // [esp+1D8h] [ebp-80h]
  _QWORD v170[3]; // [esp+1DCh] [ebp-7Ch] BYREF
  _QWORD v171[3]; // [esp+1F4h] [ebp-64h] BYREF
  _QWORD v172[3]; // [esp+20Ch] [ebp-4Ch] BYREF
  _QWORD v173[3]; // [esp+224h] [ebp-34h] BYREF
  CPPEH_RECORD ms_exc; // [esp+240h] [ebp-18h]
  PVOID *retaddr; // [esp+25Ch] [ebp+4h]

  BaseOfImage = a2;
  v132 = a1;
  v125[0] = 24;
  v125[1] = 26;
  v126 = L"\\KnownDlls32";
  ProcedureName.Length = 19;
  ProcedureName.MaximumLength = 20;
  ProcedureName.Buffer = "BaseQueryModuleData";
  RtlInitializeProcessExceptionChain(dword_4B3A92E0);
  v2 = `RtlpGetCookieValue'::`2'::CookieValue;
  if ( !`RtlpGetCookieValue'::`2'::CookieValue )
  {
    v3 = ZwQueryInformationProcess((HANDLE)0xFFFFFFFF, ProcessCookie, &ProcessInformation, 4u, 0);
    if ( v3 < 0 )
      RtlRaiseStatus(v3);
    v2 = ProcessInformation;
    `RtlpGetCookieValue'::`2'::CookieValue = ProcessInformation;
  }
  RtlpUnhandledExceptionFilter = __ROR4__(v2, (unsigned __int8)v2 & 0x1F);
  if ( !v2 )
  {
    v4 = ZwQueryInformationProcess((HANDLE)0xFFFFFFFF, ProcessCookie, &HeapHandle, 4u, 0);
    if ( v4 < 0 )
      RtlRaiseStatus(v4);
    v2 = (PULONG)HeapHandle;
    `RtlpGetCookieValue'::`2'::CookieValue = (PULONG)HeapHandle;
  }
  RtlpUserCallbackExceptionFilter = __ROR4__(v2, (unsigned __int8)v2 & 0x1F);
  v142 = NtCurrentTeb();
  ProcessEnvironmentBlock = v142->ProcessEnvironmentBlock;
  v163 = ProcessEnvironmentBlock;
  v158 = 48;
  PebLdr = 48;
  byte_4B3A5D84 = 1;
  InitializeListHead((struct _LIST_ENTRY *)&dword_4B3A5D8C);
  dword_4B3A5D98 = (int)&dword_4B3A5D94;
  dword_4B3A5D94 = (int)&dword_4B3A5D94;
  dword_4B3A5DA0 = (int)&dword_4B3A5D9C;
  dword_4B3A5D9C = (int)&dword_4B3A5D9C;
  byte_4B3A5DA8 = 0;
  dword_4B3A5DAC = 0;
  ProcessEnvironmentBlock->Ldr = (_PEB_LDR_DATA *)&PebLdr;
  if ( (unsigned __int8)LdrpIsNlsUtf8Process() || (ProcessEnvironmentBlock->ProcessParameters->Flags & 0x8000000) != 0 )
  {
    ProcessEnvironmentBlock->AnsiCodePageData = 0;
    ProcessEnvironmentBlock->OemCodePageData = 0;
  }
  LdrpInitializeNlsInfo(ProcessEnvironmentBlock);
  SRWLockSpinCycleCount = 0;
  v6 = ProcessEnvironmentBlock->NumberOfProcessors <= 1;
  if ( ProcessEnvironmentBlock->NumberOfProcessors > 1 )
    SRWLockSpinCycleCount = 10240;
  ConditionVariableSpinCycleCount = 0;
  if ( !v6 )
    ConditionVariableSpinCycleCount = 10240;
  RtlpWaitOnAddressSpinCycleCount = 0;
  if ( !v6 )
    RtlpWaitOnAddressSpinCycleCount = 10240;
  RtlpInitFeatureConfiguration();
  ProcessParameters = ProcessEnvironmentBlock->ProcessParameters;
  Buffer = ProcessParameters->ImagePathName.Buffer;
  if ( (ProcessParameters->Flags & 1) == 0 )
    Buffer = (wchar_t *)((char *)Buffer + (_DWORD)ProcessParameters);
  v145 = Buffer;
  Length = ProcessParameters->ImagePathName.Length;
  v143 = Length;
  v144 = Length + 2;
  if ( Length >= 8u && *Buffer == 92 )
  {
    ProcessEnvironmentBlock = v163;
    if ( Buffer[1] == 63 )
    {
      ProcessEnvironmentBlock = v163;
      if ( Buffer[2] == 63 && Buffer[3] == 92 )
      {
        v143 = Length - 8;
        v144 = Length - 6;
        v145 = Buffer + 4;
        ProcessParameters->ImagePathName.Length -= 8;
        ProcessParameters->ImagePathName.MaximumLength -= 8;
        ProcessParameters->ImagePathName.Buffer += 4;
      }
    }
  }
  v129 = 1;
  UseCOR = 0;
  v166 = 0;
  Value = 0;
  RtlImageNtHeaderEx(3u, ProcessEnvironmentBlock->ImageBaseAddress, 0LL, &OutHeaders);
  v10 = OutHeaders;
  LdrpAppHeaders = (int)OutHeaders;
  if ( LdrpIsSecureProcess && (OutHeaders->FileHeader.Characteristics & 0x20) == 0 )
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
  RtlImageNtHeaderEx(3u, BaseOfImage, 0LL, &DefaultThreadpoolThreadMaximum);
  RtlInsertInvertedFunctionTable(BaseOfImage, DefaultThreadpoolThreadMaximum->OptionalHeader.SizeOfImage);
  RtlCreateInvertedFunctionTableCacheEntry(BaseOfImage);
  LdrpCaptureCriticalThunks();
  LdrProtectMrdata(1);
  if ( LdrControlFlowGuardEnforcedWithExportSuppression() )
    LdrpSuppressedExportOverrideListPtr = (int)&LdrpSuppressedExportOverrideList;
  v15 = 3;
  if ( (MEMORY[0x7FFE02D5] & 3) != 0 )
    v16 = HIBYTE(v10->OptionalHeader.DllCharacteristics) & 1;
  else
    v16 = 0;
  if ( v16 )
  {
    LdrpNXProcessPermanent = 1;
  }
  else if ( (MEMORY[0x7FFE02D5] & 0xC) != 4 && LdrpIsImageArmadilloProtected(v10) )
  {
    RtlpProcessECVPolicy = 1;
  }
  v134 = 6;
  qmemcpy(v170, &unk_4B3A92E8, sizeof(v170));
  Size = HIDWORD(v170[0]) >> 4;
  switch ( v15 & (unsigned int)(v170[0] >> 4) )
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
  qmemcpy(v171, &unk_4B3A92E8, sizeof(v171));
  v18 = v15 & (v171[1] >> 4);
  Size = 0;
  LdrpEnforceIntegrityContinuity = v18 == 1;
  v19 = 1;
  if ( v18 != 1 )
  {
    qmemcpy(v172, &unk_4B3A92E8, sizeof(v172));
    Size = 0;
    if ( ((unsigned __int8)v15 & (unsigned __int8)(v172[1] >> 4)) != (_BYTE)v15 )
      v19 = 0;
  }
  LdrpAuditIntegrityContinuity = v19;
  v20 = NtCurrentTeb();
  WowTebOffset = v20->WowTebOffset;
  if ( WowTebOffset < 0 )
    v20 = (struct _TEB *)((char *)v20 + WowTebOffset);
  if ( v20 == (struct _TEB *)v20->NtTib.Self )
    v22 = (unsigned int *)v20->TlsSlots[10];
  else
    v22 = (unsigned int *)v20[1].GdiTebBatch.Buffer[189];
  v23 = *v22;
  NativePageSize = v23;
  v24 = 0;
  NativePageShift = 0;
  if ( (v23 & 1) == 0 )
  {
    do
    {
      v23 >>= 1;
      ++v24;
    }
    while ( (v23 & 1) == 0 );
    NativePageShift = v24;
  }
  v25 = BaseOfImage;
  v26 = v163;
  result = LdrpInitializeExecutionOptions(BaseOfImage, &Handle, &KeyHandle, &v152);
  v167 = result;
  if ( result < 0 )
  {
    v27 = ShowSnaps;
    if ( (ShowSnaps & 3) == 0 )
      goto LABEL_374;
    v106 = result;
    UniqueProcess = (int *)v142->ClientId.UniqueProcess;
    v99 = "Initializing the execution options for the process %lx failed with status 0x%08lx\n";
    v94 = 3963;
LABEL_145:
    LdrpLogDbgPrint("minkernel\\ntdll\\ldrinit.c", v94, "LdrpInitializeProcess", 0, v99, UniqueProcess, v106);
    goto LABEL_373;
  }
  LdrpLoadDelegatedNtdll(Handle);
  if ( LdrpDelegatedNtdllBase )
  {
    v26->Ldr = 0;
    LdrpProcessInitialized = 2;
    return 0;
  }
  if ( (v26->NtGlobalFlag & 2) != 0 )
    ShowSnaps |= 1u;
  if ( (ShowSnaps & 5) != 0 )
    LdrpLogDbgPrint(
      "minkernel\\ntdll\\ldrinit.c",
      4010,
      "LdrpInitializeProcess",
      2,
      "Initializing process 0x%p\n",
      v142->ClientId.UniqueProcess);
  if ( !UseCOR )
  {
    v28 = RtlImageDirectoryEntryToData(v26->ImageBaseAddress, 1u, 0xEu, &Size);
    if ( v28 )
    {
      UseCOR = 1;
      if ( (v28[16] & 1) != 0 )
        v166 = 1;
    }
  }
  LdrpSystemDllBase = (int)v25;
  pShimData = v26->pShimData;
  RtlpTimeout = v26->CriticalSectionTimeout;
  v160 = RtlNormalizeProcessParams(v26->ProcessParameters);
  Config = LdrImageDirectoryEntryToLoadConfig(v26->ImageBaseAddress);
  v164 = Config;
  if ( Config )
  {
    v30 = *Config;
    if ( (unsigned int)*Config >= 0x10 )
    {
      v26->NtGlobalFlag &= ~Config[3];
      v30 = *Config;
    }
    if ( v30 >= 0x14 )
    {
      v26->NtGlobalFlag |= Config[4];
      v30 = *Config;
    }
    if ( v30 >= 0x18 )
    {
      v31 = Config[5];
      if ( v31 )
        RtlpTimeout.QuadPart = -10000LL * v31;
    }
  }
  if ( (v26->NtGlobalFlag & 2) != 0 )
    ShowSnaps |= 1u;
  if ( RtlpTimeout.QuadPart < -36000000000LL )
    RtlpTimeoutDisable = 1;
  result = RtlpInitDeferredCriticalSection();
  v167 = result;
  if ( result >= 0 )
  {
    v26->TlsBitmap = &TlsBitMap;
    v26->TlsExpansionBitmap = &TlsExpansionBitMap;
    LODWORD(v105) = 48;
    memset(&RtlpFlsContext, 0, v105);
    memset(dword_4B3A66D4, 0, sizeof(dword_4B3A66D4));
    dword_4B3A66F8 = (int)&dword_4B3A66F4;
    dword_4B3A66F4 = (int)&dword_4B3A66F4;
    TlsBitMap = 64;
    dword_4B3A5D34 = (int)v26->TlsBitmapBits;
    LOBYTE(v26->TlsBitmapBits[0]) |= 1u;
    TlsExpansionBitMap = 1024;
    dword_4B3A5D1C = (int)v26->TlsExpansionBitmapBits;
    LOBYTE(v26->TlsExpansionBitmapBits[0]) |= 1u;
    RtlSetBits((PRTL_BITMAP)v26->TlsBitmap, 0x10u, 1u);
    NtGlobalFlag = v26->NtGlobalFlag;
    if ( (NtGlobalFlag & 0x1000) != 0 || (v33 = LdrpShouldCreateStackTraceDb) != 0 )
    {
      v34 = 16;
      v127 = 16;
      if ( LdrpIsSecureProcess )
      {
        v35 = -1073741772;
      }
      else
      {
        v35 = RtlQueryImageFileExecutionOptions(&v143, L"StackTraceDatabaseSizeInMb", 4, &v127, 4u, 0, 0);
        v34 = v127;
      }
      if ( v35 >= 0 && v34 >= 0x10 )
      {
        if ( v34 <= 0x80 )
          v36 = v34 << 20;
        else
          v36 = 0x8000000;
      }
      else
      {
        v36 = 0x1000000;
      }
      if ( (ShowSnaps & 5) != 0 )
        LdrpLogDbgPrint(
          "minkernel\\ntdll\\ldrinit.c",
          4263,
          "LdrpInitializeProcess",
          2,
          "Stack trace database size is %Id Mb\n",
          v36 >> 20);
      RtlpInitializeStackTraceDatabase(v36);
      NtGlobalFlag = v26->NtGlobalFlag;
      v33 = LdrpShouldCreateStackTraceDb;
    }
    if ( (NtGlobalFlag & 0x1000) != 0 || v33 )
      RtlpForceCSDebugInfoCreation = 1;
    if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x400000) != 0 )
    {
      RtlpForceCSDebugInfoCreation = 1;
      RtlpForceCSToUseEvents = 1;
    }
    result = RtlInitializeCriticalSectionEx(&FastPebLock, 0, 0);
    v167 = result;
    if ( result >= 0 )
    {
      v26->FastPebLock = &FastPebLock;
      result = RtlInitializeHeapManager(&v143);
      v167 = result;
      if ( result >= 0 )
      {
        qmemcpy(v173, &unk_4B3A92E8, sizeof(v173));
        Size = 0;
        if ( ((v173[0] >> 12) & 3) == 1 )
        {
          LODWORD(v107) = 0;
          RtlSetHeapInformation(0, HeapEnableTerminationOnCorruption, 0, v107);
        }
        v37 = (void *)LdrpInitializeProcessHeap(v164, OutHeaders, v160);
        v38 = v37;
        HeapHandle = v37;
        if ( !v37 )
        {
          v39 = ShowSnaps;
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
        v40 = v163;
        v163->ProcessHeap = v37;
        if ( (v40->NtGlobalFlag & 0x800000) != 0 )
          RtlInitializeExceptionLog();
        RtlpInitializeThreadActivationContextStack(v142);
        LdrpHeap = v38;
        EtwpFreeRegistrationList = 0;
        dword_4B3A41E4 = 0;
        PrivateLoggerNotificationEntry = 0;
        v167 = NtQuerySystemInformation(SystemHypervisorSharedPageInformation, &SystemInformation, 4u, 0);
        if ( v167 >= 0 )
          RtlpHypervisorSharedUserVa = SystemInformation;
        NtdllBaseTag = RtlCreateTagHeap(v38, 0, (PWSTR)L"NTDLL!", (PWSTR)L"!Process");
        result = TpInitializePackage();
        v167 = result;
        if ( result >= 0 )
        {
          v41 = v160;
          if ( v160->DefaultThreadpoolCpuSetMaskCount )
          {
            TpSetDefaultPoolCpuSets(v160->DefaultThreadpoolCpuSetMasks);
            v41 = v160;
          }
          DefaultThreadpoolThreadMaximum = (PIMAGE_NT_HEADERS)v41->DefaultThreadpoolThreadMaximum;
          if ( DefaultThreadpoolThreadMaximum )
          {
            RtlAcquireSRWLockExclusive(&TppPoolpGlobalPoolLock);
            TppPoolpGlobalPoolMaxThreadsOverride = (ULONG)DefaultThreadpoolThreadMaximum;
            RtlReleaseSRWLockExclusive(&TppPoolpGlobalPoolLock);
          }
          EtwEventRegister(&PrivateLoggerNotificationGuid, 0, 0, &g_hPrivLoggerNotificationProvider);
          EtwEventRegister(&UserDiagnosticGuid, UserDiagnosticProviderCallback, 0, &g_hUserDiagnosticProvider);
          RtlInitializeHeapLogging();
          result = RtlpInitEnvironmentBlock();
          v167 = result;
          if ( result >= 0 )
          {
            result = RtlpInitParameterBlock();
            v167 = result;
            if ( result >= 0 )
            {
              v42 = (int)v40->ProcessParameters;
              v160 = (PRTL_USER_PROCESS_PARAMETERS)v42;
              HIDWORD(VirtualAddresses.NumberOfBytes) = *(_DWORD *)(v42 + 56);
              v148 = *(_DWORD *)(v42 + 60);
              v145 = (wchar_t *)v148;
              if ( Handle || KeyHandle )
              {
                v167 = RtlQueryApplicationKeyOption(KeyHandle, Handle, L"DebugProcessHeapOnly", 4, &Value, 4, v42, 0);
                if ( v167 >= 0 && dword_4B3A373C && Value )
                {
                  dword_4B3A373C = 0;
                  *RtlpDebugPageHeapTable &= ~0x400u;
                }
              }
              NtSystemRoot = RtlGetNtSystemRoot();
              RtlInitUnicodeStringEx(&DestinationString, NtSystemRoot);
              DefaultThreadpoolThreadMaximum = (PIMAGE_NT_HEADERS)(DestinationString.Length + 40);
              LODWORD(v107) = DefaultThreadpoolThreadMaximum;
              Heap = RtlAllocateHeap(v38, 0, v107);
              if ( !Heap )
                return -1073741801;
              *((_WORD *)&VirtualAddresses.VirtualAddress + 2) = 0;
              *((_WORD *)&VirtualAddresses.VirtualAddress + 3) = (_WORD)DefaultThreadpoolThreadMaximum;
              LODWORD(VirtualAddresses.NumberOfBytes) = Heap;
              RtlAppendUnicodeStringToString(
                (PUNICODE_STRING)(&VirtualAddresses.VirtualAddress + 1),
                &DestinationString);
              RtlAppendUnicodeStringToString(
                (PUNICODE_STRING)(&VirtualAddresses.VirtualAddress + 1),
                &SlashSystem32SlashString);
              if ( (v40->BitField & 0x42) != 2 )
              {
                ObjectAttributes.Length = 24;
                ObjectAttributes.RootDirectory = 0;
                ObjectAttributes.Attributes = 64;
                ObjectAttributes.ObjectName = (PUNICODE_STRING)v125;
                ObjectAttributes.SecurityDescriptor = 0;
                ObjectAttributes.SecurityQualityOfService = 0;
                result = ZwOpenDirectoryObject(&LdrpKnownDllDirectoryHandle, 3u, &ObjectAttributes);
                v167 = result;
                if ( result != -1073741772 || (v40->BitField & 0x40) == 0 )
                {
                  if ( result < 0 )
                  {
                    v27 = ShowSnaps;
                    if ( (ShowSnaps & 3) == 0 )
                      goto LABEL_374;
                    v106 = result;
                    UniqueProcess = (int *)v125;
                    v99 = "Failed to open %wZ with status 0x%08lx\n";
                    v94 = 4605;
                    goto LABEL_145;
                  }
                  ObjectAttributes.Length = 24;
                  ObjectAttributes.RootDirectory = LdrpKnownDllDirectoryHandle;
                  ObjectAttributes.Attributes = 64;
                  ObjectAttributes.ObjectName = (PUNICODE_STRING)&dword_4B281710;
                  ObjectAttributes.SecurityDescriptor = 0;
                  ObjectAttributes.SecurityQualityOfService = 0;
                  result = NtOpenSymbolicLinkObject(&LinkHandle, 1u, &ObjectAttributes);
                  v167 = result;
                  if ( result < 0 )
                  {
                    v27 = ShowSnaps;
                    if ( (ShowSnaps & 3) == 0 )
                      goto LABEL_374;
                    v106 = result;
                    UniqueProcess = &dword_4B281710;
                    v99 = "Failed to open %wZ with status 0x%08lx\n";
                    v94 = 4628;
                    goto LABEL_145;
                  }
                  v45 = 48;
                  while ( 1 )
                  {
                    LODWORD(v108) = v45;
                    v46 = (_IMAGE_NT_HEADERS64 *)RtlAllocateHeap(v38, 0, v108);
                    DefaultThreadpoolThreadMaximum = v46;
                    if ( !v46 )
                      return -1073741801;
                    LdrpKnownDllPath.Length = 0;
                    LdrpKnownDllPath.MaximumLength = v158;
                    LdrpKnownDllPath.Buffer = (wchar_t *)v46;
                    result = ZwQuerySymbolicLinkObject(LinkHandle, &LdrpKnownDllPath, &ReturnedLength);
                    v167 = result;
                    if ( result >= 0 )
                    {
                      NtClose(LinkHandle);
                      LdrStandardizeSystemPath(&LdrpKnownDllPath);
                      goto LABEL_154;
                    }
                    if ( result != -1073741789 )
                    {
                      v27 = ShowSnaps;
                      if ( (ShowSnaps & 3) == 0 )
                        goto LABEL_374;
                      v109 = result;
                      v102 = "Querying the known DLL directory link object failed with status 0x%08lx\n";
                      v95 = 4663;
                      goto LABEL_190;
                    }
                    RtlFreeHeap(v38, 0, DefaultThreadpoolThreadMaximum);
                    v45 = ReturnedLength;
                    v158 = ReturnedLength;
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
                UnicodeString = DestinationString;
              }
              else
              {
                *(_DWORD *)&UnicodeString.Length = *(_DWORD *)&v160->CurrentDirectory.DosPath.Length;
                v47 = v160->CurrentDirectory.DosPath.Buffer;
                UnicodeString.Buffer = v47;
                if ( !v47 || !UnicodeString.Length || !*v47 )
                {
                  LODWORD(v108) = 8;
                  ReturnedLength = (ULONG)RtlAllocateHeap(HeapHandle, 0, v108);
                  UnicodeString.Buffer = (wchar_t *)ReturnedLength;
                  if ( !ReturnedLength )
                  {
                    v39 = ShowSnaps;
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
                  v129 = 0;
                  v48 = RtlGetNtSystemRoot();
                  *(_DWORD *)ReturnedLength = *(_DWORD *)v48;
                  UnicodeString.Buffer[2] = v48[2];
                  UnicodeString.Buffer[3] = 0;
                  UnicodeString.Length = 6;
                  UnicodeString.MaximumLength = 8;
                }
              }
              LdrpInitializePolicy();
              v165 = 0;
              v49 = *((unsigned __int16 *)&VirtualAddresses.VirtualAddress + 2);
              v158 = *((unsigned __int16 *)&VirtualAddresses.VirtualAddress + 2);
              if ( (v40->ProcessParameters->Flags & 0x20000000) != 0 )
              {
                v165 = (LdrpPolicyBits & 0x100) != 0;
                v49 = 2 * *((unsigned __int16 *)&VirtualAddresses.VirtualAddress + 2) + 22;
                v158 = v49;
                if ( (LdrpPolicyBits & 0x100) != 0 )
                {
                  v49 += *((unsigned __int16 *)&VirtualAddresses.VirtualAddress + 2) + 30;
                  v158 = v49;
                  v165 = (LdrpPolicyBits & 0x100) != 0;
                }
              }
              v50 = (int *)v49;
              v164 = (int *)v49;
              if ( (LdrpPolicyBits & 1) == 0 )
              {
                v50 = (int *)(v49 + 2 * (DestinationString.Length + 9));
                v164 = v50;
                if ( (v40->BitField & 2) != 0 )
                  v160->DllPath.Length = 0;
              }
              LODWORD(v108) = v50;
              v156.Buffer = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v108);
              if ( !v156.Buffer )
              {
                v39 = ShowSnaps;
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
              v156.Length = 0;
              v156.MaximumLength = (unsigned __int16)v164;
              RtlAppendUnicodeStringToString(&v156, (PCUNICODE_STRING)(&VirtualAddresses.VirtualAddress + 1));
              v51 = v156.Buffer;
              v156.Buffer[(v156.Length >> 1) - 1] = 59;
              RtlpSystem32Dirs = *(_DWORD *)&v156.Length;
              dword_4B3A6604 = v51;
              *(_DWORD *)&LdrpSystem32.Length = *(_DWORD *)&v156.Length;
              LdrpSystem32.Buffer = v51;
              LdrpSystem32.Length = v156.Length - 2;
              if ( (v40->ProcessParameters->Flags & 0x20000000) != 0 )
              {
                if ( v165 )
                {
                  RtlAppendUnicodeStringToString(&v156, (PCUNICODE_STRING)(&VirtualAddresses.VirtualAddress + 1));
                  RtlAppendUnicodeToString(&v156, L"forwarders\\alt;");
                }
                RtlAppendUnicodeStringToString(&v156, (PCUNICODE_STRING)(&VirtualAddresses.VirtualAddress + 1));
                RtlAppendUnicodeToString(&v156, L"forwarders;");
              }
              if ( (unsigned int)v164 > v158 )
              {
                RtlAppendUnicodeStringToString(&v156, &DestinationString);
                RtlAppendUnicodeToString(&v156, L"\\system;");
                RtlAppendUnicodeStringToString(&v156, &DestinationString);
                RtlAppendUnicodeToString(&v156, (PCWSTR)L";");
                RtlpSystemDirs = v156;
              }
              if ( LdrpIllegalCWDDevices && LdrpIllegalCWDDevices != -1 )
                LdrpCheckAppDirType((char *)&VirtualAddresses.NumberOfBytes + 4);
              RtlImageNtHeaderEx(3u, BaseOfImage, 0LL, &v135);
              ModuleEntry = LdrpAllocateModuleEntry(0);
              Value = (ULONG)ModuleEntry;
              if ( !ModuleEntry )
              {
                v39 = ShowSnaps;
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
              *(_DWORD *)(*((_DWORD *)ModuleEntry + 20) + 12) = -1;
              *(_WORD *)(**((_DWORD **)ModuleEntry + 20) - 28) = -1;
              *((_DWORD *)ModuleEntry + 13) |= 0x204u;
              *((_DWORD *)ModuleEntry + 32) -= dword_4B3A9250;
              v53 = ModuleEntry + 36;
              *((_DWORD *)ModuleEntry + 9) = *((_DWORD *)&VirtualAddresses.VirtualAddress + 1);
              *((_DWORD *)ModuleEntry + 10) = VirtualAddresses.NumberOfBytes;
              RtlAppendUnicodeStringToString((PUNICODE_STRING)(ModuleEntry + 36), &NtDllName);
              v54 = Value;
              *(UNICODE_STRING *)(Value + 44) = NtDllName;
              *(_DWORD *)(v54 + 24) = BaseOfImage;
              LdrpInsertDataTableEntry(v54);
              v55 = (int)v53;
              v56 = Value;
              LdrpLogDllState(*(_DWORD *)(Value + 24), v55, 5285);
              LdrpInsertModuleToIndex((int)LdrpNtDllDataTableEntry, (int)v135);
              result = LdrpProcessMappedModule((signed __int32)LdrpNtDllDataTableEntry, 0, v57, v57);
              v167 = result;
              if ( result < 0 )
                return result;
              LdrpLogDllState(*((_DWORD *)LdrpNtDllDataTableEntry + 6), (int)LdrpNtDllDataTableEntry + 36, 5294);
              *(_DWORD *)(*((_DWORD *)LdrpNtDllDataTableEntry + 20) + 32) = 9;
              v58 = (_DWORD *)(v56 + 16);
              v59 = dword_4B3A5D9C;
              if ( *(int **)(dword_4B3A5D9C + 4) != &dword_4B3A5D9C )
                __fastfail(3u);
              *v58 = dword_4B3A5D9C;
              v58[1] = &dword_4B3A5D9C;
              *(_DWORD *)(v59 + 4) = v58;
              dword_4B3A5D9C = (int)v58;
              result = LdrpInitParallelLoadingSupport();
              v167 = result;
              if ( result < 0 )
              {
                v27 = ShowSnaps;
                if ( (ShowSnaps & 3) == 0 )
                  goto LABEL_374;
                v109 = result;
                v102 = "Failed to initialize Parallel loader, st = 0x%x\n";
                v95 = 5001;
LABEL_190:
                LdrpLogDbgPrint("minkernel\\ntdll\\ldrinit.c", v95, "LdrpInitializeProcess", 0, v102, v109);
                goto LABEL_373;
              }
              LdrpDrainWorkQueue(0);
              LODWORD(v110) = 80;
              memset(Path, 0, v110);
              LODWORD(v97) = 108;
              memset(v115, 0, v97);
              v115[2] = Path;
              v116 = 512;
              v115[0] = HIDWORD(VirtualAddresses.NumberOfBytes);
              v115[1] = v148;
              v117 = &v167;
              v60 = LdrpAllocateModuleEntry(v115);
              v61 = v60;
              if ( !v60 )
              {
                v39 = ShowSnaps;
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
              LdrpImageEntry = (int)v60;
              *(_DWORD *)(*((_DWORD *)v60 + 20) + 12) = -1;
              *(_DWORD *)(*((_DWORD *)v60 + 20) + 12) = -1;
              *(_WORD *)(**((_DWORD **)v60 + 20) - 28) = -1;
              *((_DWORD *)v60 + 9) = HIDWORD(VirtualAddresses.NumberOfBytes);
              *((_DWORD *)v60 + 10) = v148;
              *((_DWORD *)v60 + 13) |= 4u;
              v62 = *((_DWORD *)v60 + 13);
              if ( (NtCurrentPeb()->BitField & 0x10) != 0 )
              {
                v62 |= 1u;
                *((_DWORD *)v60 + 13) = v62;
              }
              if ( UseCOR )
              {
                v63 = v62 | 0x400000;
                *((_DWORD *)v60 + 13) = v63;
                if ( v166 )
                  *((_DWORD *)v60 + 13) = v63 | 0x1000000;
              }
              v64 = v163;
              if ( (v163->BitField & 4) != 0 )
                *((_DWORD *)v60 + 32) = 0;
              v158 = 0;
              v65 = (_WORD *)(v148 + WORD2(VirtualAddresses.NumberOfBytes));
              v66 = v65;
              if ( v65 && (unsigned int)v65 > v148 )
              {
                while ( 1 )
                {
                  ReturnedLength = (ULONG)v66--;
                  v64 = v163;
                  if ( *v66 == 92 )
                    break;
                  if ( (unsigned int)v66 <= v148 )
                    goto LABEL_210;
                }
                v67 = ReturnedLength;
                v158 = ReturnedLength;
              }
              else
              {
LABEL_210:
                v67 = 0;
              }
              if ( v67 )
              {
                ReturnedLength = (ULONG)v65 - v67;
                DefaultThreadpoolThreadMaximum = (PIMAGE_NT_HEADERS)(unsigned __int16)((_WORD)v65 - v67);
                *((_WORD *)v61 + 22) = (_WORD)v65 - v67;
                if ( HIWORD(VirtualAddresses.NumberOfBytes) - (unsigned int)WORD2(VirtualAddresses.NumberOfBytes) < 2 )
                  v68 = (__int16)DefaultThreadpoolThreadMaximum;
                else
                  v68 = ReturnedLength + 2;
                *((_WORD *)v61 + 23) = v68;
                v69 = v158;
              }
              else
              {
                *((_DWORD *)v61 + 11) = *((_DWORD *)v61 + 9);
                v69 = *((_DWORD *)v61 + 10);
              }
              *((_DWORD *)v61 + 12) = v69;
              ImageBaseAddress = v64->ImageBaseAddress;
              if ( (void *)HIDWORD(OutHeaders->OptionalHeader.ImageBase) != ImageBaseAddress && !v166 )
              {
                result = LdrpProtectAndRelocateImage(v100, v103, v111);
                v167 = result;
                if ( result < 0 )
                  return result;
                ImageBaseAddress = v64->ImageBaseAddress;
              }
              v71 = LdrpImageEntry;
              *(_DWORD *)(LdrpImageEntry + 24) = ImageBaseAddress;
              LdrpInsertDataTableEntry(v71);
              if ( (ShowSnaps & 5) != 0 )
                LdrpLogDbgPrint(
                  "minkernel\\ntdll\\ldrinit.c",
                  5145,
                  "LdrpInitializeProcess",
                  2,
                  "Beginning execution of %wZ (%wZ)\n\tCurrent directory: %wZ\n\tPackage directories: %wZ\n",
                  v71 + 44,
                  v71 + 36,
                  &UnicodeString,
                  &LdrpAppPackagesPath);
              LdrpLogDllState(*(_DWORD *)(LdrpImageEntry + 24), LdrpImageEntry + 36, 5285);
              LdrpInsertModuleToIndex(LdrpImageEntry, (int)OutHeaders);
              result = LdrpProcessMappedModule(LdrpImageEntry, 0, v72, v72);
              v167 = result;
              if ( result >= 0 )
              {
                *(_DWORD *)(*(_DWORD *)(LdrpImageEntry + 80) + 32) = 9;
                inited = RtlpInitCurrentDir(&UnicodeString);
                v167 = inited;
                if ( inited < 0 )
                {
                  v74 = ShowSnaps;
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
                    v74 = ShowSnaps;
                  }
                  if ( (v74 & 0x10) != 0 )
                    __debugbreak();
                }
                if ( !v129 )
                  RtlFreeAnsiString(&UnicodeString);
                if ( !AvrfAppVerifierMode )
                  goto LABEL_245;
                v75 = LdrpAllocateModuleEntry(0);
                v164 = (int *)v75;
                if ( !v75 )
                {
                  v39 = ShowSnaps;
                  if ( (ShowSnaps & 3) == 0 )
                  {
LABEL_195:
                    if ( (v39 & 0x10) != 0 )
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
                  v39 = ShowSnaps;
                  goto LABEL_195;
                }
                *(_DWORD *)(*((_DWORD *)v75 + 20) + 12) = -1;
                *(_WORD *)(**((_DWORD **)v75 + 20) - 28) = -1;
                *((_DWORD *)v75 + 13) |= v152[13];
                *((_DWORD *)v75 + 32) = v152[32];
                *((_WORD *)v75 + 29) = 0;
                ReturnedLength = (ULONG)(v75 + 36);
                v76 = v152;
                *((_DWORD *)v75 + 9) = v152[9];
                *((_DWORD *)v75 + 10) = v76[10];
                v77 = v152;
                *((_DWORD *)v75 + 11) = v152[11];
                *((_DWORD *)v75 + 12) = v77[12];
                *((_DWORD *)v75 + 17) = v152[17];
                *((_DWORD *)v75 + 6) = v152[6];
                LdrpInsertDataTableEntry((int)v75);
                LdrpLogDllState(v164[6], ReturnedLength, 5285);
                result = RtlImageNtHeaderEx(3u, (PVOID)v164[6], 0LL, &v135);
                v167 = result;
                if ( result >= 0 )
                {
                  LdrpInsertModuleToIndex((int)v164, (int)v135);
                  result = LdrpProcessMappedModule((signed __int32)v164, 0, v78, v78);
                  v167 = result;
                  if ( result >= 0 )
                  {
                    v79 = v164;
                    v164[7] = v152[7];
                    LdrpLogDllState(v79[6], (int)(v79 + 9), 5293);
                    v80 = v164;
                    *(_DWORD *)(v164[20] + 32) = 7;
                    if ( (v163->NtGlobalFlag & 0x100) != 0 || (AvrfAppVerifierMode & 2) != 0 )
                    {
                      result = AVrfInitializeVerifier(0, 1, (int)BaseOfImage, 0);
                      v167 = result;
                      if ( result < 0 )
                        return result;
                      if ( (AvrfAppVerifierMode & 2) != 0 )
                      {
                        *(_DWORD *)(v164[20] + 32) = 9;
                        result = v167;
                      }
                    }
                    else
                    {
                      v155 = 0;
                      result = LdrpInitializeGraphRecurse((_DWORD *)v80[20], 0, &v155);
                      v167 = result;
                    }
                    if ( result >= 0 )
                    {
LABEL_245:
                      LdrpDropLastInProgressCount();
                      v130 = 0;
                      if ( UseCOR )
                      {
                        result = LdrpCorInitialize((int)&v130);
                        v167 = result;
                        if ( result < 0 )
                          return result;
                        if ( v166 )
                        {
                          result = LdrpCorValidateImage(v163->ImageBaseAddress);
                          v167 = result;
                          if ( result < 0 )
                            return result;
                        }
                        if ( (v142->SameTebFlags & 0x400) != 0 )
                          *(_DWORD *)(v132 + 176) = __ROR4__(LdrpCorExeMainRoutine, 32 - (MEMORY[0x7FFE0330] & 0x1F)) ^ MEMORY[0x7FFE0330];
                      }
                      result = LdrpInitializeTls();
                      v167 = result;
                      if ( result < 0 )
                      {
                        v27 = ShowSnaps;
                        if ( (ShowSnaps & 3) == 0 )
                          goto LABEL_374;
                        v112 = result;
                        v104 = "Initializing TLS slots failed with status 0x%08lx\n";
                        v96 = 5432;
                        goto LABEL_358;
                      }
                      if ( v130 )
                      {
                        v154 = 0;
                        result = LdrpInitializeGraphRecurse(*(_DWORD **)(v130 + 80), 0, &v154);
                        v167 = result;
                        if ( result < 0 )
                        {
                          v27 = ShowSnaps;
                          if ( (ShowSnaps & 3) == 0 )
                            goto LABEL_374;
                          v112 = result;
                          v104 = "DllMain of MSCOREE (or its dependents) failed with status 0x%08lx\n";
                          v96 = 5451;
                          goto LABEL_358;
                        }
                      }
                      result = LdrpInitializeImportRedirection();
                      v167 = result;
                      if ( result < 0 )
                      {
                        v27 = ShowSnaps;
                        if ( (ShowSnaps & 3) == 0 )
                          goto LABEL_374;
                        v112 = result;
                        v104 = "Loading of import redirection module failed with status 0x%08x\n";
                        v96 = 5467;
                        goto LABEL_358;
                      }
                      ProcedureAddress = 0;
                      Subsystem = OutHeaders->OptionalHeader.Subsystem;
                      if ( Subsystem != 2 && Subsystem != 3 )
                      {
LABEL_296:
                        v83 = RtlpProcessECVPolicy;
                        if ( RtlpProcessECVPolicy == -1 )
                        {
                          v167 = ZwQueryInformationProcess((HANDLE)0xFFFFFFFF, ProcessExecuteFlags, &v161, 4u, 0);
                          if ( v167 >= 0 && (v161 & 0x48) == 0x48 )
                          {
                            v83 = 1;
                            goto LABEL_308;
                          }
                          v83 = (MEMORY[0x7FFE02D5] >> 2) & 3;
                          RtlpProcessECVPolicy = v83;
                        }
                        if ( v83 == 2 )
                        {
                          MajorSubsystemVersion = OutHeaders->OptionalHeader.MajorSubsystemVersion;
                          if ( MajorSubsystemVersion > (unsigned __int16)v134
                            || MajorSubsystemVersion == (_WORD)v134
                            && OutHeaders->OptionalHeader.MinorSubsystemVersion >= 2u )
                          {
                            v83 = 0;
                            RtlpProcessECVPolicy = 0;
                          }
                        }
                        if ( v83 != 3 )
                        {
LABEL_309:
                          v161 = 0;
                          if ( (MEMORY[0x7FFE02D5] & 3) == 1 || LdrpNXProcessPermanent )
                          {
                            v113 = 13;
                          }
                          else
                          {
                            v85 = 0;
                            if ( (MEMORY[0x7FFE02D5] & 3) != 0 )
                              goto LABEL_315;
                            v113 = 10;
                          }
                          v85 = v113;
                          v161 = v113;
LABEL_315:
                          if ( v85 )
                          {
                            LdrpNXProcessPermanent = 1;
                            if ( v83 == 1 )
                              v161 = v85 | 0x40;
                            ZwSetInformationProcess((HANDLE)0xFFFFFFFF, ProcessExecuteFlags, &v161, 4u);
                          }
                          LdrpDrainWorkQueue(0);
                          SbObtainTraceHandle(0);
                          v86 = pShimData;
                          if ( pShimData && pShimData[132] )
                          {
                            v163->AppCompatInfo = 0;
                            LdrpInitShimEngine(v86);
                          }
                          LoaderThreads = 1;
                          if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x400000) != 0 )
                            RtlpForceCSDebugInfoCreation = 1;
                          if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x10000000) != 0 )
                            v160->LoaderThreads = 1;
                          else
                            LoaderThreads = v160->LoaderThreads;
                          LdrpEnableParallelLoading(LoaderThreads);
                          LdrInitState = 1;
                          v88 = (_DWORD *)LdrpImageEntry;
                          *(_DWORD *)(*(_DWORD *)(LdrpImageEntry + 80) + 32) = 2;
                          *v117 = 0;
                          if ( v166 )
                          {
                            result = LdrpCorProcessImports(v88);
                          }
                          else
                          {
                            v116 |= 1u;
                            LdrpMapAndSnapDependency(v115);
                            LdrpDrainWorkQueue((void *)1);
                            result = v167;
                            if ( v167 < 0 )
                            {
LABEL_332:
                              v27 = ShowSnaps;
                              if ( (ShowSnaps & 3) == 0 )
                                goto LABEL_374;
                              v112 = result;
                              v104 = "Walking the import tables of the executable and its static imports failed with status 0x%08lx\n";
                              v96 = 5863;
                              goto LABEL_358;
                            }
                            result = LdrpPrepareModuleForExecution(LdrpImageEntry, (int)v117);
                          }
                          v167 = result;
                          if ( result < 0 )
                            goto LABEL_332;
                          LdrInitState = 2;
                          VirtualAddresses.VirtualAddress = (PVOID)1;
                          v119[0] = *(_DWORD *)(LdrpImageEntry + 24);
                          v119[1] = 4096;
                          HIDWORD(v98) = v119;
                          LODWORD(v98) = 1;
                          NtSetInformationVirtualMemory(
                            (HANDLE)0xFFFFFFFF,
                            VmImageHotPatchInformation,
                            v98,
                            &VirtualAddresses,
                            (PVOID)4,
                            v114);
                          if ( v163->BeingDebugged )
                            LdrpDoDebuggerBreak();
                          LdrpDropLastInProgressCount();
                          if ( LdrpNXProcessPermanent )
                          {
LABEL_350:
                            VirtualAddresses.VirtualAddress = Kernel32ThreadInitThunkFunction;
                            if ( Kernel32ThreadInitThunkFunction )
                            {
                              result = ((int (__fastcall *)(int, _DWORD, _DWORD))VirtualAddresses.VirtualAddress)(
                                         1,
                                         0,
                                         0);
                              v167 = result;
                              if ( result < 0 )
                                return result;
                              result = LdrpInitializePerUserWindowsDirectory((int (__stdcall *)(_BYTE *, int))ProcedureAddress);
                              v167 = result;
                              if ( result < 0 )
                                return result;
                            }
                            LdrpProcessInitContextRecord = v132;
                            LdrpDrainWorkQueue(0);
                            LdrpAcquireLoaderLock();
                            v153 = 0;
                            v167 = LdrpInitializeGraphRecurse(*(_DWORD **)(LdrpImageEntry + 80), (int)v117, &v153);
                            LdrpReleaseLoaderLock(v90, 9, v167, v90);
                            LdrpFreeLoadContextOfNode(*(_DWORD **)(LdrpImageEntry + 80), (int)v117);
                            LdrpDropLastInProgressCount();
                            LdrpProcessInitContextRecord = 0;
                            if ( v169 )
                              RtlReleasePath(Path[0]);
                            result = v167;
                            if ( v167 >= 0 )
                            {
                              if ( *(_WORD *)(LdrpImageEntry + 58) )
                              {
                                v118[0] = 36;
                                v118[1] = 1;
                                memset(&v118[2], 0, 0x1Cu);
                                RtlActivateActivationContextUnsafeFast(v118, *(_DWORD *)(LdrpImageEntry + 72));
                                ms_exc.registration.TryLevel = 0;
                                LdrpCallTlsInitializers(1, LdrpImageEntry);
                                ms_exc.registration.TryLevel = -2;
                                v91 = pShimData;
                                RtlDeactivateActivationContextUnsafeFast(v118);
                              }
                              else
                              {
                                v91 = pShimData;
                              }
                              if ( g_ShimsEnabled )
                              {
                                v92 = (unsigned __int8 (__thiscall *)(_DWORD, unsigned __int16 *, _DWORD *))(MEMORY[0x7FFE0330] ^ __ROR4__(g_pfnSE_InstallAfterInit, 32 - (MEMORY[0x7FFE0330] & 0x1F)));
                                if ( !v92(v92, &v143, v91) )
                                {
                                  g_ShimsEnabled = 0;
                                  LdrUnloadDll(g_pShimEngineModule);
                                  g_pShimEngineModule = 0;
                                }
                              }
                              PostProcessInitRoutine = v163->PostProcessInitRoutine;
                              if ( PostProcessInitRoutine )
                                ((void (__thiscall *)(void (__stdcall *)()))PostProcessInitRoutine)(v163->PostProcessInitRoutine);
                              if ( Handle )
                                NtClose(Handle);
                              if ( KeyHandle )
                                NtClose(KeyHandle);
                              return 0;
                            }
                            v27 = ShowSnaps;
                            if ( (ShowSnaps & 3) == 0 )
                              goto LABEL_374;
                            v112 = v167;
                            v104 = "Running the init routines of the executable's static imports failed with status 0x%08lx\n";
                            v96 = 6005;
LABEL_358:
                            LdrpLogDbgPrint("minkernel\\ntdll\\ldrinit.c", v96, "LdrpInitializeProcess", 0, v104, v112);
                            goto LABEL_373;
                          }
                          v89 = 2;
                          if ( (MEMORY[0x7FFE02D5] & 3) != 2
                            || (v160->Flags & 0x20000) != 0
                            || OutHeaders->OptionalHeader.Subsystem == 1 )
                          {
                            if ( !(unsigned __int8)LdrpCheckForSecuROMImage(OutHeaders)
                              && (unsigned __int8)LdrpEntrySectionValid(OutHeaders)
                              && !(unsigned __int8)LdrpCheckForSafeDiscImage(OutHeaders) )
                            {
                              v161 = 0;
                              v89 = 0;
LABEL_346:
                              if ( RtlpProcessECVPolicy == 1 )
                              {
                                v89 |= 0x40u;
                                v161 = v89;
                              }
                              if ( v89 )
                                ZwSetInformationProcess((HANDLE)0xFFFFFFFF, ProcessExecuteFlags, &v161, 4u);
                              goto LABEL_350;
                            }
                            v89 = 2;
                          }
                          v161 = 2;
                          goto LABEL_346;
                        }
                        v83 = (MEMORY[0x7FFE02D5] >> 2) & 3;
LABEL_308:
                        RtlpProcessECVPolicy = v83;
                        goto LABEL_309;
                      }
                      result = LdrLoadDll((PWSTR)0x4001, 0, (PUNICODE_STRING)&LdrpKernel32DllName, &DllHandle);
                      v167 = result;
                      if ( result < 0 )
                      {
                        if ( result != -1073741515 )
                        {
                          v27 = ShowSnaps;
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
                          v27 = ShowSnaps;
                          result = v167;
LABEL_374:
                          if ( (v27 & 0x10) != 0 )
                            __debugbreak();
                          return result;
                        }
                        result = LdrLoadDll((PWSTR)0x4001, 0, (PUNICODE_STRING)&LdrpKernelbaseDllName, &DllHandle);
                        v167 = result;
                        if ( result < 0 )
                        {
                          v27 = ShowSnaps;
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
                        v167 = result;
                        if ( result < 0 && result != -1073741515 )
                        {
                          v27 = ShowSnaps;
                          if ( (ShowSnaps & 3) == 0 )
                            goto LABEL_374;
                          v112 = result;
                          v104 = "LdrpCodeAuthzInitialize failed with status 0x%08lx\n";
                          v96 = 5614;
                          goto LABEL_358;
                        }
                        v167 = 0;
                        goto LABEL_289;
                      }
                      result = LdrGetProcedureAddressForCaller(
                                 DllHandle,
                                 (PANSI_STRING)&stru_4B281718,
                                 0,
                                 &Kernel32ThreadInitThunkFunction,
                                 0,
                                 retaddr);
                      v167 = result;
                      if ( result < 0 )
                      {
                        v27 = ShowSnaps;
                        if ( (ShowSnaps & 3) == 0 )
                          goto LABEL_374;
                        LdrpLogDbgPrint(
                          "minkernel\\ntdll\\ldrinit.c",
                          5512,
                          "LdrpInitializeProcess",
                          0,
                          "Locating procedure \"%Z\" in Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
                          &stru_4B281718,
                          &LdrpKernel32DllName,
                          result);
                        goto LABEL_373;
                      }
                      LdrGetProcedureAddressForCaller(
                        DllHandle,
                        (PANSI_STRING)&stru_4B281720,
                        0,
                        &ProcedureAddress,
                        0,
                        retaddr);
                      result = LdrGetProcedureAddressForCaller(
                                 DllHandle,
                                 &ProcedureName,
                                 0,
                                 &Kernel32BaseQueryModuleData,
                                 0,
                                 retaddr);
                      v167 = result;
                      if ( result >= 0 )
                        goto LABEL_380;
                      v82 = ShowSnaps;
                      if ( (ShowSnaps & 3) != 0 )
                      {
                        LdrpLogDbgPrint(
                          "minkernel\\ntdll\\ldrinit.c",
                          5535,
                          "LdrpInitializeProcess",
                          1,
                          "Locating procedure \"%Z\" in Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
                          &ProcedureName,
                          &LdrpKernel32DllName,
                          result);
                        v82 = ShowSnaps;
                        result = v167;
                      }
                      if ( (v82 & 0x40) != 0 )
                        __debugbreak();
                      Kernel32BaseQueryModuleData = 0;
                      if ( result == -1073741702 || result == -1073741511 )
                      {
LABEL_380:
                        result = LdrpSnapKernelBaseExtensions();
                        v167 = result;
                        if ( result >= 0 )
                        {
                          result = LdrpCodeAuthzInitialize();
                          v167 = result;
                          if ( result >= 0 )
                          {
                            result = LdrpFindLoadedDll((PUNICODE_STRING)&LdrpKernelbaseDllName, (char **)&v120);
                            v167 = result;
                            if ( result < 0 )
                            {
                              v27 = ShowSnaps;
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
                            DllHandle = *(PVOID *)(v120 + 24);
LABEL_289:
                            result = LdrGetProcedureAddressForCaller(
                                       DllHandle,
                                       (PANSI_STRING)&stru_4B281730,
                                       0,
                                       &v131,
                                       0,
                                       retaddr);
                            v167 = result;
                            if ( result < 0 )
                            {
                              v27 = ShowSnaps;
                              if ( (ShowSnaps & 3) == 0 )
                                goto LABEL_374;
                              v112 = result;
                              v104 = "Finding KernelbasePostInit failed with status 0x%08lx\n";
                              v96 = 5643;
                              goto LABEL_358;
                            }
                            result = ((int (__thiscall *)(PVOID))v131)(v131);
                            v167 = result;
                            if ( result < 0 )
                            {
                              v27 = ShowSnaps;
                              if ( (ShowSnaps & 3) == 0 )
                                goto LABEL_374;
                              v112 = result;
                              v104 = "Calling KernelbasePostInit failed with status 0x%08lx\n";
                              v96 = 5651;
                              goto LABEL_358;
                            }
                            v167 = 0;
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
