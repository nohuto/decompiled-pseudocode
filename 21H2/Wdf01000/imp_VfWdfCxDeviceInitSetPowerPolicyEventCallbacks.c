/*
 * XREFs of imp_VfWdfCxDeviceInitSetPowerPolicyEventCallbacks @ 0x1C00C0640
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfCxDeviceInitSetPowerPolicyEventCallbacks(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCXDEVICE_INIT *CxDeviceInit,
        _WDFCX_POWER_POLICY_EVENT_CALLBACKS *CxPowerPolicyCallbacks)
{
  WdfVersion.Functions.pfnWdfCxDeviceInitSetPowerPolicyEventCallbacks(
    DriverGlobals,
    CxDeviceInit,
    CxPowerPolicyCallbacks);
}
