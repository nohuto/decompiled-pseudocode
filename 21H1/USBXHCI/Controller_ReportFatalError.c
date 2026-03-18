/*
 * XREFs of Controller_ReportFatalError @ 0x1C00323C0
 * Callers:
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C0001F10 (Isoch_ProcessTransferEventWithED1.c)
 *     Isoch_WdfEvtIoQueueReadyNotification @ 0x1C0002AE0 (Isoch_WdfEvtIoQueueReadyNotification.c)
 *     Control_ProcessTransferEventWithED1 @ 0x1C0004BB0 (Control_ProcessTransferEventWithED1.c)
 *     Controller_LowerAndTrackIrql @ 0x1C00052C8 (Controller_LowerAndTrackIrql.c)
 *     Controller_RaiseAndTrackIrql @ 0x1C0005358 (Controller_RaiseAndTrackIrql.c)
 *     Interrupter_DeferredWorkProcessor @ 0x1C0005D90 (Interrupter_DeferredWorkProcessor.c)
 *     Endpoint_TransferEventHandler @ 0x1C00064C0 (Endpoint_TransferEventHandler.c)
 *     Command_HandleCommandCompletionEvent @ 0x1C0006588 (Command_HandleCommandCompletionEvent.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C0006F40 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x1C00071A4 (UsbDevice_QueueConfigureEndpointEvent.c)
 *     Controller_WdfEvtWatchdogTimerFunc @ 0x1C0009430 (Controller_WdfEvtWatchdogTimerFunc.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C000B5E4 (Bulk_ProcessTransferEventWithED1.c)
 *     UsbDevice_EnableCompletion @ 0x1C000EEE0 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_SetAddressCompletion @ 0x1C000F010 (UsbDevice_SetAddressCompletion.c)
 *     Endpoint_OnCancelStopCompletion @ 0x1C000F3B0 (Endpoint_OnCancelStopCompletion.c)
 *     Endpoint_OnCancelSetDequeuePointerCompletion @ 0x1C000F870 (Endpoint_OnCancelSetDequeuePointerCompletion.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0013C00 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_PopulateDeviceFlagsFromKse @ 0x1C0015AB0 (Controller_PopulateDeviceFlagsFromKse.c)
 *     Endpoint_ControlEndpointResetCompletion @ 0x1C0018350 (Endpoint_ControlEndpointResetCompletion.c)
 *     Endpoint_ControlEndpointResetSetDequeuePointerCompletion @ 0x1C0018720 (Endpoint_ControlEndpointResetSetDequeuePointerCompletion.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x1C002DAE4 (Command_HandleCommandRingStoppedEvent.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C002DFB0 (Command_WdfEvtWatchdogTimerFunction.c)
 *     Controller_EvtIoInternalDeviceControl @ 0x1C0030F00 (Controller_EvtIoInternalDeviceControl.c)
 *     Controller_InternalReset @ 0x1C0031AF8 (Controller_InternalReset.c)
 *     Controller_SetControllerGone @ 0x1C0032568 (Controller_SetControllerGone.c)
 *     Endpoint_OnCancelEndpointConfigure @ 0x1C0037F38 (Endpoint_OnCancelEndpointConfigure.c)
 *     Endpoint_OnCancelEndpointConfigureCompletion @ 0x1C0038110 (Endpoint_OnCancelEndpointConfigureCompletion.c)
 *     Endpoint_OnCancelEndpointConfigureCompletion_EpDropped @ 0x1C00382B0 (Endpoint_OnCancelEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnResetEndpointConfigureCompletion @ 0x1C0038740 (Endpoint_OnResetEndpointConfigureCompletion.c)
 *     Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x1C0038900 (Endpoint_OnResetEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnResetEndpointResetCompletion @ 0x1C0038B80 (Endpoint_OnResetEndpointResetCompletion.c)
 *     Endpoint_OnResetSetDequeuePointerCompletion @ 0x1C0038EC0 (Endpoint_OnResetSetDequeuePointerCompletion.c)
 *     Endpoint_SM_RequestControllerResetDueToRepeatedStopEndpointFailure @ 0x1C003918C (Endpoint_SM_RequestControllerResetDueToRepeatedStopEndpointFailure.c)
 *     IoControl_WdfEvtIoDeviceControl @ 0x1C003B900 (IoControl_WdfEvtIoDeviceControl.c)
 *     RootHub_WdfEvtTimerPortOperationRecoveryTimerDpc @ 0x1C003DAE0 (RootHub_WdfEvtTimerPortOperationRecoveryTimerDpc.c)
 *     Control_ValidateED0TrbPointerOnMismatch @ 0x1C003F644 (Control_ValidateED0TrbPointerOnMismatch.c)
 *     Bulk_ValidateED0TrbPointerOnMismatch @ 0x1C0043EE8 (Bulk_ValidateED0TrbPointerOnMismatch.c)
 *     UsbDevice_DeviceResetCompletion @ 0x1C0045320 (UsbDevice_DeviceResetCompletion.c)
 *     UsbDevice_DisableCompletion @ 0x1C0045554 (UsbDevice_DisableCompletion.c)
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C006AFE0 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 *     Controller_InitiateBootRecovery @ 0x1C0031710 (Controller_InitiateBootRecovery.c)
 *     WPP_RECORDER_SF_LL @ 0x1C0034E0C (WPP_RECORDER_SF_LL.c)
 */

void __fastcall Controller_ReportFatalError(__int64 a1, int a2, int a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  int v9; // r14d
  __int64 *v11; // rbx
  __int64 v12; // rdi
  __int64 *PoolWithTag; // rax
  KIRQL v14; // al
  __int64 **v15; // rcx
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
      228,
      (__int64)&WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids,
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
            off_1C00600E0);
    if ( a3 )
    {
      if ( a3 != 4159 )
      {
        PoolWithTag = (__int64 *)ExAllocatePoolWithTag(
                                   (POOL_TYPE)WPP_MAIN_CB.DeviceLock.Header.SignalState,
                                   0x38uLL,
                                   0x49434858u);
        v11 = PoolWithTag;
        if ( PoolWithTag )
        {
          PoolWithTag[1] = 0LL;
          *PoolWithTag = 0LL;
          PoolWithTag[4] = a5;
          PoolWithTag[5] = a6;
          PoolWithTag[6] = a7;
          *((_DWORD *)PoolWithTag + 4) = a3;
          PoolWithTag[3] = a4;
        }
      }
    }
    v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v12 + 16));
    if ( v11 )
    {
      v15 = *(__int64 ***)(v12 + 8);
      if ( *v15 != (__int64 *)v12 )
        __fastfail(3u);
      *v11 = v12;
      v11[1] = (__int64)v15;
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
