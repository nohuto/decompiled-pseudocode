/*
 * XREFs of imp_VfWdfDmaTransactionGetBytesTransferred @ 0x1C00BC5D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall imp_VfWdfDmaTransactionGetBytesTransferred(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction)
{
  return WdfVersion.Functions.pfnWdfDmaTransactionGetBytesTransferred(DriverGlobals, DmaTransaction);
}
