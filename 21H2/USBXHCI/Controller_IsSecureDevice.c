/*
 * XREFs of Controller_IsSecureDevice @ 0x1C0005AD0
 * Callers:
 *     Endpoint_Create @ 0x1C006B6C8 (Endpoint_Create.c)
 *     TR_Create @ 0x1C006BCD8 (TR_Create.c)
 *     Controller_ExecuteHSICDisconnectInU3Workaround @ 0x1C006C0FC (Controller_ExecuteHSICDisconnectInU3Workaround.c)
 *     Interrupter_CreateInterrupter @ 0x1C006CEC0 (Interrupter_CreateInterrupter.c)
 *     Command_CreateCommandWatchdogTimer @ 0x1C006D524 (Command_CreateCommandWatchdogTimer.c)
 *     Controller_PopulateDeviceFlags @ 0x1C006DA94 (Controller_PopulateDeviceFlags.c)
 *     CommonBuffer_Create @ 0x1C006E6D0 (CommonBuffer_Create.c)
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C006E9D0 (Controller_WdfEvtDevicePrepareHardware.c)
 *     RootHub_PrepareHardware @ 0x1C006F968 (RootHub_PrepareHardware.c)
 *     Register_ParseCapabilityRegister @ 0x1C0070B8C (Register_ParseCapabilityRegister.c)
 *     Register_PrepareHardware @ 0x1C0071244 (Register_PrepareHardware.c)
 *     Register_Create @ 0x1C0071450 (Register_Create.c)
 *     Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd @ 0x1C0071FA0 (Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd.c)
 *     Bulk_GetConfiguration @ 0x1C007285C (Bulk_GetConfiguration.c)
 *     Controller_TelemetryAddControllerData @ 0x1C00767AC (Controller_TelemetryAddControllerData.c)
 *     Controller_WdfEvtDeviceReleaseHardware @ 0x1C0077140 (Controller_WdfEvtDeviceReleaseHardware.c)
 * Callees:
 *     <none>
 */

char __fastcall Controller_IsSecureDevice(__int64 a1)
{
  return *(_BYTE *)(a1 + 553);
}
