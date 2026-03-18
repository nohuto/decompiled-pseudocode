/*
 * XREFs of Controller_IsSecureDevice @ 0x1C0008D84
 * Callers:
 *     Endpoint_Create @ 0x1C006A2E0 (Endpoint_Create.c)
 *     TR_Create @ 0x1C006AA48 (TR_Create.c)
 *     Controller_ExecuteHSICDisconnectInU3Workaround @ 0x1C006AFA4 (Controller_ExecuteHSICDisconnectInU3Workaround.c)
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C006AFE0 (Controller_WdfEvtDevicePrepareHardware.c)
 *     Register_Create @ 0x1C006BF5C (Register_Create.c)
 *     CommonBuffer_Create @ 0x1C006C250 (CommonBuffer_Create.c)
 *     RootHub_PrepareHardware @ 0x1C006D2F0 (RootHub_PrepareHardware.c)
 *     Register_ParseCapabilityRegister @ 0x1C006E228 (Register_ParseCapabilityRegister.c)
 *     Controller_PopulateDeviceFlags @ 0x1C006E8E0 (Controller_PopulateDeviceFlags.c)
 *     Register_PrepareHardware @ 0x1C006EC08 (Register_PrepareHardware.c)
 *     Command_CreateCommandWatchdogTimer @ 0x1C006FFF4 (Command_CreateCommandWatchdogTimer.c)
 *     Interrupter_CreateInterrupter @ 0x1C0070144 (Interrupter_CreateInterrupter.c)
 *     Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd @ 0x1C0070BE0 (Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd.c)
 *     Bulk_GetConfiguration @ 0x1C00713A4 (Bulk_GetConfiguration.c)
 *     Controller_TelemetryAddControllerData @ 0x1C0074F94 (Controller_TelemetryAddControllerData.c)
 *     Controller_WdfEvtDeviceReleaseHardware @ 0x1C0075A40 (Controller_WdfEvtDeviceReleaseHardware.c)
 * Callees:
 *     <none>
 */

char __fastcall Controller_IsSecureDevice(__int64 a1)
{
  return *(_BYTE *)(a1 + 537);
}
