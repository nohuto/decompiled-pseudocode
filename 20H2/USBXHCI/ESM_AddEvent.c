/*
 * XREFs of ESM_AddEvent @ 0x1C0008850
 * Callers:
 *     TR_AttemptStateChange @ 0x1C0001E00 (TR_AttemptStateChange.c)
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C0001F10 (Isoch_ProcessTransferEventWithED1.c)
 *     Isoch_WdfEvtIoQueueReadyNotification @ 0x1C0002AE0 (Isoch_WdfEvtIoQueueReadyNotification.c)
 *     Control_MapTransfer @ 0x1C0003FBC (Control_MapTransfer.c)
 *     Control_Transfer_MapIntoRing @ 0x1C0004610 (Control_Transfer_MapIntoRing.c)
 *     Control_ProcessTransferEventWithED1 @ 0x1C0004BB0 (Control_ProcessTransferEventWithED1.c)
 *     Endpoint_TransferEventHandler @ 0x1C0006860 (Endpoint_TransferEventHandler.c)
 *     Endpoint_Enable @ 0x1C00083B0 (Endpoint_Enable.c)
 *     Endpoint_Disable @ 0x1C000AB88 (Endpoint_Disable.c)
 *     TR_TransfersReclaimed @ 0x1C000BBB4 (TR_TransfersReclaimed.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C000BEB4 (Bulk_ProcessTransferEventWithED1.c)
 *     Bulk_WdfEvtRequestCancel @ 0x1C000C600 (Bulk_WdfEvtRequestCancel.c)
 *     Bulk_MappingLoop @ 0x1C000CC80 (Bulk_MappingLoop.c)
 *     Bulk_ProcessTransferEventWithED0 @ 0x1C000DBF8 (Bulk_ProcessTransferEventWithED0.c)
 *     Bulk_EP_StopMapping @ 0x1C000EC50 (Bulk_EP_StopMapping.c)
 *     ESM_WaitingForFSEAfterStopEndpointCommandCompletion @ 0x1C000ECC0 (ESM_WaitingForFSEAfterStopEndpointCommandCompletion.c)
 *     Bulk_EP_ProcessExpectedEventTRBs @ 0x1C000EE50 (Bulk_EP_ProcessExpectedEventTRBs.c)
 *     Endpoint_UcxEvtEndpointOkToCancelTransfers @ 0x1C000F0D0 (Endpoint_UcxEvtEndpointOkToCancelTransfers.c)
 *     ESM_UpdatingTransferRingDequeuePointers @ 0x1C000FB60 (ESM_UpdatingTransferRingDequeuePointers.c)
 *     Endpoint_OnCancelStopCompletion @ 0x1C000FBA0 (Endpoint_OnCancelStopCompletion.c)
 *     Endpoint_OnCancelSetDequeuePointerCompletion @ 0x1C0010300 (Endpoint_OnCancelSetDequeuePointerCompletion.c)
 *     Control_ProcessTransferEventWithED0 @ 0x1C0019120 (Control_ProcessTransferEventWithED0.c)
 *     Endpoint_ControlEndpointResetCompletion @ 0x1C00195F0 (Endpoint_ControlEndpointResetCompletion.c)
 *     Endpoint_ControlEndpointResetSetDequeuePointerCompletion @ 0x1C00199C0 (Endpoint_ControlEndpointResetSetDequeuePointerCompletion.c)
 *     Control_EP_StopMapping @ 0x1C0019DB0 (Control_EP_StopMapping.c)
 *     DeviceSlot_ControllerResetPreReset @ 0x1C0036DAC (DeviceSlot_ControllerResetPreReset.c)
 *     Endpoint_ClearStallTransferCompletion @ 0x1C00389A0 (Endpoint_ClearStallTransferCompletion.c)
 *     Endpoint_EndpointStaticStreamsDisableCompletion @ 0x1C0038B80 (Endpoint_EndpointStaticStreamsDisableCompletion.c)
 *     Endpoint_EndpointStaticStreamsEnableCompletion @ 0x1C0038E40 (Endpoint_EndpointStaticStreamsEnableCompletion.c)
 *     Endpoint_OnCancelEndpointConfigure @ 0x1C0039418 (Endpoint_OnCancelEndpointConfigure.c)
 *     Endpoint_OnCancelEndpointConfigureCompletion @ 0x1C00395F0 (Endpoint_OnCancelEndpointConfigureCompletion.c)
 *     Endpoint_OnCancelEndpointConfigureCompletion_EpDropped @ 0x1C0039790 (Endpoint_OnCancelEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnResetEndpointConfigure @ 0x1C0039998 (Endpoint_OnResetEndpointConfigure.c)
 *     Endpoint_OnResetEndpointConfigureCompletion @ 0x1C0039C20 (Endpoint_OnResetEndpointConfigureCompletion.c)
 *     Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x1C0039DE0 (Endpoint_OnResetEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnResetEndpointResetCompletion @ 0x1C003A060 (Endpoint_OnResetEndpointResetCompletion.c)
 *     Endpoint_OnResetSetDequeuePointerCompletion @ 0x1C003A3A0 (Endpoint_OnResetSetDequeuePointerCompletion.c)
 *     Endpoint_StreamsOnCancelSetDequeuePointerComplete @ 0x1C003AFA0 (Endpoint_StreamsOnCancelSetDequeuePointerComplete.c)
 *     Endpoint_StreamsOnResetSetDequeuePointerComplete @ 0x1C003B054 (Endpoint_StreamsOnResetSetDequeuePointerComplete.c)
 *     Endpoint_UcxEvtEndpointReset @ 0x1C003B230 (Endpoint_UcxEvtEndpointReset.c)
 *     Endpoint_WdfEvtStateMachineTimer @ 0x1C003BFA0 (Endpoint_WdfEvtStateMachineTimer.c)
 *     Control_EP_ProcessExpectedEventTRBs @ 0x1C0040A00 (Control_EP_ProcessExpectedEventTRBs.c)
 *     Control_WdfEvtRequestCancel @ 0x1C0040F60 (Control_WdfEvtRequestCancel.c)
 *     Control_WdfEvtTimerForTransferTimeout @ 0x1C00410F0 (Control_WdfEvtTimerForTransferTimeout.c)
 *     Isoch_EP_ProcessExpectedEventTRBs @ 0x1C00420B0 (Isoch_EP_ProcessExpectedEventTRBs.c)
 *     Isoch_ProcessTransferEventWithED0 @ 0x1C0042BE8 (Isoch_ProcessTransferEventWithED0.c)
 *     Isoch_ProcessTransferRingEmptyEvent @ 0x1C0042F00 (Isoch_ProcessTransferRingEmptyEvent.c)
 *     Isoch_WdfEvtRequestCancel @ 0x1C0043B50 (Isoch_WdfEvtRequestCancel.c)
 *     Bulk_ProcessTransferEventWithHaltedCompletion @ 0x1C00450BC (Bulk_ProcessTransferEventWithHaltedCompletion.c)
 *     UsbDevice_ControllerGone @ 0x1C0046640 (UsbDevice_ControllerGone.c)
 *     UsbDevice_ControllerResetPostReset @ 0x1C00466DC (UsbDevice_ControllerResetPostReset.c)
 * Callees:
 *     ESM_RunStateMachine @ 0x1C0008980 (ESM_RunStateMachine.c)
 *     ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState @ 0x1C0008D48 (ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState.c)
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ESM_AddEvent(KSPIN_LOCK *Context, int a2)
{
  KSPIN_LOCK *v2; // rsi
  KSPIN_LOCK v5; // rdx
  __int64 v6; // rax
  KIRQL NewIrql; // [rsp+48h] [rbp+10h]

  v2 = Context + 105;
  NewIrql = KeAcquireSpinLockRaiseToDpc(Context + 105);
  *((_DWORD *)Context + *((unsigned __int8 *)Context + 833) + 192) = a2;
  *((_BYTE *)Context + 833) = (*((_BYTE *)Context + 833) + 1) & 0xF;
  if ( *((_BYTE *)Context + 1016) )
  {
    if ( a2 != 126 )
    {
      *((_DWORD *)Context + *((unsigned __int8 *)Context + 949) + 221) = a2;
      *((_BYTE *)Context + 949) = (*((_BYTE *)Context + 949) + 1) & 0xF;
      goto LABEL_5;
    }
    *((_BYTE *)Context + 1016) = 0;
    ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState(Context);
    goto LABEL_4;
  }
  *((_DWORD *)Context + *((unsigned __int8 *)Context + 949) + 221) = a2;
  *((_BYTE *)Context + 949) = (*((_BYTE *)Context + 949) + 1) & 0xF;
  if ( !*((_BYTE *)Context + 848) )
  {
    v5 = Context[120];
    *((_BYTE *)Context + 848) = 1;
    v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, KSPIN_LOCK))(WdfFunctions_01023 + 1632))(WdfDriverGlobals, v5);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01023 + 1640))(
      WdfDriverGlobals,
      v6,
      "State Machine Tag",
      1021LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\smengine.c");
LABEL_4:
    ESM_RunStateMachine(Context);
  }
LABEL_5:
  KeReleaseSpinLock(v2, NewIrql);
}
