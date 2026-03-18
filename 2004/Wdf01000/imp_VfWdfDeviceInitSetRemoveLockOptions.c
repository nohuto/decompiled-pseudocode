/*
 * XREFs of imp_VfWdfDeviceInitSetRemoveLockOptions @ 0x1C00BFEA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfDeviceInitSetRemoveLockOptions(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_REMOVE_LOCK_OPTIONS *Options)
{
  WdfVersion.Functions.pfnWdfDeviceInitSetRemoveLockOptions(DriverGlobals, DeviceInit, Options);
}
