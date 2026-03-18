/*
 * XREFs of imp_VfWdfSpinLockAcquire @ 0x1C00C4080
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfSpinLockAcquire(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFSPINLOCK__ *SpinLock)
{
  WdfVersion.Functions.pfnWdfSpinLockAcquire(DriverGlobals, SpinLock);
}
