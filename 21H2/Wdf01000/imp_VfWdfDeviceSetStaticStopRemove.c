/*
 * XREFs of imp_VfWdfDeviceSetStaticStopRemove @ 0x1C00C1250
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfDeviceSetStaticStopRemove(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        __int64 Stoppable)
{
  WdfVersion.Functions.pfnWdfDeviceSetStaticStopRemove(DriverGlobals, Device, Stoppable);
}
