/*
 * XREFs of imp_VfWdfDmaTransactionGetDevice @ 0x1C00C1610
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

WDFDEVICE__ *__fastcall imp_VfWdfDmaTransactionGetDevice(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction)
{
  return WdfVersion.Functions.pfnWdfDmaTransactionGetDevice(DriverGlobals, DmaTransaction);
}
