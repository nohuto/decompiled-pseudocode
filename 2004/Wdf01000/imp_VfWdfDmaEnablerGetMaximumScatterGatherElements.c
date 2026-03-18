/*
 * XREFs of imp_VfWdfDmaEnablerGetMaximumScatterGatherElements @ 0x1C00C0450
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall imp_VfWdfDmaEnablerGetMaximumScatterGatherElements(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMAENABLER__ *DmaEnabler)
{
  return WdfVersion.Functions.pfnWdfDmaEnablerGetMaximumScatterGatherElements(DriverGlobals, DmaEnabler);
}
