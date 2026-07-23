/*
 * XREFs of RtlRunOnceExecuteOnce @ 0x180043830
 * Callers:
 *     RtlpHpMetadataHeapStart @ 0x180007A8C (RtlpHpMetadataHeapStart.c)
 *     RtlpLogCapabilityCheckLatency @ 0x180042364 (RtlpLogCapabilityCheckLatency.c)
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x1800424AC (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 *     LdrpResReportResourceAccessInternal @ 0x180042CA4 (LdrpResReportResourceAccessInternal.c)
 *     EtwpRegisterProvider @ 0x180042ECC (EtwpRegisterProvider.c)
 *     RtlRandomEx @ 0x180043CA0 (RtlRandomEx.c)
 *     RtlQueryResourcePolicy @ 0x180044700 (RtlQueryResourcePolicy.c)
 *     RtlSetHeapInformation @ 0x180074DE0 (RtlSetHeapInformation.c)
 *     LdrpLogCFGModuleInfoTelemetry @ 0x1800853A8 (LdrpLogCFGModuleInfoTelemetry.c)
 *     RtlpQueryDiskSpeedPolicy @ 0x180088BB4 (RtlpQueryDiskSpeedPolicy.c)
 *     LdrpLogImportRedirectionTelemetry @ 0x1800CF684 (LdrpLogImportRedirectionTelemetry.c)
 *     LdrpLogIntegrityContinuityTelemetry @ 0x1800CF790 (LdrpLogIntegrityContinuityTelemetry.c)
 *     LdrpLogMapAndVerifyResourceFileFailure @ 0x1800CFA94 (LdrpLogMapAndVerifyResourceFileFailure.c)
 *     LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure @ 0x1800CFD24 (LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure.c)
 *     LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry @ 0x1800CFE70 (LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry.c)
 *     LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry @ 0x1800CFF74 (LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry.c)
 *     LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry @ 0x1800D0054 (LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry.c)
 *     LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry @ 0x1800D0134 (LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry.c)
 *     RtlpHpStackTraceHeapGetContext @ 0x18010934C (RtlpHpStackTraceHeapGetContext.c)
 * Callees:
 *     RtlRunOnceComplete @ 0x180043AB0 (RtlRunOnceComplete.c)
 *     RtlpRunOnceWaitForInit @ 0x180084440 (RtlpRunOnceWaitForInit.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1120 (_guard_dispatch_icall_nop.c)
 *     RtlReportCriticalFailure @ 0x1800FF43C (RtlReportCriticalFailure.c)
 */

NTSTATUS __cdecl RtlRunOnceExecuteOnce(
        PRTL_RUN_ONCE RunOnce,
        PRTL_RUN_ONCE_INIT_FN InitFn,
        PVOID Parameter,
        PVOID *Context)
{
  unsigned __int64 Value; // rax
  NTSTATUS v9; // edi
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  PVOID v13; // r8
  int v14; // ebx
  char v15[24]; // [rsp+20h] [rbp-18h] BYREF

  Value = RunOnce->Value;
  if ( (RunOnce->Value & 3) == 2 )
  {
LABEL_2:
    if ( Context )
      *Context = (PVOID)(Value & 0xFFFFFFFFFFFFFFFCuLL);
    return 0;
  }
  do
  {
    while ( 1 )
    {
      v11 = Value & 3;
      if ( (Value & 3) == 0 )
        break;
      if ( v11 != 1 )
      {
        if ( v11 != 3 )
          goto LABEL_2;
        v14 = -1073741584;
        v15[0] = 0;
        goto LABEL_20;
      }
      Value = RtlpRunOnceWaitForInit(Value, RunOnce);
    }
    v12 = Value;
    Value = _InterlockedCompareExchange64((volatile signed __int64 *)RunOnce, 1LL, Value);
  }
  while ( Value != v12 );
  if ( !((unsigned int (__fastcall *)(PRTL_RUN_ONCE, PVOID, PVOID *))InitFn)(RunOnce, Parameter, Context) )
  {
    v9 = -1073741823;
    v14 = RtlRunOnceComplete(RunOnce, 4u, 0LL);
    if ( v14 >= 0 )
      return v9;
    v15[0] = 2;
    goto LABEL_20;
  }
  if ( Context )
    v13 = *Context;
  else
    v13 = 0LL;
  v14 = RtlRunOnceComplete(RunOnce, 0, v13);
  if ( v14 < 0 )
  {
    v15[0] = 1;
LABEL_20:
    RtlReportCriticalFailure((unsigned int)v14, v15, 1LL);
    return v14;
  }
  return 0;
}
