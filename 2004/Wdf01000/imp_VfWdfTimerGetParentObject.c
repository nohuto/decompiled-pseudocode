/*
 * XREFs of imp_VfWdfTimerGetParentObject @ 0x1C00C3140
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 */

void *__fastcall imp_VfWdfTimerGetParentObject(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFTIMER__ *Timer)
{
  return WdfVersion.Functions.pfnWdfTimerGetParentObject(DriverGlobals, Timer);
}
