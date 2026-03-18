/*
 * XREFs of imp_VfWdfDpcEnqueue @ 0x1C00C1880
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfDpcEnqueue(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDPC__ *Dpc)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDPC__ *))WdfVersion.Functions.pfnWdfDpcEnqueue)(
           DriverGlobals,
           Dpc);
}
