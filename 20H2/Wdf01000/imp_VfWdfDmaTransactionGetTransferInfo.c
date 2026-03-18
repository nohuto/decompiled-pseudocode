/*
 * XREFs of imp_VfWdfDmaTransactionGetTransferInfo @ 0x1C00BC650
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfDmaTransactionGetTransferInfo(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction,
        unsigned int *MapRegisterCount,
        unsigned int *ScatterGatherElementCount)
{
  WdfVersion.Functions.pfnWdfDmaTransactionGetTransferInfo(
    DriverGlobals,
    DmaTransaction,
    MapRegisterCount,
    ScatterGatherElementCount);
}
