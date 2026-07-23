/*
 * XREFs of LdrpLogDbgPrint @ 0x1800CDC48
 * Callers:
 *     LdrResolveDelayLoadedAPI @ 0x180010380 (LdrResolveDelayLoadedAPI.c)
 *     LdrpCompleteMapModule @ 0x1800148B4 (LdrpCompleteMapModule.c)
 *     LdrpMinimalMapModule @ 0x180014C38 (LdrpMinimalMapModule.c)
 *     LdrpFindDllActivationContext @ 0x180014E80 (LdrpFindDllActivationContext.c)
 *     LdrpFindKnownDll @ 0x1800150E0 (LdrpFindKnownDll.c)
 *     LdrGetDllHandleEx @ 0x1800168A0 (LdrGetDllHandleEx.c)
 *     LdrpInitializeDllPath @ 0x1800169B8 (LdrpInitializeDllPath.c)
 *     LdrLoadDll @ 0x180016A10 (LdrLoadDll.c)
 *     LdrpLoadDependentModule @ 0x180017BE0 (LdrpLoadDependentModule.c)
 *     LdrpCallTlsInitializers @ 0x180019A78 (LdrpCallTlsInitializers.c)
 *     LdrpPreprocessDllName @ 0x18001A360 (LdrpPreprocessDllName.c)
 *     LdrpFindLoadedDllInternal @ 0x18001DBEC (LdrpFindLoadedDllInternal.c)
 *     LdrpLoadDllInternal @ 0x18001FA14 (LdrpLoadDllInternal.c)
 *     LdrpHandleProtectedDelayload @ 0x1800318A0 (LdrpHandleProtectedDelayload.c)
 *     LdrpGetProcedureAddress @ 0x1800321C0 (LdrpGetProcedureAddress.c)
 *     LdrpSnapModule @ 0x1800323F0 (LdrpSnapModule.c)
 *     LdrpPrepareModuleForExecution @ 0x18003D888 (LdrpPrepareModuleForExecution.c)
 *     LdrpDynamicShimModule @ 0x18003D9A4 (LdrpDynamicShimModule.c)
 *     LdrpSendPostSnapNotifications @ 0x18003DC0C (LdrpSendPostSnapNotifications.c)
 *     LdrpReportError @ 0x18003F2B4 (LdrpReportError.c)
 *     LdrpInitializeTls @ 0x180053D54 (LdrpInitializeTls.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x18005411C (LdrpWriteBackProtectedDelayLoad.c)
 *     LdrpDoPostSnapWork @ 0x1800544DC (LdrpDoPostSnapWork.c)
 *     LdrpAllocateTls @ 0x180054ACC (LdrpAllocateTls.c)
 *     LdrShutdownProcess @ 0x18005EFD0 (LdrShutdownProcess.c)
 *     LdrpProcessWork @ 0x18006011C (LdrpProcessWork.c)
 *     LdrpSearchPath @ 0x18006035C (LdrpSearchPath.c)
 *     LdrpResolveDllName @ 0x180060664 (LdrpResolveDllName.c)
 *     LdrpComputeLazyDllPath @ 0x1800614A0 (LdrpComputeLazyDllPath.c)
 *     LdrpDetectDetour @ 0x1800634AC (LdrpDetectDetour.c)
 *     LdrpUnloadNode @ 0x18006B528 (LdrpUnloadNode.c)
 *     LdrpProcessDetachNode @ 0x18006BA04 (LdrpProcessDetachNode.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18006C260 (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpInitShimEngine @ 0x18006C77C (LdrpInitShimEngine.c)
 *     LdrpLoadShimEngine @ 0x18006C924 (LdrpLoadShimEngine.c)
 *     LdrpInitializeShimDllDependencies @ 0x18006CBC4 (LdrpInitializeShimDllDependencies.c)
 *     LdrpGetShimEngineInterface @ 0x18006CD08 (LdrpGetShimEngineInterface.c)
 *     LdrpInitializeNode @ 0x18006D154 (LdrpInitializeNode.c)
 *     LdrpMergeNodes @ 0x18006F638 (LdrpMergeNodes.c)
 *     _LdrpInitialize @ 0x180075CBC (_LdrpInitialize.c)
 *     LdrpRedirectDelayloadFailure @ 0x1800817E4 (LdrpRedirectDelayloadFailure.c)
 *     LdrpInitializeImportRedirection @ 0x180082514 (LdrpInitializeImportRedirection.c)
 *     LdrpInitializePerUserWindowsDirectory @ 0x180082DF4 (LdrpInitializePerUserWindowsDirectory.c)
 *     LdrpRelocateImage @ 0x1800834FC (LdrpRelocateImage.c)
 *     LdrpProtectAndRelocateImage @ 0x1800835DC (LdrpProtectAndRelocateImage.c)
 *     LdrpLoadWow64 @ 0x180083824 (LdrpLoadWow64.c)
 *     LdrGetKnownDllSectionHandle @ 0x1800847F0 (LdrGetKnownDllSectionHandle.c)
 *     LdrInitShimEngineDynamic @ 0x1800D0570 (LdrInitShimEngineDynamic.c)
 *     LdrpGetProcApphelpCheckModule @ 0x1800D08E0 (LdrpGetProcApphelpCheckModule.c)
 *     LdrpInitializationFailure @ 0x1800D0AF8 (LdrpInitializationFailure.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800D0BA0 (LdrpInitializeApplicationVerifierPackage.c)
 *     LdrpInitializeExecutionOptions @ 0x1800D104C (LdrpInitializeExecutionOptions.c)
 *     LdrpInitializeProcess @ 0x1800D1E80 (LdrpInitializeProcess.c)
 *     LdrpInitializeProcessHeap @ 0x1800D3FCC (LdrpInitializeProcessHeap.c)
 *     LdrpInitializeProcessWrapperFilter @ 0x1800D41DC (LdrpInitializeProcessWrapperFilter.c)
 *     LdrpIsSubstringFound @ 0x1800D4284 (LdrpIsSubstringFound.c)
 *     LdrpIsVerifierActivationFilterMatched @ 0x1800D4350 (LdrpIsVerifierActivationFilterMatched.c)
 *     LdrpCheckRedirection @ 0x1800D5040 (LdrpCheckRedirection.c)
 *     LdrpGenericExceptionFilter @ 0x1800D554C (LdrpGenericExceptionFilter.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x180051B08 (vDbgPrintExWithPrefixInternal.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     StringCbPrintfA @ 0x1800CDF10 (StringCbPrintfA.c)
 */

struct _TEB *LdrpLogDbgPrint(_DWORD a1, _DWORD a2, const char *a3, int a4, char *a5, ...)
{
  struct _TEB *result; // rax
  char pszDest[256]; // [rsp+40h] [rbp-118h] BYREF
  va_list va; // [rsp+188h] [rbp+30h] BYREF

  va_start(va, a5);
  if ( (NtCurrentTeb()->SameTebFlags & 8) == 0 || (result = NtCurrentTeb(), (result->SameTebFlags & 0x20) != 0) )
  {
    StringCbPrintfA(
      pszDest,
      0x100uLL,
      "%04x:%04x @ %08d - %s - %s: ",
      LODWORD(NtCurrentTeb()->ClientId.UniqueProcess),
      LODWORD(NtCurrentTeb()->ClientId.UniqueThread),
      (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24,
      a3,
      (&off_18011D398)[2 * a4]);
    return (struct _TEB *)vDbgPrintExWithPrefixInternal(pszDest, 0x55u, 0, a5, va, 1);
  }
  return result;
}
