/*
 * XREFs of TR_QueueDpcForTransferCompletion @ 0x1C000C644
 * Callers:
 *     Bulk_WdfEvtRequestCancel @ 0x1C000B0C0 (Bulk_WdfEvtRequestCancel.c)
 *     Bulk_EP_ReclaimTransfers @ 0x1C000C5B0 (Bulk_EP_ReclaimTransfers.c)
 *     Control_EP_StartMapping @ 0x1C000FE10 (Control_EP_StartMapping.c)
 *     Control_EP_OkToReclaimTransfersOnCancel @ 0x1C0040460 (Control_EP_OkToReclaimTransfersOnCancel.c)
 *     Control_EP_ReclaimTransfers @ 0x1C0040590 (Control_EP_ReclaimTransfers.c)
 *     Control_WdfEvtRequestCancel @ 0x1C0041240 (Control_WdfEvtRequestCancel.c)
 *     Control_WdfEvtTimerForTransferTimeout @ 0x1C00413D0 (Control_WdfEvtTimerForTransferTimeout.c)
 *     Isoch_EP_OkToReclaimTransfersOnCancel @ 0x1C0042290 (Isoch_EP_OkToReclaimTransfersOnCancel.c)
 *     Isoch_EP_ReclaimTransfers @ 0x1C00423A0 (Isoch_EP_ReclaimTransfers.c)
 *     Isoch_Transfer_Complete @ 0x1C004313C (Isoch_Transfer_Complete.c)
 *     Isoch_Transfer_CompleteCancelable @ 0x1C004320C (Isoch_Transfer_CompleteCancelable.c)
 *     Isoch_WdfEvtIoCanceledOnQueue @ 0x1C0043760 (Isoch_WdfEvtIoCanceledOnQueue.c)
 *     Isoch_WdfEvtRequestCancel @ 0x1C00438F0 (Isoch_WdfEvtRequestCancel.c)
 *     Bulk_EP_OkToReclaimTransfersOnCancel @ 0x1C0044700 (Bulk_EP_OkToReclaimTransfersOnCancel.c)
 *     Bulk_WdfEvtIoCanceledOnQueue @ 0x1C0044E10 (Bulk_WdfEvtIoCanceledOnQueue.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
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
