/*
 * XREFs of imp_VfWdfDmaTransactionWdmGetTransferContext @ 0x1C00C1820
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

void *__fastcall imp_VfWdfDmaTransactionWdmGetTransferContext(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction)
{
  return WdfVersion.Functions.pfnWdfDmaTransactionWdmGetTransferContext(DriverGlobals, DmaTransaction);
}
