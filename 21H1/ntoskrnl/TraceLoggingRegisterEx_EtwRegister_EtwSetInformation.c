/*
 * XREFs of TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1407788A4
 * Callers:
 *     IopInitializeSystemVariableService @ 0x1403CA5A8 (IopInitializeSystemVariableService.c)
 *     EtwpInitializeCoverage @ 0x14078679C (EtwpInitializeCoverage.c)
 *     TlgRegisterAggregateProviderEx @ 0x14078C0BC (TlgRegisterAggregateProviderEx.c)
 *     HalpMiscInitializeTelemetry @ 0x1407B2DE4 (HalpMiscInitializeTelemetry.c)
 *     VRegSetup @ 0x1407B51D0 (VRegSetup.c)
 *     TtmInit @ 0x1407BCBE8 (TtmInit.c)
 *     RtlpCapChkTelemetryRunOnce @ 0x140916FC0 (RtlpCapChkTelemetryRunOnce.c)
 *     BapdRecordFirmwareBootStats @ 0x1409948D0 (BapdRecordFirmwareBootStats.c)
 *     IoInitSystemPreDrivers @ 0x140A3B0DC (IoInitSystemPreDrivers.c)
 *     SshInitialize @ 0x140A3CB24 (SshInitialize.c)
 *     PopDirectedDripsDiagInitialize @ 0x140A3D204 (PopDirectedDripsDiagInitialize.c)
 *     PopDiagInitialize @ 0x140A3D2B8 (PopDiagInitialize.c)
 *     Phase1InitializationIoReady @ 0x140A3EF44 (Phase1InitializationIoReady.c)
 *     KeInitSystem @ 0x140A3F138 (KeInitSystem.c)
 *     IopInitializePlugPlayServices @ 0x140A4AB7C (IopInitializePlugPlayServices.c)
 *     VmInitSystem @ 0x140A60F58 (VmInitSystem.c)
 *     SeRmInitPhase1 @ 0x140A6449C (SeRmInitPhase1.c)
 *     PspInitPhase2 @ 0x140A6717C (PspInitPhase2.c)
 *     VslpIumInitializeTelemetry @ 0x140A6EECC (VslpIumInitializeTelemetry.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     EtwRegister @ 0x14074B4C0 (EtwRegister.c)
 *     EtwSetInformation @ 0x14076A1A0 (EtwSetInformation.c)
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
