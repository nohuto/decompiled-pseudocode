/*
 * XREFs of imp_VfWdfDeviceInitSetPnpPowerEventCallbacks @ 0x1C00C0D90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfDeviceInitSetPnpPowerEventCallbacks(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_PNPPOWER_EVENT_CALLBACKS *PnpPowerEventCallbacks)
{
  WdfVersion.Functions.pfnWdfDeviceInitSetPnpPowerEventCallbacks(DriverGlobals, DeviceInit, PnpPowerEventCallbacks);
}
