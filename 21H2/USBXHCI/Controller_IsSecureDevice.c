/*
 * XREFs of Controller_IsSecureDevice @ 0x1C0009764
 * Callers:
 *     Endpoint_Create @ 0x1C006A5F0 (Endpoint_Create.c)
 *     TR_Create @ 0x1C006AD7C (TR_Create.c)
 *     Controller_ExecuteHSICDisconnectInU3Workaround @ 0x1C006B2D8 (Controller_ExecuteHSICDisconnectInU3Workaround.c)
 *     Controller_PopulateDeviceFlags @ 0x1C006BE84 (Controller_PopulateDeviceFlags.c)
 *     Register_PrepareHardware @ 0x1C006CD24 (Register_PrepareHardware.c)
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C006D0A0 (Controller_WdfEvtDevicePrepareHardware.c)
 *     Register_Create @ 0x1C006E074 (Register_Create.c)
 *     CommonBuffer_Create @ 0x1C006E368 (CommonBuffer_Create.c)
 *     RootHub_PrepareHardware @ 0x1C006F400 (RootHub_PrepareHardware.c)
 *     Register_ParseCapabilityRegister @ 0x1C006FA80 (Register_ParseCapabilityRegister.c)
 *     Command_CreateCommandWatchdogTimer @ 0x1C0070C54 (Command_CreateCommandWatchdogTimer.c)
 *     Interrupter_CreateInterrupter @ 0x1C0070DA4 (Interrupter_CreateInterrupter.c)
 *     Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd @ 0x1C0071860 (Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd.c)
 *     Bulk_GetConfiguration @ 0x1C0071D14 (Bulk_GetConfiguration.c)
 *     Controller_TelemetryAddControllerData @ 0x1C0075284 (Controller_TelemetryAddControllerData.c)
 *     Controller_WdfEvtDeviceReleaseHardware @ 0x1C0075D30 (Controller_WdfEvtDeviceReleaseHardware.c)
 * Callees:
 *     <none>
 */

char __fastcall Controller_IsSecureDevice(__int64 a1)
{
  return *(_BYTE *)(a1 + 553);
}
