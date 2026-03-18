/*
 * XREFs of imp_VfWdfSpinLockRelease @ 0x1C00C40C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfSpinLockRelease(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFSPINLOCK__ *SpinLock)
{
  WdfVersion.Functions.pfnWdfSpinLockRelease(DriverGlobals, SpinLock);
}
