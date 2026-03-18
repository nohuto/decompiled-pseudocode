/*
 * XREFs of imp_VfWdfWorkItemFlush @ 0x1C00BFC50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfWorkItemFlush(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFWORKITEM__ *WorkItem)
{
  WdfVersion.Functions.pfnWdfWorkItemFlush(DriverGlobals, WorkItem);
}
