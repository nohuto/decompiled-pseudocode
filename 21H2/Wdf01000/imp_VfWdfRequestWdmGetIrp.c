/*
 * XREFs of imp_VfWdfRequestWdmGetIrp @ 0x1C00C4060
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

_IRP *__fastcall imp_VfWdfRequestWdmGetIrp(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFREQUEST__ *Request)
{
  return WdfVersion.Functions.pfnWdfRequestWdmGetIrp(DriverGlobals, Request);
}
