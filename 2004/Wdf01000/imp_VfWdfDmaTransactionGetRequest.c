/*
 * XREFs of imp_VfWdfDmaTransactionGetRequest @ 0x1C00C0630
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 */

WDFREQUEST__ *__fastcall imp_VfWdfDmaTransactionGetRequest(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction)
{
  return WdfVersion.Functions.pfnWdfDmaTransactionGetRequest(DriverGlobals, DmaTransaction);
}
