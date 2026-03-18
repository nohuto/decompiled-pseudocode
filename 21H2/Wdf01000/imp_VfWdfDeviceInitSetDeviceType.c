/*
 * XREFs of imp_VfWdfDeviceInitSetDeviceType @ 0x1C00C0CD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfDeviceInitSetDeviceType(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        __int64 DeviceType)
{
  WdfVersion.Functions.pfnWdfDeviceInitSetDeviceType(DriverGlobals, DeviceInit, DeviceType);
}
