/*
 * XREFs of imp_WdfInterruptQueueWorkItemForIsr @ 0x1C00786B0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z @ 0x1C0004224 (-EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BE90 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 */

BOOLEAN __fastcall imp_WdfInterruptQueueWorkItemForIsr(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFINTERRUPT__ *Interrupt)
{
  FxInterrupt *pFxInterrupt; // [rsp+30h] [rbp+8h] BYREF

  pFxInterrupt = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Interrupt,
    0x1027u,
    (void **)&pFxInterrupt);
  if ( KeGetCurrentIrql() <= 2u )
    return FxSystemWorkItem::EnqueueWorker(
             pFxInterrupt->m_SystemWorkItem,
             FxInterrupt::_InterruptWorkItemCallback,
             pFxInterrupt,
             0);
  else
    return KeInsertQueueDpc(&pFxInterrupt->m_Dpc, pFxInterrupt, 0LL);
}
