/*
 * XREFs of imp_VfWdfDpcGetParentObject @ 0x1C00C18A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

void *__fastcall imp_VfWdfDpcGetParentObject(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDPC__ *Dpc)
{
  return WdfVersion.Functions.pfnWdfDpcGetParentObject(DriverGlobals, Dpc);
}
