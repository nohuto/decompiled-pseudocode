/*
 * XREFs of imp_VfWdfInterruptGetDevice @ 0x1C00C0E70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 */

WDFDEVICE__ *__fastcall imp_VfWdfInterruptGetDevice(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFINTERRUPT__ *Interrupt)
{
  return WdfVersion.Functions.pfnWdfInterruptGetDevice(DriverGlobals, Interrupt);
}
