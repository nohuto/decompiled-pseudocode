/*
 * XREFs of imp_VfWdfDeviceRemoveDependentUsageDeviceObject @ 0x1C00C0020
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfDeviceRemoveDependentUsageDeviceObject(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _DEVICE_OBJECT *DependentDevice)
{
  WdfVersion.Functions.pfnWdfDeviceRemoveDependentUsageDeviceObject(DriverGlobals, Device, DependentDevice);
}
