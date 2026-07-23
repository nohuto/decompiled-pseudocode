/*
 * XREFs of EtwRegister @ 0x140762E70
 * Callers:
 *     KiIntSteerConnect @ 0x140377774 (KiIntSteerConnect.c)
 *     BapdRegisterEtwProvider @ 0x14039B564 (BapdRegisterEtwProvider.c)
 *     McGenEventRegister_EtwRegister @ 0x1403B74D8 (McGenEventRegister_EtwRegister.c)
 *     IoInitializeLiveDump @ 0x1403CFBEC (IoInitializeLiveDump.c)
 *     HvlpEtwRegister @ 0x1404F99A0 (HvlpEtwRegister.c)
 *     PsDispatchIumService @ 0x140582F24 (PsDispatchIumService.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14078D254 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     PopDiagSleepStudyInitialize @ 0x140796D90 (PopDiagSleepStudyInitialize.c)
 *     SSHSupportEtwRegister @ 0x140796DE0 (SSHSupportEtwRegister.c)
 *     WdipSemEnableSemProvider @ 0x140799538 (WdipSemEnableSemProvider.c)
 *     HalpMiscInitializeTelemetry @ 0x1407C8F90 (HalpMiscInitializeTelemetry.c)
 *     DbgkpStartSystemErrorHandler @ 0x1408879B0 (DbgkpStartSystemErrorHandler.c)
 *     DbgkCaptureLiveDump @ 0x140887E7C (DbgkCaptureLiveDump.c)
 *     PfSnBeginBootPhase @ 0x14099C284 (PfSnBeginBootPhase.c)
 *     KseInitialize @ 0x140A3D89C (KseInitialize.c)
 *     IoInitSystemPreDrivers @ 0x140A3FB60 (IoInitSystemPreDrivers.c)
 *     PoInitSystem @ 0x140A40948 (PoInitSystem.c)
 *     PopDiagInitialize @ 0x140A41D18 (PopDiagInitialize.c)
 *     EtwpInitialize @ 0x140A43414 (EtwpInitialize.c)
 *     PerfDiagInitialize @ 0x140A43BBC (PerfDiagInitialize.c)
 *     SmInitSystem @ 0x140A4C43C (SmInitSystem.c)
 *     PnpDiagInitialize @ 0x140A54304 (PnpDiagInitialize.c)
 *     WheapInitializeEventing @ 0x140A63F24 (WheapInitializeEventing.c)
 *     PopBatteryInitPhaseTwo @ 0x140A70604 (PopBatteryInitPhaseTwo.c)
 *     KitInitialize @ 0x140A72764 (KitInitialize.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402F6FB0 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpRegisterProvider @ 0x140762EE0 (EtwpRegisterProvider.c)
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
