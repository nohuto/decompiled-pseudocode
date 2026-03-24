/*
 * XREFs of EtwRegister @ 0x140762CB0
 * Callers:
 *     KiIntSteerConnect @ 0x140377C24 (KiIntSteerConnect.c)
 *     BapdRegisterEtwProvider @ 0x14039B414 (BapdRegisterEtwProvider.c)
 *     McGenEventRegister_EtwRegister @ 0x1403B7368 (McGenEventRegister_EtwRegister.c)
 *     IoInitializeLiveDump @ 0x1403CFA7C (IoInitializeLiveDump.c)
 *     HvlpEtwRegister @ 0x1404F9A20 (HvlpEtwRegister.c)
 *     PsDispatchIumService @ 0x140582CF4 (PsDispatchIumService.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14078D094 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     PopDiagSleepStudyInitialize @ 0x140796B90 (PopDiagSleepStudyInitialize.c)
 *     SSHSupportEtwRegister @ 0x140796BE0 (SSHSupportEtwRegister.c)
 *     WdipSemEnableSemProvider @ 0x140799338 (WdipSemEnableSemProvider.c)
 *     HalpMiscInitializeTelemetry @ 0x1407C8C70 (HalpMiscInitializeTelemetry.c)
 *     DbgkpStartSystemErrorHandler @ 0x140887850 (DbgkpStartSystemErrorHandler.c)
 *     DbgkCaptureLiveDump @ 0x140887D1C (DbgkCaptureLiveDump.c)
 *     PfSnBeginBootPhase @ 0x14099B284 (PfSnBeginBootPhase.c)
 *     KseInitialize @ 0x140A3C89C (KseInitialize.c)
 *     IoInitSystemPreDrivers @ 0x140A3EB60 (IoInitSystemPreDrivers.c)
 *     PoInitSystem @ 0x140A3F948 (PoInitSystem.c)
 *     PopDiagInitialize @ 0x140A40D18 (PopDiagInitialize.c)
 *     EtwpInitialize @ 0x140A42414 (EtwpInitialize.c)
 *     PerfDiagInitialize @ 0x140A42BBC (PerfDiagInitialize.c)
 *     SmInitSystem @ 0x140A4B43C (SmInitSystem.c)
 *     PnpDiagInitialize @ 0x140A53304 (PnpDiagInitialize.c)
 *     WheapInitializeEventing @ 0x140A62F24 (WheapInitializeEventing.c)
 *     PopBatteryInitPhaseTwo @ 0x140A6F604 (PopBatteryInitPhaseTwo.c)
 *     KitInitialize @ 0x140A71764 (KitInitialize.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140362150 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpRegisterProvider @ 0x140762D20 (EtwpRegisterProvider.c)
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
  v8 = *((_QWORD *)PsGetCurrentServerSiloGlobals((__int64)ProviderId, (__int64)EnableCallback) + 108);
  return EtwpRegisterProvider(v8, v7, 3, v6, (__int64)CallbackContext, retaddr, (__int64)RegHandle);
}
