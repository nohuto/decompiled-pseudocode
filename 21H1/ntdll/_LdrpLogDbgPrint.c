/*
 * XREFs of _LdrpLogDbgPrint @ 0x4B32E582
 * Callers:
 *     _LdrpGetProcedureAddress@16 @ 0x4B2A6260 (_LdrpGetProcedureAddress@16.c)
 *     _LdrpNameToOrdinal@24 @ 0x4B2A6330 (_LdrpNameToOrdinal@24.c)
 *     _LdrpInitShimEngine@4 @ 0x4B2A63CD (_LdrpInitShimEngine@4.c)
 *     _LdrpLoadShimEngine@4 @ 0x4B2A6525 (_LdrpLoadShimEngine@4.c)
 *     _LdrpInitializeShimDllDependencies@0 @ 0x4B2A672F (_LdrpInitializeShimDllDependencies@0.c)
 *     _LdrpGetShimEngineInterface@0 @ 0x4B2A6828 (_LdrpGetShimEngineInterface@0.c)
 *     _LdrpDetectDetour@0 @ 0x4B2AEB06 (_LdrpDetectDetour@0.c)
 *     _LdrpComputeLazyDllPath@4 @ 0x4B2B2720 (_LdrpComputeLazyDllPath@4.c)
 *     _LdrpSnapModule@4 @ 0x4B2BDE10 (_LdrpSnapModule@4.c)
 *     _LdrGetDllHandleEx@20 @ 0x4B2CABE0 (_LdrGetDllHandleEx@20.c)
 *     _LdrpPreprocessDllName@16 @ 0x4B2CB090 (_LdrpPreprocessDllName@16.c)
 *     _LdrpLoadDependentModule@24 @ 0x4B2CB610 (_LdrpLoadDependentModule@24.c)
 *     _LdrResolveDelayLoadedAPI@24 @ 0x4B2CCA20 (_LdrResolveDelayLoadedAPI@24.c)
 *     _LdrLoadDll@16 @ 0x4B2CDD70 (_LdrLoadDll@16.c)
 *     _LdrpLoadDllInternal@32 @ 0x4B2CE104 (_LdrpLoadDllInternal@32.c)
 *     _LdrpProcessWork@8 @ 0x4B2CE6E8 (_LdrpProcessWork@8.c)
 *     _LdrpInitializeDllPath@12 @ 0x4B2CE876 (_LdrpInitializeDllPath@12.c)
 *     _LdrpCallTlsInitializers@8 @ 0x4B2CF073 (_LdrpCallTlsInitializers@8.c)
 *     _LdrpWriteBackProtectedDelayLoad@20 @ 0x4B2CFDFF (_LdrpWriteBackProtectedDelayLoad@20.c)
 *     _LdrpSendPostSnapNotifications@4 @ 0x4B2D0ABB (_LdrpSendPostSnapNotifications@4.c)
 *     _LdrpDoPostSnapWork@4 @ 0x4B2D0C67 (_LdrpDoPostSnapWork@4.c)
 *     _LdrpFindKnownDll@16 @ 0x4B2D0FCB (_LdrpFindKnownDll@16.c)
 *     _LdrpMinimalMapModule@8 @ 0x4B2D110F (_LdrpMinimalMapModule@8.c)
 *     _LdrpCompleteMapModule@12 @ 0x4B2D14E4 (_LdrpCompleteMapModule@12.c)
 *     _LdrpInitializeNode@4 @ 0x4B2D16BE (_LdrpInitializeNode@4.c)
 *     _LdrpResolveDllName@20 @ 0x4B2D1F2E (_LdrpResolveDllName@20.c)
 *     _LdrpPrepareModuleForExecution@8 @ 0x4B2D2176 (_LdrpPrepareModuleForExecution@8.c)
 *     _LdrpFindOrPrepareLoadingModule@28 @ 0x4B2D2238 (_LdrpFindOrPrepareLoadingModule@28.c)
 *     _LdrpDynamicShimModule@4 @ 0x4B2D234A (_LdrpDynamicShimModule@4.c)
 *     _LdrpSearchPath@36 @ 0x4B2D2450 (_LdrpSearchPath@36.c)
 *     _LdrpUnloadNode@4 @ 0x4B2D96F3 (_LdrpUnloadNode@4.c)
 *     _LdrpProcessDetachNode@4 @ 0x4B2DA4B3 (_LdrpProcessDetachNode@4.c)
 *     _LdrShutdownProcess@0 @ 0x4B2DD6A0 (_LdrShutdownProcess@0.c)
 *     _LdrpInitializeTls@0 @ 0x4B2E14F7 (_LdrpInitializeTls@0.c)
 *     _LdrpAllocateTls@0 @ 0x4B2E15BF (_LdrpAllocateTls@0.c)
 *     _LdrpMergeNodes@8 @ 0x4B2E21AC (_LdrpMergeNodes@8.c)
 *     _LdrpFindDllActivationContext@4 @ 0x4B2E4C0D (_LdrpFindDllActivationContext@4.c)
 *     __LdrpInitialize@8 @ 0x4B2E6327 (__LdrpInitialize@8.c)
 *     _LdrpFindLoadedDllInternal@20 @ 0x4B2E9DE3 (_LdrpFindLoadedDllInternal@20.c)
 *     _LdrpReportError@12 @ 0x4B2E9F63 (_LdrpReportError@12.c)
 *     _LdrpInitializeImportRedirection@0 @ 0x4B2EC596 (_LdrpInitializeImportRedirection@0.c)
 *     _LdrpInitializePerUserWindowsDirectory@4 @ 0x4B2EC686 (_LdrpInitializePerUserWindowsDirectory@4.c)
 *     _LdrpRelocateImage@16 @ 0x4B2ED3BF (_LdrpRelocateImage@16.c)
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 *     _LdrpRedirectDelayloadFailure@28 @ 0x4B32F8F2 (_LdrpRedirectDelayloadFailure@28.c)
 *     _LdrpProtectAndRelocateImage@20 @ 0x4B3310B1 (_LdrpProtectAndRelocateImage@20.c)
 *     _LdrInitShimEngineDynamic@8 @ 0x4B331380 (_LdrInitShimEngineDynamic@8.c)
 *     _LdrpGetProcApphelpCheckModule@4 @ 0x4B331AA6 (_LdrpGetProcApphelpCheckModule@4.c)
 *     _LdrpInitializationFailure@4 @ 0x4B331C4E (_LdrpInitializationFailure@4.c)
 *     _LdrpInitializeApplicationVerifierPackage@24 @ 0x4B331CC8 (_LdrpInitializeApplicationVerifierPackage@24.c)
 *     _LdrpInitializeExecutionOptions@24 @ 0x4B331EB9 (_LdrpInitializeExecutionOptions@24.c)
 *     _LdrpInitializeProcessHeap@12 @ 0x4B332D8F (_LdrpInitializeProcessHeap@12.c)
 *     _LdrpInitializeProcessWrapperFilter@8 @ 0x4B332F56 (_LdrpInitializeProcessWrapperFilter@8.c)
 *     _LdrpIsSubstringFound@8 @ 0x4B332FBA (_LdrpIsSubstringFound@8.c)
 *     _LdrpIsVerifierActivationFilterMatched@12 @ 0x4B333042 (_LdrpIsVerifierActivationFilterMatched@12.c)
 *     _LdrpCheckRedirection@12 @ 0x4B3342C5 (_LdrpCheckRedirection@12.c)
 *     _LdrpGenericExceptionFilter@8 @ 0x4B334947 (_LdrpGenericExceptionFilter@8.c)
 * Callees:
 *     _vDbgPrintExWithPrefixInternal@24 @ 0x4B2AB8F1 (_vDbgPrintExWithPrefixInternal@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _StringCbPrintfA @ 0x4B32E7CE (_StringCbPrintfA.c)
 */

