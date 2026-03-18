/*
 * XREFs of imp_VfWdfDeviceGetDeviceState @ 0x1C00BBA90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfDeviceGetDeviceState(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_DEVICE_STATE *DeviceState)
{
  WdfVersion.Functions.pfnWdfDeviceGetDeviceState(DriverGlobals, Device, DeviceState);
}
