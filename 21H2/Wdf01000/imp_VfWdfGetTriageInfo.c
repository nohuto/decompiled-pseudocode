/*
 * XREFs of imp_VfWdfGetTriageInfo @ 0x1C00C1DC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

void *__fastcall imp_VfWdfGetTriageInfo(_WDF_DRIVER_GLOBALS *DriverGlobals)
{
  return WdfVersion.Functions.pfnWdfGetTriageInfo(DriverGlobals);
}
