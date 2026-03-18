/*
 * XREFs of imp_VfWdfRequestReuse @ 0x1C00C3F80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfRequestReuse(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        _WDF_REQUEST_REUSE_PARAMS *ReuseParams)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFREQUEST__ *, _WDF_REQUEST_REUSE_PARAMS *))WdfVersion.Functions.pfnWdfRequestReuse)(
           DriverGlobals,
           Request,
           ReuseParams);
}
