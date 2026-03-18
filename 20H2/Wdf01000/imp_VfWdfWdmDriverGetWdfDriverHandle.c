/*
 * XREFs of imp_VfWdfWdmDriverGetWdfDriverHandle @ 0x1C00BFA90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 */

WDFDRIVER__ *__fastcall imp_VfWdfWdmDriverGetWdfDriverHandle(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _DRIVER_OBJECT *DriverObject)
{
  return WdfVersion.Functions.pfnWdfWdmDriverGetWdfDriverHandle(DriverGlobals, DriverObject);
}
