/*
 * XREFs of TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1407892B4
 * Callers:
 *     IopInitializeSystemVariableService @ 0x1403CDFA8 (IopInitializeSystemVariableService.c)
 *     IoInitializeLiveDump @ 0x1403CF10C (IoInitializeLiveDump.c)
 *     TlgRegisterAggregateProviderEx @ 0x14079A6CC (TlgRegisterAggregateProviderEx.c)
 *     EtwpInitializeCoverage @ 0x1407A9878 (EtwpInitializeCoverage.c)
 *     HalpMiscInitializeTelemetry @ 0x1407C49B0 (HalpMiscInitializeTelemetry.c)
 *     VRegSetup @ 0x1407C6BD0 (VRegSetup.c)
 *     TtmInit @ 0x1407CE5E8 (TtmInit.c)
 *     RtlpCapChkTelemetryRunOnce @ 0x14091DE60 (RtlpCapChkTelemetryRunOnce.c)
 *     BapdRecordFirmwareBootStats @ 0x14099DF40 (BapdRecordFirmwareBootStats.c)
 *     SshInitialize @ 0x140A42A1C (SshInitialize.c)
 *     PopDirectedDripsDiagInitialize @ 0x140A430FC (PopDirectedDripsDiagInitialize.c)
 *     PopDiagInitialize @ 0x140A48E0C (PopDiagInitialize.c)
 *     Phase1InitializationIoReady @ 0x140A4AA48 (Phase1InitializationIoReady.c)
 *     KeInitSystem @ 0x140A4ABFC (KeInitSystem.c)
 *     PnpTraceInitialize @ 0x140A51CC0 (PnpTraceInitialize.c)
 *     VmInitSystem @ 0x140A6576C (VmInitSystem.c)
 *     SeRmInitPhase1 @ 0x140A6B14C (SeRmInitPhase1.c)
 *     PspInitPhase2 @ 0x140A6DE2C (PspInitPhase2.c)
 *     VslpIumInitializeTelemetry @ 0x140A75E10 (VslpIumInitializeTelemetry.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     EtwRegister @ 0x14075E4C0 (EtwRegister.c)
 *     EtwSetInformation @ 0x14077B310 (EtwSetInformation.c)
 */

__int64 __fastcall TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
        ULONGLONG *CallbackContext,
        unsigned __int16 *a2,
        unsigned __int16 *a3)
{
  GUID v4; // xmm0
  unsigned int v5; // edi
  GUID ProviderId; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(GUID *)(CallbackContext[1] - 16);
  CallbackContext[6] = (ULONGLONG)a3;
  CallbackContext[5] = (ULONGLONG)a2;
  ProviderId = v4;
  v5 = EtwRegister(&ProviderId, tlgEnableCallback, CallbackContext, CallbackContext + 4);
  if ( !v5 )
    EtwSetInformation(
      CallbackContext[4],
      EventProviderSetTraits,
      (PVOID)CallbackContext[1],
      *(unsigned __int16 *)CallbackContext[1]);
  return v5;
}
