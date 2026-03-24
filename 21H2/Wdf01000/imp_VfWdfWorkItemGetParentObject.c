/*
 * XREFs of imp_VfWdfWorkItemGetParentObject @ 0x1C00C3C70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 */

void *__fastcall imp_VfWdfWorkItemGetParentObject(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFWORKITEM__ *WorkItem)
{
  return WdfVersion.Functions.pfnWdfWorkItemGetParentObject(DriverGlobals, WorkItem);
}
