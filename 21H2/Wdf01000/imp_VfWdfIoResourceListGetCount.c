/*
 * XREFs of imp_VfWdfIoResourceListGetCount @ 0x1C00C26B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfIoResourceListGetCount(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFIORESLIST__ *ResourceList)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFIORESLIST__ *))WdfVersion.Functions.pfnWdfIoResourceListGetCount)(
           DriverGlobals,
           ResourceList);
}
