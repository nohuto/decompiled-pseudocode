/*
 * XREFs of TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14077ACB4
 * Callers:
 *     IopInitializeSystemVariableService @ 0x1403CB388 (IopInitializeSystemVariableService.c)
 *     TlgRegisterAggregateProviderEx @ 0x14078DF8C (TlgRegisterAggregateProviderEx.c)
 *     EtwpInitializeCoverage @ 0x14079A548 (EtwpInitializeCoverage.c)
 *     HalpMiscInitializeTelemetry @ 0x1407B5F54 (HalpMiscInitializeTelemetry.c)
 *     VRegSetup @ 0x1407B8340 (VRegSetup.c)
 *     TtmInit @ 0x1407BFD58 (TtmInit.c)
 *     RtlpCapChkTelemetryRunOnce @ 0x140918230 (RtlpCapChkTelemetryRunOnce.c)
 *     BapdRecordFirmwareBootStats @ 0x140997F00 (BapdRecordFirmwareBootStats.c)
 *     IoInitSystemPreDrivers @ 0x140A3AF4C (IoInitSystemPreDrivers.c)
 *     SshInitialize @ 0x140A3C77C (SshInitialize.c)
 *     PopDirectedDripsDiagInitialize @ 0x140A3CE5C (PopDirectedDripsDiagInitialize.c)
 *     PopDiagInitialize @ 0x140A42B6C (PopDiagInitialize.c)
 *     Phase1InitializationIoReady @ 0x140A447A8 (Phase1InitializationIoReady.c)
 *     KeInitSystem @ 0x140A4495C (KeInitSystem.c)
 *     PnpTraceInitialize @ 0x140A51640 (PnpTraceInitialize.c)
 *     VmInitSystem @ 0x140A5E40C (VmInitSystem.c)
 *     SeRmInitPhase1 @ 0x140A63E7C (SeRmInitPhase1.c)
 *     PspInitPhase2 @ 0x140A66B5C (PspInitPhase2.c)
 *     VslpIumInitializeTelemetry @ 0x140A6F8F0 (VslpIumInitializeTelemetry.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     EtwRegister @ 0x14074F8E0 (EtwRegister.c)
 *     EtwSetInformation @ 0x14076C8E0 (EtwSetInformation.c)
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
