/*
 * XREFs of imp_VfWdfPdoInitAllocate @ 0x1C00C21E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 */

WDFDEVICE_INIT *__fastcall imp_VfWdfPdoInitAllocate(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *ParentDevice)
{
  return WdfVersion.Functions.pfnWdfPdoInitAllocate(DriverGlobals, ParentDevice);
}
