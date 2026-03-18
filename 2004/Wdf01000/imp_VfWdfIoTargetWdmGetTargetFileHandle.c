/*
 * XREFs of imp_VfWdfIoTargetWdmGetTargetFileHandle @ 0x1C00C1DD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 */

void *__fastcall imp_VfWdfIoTargetWdmGetTargetFileHandle(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFIOTARGET__ *IoTarget)
{
  return WdfVersion.Functions.pfnWdfIoTargetWdmGetTargetFileHandle(DriverGlobals, IoTarget);
}
