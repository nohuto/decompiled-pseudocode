/*
 * XREFs of imp_VfWdfDeviceInitSetPowerNotPageable @ 0x1C00C0DD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfDeviceInitSetPowerNotPageable(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE_INIT *DeviceInit)
{
  WdfVersion.Functions.pfnWdfDeviceInitSetPowerNotPageable(DriverGlobals, DeviceInit);
}
