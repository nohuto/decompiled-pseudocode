/*
 * XREFs of imp_WdfDmaTransactionGetRequest @ 0x1C002FBA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BE90 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 */

WDFREQUEST__ *__fastcall imp_WdfDmaTransactionGetRequest(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction)
{
  FxDmaTransactionBase *pDmaTrans; // [rsp+30h] [rbp+8h] BYREF

  pDmaTrans = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)DmaTransaction,
    0x1401u,
    (void **)&pDmaTrans);
  if ( ((unsigned __int64)pDmaTrans->m_EncodedRequest & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    return (WDFREQUEST__ *)FxObject::GetObjectHandleUnchecked((FxObject *)((unsigned __int64)pDmaTrans->m_EncodedRequest & 0xFFFFFFFFFFFFFFFEuLL));
  else
    return 0LL;
}
