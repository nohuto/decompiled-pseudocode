/*
 * XREFs of Controller_RaiseAndTrackIrql @ 0x1C0005C20
 * Callers:
 *     Interrupter_WdfEvtInterruptIsr @ 0x1C0001160 (Interrupter_WdfEvtInterruptIsr.c)
 *     Command_HandleCommandCompletionEvent @ 0x1C0003A40 (Command_HandleCommandCompletionEvent.c)
 *     Command_SendCommand @ 0x1C0003D94 (Command_SendCommand.c)
 *     Control_WdfEvtIoDefault @ 0x1C0005E30 (Control_WdfEvtIoDefault.c)
 *     Control_Transfer_Map @ 0x1C0006150 (Control_Transfer_Map.c)
 *     Isoch_MapStage @ 0x1C0008740 (Isoch_MapStage.c)
 *     Controller_WdfEvtWatchdogTimerFunc @ 0x1C000A120 (Controller_WdfEvtWatchdogTimerFunc.c)
 *     Isoch_EP_StartMapping @ 0x1C000A800 (Isoch_EP_StartMapping.c)
 *     Interrupter_WdfEvtInterruptDisable @ 0x1C000CBF0 (Interrupter_WdfEvtInterruptDisable.c)
 *     Bulk_EP_StartMapping @ 0x1C000E4D0 (Bulk_EP_StartMapping.c)
 *     Bulk_WdfEvtIoQueueReadyNotification @ 0x1C000E7D0 (Bulk_WdfEvtIoQueueReadyNotification.c)
 *     Bulk_MapStage @ 0x1C000F118 (Bulk_MapStage.c)
 *     Control_EP_StartMapping @ 0x1C000FE10 (Control_EP_StartMapping.c)
 *     RootHub_ReleaseReadModifyWriteLock @ 0x1C0011F9C (RootHub_ReleaseReadModifyWriteLock.c)
 *     Interrupter_WdfEvtInterruptEnable @ 0x1C0014920 (Interrupter_WdfEvtInterruptEnable.c)
 *     Interrupter_ReleaseEventRingLock @ 0x1C001911C (Interrupter_ReleaseEventRingLock.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x1C002E454 (Command_HandleCommandRingStoppedEvent.c)
 *     Interrupter_WdfEvtInterruptWorkItem @ 0x1C003C520 (Interrupter_WdfEvtInterruptWorkItem.c)
 *     Control_WdfEvtWorkItemForTransferCompletion @ 0x1C0041580 (Control_WdfEvtWorkItemForTransferCompletion.c)
 *     Isoch_WdfEvtWorkItemForTransferCompletion @ 0x1C0043BA0 (Isoch_WdfEvtWorkItemForTransferCompletion.c)
 *     Bulk_WdfEvtWorkItemForTransferCompletion @ 0x1C0044F00 (Bulk_WdfEvtWorkItemForTransferCompletion.c)
 *     ESM_SmWorker @ 0x1C004F1F0 (ESM_SmWorker.c)
 *     SecureDmaEnabler_FreeCommonBufferPage @ 0x1C004FDB8 (SecureDmaEnabler_FreeCommonBufferPage.c)
 *     SecureDmaEnabler_PrepareMemoryForDma @ 0x1C004FE30 (SecureDmaEnabler_PrepareMemoryForDma.c)
 *     SecureDmaEnabler_ReleaseResourcesAfterDma @ 0x1C004FF90 (SecureDmaEnabler_ReleaseResourcesAfterDma.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C0050250 (SecureChannel_SendRequestSynchronously.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000A588 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0010010 (WPP_RECORDER_SF_d.c)
 *     Controller_ReportFatalError @ 0x1C0032C20 (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_sds @ 0x1C003609C (WPP_RECORDER_SF_sds.c)
 */

char __fastcall Controller_RaiseAndTrackIrql(__int64 a1)
{
  char v2; // si
  int v3; // edx
  KIRQL v4; // bp
  ULONG CurrentProcessorNumber; // eax
  int v6; // edx
  int v8; // edx
  int v9; // r8d
  int v10; // r9d
  int v11; // edx
  int v12; // r8d
  int v13; // r9d

  v2 = 0;
  if ( KeGetCurrentIrql() == 2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = 2;
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), v3, 4, 312, (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v8, v9, v10);
    }
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
    Controller_ReportFatalError(a1, 0, 4134, 0, 0LL, 0LL, 0LL);
  }
  else
  {
    v2 = 1;
    v4 = KfRaiseIrql(2u);
    CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
    if ( CurrentProcessorNumber >= *(_DWORD *)(a1 + 816) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a1 + 72),
          v6,
          4,
          313,
          (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids,
          CurrentProcessorNumber);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v11, v12, v13);
      }
      if ( !KdRefreshDebuggerNotPresent() )
        __debugbreak();
      Controller_ReportFatalError(a1, 0, 4135, 0, 0LL, 0LL, 0LL);
      KeLowerIrql(v4);
      return 0;
    }
    else
    {
      *(_BYTE *)(*(_QWORD *)(a1 + 808) + 2LL * CurrentProcessorNumber) = 1;
      *(_BYTE *)(*(_QWORD *)(a1 + 808) + 2LL * CurrentProcessorNumber + 1) = v4;
    }
  }
  return v2;
}
