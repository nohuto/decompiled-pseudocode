/*
 * XREFs of imp_VfWdfDeviceInitSetPowerPolicyOwnership @ 0x1C00C0E30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfDeviceInitSetPowerPolicyOwnership(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        __int64 IsPowerPolicyOwner)
{
  WdfVersion.Functions.pfnWdfDeviceInitSetPowerPolicyOwnership(DriverGlobals, DeviceInit, IsPowerPolicyOwner);
}
