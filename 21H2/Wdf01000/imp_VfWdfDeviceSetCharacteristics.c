/*
 * XREFs of imp_VfWdfDeviceSetCharacteristics @ 0x1C00C1130
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfDeviceSetCharacteristics(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        __int64 DeviceCharacteristics)
{
  WdfVersion.Functions.pfnWdfDeviceSetCharacteristics(DriverGlobals, Device, DeviceCharacteristics);
}
