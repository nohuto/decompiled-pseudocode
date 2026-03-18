/*
 * XREFs of imp_VfWdfRequestSetInformation @ 0x1C00C3FE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfRequestSetInformation(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        unsigned __int64 Information)
{
  WdfVersion.Functions.pfnWdfRequestSetInformation(DriverGlobals, Request, Information);
}
