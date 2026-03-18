/*
 * XREFs of imp_VfWdfInterruptAcquireLock @ 0x1C00BCDE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfInterruptAcquireLock(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFINTERRUPT__ *Interrupt)
{
  WdfVersion.Functions.pfnWdfInterruptAcquireLock(DriverGlobals, Interrupt);
}