struct _TEB *LdrpLogDbgPrint(int a1, int a2, int a3, int a4, const char *a5, ...)
{
  int v5; // edi
  struct _TEB *result; // eax
  char *v7; // ebx
  int v8; // eax
  size_t v9; // [esp-1Ch] [ebp-140h]
  char pszDest[260]; // [esp+18h] [ebp-10Ch] BYREF
  va_list va; // [esp+140h] [ebp+1Ch] BYREF

  va_start(va, a5);
  v5 = a3;
  if ( (NtCurrentTeb()->SameTebFlags & 8) == 0 || (result = NtCurrentTeb(), (result->SameTebFlags & 0x20) != 0) )
  {
    v7 = (&off_4B2813E8)[3 * a4];
    if ( MEMORY[0x7FFE0004] < 0x1000000u )
    {
      while ( MEMORY[0x7FFE0324] != MEMORY[0x7FFE0328] )
        _mm_pause();
      v5 = a3;
      v7 = (&off_4B2813E8)[3 * a4];
      v8 = MEMORY[0x7FFE0004] * (MEMORY[0x7FFE0324] << 8)
         + ((MEMORY[0x7FFE0004] * (unsigned __int64)MEMORY[0x7FFE0320]) >> 24);
    }
    else
    {
      v8 = (MEMORY[0x7FFE0004] * (unsigned __int64)MEMORY[0x7FFE0320]) >> 24;
    }
    HIDWORD(v9) = "%04x:%04x @ %08d - %s - %s: ";
    LODWORD(v9) = 256;
    StringCbPrintfA(
      pszDest,
      v9,
      (STRSAFE_LPCSTR)NtCurrentTeb()->ClientId.UniqueProcess,
      NtCurrentTeb()->ClientId.UniqueThread,
      v8,
      v5,
      v7);
    return (struct _TEB *)vDbgPrintExWithPrefixInternal(pszDest, 0x55u, 0, (int)a5, va, 1);
  }
  return result;
}
