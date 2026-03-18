/*
 * XREFs of EtwRegister @ 0x14075E4C0
 * Callers:
 *     KiIntSteerConnect @ 0x140377794 (KiIntSteerConnect.c)
 *     BapdRegisterEtwProvider @ 0x1403A77B8 (BapdRegisterEtwProvider.c)
 *     McGenEventRegister_EtwRegister @ 0x1403B5D28 (McGenEventRegister_EtwRegister.c)
 *     IoInitializeLiveDump @ 0x1403CF10C (IoInitializeLiveDump.c)
 *     HvlpEtwRegister @ 0x1404F7E80 (HvlpEtwRegister.c)
 *     PsDispatchIumService @ 0x1405812E4 (PsDispatchIumService.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1407892B4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     PopDiagSleepStudyInitialize @ 0x14078C580 (PopDiagSleepStudyInitialize.c)
 *     SSHSupportEtwRegister @ 0x14078C5D0 (SSHSupportEtwRegister.c)
 *     WdipSemEnableSemProvider @ 0x1407A9BE4 (WdipSemEnableSemProvider.c)
 *     HalpMiscInitializeTelemetry @ 0x1407C49B0 (HalpMiscInitializeTelemetry.c)
 *     DbgkpStartSystemErrorHandler @ 0x14088A2B0 (DbgkpStartSystemErrorHandler.c)
 *     DbgkCaptureLiveDump @ 0x14088A77C (DbgkCaptureLiveDump.c)
 *     PfSnBeginBootPhase @ 0x14099DD04 (PfSnBeginBootPhase.c)
 *     KseInitialize @ 0x140A3ED1C (KseInitialize.c)
 *     IoInitSystemPreDrivers @ 0x140A40FE0 (IoInitSystemPreDrivers.c)
 *     PoInitSystem @ 0x140A41DE0 (PoInitSystem.c)
 *     PopDiagInitialize @ 0x140A48E0C (PopDiagInitialize.c)
 *     PnpDiagInitialize @ 0x140A51CFC (PnpDiagInitialize.c)
 *     WheapInitializeEventing @ 0x140A61904 (WheapInitializeEventing.c)
 *     EtwpInitialize @ 0x140A68D10 (EtwpInitialize.c)
 *     PerfDiagInitialize @ 0x140A694B8 (PerfDiagInitialize.c)
 *     SmInitSystem @ 0x140A6E354 (SmInitSystem.c)
 *     PopBatteryInitPhaseTwo @ 0x140A72684 (PopBatteryInitPhaseTwo.c)
 *     KitInitialize @ 0x140A747E4 (KitInitialize.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14023CD40 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpRegisterProvider @ 0x14075E530 (EtwpRegisterProvider.c)
 */

NTSTATUS __stdcall EtwRegister(
        LPCGUID ProviderId,
        PETWENABLECALLBACK EnableCallback,
        PVOID CallbackContext,
        PREGHANDLE RegHandle)
{
  int v6; // esi
  int v7; // ebp
  __int64 v8; // rcx
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v6 = (int)EnableCallback;
  v7 = (int)ProviderId;
  v8 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
  return EtwpRegisterProvider(v8, v7, 3, v6, (__int64)CallbackContext, retaddr, (__int64)RegHandle);
}
