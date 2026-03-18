/*
 * XREFs of Controller_LowerAndTrackIrql @ 0x1C0005CB4
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
 *     RootHub_AcquireReadModifyWriteLock @ 0x1C0013A48 (RootHub_AcquireReadModifyWriteLock.c)
 *     Interrupter_WdfEvtInterruptEnable @ 0x1C0014920 (Interrupter_WdfEvtInterruptEnable.c)
 *     Interrupter_AcquireEventRingLock @ 0x1C00190C4 (Interrupter_AcquireEventRingLock.c)
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
 *     WPP_RECORDER_SF_d @ 0x1C0010010 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     Controller_ReportFatalError @ 0x1C0032C20 (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_sds @ 0x1C003609C (WPP_RECORDER_SF_sds.c)
 */

void __fastcall Controller_LowerAndTrackIrql(_QWORD *a1)
{
  __int64 CurrentProcessorNumber; // rsi
  int v3; // edx
  __int64 v4; // rax
  int v5; // edx
  KIRQL v6; // cl
  ULONG_PTR v7; // rax
  ULONG_PTR v8; // rax
  KIRQL CurrentIrql; // al
  int v10; // edx
  int v11; // edx
  int v12; // r8d
  int v13; // r9d

  CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
  if ( KeGetCurrentIrql() == 2 )
  {
    if ( (unsigned int)CurrentProcessorNumber >= *((_DWORD *)a1 + 204) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v3) = 2;
        WPP_RECORDER_SF_d(
          a1[9],
          v3,
          4,
          314,
          (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids,
          CurrentProcessorNumber);
      }
      v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 264))(WdfDriverGlobals, *a1);
      KeBugCheckEx(0x144u, 4uLL, v7, 2uLL, 1uLL);
    }
    v4 = a1[101];
    v5 = 0;
    v6 = *(_BYTE *)(v4 + 2 * CurrentProcessorNumber + 1);
    if ( !*(_BYTE *)(v4 + 2 * CurrentProcessorNumber) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = 2;
        WPP_RECORDER_SF_d(
          a1[9],
          v5,
          4,
          315,
          (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids,
          CurrentProcessorNumber);
      }
      v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 264))(WdfDriverGlobals, *a1);
      KeBugCheckEx(0x144u, 4uLL, v8, 2uLL, 2uLL);
    }
    *(_BYTE *)(v4 + 2 * CurrentProcessorNumber) = 0;
    *(_BYTE *)(a1[101] + 2 * CurrentProcessorNumber + 1) = -1;
    KeLowerIrql(v6);
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      CurrentIrql = KeGetCurrentIrql();
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_d(a1[9], v10, 4, 316, (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids, CurrentIrql);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v11, v12, v13);
    }
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
    Controller_ReportFatalError((_DWORD)a1, 0, 4136, 0, 0LL, 0LL, 0LL);
  }
}
