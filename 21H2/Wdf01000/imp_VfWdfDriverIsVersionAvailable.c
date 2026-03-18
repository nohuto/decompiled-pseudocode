/*
 * XREFs of imp_VfWdfDriverIsVersionAvailable @ 0x1C00C1970
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfDriverIsVersionAvailable(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDRIVER__ *Driver,
        _WDF_DRIVER_VERSION_AVAILABLE_PARAMS *VersionAvailableParams)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDRIVER__ *, _WDF_DRIVER_VERSION_AVAILABLE_PARAMS *))WdfVersion.Functions.pfnWdfDriverIsVersionAvailable)(
           DriverGlobals,
           Driver,
           VersionAvailableParams);
}
