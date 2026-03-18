/*
 * XREFs of imp_VfWdfDmaEnablerGetMaximumLength @ 0x1C00C1430
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall imp_VfWdfDmaEnablerGetMaximumLength(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMAENABLER__ *DmaEnabler)
{
  return WdfVersion.Functions.pfnWdfDmaEnablerGetMaximumLength(DriverGlobals, DmaEnabler);
}
