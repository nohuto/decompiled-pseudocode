/*
 * XREFs of LdrpLogDbgPrint @ 0x1800CDCC8
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
 *     LdrpPrepareModuleForExecution @ 0x18003D8C8 (LdrpPrepareModuleForExecution.c)
 *     LdrpDynamicShimModule @ 0x18003D9E4 (LdrpDynamicShimModule.c)
 *     LdrpSendPostSnapNotifications @ 0x18003DC4C (LdrpSendPostSnapNotifications.c)
 *     LdrpReportError @ 0x18003F2F4 (LdrpReportError.c)
 *     LdrpInitializeTls @ 0x180047428 (LdrpInitializeTls.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x1800477F0 (LdrpWriteBackProtectedDelayLoad.c)
 *     LdrpDoPostSnapWork @ 0x180047BB0 (LdrpDoPostSnapWork.c)
 *     LdrpAllocateTls @ 0x1800481A0 (LdrpAllocateTls.c)
 *     LdrShutdownProcess @ 0x18005DAA0 (LdrShutdownProcess.c)
 *     LdrpProcessWork @ 0x18005EC2C (LdrpProcessWork.c)
 *     LdrpSearchPath @ 0x18005EE6C (LdrpSearchPath.c)
 *     LdrpResolveDllName @ 0x18005F174 (LdrpResolveDllName.c)
 *     LdrpComputeLazyDllPath @ 0x18005FFB0 (LdrpComputeLazyDllPath.c)
 *     LdrpDetectDetour @ 0x180061FBC (LdrpDetectDetour.c)
 *     LdrpUnloadNode @ 0x18006A4F8 (LdrpUnloadNode.c)
 *     LdrpProcessDetachNode @ 0x18006A9D4 (LdrpProcessDetachNode.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18006B230 (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpInitShimEngine @ 0x18006B74C (LdrpInitShimEngine.c)
 *     LdrpLoadShimEngine @ 0x18006B8F4 (LdrpLoadShimEngine.c)
 *     LdrpInitializeShimDllDependencies @ 0x18006BB94 (LdrpInitializeShimDllDependencies.c)
 *     LdrpGetShimEngineInterface @ 0x18006BCD8 (LdrpGetShimEngineInterface.c)
 *     LdrpInitializeNode @ 0x18006C124 (LdrpInitializeNode.c)
 *     LdrpMergeNodes @ 0x18006E608 (LdrpMergeNodes.c)
 *     _LdrpInitialize @ 0x180074C8C (_LdrpInitialize.c)
 *     LdrpRedirectDelayloadFailure @ 0x180080EC4 (LdrpRedirectDelayloadFailure.c)
 *     LdrpInitializeImportRedirection @ 0x180081BF4 (LdrpInitializeImportRedirection.c)
 *     LdrpInitializePerUserWindowsDirectory @ 0x1800826E4 (LdrpInitializePerUserWindowsDirectory.c)
 *     LdrpRelocateImage @ 0x180082DEC (LdrpRelocateImage.c)
 *     LdrpProtectAndRelocateImage @ 0x180082ECC (LdrpProtectAndRelocateImage.c)
 *     LdrpLoadWow64 @ 0x180083114 (LdrpLoadWow64.c)
 *     LdrGetKnownDllSectionHandle @ 0x1800844B0 (LdrGetKnownDllSectionHandle.c)
 *     LdrInitShimEngineDynamic @ 0x1800D05F0 (LdrInitShimEngineDynamic.c)
 *     LdrpGetProcApphelpCheckModule @ 0x1800D0960 (LdrpGetProcApphelpCheckModule.c)
 *     LdrpInitializationFailure @ 0x1800D0B78 (LdrpInitializationFailure.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800D0C20 (LdrpInitializeApplicationVerifierPackage.c)
 *     LdrpInitializeExecutionOptions @ 0x1800D10CC (LdrpInitializeExecutionOptions.c)
 *     LdrpInitializeProcess @ 0x1800D1F00 (LdrpInitializeProcess.c)
 *     LdrpInitializeProcessHeap @ 0x1800D4258 (LdrpInitializeProcessHeap.c)
 *     LdrpInitializeProcessWrapperFilter @ 0x1800D4468 (LdrpInitializeProcessWrapperFilter.c)
 *     LdrpIsSubstringFound @ 0x1800D4510 (LdrpIsSubstringFound.c)
 *     LdrpIsVerifierActivationFilterMatched @ 0x1800D45DC (LdrpIsVerifierActivationFilterMatched.c)
 *     LdrpCheckRedirection @ 0x1800D52D0 (LdrpCheckRedirection.c)
 *     LdrpGenericExceptionFilter @ 0x1800D57DC (LdrpGenericExceptionFilter.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x1800509F8 (vDbgPrintExWithPrefixInternal.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     StringCbPrintfA @ 0x1800CDF90 (StringCbPrintfA.c)
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
