/*
 * XREFs of imp_VfWdfWmiProviderIsEnabled @ 0x1C00C3BF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfWmiProviderIsEnabled(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFWMIPROVIDER__ *WmiProvider,
        __int64 ProviderControl)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFWMIPROVIDER__ *, __int64))WdfVersion.Functions.pfnWdfWmiProviderIsEnabled)(
           DriverGlobals,
           WmiProvider,
           ProviderControl);
}
