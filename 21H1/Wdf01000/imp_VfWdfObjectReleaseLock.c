/*
 * XREFs of imp_VfWdfObjectReleaseLock @ 0x1C00C20F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfObjectReleaseLock(_WDF_DRIVER_GLOBALS *DriverGlobals, void *Object)
{
  WdfVersion.Functions.pfnWdfObjectReleaseLock(DriverGlobals, Object);
}
