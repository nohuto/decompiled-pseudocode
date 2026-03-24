/*
 * XREFs of imp_VfWdfMemoryCreateFromLookaside @ 0x1C00C1F30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfMemoryCreateFromLookaside(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFLOOKASIDE__ *Lookaside,
        WDFMEMORY__ **Memory)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFLOOKASIDE__ *, WDFMEMORY__ **))WdfVersion.Functions.pfnWdfMemoryCreateFromLookaside)(
           DriverGlobals,
           Lookaside,
           Memory);
}
