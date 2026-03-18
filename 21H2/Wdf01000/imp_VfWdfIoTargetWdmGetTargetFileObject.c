/*
 * XREFs of imp_VfWdfIoTargetWdmGetTargetFileObject @ 0x1C00C2DF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

_FILE_OBJECT *__fastcall imp_VfWdfIoTargetWdmGetTargetFileObject(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIOTARGET__ *IoTarget)
{
  return WdfVersion.Functions.pfnWdfIoTargetWdmGetTargetFileObject(DriverGlobals, IoTarget);
}
