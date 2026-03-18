/*
 * XREFs of imp_VfWdfWmiProviderGetDevice @ 0x1C00C4BB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

WDFDEVICE__ *__fastcall imp_VfWdfWmiProviderGetDevice(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFWMIPROVIDER__ *WmiProvider)
{
  return WdfVersion.Functions.pfnWdfWmiProviderGetDevice(DriverGlobals, WmiProvider);
}
