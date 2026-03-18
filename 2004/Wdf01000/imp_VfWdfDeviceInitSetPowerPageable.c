/*
 * XREFs of imp_VfWdfDeviceInitSetPowerPageable @ 0x1C00BFE20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfDeviceInitSetPowerPageable(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE_INIT *DeviceInit)
{
  WdfVersion.Functions.pfnWdfDeviceInitSetPowerPageable(DriverGlobals, DeviceInit);
}
