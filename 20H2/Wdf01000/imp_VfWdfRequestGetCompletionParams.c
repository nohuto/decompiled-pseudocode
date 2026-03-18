/*
 * XREFs of imp_VfWdfRequestGetCompletionParams @ 0x1C00BEC20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfRequestGetCompletionParams(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        _WDF_REQUEST_COMPLETION_PARAMS *Params)
{
  WdfVersion.Functions.pfnWdfRequestGetCompletionParams(DriverGlobals, Request, Params);
}
