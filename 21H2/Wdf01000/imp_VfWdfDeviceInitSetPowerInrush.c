/*
 * XREFs of imp_VfWdfDeviceInitSetPowerInrush @ 0x1C00C0DB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfDeviceInitSetPowerInrush(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE_INIT *DeviceInit)
{
  WdfVersion.Functions.pfnWdfDeviceInitSetPowerInrush(DriverGlobals, DeviceInit);
}
