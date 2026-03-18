/*
 * XREFs of imp_VfWdfIoTargetCloseForQueryRemove @ 0x1C00C28D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfIoTargetCloseForQueryRemove(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFIOTARGET__ *IoTarget)
{
  WdfVersion.Functions.pfnWdfIoTargetCloseForQueryRemove(DriverGlobals, IoTarget);
}
