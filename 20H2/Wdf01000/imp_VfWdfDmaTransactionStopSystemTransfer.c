/*
 * XREFs of imp_VfWdfDmaTransactionStopSystemTransfer @ 0x1C00BC800
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfDmaTransactionStopSystemTransfer(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction)
{
  WdfVersion.Functions.pfnWdfDmaTransactionStopSystemTransfer(DriverGlobals, DmaTransaction);
}
