/*
 * XREFs of LdrpLogDbgPrint @ 0x1800CDAE8
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
 *     LdrpPrepareModuleForExecution @ 0x18003D878 (LdrpPrepareModuleForExecution.c)
 *     LdrpDynamicShimModule @ 0x18003D994 (LdrpDynamicShimModule.c)
 *     LdrpSendPostSnapNotifications @ 0x18003DBFC (LdrpSendPostSnapNotifications.c)
 *     LdrpReportError @ 0x18003F2A4 (LdrpReportError.c)
 *     LdrpInitializeTls @ 0x1800473D8 (LdrpInitializeTls.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x1800477A0 (LdrpWriteBackProtectedDelayLoad.c)
 *     LdrpDoPostSnapWork @ 0x180047B60 (LdrpDoPostSnapWork.c)
 *     LdrpAllocateTls @ 0x180048150 (LdrpAllocateTls.c)
 *     LdrShutdownProcess @ 0x18005DA50 (LdrShutdownProcess.c)
 *     LdrpProcessWork @ 0x18005EB1C (LdrpProcessWork.c)
 *     LdrpSearchPath @ 0x18005ED5C (LdrpSearchPath.c)
 *     LdrpResolveDllName @ 0x18005F064 (LdrpResolveDllName.c)
 *     LdrpComputeLazyDllPath @ 0x18005FEA0 (LdrpComputeLazyDllPath.c)
 *     LdrpDetectDetour @ 0x180061EAC (LdrpDetectDetour.c)
 *     LdrpUnloadNode @ 0x18006A3E8 (LdrpUnloadNode.c)
 *     LdrpProcessDetachNode @ 0x18006A8C4 (LdrpProcessDetachNode.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18006B120 (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpInitShimEngine @ 0x18006B63C (LdrpInitShimEngine.c)
 *     LdrpLoadShimEngine @ 0x18006B7E4 (LdrpLoadShimEngine.c)
 *     LdrpInitializeShimDllDependencies @ 0x18006BA84 (LdrpInitializeShimDllDependencies.c)
 *     LdrpGetShimEngineInterface @ 0x18006BBC8 (LdrpGetShimEngineInterface.c)
 *     LdrpInitializeNode @ 0x18006C014 (LdrpInitializeNode.c)
 *     LdrpMergeNodes @ 0x18006E508 (LdrpMergeNodes.c)
 *     _LdrpInitialize @ 0x180074B8C (_LdrpInitialize.c)
 *     LdrpRedirectDelayloadFailure @ 0x180080DC4 (LdrpRedirectDelayloadFailure.c)
 *     LdrpInitializeImportRedirection @ 0x180081AF4 (LdrpInitializeImportRedirection.c)
 *     LdrpInitializePerUserWindowsDirectory @ 0x1800825E4 (LdrpInitializePerUserWindowsDirectory.c)
 *     LdrpRelocateImage @ 0x180082CEC (LdrpRelocateImage.c)
 *     LdrpProtectAndRelocateImage @ 0x180082DCC (LdrpProtectAndRelocateImage.c)
 *     LdrpLoadWow64 @ 0x180083014 (LdrpLoadWow64.c)
 *     LdrGetKnownDllSectionHandle @ 0x1800843B0 (LdrGetKnownDllSectionHandle.c)
 *     LdrInitShimEngineDynamic @ 0x1800D0410 (LdrInitShimEngineDynamic.c)
 *     LdrpGetProcApphelpCheckModule @ 0x1800D0780 (LdrpGetProcApphelpCheckModule.c)
 *     LdrpInitializationFailure @ 0x1800D0998 (LdrpInitializationFailure.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800D0A40 (LdrpInitializeApplicationVerifierPackage.c)
 *     LdrpInitializeExecutionOptions @ 0x1800D0EEC (LdrpInitializeExecutionOptions.c)
 *     LdrpInitializeProcess @ 0x1800D1D20 (LdrpInitializeProcess.c)
 *     LdrpInitializeProcessHeap @ 0x1800D3EBC (LdrpInitializeProcessHeap.c)
 *     LdrpInitializeProcessWrapperFilter @ 0x1800D40CC (LdrpInitializeProcessWrapperFilter.c)
 *     LdrpIsSubstringFound @ 0x1800D4174 (LdrpIsSubstringFound.c)
 *     LdrpIsVerifierActivationFilterMatched @ 0x1800D4240 (LdrpIsVerifierActivationFilterMatched.c)
 *     LdrpCheckRedirection @ 0x1800D4F30 (LdrpCheckRedirection.c)
 *     LdrpGenericExceptionFilter @ 0x1800D543C (LdrpGenericExceptionFilter.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x1800509A8 (vDbgPrintExWithPrefixInternal.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     StringCbPrintfA @ 0x1800CDDB0 (StringCbPrintfA.c)
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
      (&off_18011C3C8)[2 * a4]);
    return (struct _TEB *)vDbgPrintExWithPrefixInternal(pszDest, 0x55u, 0, a5, va, 1);
  }
  return result;
}
