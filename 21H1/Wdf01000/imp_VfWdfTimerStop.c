/*
 * XREFs of imp_VfWdfTimerStop @ 0x1C00C3180
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfTimerStop(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFTIMER__ *Timer, __int64 Wait)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFTIMER__ *, __int64))WdfVersion.Functions.pfnWdfTimerStop)(
           DriverGlobals,
           Timer,
           Wait);
}
