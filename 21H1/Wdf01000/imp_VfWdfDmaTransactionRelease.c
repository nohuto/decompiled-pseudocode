/*
 * XREFs of imp_VfWdfDmaTransactionRelease @ 0x1C00C0720
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfDmaTransactionRelease(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDMATRANSACTION__ *))WdfVersion.Functions.pfnWdfDmaTransactionRelease)(
           DriverGlobals,
           DmaTransaction);
}
