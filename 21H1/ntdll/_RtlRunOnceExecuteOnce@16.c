/*
 * XREFs of _RtlRunOnceExecuteOnce@16 @ 0x4B2B0F70
 * Callers:
 *     _LdrpLogCFGModuleInfoTelemetry@8 @ 0x4B2ADD70 (_LdrpLogCFGModuleInfoTelemetry@8.c)
 *     _RtlRandomEx@4 @ 0x4B2AECC0 (_RtlRandomEx@4.c)
 *     @RtlpCreateLowFragHeap@4 @ 0x4B2AEF38 (@RtlpCreateLowFragHeap@4.c)
 *     _RtlQueryResourcePolicy@16 @ 0x4B2AFE50 (_RtlQueryResourcePolicy@16.c)
 *     _RtlpSubscribeWnfStateChangeNotificationInternal@40 @ 0x4B2B068F (_RtlpSubscribeWnfStateChangeNotificationInternal@40.c)
 *     _LdrpResReportResourceAccessInternal@16 @ 0x4B2B0BD2 (_LdrpResReportResourceAccessInternal@16.c)
 *     _EtwpRegisterProvider@12 @ 0x4B2B0C39 (_EtwpRegisterProvider@12.c)
 *     _RtlSetHeapInformation@16 @ 0x4B2ECAF0 (_RtlSetHeapInformation@16.c)
 *     _RtlpLogCapabilityCheckLatency@24 @ 0x4B2EF4F3 (_RtlpLogCapabilityCheckLatency@24.c)
 *     _LdrpLogImportRedirectionTelemetry@4 @ 0x4B3304B6 (_LdrpLogImportRedirectionTelemetry@4.c)
 *     _LdrpLogIntegrityContinuityTelemetry@20 @ 0x4B33057E (_LdrpLogIntegrityContinuityTelemetry@20.c)
 *     _LdrpLogMapAndVerifyResourceFileFailure@20 @ 0x4B330851 (_LdrpLogMapAndVerifyResourceFileFailure@20.c)
 *     _LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure@16 @ 0x4B330AB6 (_LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure@16.c)
 *     _LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry@12 @ 0x4B330BDE (_LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry@12.c)
 *     _RtlpHpInitializePerfPolicies@0 @ 0x4B3584BA (_RtlpHpInitializePerfPolicies@0.c)
 *     _RtlpHpStackTraceHeapGetContext@12 @ 0x4B36E4D5 (_RtlpHpStackTraceHeapGetContext@12.c)
 *     _RtlpHpLfhContextInitialize@28 @ 0x4B3765A7 (_RtlpHpLfhContextInitialize@28.c)
 *     _RtlpHpMetadataHeapStart@12 @ 0x4B3794F4 (_RtlpHpMetadataHeapStart@12.c)
 *     _RtlpQueryDiskSpeedPolicy@4 @ 0x4B389DA1 (_RtlpQueryDiskSpeedPolicy@4.c)
 * Callees:
 *     _RtlRunOnceComplete@12 @ 0x4B2B1140 (_RtlRunOnceComplete@12.c)
 *     _RtlpTestHookInitialize@12 @ 0x4B2B1220 (_RtlpTestHookInitialize@12.c)
 *     _RtlRunOnceBeginInitialize@12 @ 0x4B2B2320 (_RtlRunOnceBeginInitialize@12.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _RtlReportCriticalFailure@12 @ 0x4B3669C7 (_RtlReportCriticalFailure@12.c)
 */

NTSTATUS __cdecl RtlRunOnceExecuteOnce(
        PRTL_RUN_ONCE RunOnce,
        PRTL_RUN_ONCE_INIT_FN InitFn,
        PVOID Parameter,
        PVOID *Context)
{
  NTSTATUS v4; // eax
  NTSTATUS v5; // esi
  int v7; // eax
  PVOID v8; // eax

  v4 = RtlRunOnceBeginInitialize(RunOnce, 0, Context);
  v5 = v4;
  if ( v4 < 0 )
    goto LABEL_15;
  if ( v4 != 259 )
    return v5;
  if ( InitFn == RtlpTestHookInitialize )
    v7 = RtlpTestHookInitialize(RunOnce, Parameter, Context);
  else
    v7 = ((int (__thiscall *)(PRTL_RUN_ONCE_INIT_FN, PRTL_RUN_ONCE, PVOID, PVOID *))InitFn)(
           InitFn,
           RunOnce,
           Parameter,
           Context);
  if ( !v7 )
  {
    v5 = -1073741823;
    if ( RtlRunOnceComplete(RunOnce, 4u, 0) >= 0 )
      return v5;
LABEL_15:
    RtlReportCriticalFailure(1);
  }
  if ( Context )
    v8 = *Context;
  else
    v8 = 0;
  if ( RtlRunOnceComplete(RunOnce, 0, v8) < 0 )
    goto LABEL_15;
  return 0;
}
