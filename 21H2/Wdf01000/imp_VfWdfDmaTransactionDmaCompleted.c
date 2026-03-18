/*
 * XREFs of imp_VfWdfDmaTransactionDmaCompleted @ 0x1C00C1530
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfDmaTransactionDmaCompleted(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction,
        int *Status)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDMATRANSACTION__ *, int *))WdfVersion.Functions.pfnWdfDmaTransactionDmaCompleted)(
           DriverGlobals,
           DmaTransaction,
           Status);
}
