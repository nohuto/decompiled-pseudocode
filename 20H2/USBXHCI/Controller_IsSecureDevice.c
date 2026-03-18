/*
 * XREFs of Controller_IsSecureDevice @ 0x1C0009764
 * Callers:
 *     Endpoint_Create @ 0x1C006B7E0 (Endpoint_Create.c)
 *     TR_Create @ 0x1C006BF6C (TR_Create.c)
 *     Controller_ExecuteHSICDisconnectInU3Workaround @ 0x1C006C4C8 (Controller_ExecuteHSICDisconnectInU3Workaround.c)
 *     Controller_PopulateDeviceFlags @ 0x1C006D074 (Controller_PopulateDeviceFlags.c)
 *     Register_PrepareHardware @ 0x1C006DF14 (Register_PrepareHardware.c)
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C006E290 (Controller_WdfEvtDevicePrepareHardware.c)
 *     Register_Create @ 0x1C006F270 (Register_Create.c)
 *     CommonBuffer_Create @ 0x1C006F564 (CommonBuffer_Create.c)
 *     RootHub_PrepareHardware @ 0x1C0070600 (RootHub_PrepareHardware.c)
 *     Register_ParseCapabilityRegister @ 0x1C0070C80 (Register_ParseCapabilityRegister.c)
 *     Command_CreateCommandWatchdogTimer @ 0x1C0071E54 (Command_CreateCommandWatchdogTimer.c)
 *     Interrupter_CreateInterrupter @ 0x1C0071FA4 (Interrupter_CreateInterrupter.c)
 *     Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd @ 0x1C0072A60 (Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd.c)
 *     Bulk_GetConfiguration @ 0x1C0072F14 (Bulk_GetConfiguration.c)
 *     Controller_TelemetryAddControllerData @ 0x1C0076464 (Controller_TelemetryAddControllerData.c)
 *     Controller_WdfEvtDeviceReleaseHardware @ 0x1C0076F10 (Controller_WdfEvtDeviceReleaseHardware.c)
 * Callees:
 *     <none>
 */

char __fastcall Controller_IsSecureDevice(__int64 a1)
{
  return *(_BYTE *)(a1 + 553);
}
