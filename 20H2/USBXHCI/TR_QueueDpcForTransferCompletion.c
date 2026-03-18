/*
 * XREFs of TR_QueueDpcForTransferCompletion @ 0x1C000E954
 * Callers:
 *     Bulk_WdfEvtRequestCancel @ 0x1C000C600 (Bulk_WdfEvtRequestCancel.c)
 *     Bulk_EP_ReclaimTransfers @ 0x1C000E8C0 (Bulk_EP_ReclaimTransfers.c)
 *     Control_EP_StartMapping @ 0x1C000ED30 (Control_EP_StartMapping.c)
 *     Control_EP_ReclaimTransfers @ 0x1C0019E60 (Control_EP_ReclaimTransfers.c)
 *     Control_EP_OkToReclaimTransfersOnCancel @ 0x1C0040970 (Control_EP_OkToReclaimTransfersOnCancel.c)
 *     Control_WdfEvtRequestCancel @ 0x1C0040F60 (Control_WdfEvtRequestCancel.c)
 *     Control_WdfEvtTimerForTransferTimeout @ 0x1C00410F0 (Control_WdfEvtTimerForTransferTimeout.c)
 *     Isoch_EP_OkToReclaimTransfersOnCancel @ 0x1C0041FF0 (Isoch_EP_OkToReclaimTransfersOnCancel.c)
 *     Isoch_EP_ReclaimTransfers @ 0x1C0042100 (Isoch_EP_ReclaimTransfers.c)
 *     Isoch_Transfer_Complete @ 0x1C0043390 (Isoch_Transfer_Complete.c)
 *     Isoch_Transfer_CompleteCancelable @ 0x1C0043460 (Isoch_Transfer_CompleteCancelable.c)
 *     Isoch_WdfEvtIoCanceledOnQueue @ 0x1C00439C0 (Isoch_WdfEvtIoCanceledOnQueue.c)
 *     Isoch_WdfEvtRequestCancel @ 0x1C0043B50 (Isoch_WdfEvtRequestCancel.c)
 *     Bulk_EP_OkToReclaimTransfersOnCancel @ 0x1C0044BC0 (Bulk_EP_OkToReclaimTransfersOnCancel.c)
 *     Bulk_WdfEvtIoCanceledOnQueue @ 0x1C00455C0 (Bulk_WdfEvtIoCanceledOnQueue.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TR_QueueDpcForTransferCompletion(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 280) )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 3040))(
             WdfDriverGlobals,
             *(_QWORD *)(a1 + 88));
  else
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 896))(
             WdfDriverGlobals,
             *(_QWORD *)(a1 + 80));
}
