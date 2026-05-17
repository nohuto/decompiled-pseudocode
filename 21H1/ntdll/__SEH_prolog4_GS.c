/*
 * XREFs of __SEH_prolog4_GS @ 0x4B307B20
 * Callers:
 *     _LdrpCorInitialize@4 @ 0x4B2A6100 (_LdrpCorInitialize@4.c)
 *     _RtlQueryAtomInAtomTable@24 @ 0x4B2A9E90 (_RtlQueryAtomInAtomTable@24.c)
 *     _vDbgPrintExWithPrefixInternal@24 @ 0x4B2AB8F1 (_vDbgPrintExWithPrefixInternal@24.c)
 *     _RtlQueryWnfStateData@24 @ 0x4B2AE840 (_RtlQueryWnfStateData@24.c)
 *     _TppCleanupGroupMemberDestroy@4 @ 0x4B2B250C (_TppCleanupGroupMemberDestroy@4.c)
 *     _TppCritSetThread@4 @ 0x4B2B807E (_TppCritSetThread@4.c)
 *     _LdrpQuerySxSMUIFile@20 @ 0x4B2B9006 (_LdrpQuerySxSMUIFile@20.c)
 *     _RtlLoadString@32 @ 0x4B2BA030 (_RtlLoadString@32.c)
 *     _LdrResSearchResource@32 @ 0x4B2BA8B0 (_LdrResSearchResource@32.c)
 *     _LdrResGetRCConfig@20 @ 0x4B2BB5A0 (_LdrResGetRCConfig@20.c)
 *     _LdrLoadAlternateResourceModuleEx@20 @ 0x4B2BBDA0 (_LdrLoadAlternateResourceModuleEx@20.c)
 *     _RtlCreateHeap@24 @ 0x4B2C0F40 (_RtlCreateHeap@24.c)
 *     _LdrpLoadForwardedDll@24 @ 0x4B2CE9C0 (_LdrpLoadForwardedDll@24.c)
 *     _LdrpHandleTlsData@4 @ 0x4B2D0CD1 (_LdrpHandleTlsData@4.c)
 *     _RtlIntegerToChar@16 @ 0x4B2D2AE0 (_RtlIntegerToChar@16.c)
 *     _RtlpWnfWalkUserSubscriptionList@12 @ 0x4B2DEE18 (_RtlpWnfWalkUserSubscriptionList@12.c)
 *     _TpCheckTerminateWorker@4 @ 0x4B2EB4D0 (_TpCheckTerminateWorker@4.c)
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 *     _RtlpQueryPseudoEnvironmentVariable@16 @ 0x4B32E262 (_RtlpQueryPseudoEnvironmentVariable@16.c)
 *     _LdrVerifyImageMatchesChecksumEx@8 @ 0x4B32F0B0 (_LdrVerifyImageMatchesChecksumEx@8.c)
 *     _AVrfpLoadAndInitializeProvider@4 @ 0x4B33908C (_AVrfpLoadAndInitializeProvider@4.c)
 *     _RtlReportExceptionEx@20 @ 0x4B33A550 (_RtlReportExceptionEx@20.c)
 *     _RtlReportExceptionHelper@16 @ 0x4B33A890 (_RtlReportExceptionHelper@16.c)
 *     _ShipAssert@8 @ 0x4B33B510 (_ShipAssert@8.c)
 *     _RtlQueryWnfStateDataWithExplicitScope@28 @ 0x4B33BEA0 (_RtlQueryWnfStateDataWithExplicitScope@28.c)
 *     _LdrAddDllDirectory@8 @ 0x4B33CA10 (_LdrAddDllDirectory@8.c)
 *     _LdrpResSearchResourceHandle@32 @ 0x4B3434F8 (_LdrpResSearchResourceHandle@32.c)
 *     _LdrpResValidateFilePath@4 @ 0x4B343BC4 (_LdrpResValidateFilePath@4.c)
 *     _RtlLargeIntegerToChar@16 @ 0x4B350590 (_RtlLargeIntegerToChar@16.c)
 *     _RtlLargeIntegerToUnicode@16 @ 0x4B3506E9 (_RtlLargeIntegerToUnicode@16.c)
 *     _RtlReportCriticalFailure@12 @ 0x4B3669C7 (_RtlReportCriticalFailure@12.c)
 *     _RtlOsDeploymentState@4 @ 0x4B369A30 (_RtlOsDeploymentState@4.c)
 *     @EtwpTraceUmEvent@20 @ 0x4B381076 (@EtwpTraceUmEvent@20.c)
 *     _EtwpCheckForEnoughStackSpace@4 @ 0x4B381503 (_EtwpCheckForEnoughStackSpace@4.c)
 *     _EtwpWriteToPrivateBuffers@40 @ 0x4B381B7E (_EtwpWriteToPrivateBuffers@40.c)
 *     _EvtIntReportEventWorker@48 @ 0x4B382BB1 (_EvtIntReportEventWorker@48.c)
 *     _TppRaiseInvalidParameter@0 @ 0x4B3848BD (_TppRaiseInvalidParameter@0.c)
 *     _PssNtValidateDescriptor@8 @ 0x4B386E10 (_PssNtValidateDescriptor@8.c)
 * Callees:
 *     <none>
 */

_DWORD *__cdecl _SEH_prolog4_GS(int a1, int a2)
{
  void *v4; // esp
  void *v6; // [esp-14h] [ebp-14h]
  _DWORD v7[2]; // [esp-8h] [ebp-8h] BYREF
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h]
  int v9; // [esp+4h] [ebp+4h]

  v7[1] = _except_handler4;
  v7[0] = NtCurrentTeb()->NtTib.ExceptionList;
  v4 = alloca(a2);
  v9 = -2;
  retaddr = v6;
  return v7;
}
