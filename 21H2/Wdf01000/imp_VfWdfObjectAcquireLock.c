/*
 * XREFs of imp_VfWdfObjectAcquireLock @ 0x1C00C2FA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfObjectAcquireLock(_WDF_DRIVER_GLOBALS *DriverGlobals, void *Object)
{
  WdfVersion.Functions.pfnWdfObjectAcquireLock(DriverGlobals, Object);
}
