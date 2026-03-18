/*
 * XREFs of imp_VfWdfRequestGetParameters @ 0x1C00C3CA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfRequestGetParameters(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        _WDF_REQUEST_PARAMETERS *Parameters)
{
  WdfVersion.Functions.pfnWdfRequestGetParameters(DriverGlobals, Request, Parameters);
}
