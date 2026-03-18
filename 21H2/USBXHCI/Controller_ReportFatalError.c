/*
 * XREFs of Controller_ReportFatalError @ 0x1C0032C20
 * Callers:
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C00020D0 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x1C000239C (UsbDevice_QueueConfigureEndpointEvent.c)
 *     Interrupter_DeferredWorkProcessor @ 0x1C0002BB0 (Interrupter_DeferredWorkProcessor.c)
 *     Endpoint_TransferEventHandler @ 0x1C0003980 (Endpoint_TransferEventHandler.c)
 *     Command_HandleCommandCompletionEvent @ 0x1C0003A40 (Command_HandleCommandCompletionEvent.c)
 *     Controller_RaiseAndTrackIrql @ 0x1C0005C20 (Controller_RaiseAndTrackIrql.c)
 *     Controller_LowerAndTrackIrql @ 0x1C0005CB4 (Controller_LowerAndTrackIrql.c)
 *     Control_ProcessTransferEventWithED1 @ 0x1C0006B04 (Control_ProcessTransferEventWithED1.c)
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C0006DF0 (Isoch_ProcessTransferEventWithED1.c)
 *     Isoch_WdfEvtIoQueueReadyNotification @ 0x1C00079C0 (Isoch_WdfEvtIoQueueReadyNotification.c)
 *     Controller_WdfEvtWatchdogTimerFunc @ 0x1C000A120 (Controller_WdfEvtWatchdogTimerFunc.c)
 *     Endpoint_OnCancelStopCompletion @ 0x1C000BDE0 (Endpoint_OnCancelStopCompletion.c)
 *     Endpoint_OnCancelSetDequeuePointerCompletion @ 0x1C000C2C0 (Endpoint_OnCancelSetDequeuePointerCompletion.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C000E0D4 (Bulk_ProcessTransferEventWithED1.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0010230 (Controller_WdfEvtDeviceD0Entry.c)
 *     UsbDevice_EnableCompletion @ 0x1C00109B0 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_SetAddressCompletion @ 0x1C0010C30 (UsbDevice_SetAddressCompletion.c)
 *     Controller_PopulateDeviceFlagsFromKse @ 0x1C00169B8 (Controller_PopulateDeviceFlagsFromKse.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x1C002E454 (Command_HandleCommandRingStoppedEvent.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C002E930 (Command_WdfEvtWatchdogTimerFunction.c)
 *     Controller_EvtIoInternalDeviceControl @ 0x1C0031860 (Controller_EvtIoInternalDeviceControl.c)
 *     Controller_InternalReset @ 0x1C00321C8 (Controller_InternalReset.c)
 *     Controller_SetControllerGone @ 0x1C0032DC8 (Controller_SetControllerGone.c)
 *     Endpoint_ControlEndpointResetCompletion @ 0x1C0037F40 (Endpoint_ControlEndpointResetCompletion.c)
 *     Endpoint_ControlEndpointResetSetDequeuePointerCompletion @ 0x1C0038180 (Endpoint_ControlEndpointResetSetDequeuePointerCompletion.c)
 *     Endpoint_OnCancelEndpointConfigure @ 0x1C0038A28 (Endpoint_OnCancelEndpointConfigure.c)
 *     Endpoint_OnCancelEndpointConfigureCompletion @ 0x1C0038C00 (Endpoint_OnCancelEndpointConfigureCompletion.c)
 *     Endpoint_OnCancelEndpointConfigureCompletion_EpDropped @ 0x1C0038DA0 (Endpoint_OnCancelEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnResetEndpointConfigureCompletion @ 0x1C0039230 (Endpoint_OnResetEndpointConfigureCompletion.c)
 *     Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x1C00393F0 (Endpoint_OnResetEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnResetEndpointResetCompletion @ 0x1C0039670 (Endpoint_OnResetEndpointResetCompletion.c)
 *     Endpoint_OnResetSetDequeuePointerCompletion @ 0x1C00399B0 (Endpoint_OnResetSetDequeuePointerCompletion.c)
 *     Endpoint_SM_RequestControllerResetDueToRepeatedStopEndpointFailure @ 0x1C0039D00 (Endpoint_SM_RequestControllerResetDueToRepeatedStopEndpointFailure.c)
 *     IoControl_WdfEvtIoDeviceControl @ 0x1C003C700 (IoControl_WdfEvtIoDeviceControl.c)
 *     RootHub_WdfEvtTimerPortOperationRecoveryTimerDpc @ 0x1C003EC00 (RootHub_WdfEvtTimerPortOperationRecoveryTimerDpc.c)
 *     Control_ValidateED0TrbPointerOnMismatch @ 0x1C0040DC4 (Control_ValidateED0TrbPointerOnMismatch.c)
 *     Bulk_ValidateED0TrbPointerOnMismatch @ 0x1C0044C48 (Bulk_ValidateED0TrbPointerOnMismatch.c)
 *     UsbDevice_DeviceResetCompletion @ 0x1C0046070 (UsbDevice_DeviceResetCompletion.c)
 *     UsbDevice_DisableCompletion @ 0x1C00462A4 (UsbDevice_DisableCompletion.c)
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C006E9D0 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     Controller_InitiateBootRecovery @ 0x1C0031DE0 (Controller_InitiateBootRecovery.c)
 *     WPP_RECORDER_SF_LL @ 0x1C003588C (WPP_RECORDER_SF_LL.c)
 */

void __fastcall Controller_ReportFatalError(__int64 a1, int a2, int a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  int v9; // r14d
  _QWORD *v11; // rbx
  __int64 v12; // rdi
  __int64 Pool2; // rax
  KIRQL v14; // al
  _QWORD *v15; // rcx
  char v16; // [rsp+30h] [rbp-28h]

  v9 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v16 = a2;
    LOBYTE(a2) = 1;
    WPP_RECORDER_SF_LL(
      *(_QWORD *)(a1 + 72),
      a2,
      4,
      229,
      (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids,
      a3,
      v16);
  }
  DbgPrint("\nXHCI reported fatal error\n");
  if ( (*(_DWORD *)(a1 + 388) & 0x12) != 0 )
  {
    Controller_InitiateBootRecovery((_QWORD *)a1, v9);
  }
  else
  {
    v11 = 0LL;
    v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
            WdfDriverGlobals,
            *(_QWORD *)(a1 + 368),
            off_1C00610E0);
    if ( a3 )
    {
      if ( a3 != 4159 )
      {
        Pool2 = ExAllocatePool2(64LL, 56LL, 1229146200LL);
        v11 = (_QWORD *)Pool2;
        if ( Pool2 )
        {
          *(_QWORD *)(Pool2 + 8) = 0LL;
          *(_QWORD *)Pool2 = 0LL;
          *(_QWORD *)(Pool2 + 32) = a5;
          *(_QWORD *)(Pool2 + 40) = a6;
          *(_QWORD *)(Pool2 + 48) = a7;
          *(_DWORD *)(Pool2 + 16) = a3;
          *(_QWORD *)(Pool2 + 24) = a4;
        }
      }
    }
    v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v12 + 16));
    if ( v11 )
    {
      v15 = *(_QWORD **)(v12 + 8);
      if ( *v15 != v12 )
        __fastfail(3u);
      *v11 = v12;
      v11[1] = v15;
      *v15 = v11;
      *(_QWORD *)(v12 + 8) = v11;
    }
    *(_DWORD *)(v12 + 80) |= v9;
    KeReleaseSpinLock((PKSPIN_LOCK)(v12 + 16), v14);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 3040))(
      WdfDriverGlobals,
      *(_QWORD *)(a1 + 368));
  }
}
