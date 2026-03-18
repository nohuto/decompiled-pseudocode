/*
 * XREFs of imp_VfWdfDeviceInitSetDeviceClass @ 0x1C00C0CB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfDeviceInitSetDeviceClass(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        const _GUID *DeviceClassGuid)
{
  WdfVersion.Functions.pfnWdfDeviceInitSetDeviceClass(DriverGlobals, DeviceInit, DeviceClassGuid);
}
