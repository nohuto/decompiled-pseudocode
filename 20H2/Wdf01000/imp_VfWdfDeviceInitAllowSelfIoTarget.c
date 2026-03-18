/*
 * XREFs of imp_VfWdfDeviceInitAllowSelfIoTarget @ 0x1C00BBB70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfDeviceInitAllowSelfIoTarget(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE_INIT *DeviceInit)
{
  WdfVersion.Functions.pfnWdfDeviceInitAllowSelfIoTarget(DriverGlobals, DeviceInit);
}
