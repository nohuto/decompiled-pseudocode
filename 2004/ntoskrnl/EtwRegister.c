/*
 * XREFs of EtwRegister @ 0x14074F8E0
 * Callers:
 *     KiIntSteerConnect @ 0x140375804 (KiIntSteerConnect.c)
 *     BapdRegisterEtwProvider @ 0x1403A53B8 (BapdRegisterEtwProvider.c)
 *     McGenEventRegister_EtwRegister @ 0x1403B4368 (McGenEventRegister_EtwRegister.c)
 *     HvlpEtwRegister @ 0x1404F4610 (HvlpEtwRegister.c)
 *     PsDispatchIumService @ 0x14057D8B4 (PsDispatchIumService.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14077ACB4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     PopDiagSleepStudyInitialize @ 0x14077F03C (PopDiagSleepStudyInitialize.c)
 *     SSHSupportEtwRegister @ 0x14077F08C (SSHSupportEtwRegister.c)
 *     WdipSemEnableSemProvider @ 0x14079A8B4 (WdipSemEnableSemProvider.c)
 *     HalpMiscInitializeTelemetry @ 0x1407B5F54 (HalpMiscInitializeTelemetry.c)
 *     DbgkpStartSystemErrorHandler @ 0x140884760 (DbgkpStartSystemErrorHandler.c)
 *     DbgkCaptureLiveDump @ 0x140884C2C (DbgkCaptureLiveDump.c)
 *     PfSnBeginBootPhase @ 0x140997CC4 (PfSnBeginBootPhase.c)
 *     KseInitialize @ 0x140A38D38 (KseInitialize.c)
 *     IoInitSystemPreDrivers @ 0x140A3AF4C (IoInitSystemPreDrivers.c)
 *     PopDiagInitialize @ 0x140A42B6C (PopDiagInitialize.c)
 *     PnpDiagInitialize @ 0x140A5167C (PnpDiagInitialize.c)
 *     WheapInitializeEventing @ 0x140A5A5A4 (WheapInitializeEventing.c)
 *     EtwpInitialize @ 0x140A61950 (EtwpInitialize.c)
 *     PerfDiagInitialize @ 0x140A620F8 (PerfDiagInitialize.c)
 *     SmInitSystem @ 0x140A67B2C (SmInitSystem.c)
 *     PopBatteryInitPhaseTwo @ 0x140A6BDA0 (PopBatteryInitPhaseTwo.c)
 *     PpmEventInitialize @ 0x140A70EBC (PpmEventInitialize.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14027B290 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpRegisterProvider @ 0x14074F950 (EtwpRegisterProvider.c)
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
