/*
 * XREFs of imp_VfWdfDmaTransactionGetCurrentDmaTransferLength @ 0x1C00C15F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall imp_VfWdfDmaTransactionGetCurrentDmaTransferLength(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction)
{
  return WdfVersion.Functions.pfnWdfDmaTransactionGetCurrentDmaTransferLength(DriverGlobals, DmaTransaction);
}
