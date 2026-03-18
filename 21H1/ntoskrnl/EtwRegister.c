/*
 * XREFs of EtwRegister @ 0x14074B4C0
 * Callers:
 *     KiIntSteerConnect @ 0x1403749F4 (KiIntSteerConnect.c)
 *     BapdRegisterEtwProvider @ 0x140397EF4 (BapdRegisterEtwProvider.c)
 *     McGenEventRegister_EtwRegister @ 0x1403B2570 (McGenEventRegister_EtwRegister.c)
 *     HvlpEtwRegister @ 0x1404F3FC0 (HvlpEtwRegister.c)
 *     PsDispatchIumService @ 0x14057D274 (PsDispatchIumService.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1407788A4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     PopDiagSleepStudyInitialize @ 0x14077F84C (PopDiagSleepStudyInitialize.c)
 *     SSHSupportEtwRegister @ 0x14077F89C (SSHSupportEtwRegister.c)
 *     WdipSemEnableSemProvider @ 0x140784EDC (WdipSemEnableSemProvider.c)
 *     HalpMiscInitializeTelemetry @ 0x1407B2DE4 (HalpMiscInitializeTelemetry.c)
 *     DbgkpStartSystemErrorHandler @ 0x140883440 (DbgkpStartSystemErrorHandler.c)
 *     DbgkCaptureLiveDump @ 0x14088390C (DbgkCaptureLiveDump.c)
 *     PfSnBeginBootPhase @ 0x1409968F4 (PfSnBeginBootPhase.c)
 *     KseInitialize @ 0x140A38EBC (KseInitialize.c)
 *     IoInitSystemPreDrivers @ 0x140A3B0DC (IoInitSystemPreDrivers.c)
 *     PoInitSystem @ 0x140A3BEEC (PoInitSystem.c)
 *     PopDiagInitialize @ 0x140A3D2B8 (PopDiagInitialize.c)
 *     PerfDiagInitialize @ 0x140A46790 (PerfDiagInitialize.c)
 *     EtwpInitialize @ 0x140A46B98 (EtwpInitialize.c)
 *     PnpDiagInitialize @ 0x140A4BA6C (PnpDiagInitialize.c)
 *     WheapInitializeEventing @ 0x140A5B504 (WheapInitializeEventing.c)
 *     SmInitSystem @ 0x140A676A4 (SmInitSystem.c)
 *     PopBatteryInitPhaseTwo @ 0x140A6BB18 (PopBatteryInitPhaseTwo.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402D9560 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpRegisterProvider @ 0x14074B530 (EtwpRegisterProvider.c)
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
