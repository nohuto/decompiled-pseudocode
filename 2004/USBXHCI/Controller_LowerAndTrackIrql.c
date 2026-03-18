/*
 * XREFs of Controller_LowerAndTrackIrql @ 0x1C00052C8
 * Callers:
 *     Isoch_EP_StartMapping @ 0x1C0001C90 (Isoch_EP_StartMapping.c)
 *     Isoch_MapStage @ 0x1C0003760 (Isoch_MapStage.c)
 *     Control_WdfEvtIoDefault @ 0x1C0003D90 (Control_WdfEvtIoDefault.c)
 *     Control_Transfer_Map @ 0x1C00040AC (Control_Transfer_Map.c)
 *     Interrupter_WdfEvtInterruptIsr @ 0x1C00053F0 (Interrupter_WdfEvtInterruptIsr.c)
 *     Command_HandleCommandCompletionEvent @ 0x1C0006588 (Command_HandleCommandCompletionEvent.c)
 *     Command_SendCommand @ 0x1C00068E0 (Command_SendCommand.c)
 *     Controller_WdfEvtWatchdogTimerFunc @ 0x1C0009430 (Controller_WdfEvtWatchdogTimerFunc.c)
 *     Interrupter_WdfEvtInterruptDisable @ 0x1C000A000 (Interrupter_WdfEvtInterruptDisable.c)
 *     Bulk_EP_StartMapping @ 0x1C000BFE0 (Bulk_EP_StartMapping.c)
 *     Bulk_WdfEvtIoQueueReadyNotification @ 0x1C000C2D0 (Bulk_WdfEvtIoQueueReadyNotification.c)
 *     Bulk_MapStage @ 0x1C000CC1C (Bulk_MapStage.c)
 *     Control_EP_StartMapping @ 0x1C000E2A0 (Control_EP_StartMapping.c)
 *     Interrupter_WdfEvtInterruptEnable @ 0x1C000E8B0 (Interrupter_WdfEvtInterruptEnable.c)
 *     RootHub_AcquireReadModifyWriteLock @ 0x1C0012CF4 (RootHub_AcquireReadModifyWriteLock.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x1C002DAE4 (Command_HandleCommandRingStoppedEvent.c)
 *     Interrupter_WdfEvtInterruptWorkItem @ 0x1C003B730 (Interrupter_WdfEvtInterruptWorkItem.c)
 *     Control_WdfEvtWorkItemForTransferCompletion @ 0x1C003FDC0 (Control_WdfEvtWorkItemForTransferCompletion.c)
 *     Isoch_WdfEvtWorkItemForTransferCompletion @ 0x1C0042910 (Isoch_WdfEvtWorkItemForTransferCompletion.c)
 *     Bulk_WdfEvtWorkItemForTransferCompletion @ 0x1C00441C0 (Bulk_WdfEvtWorkItemForTransferCompletion.c)
 *     ESM_SmWorker @ 0x1C004E8A0 (ESM_SmWorker.c)
 *     SecureDmaEnabler_FreeCommonBufferPage @ 0x1C004F2F8 (SecureDmaEnabler_FreeCommonBufferPage.c)
 *     SecureDmaEnabler_PrepareMemoryForDma @ 0x1C004F368 (SecureDmaEnabler_PrepareMemoryForDma.c)
 *     SecureDmaEnabler_ReleaseResourcesAfterDma @ 0x1C004F4C0 (SecureDmaEnabler_ReleaseResourcesAfterDma.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C004F778 (SecureChannel_SendRequestSynchronously.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000E688 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 *     Controller_ReportFatalError @ 0x1C00323C0 (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_sds @ 0x1C003567C (WPP_RECORDER_SF_sds.c)
 */

void __fastcall Controller_LowerAndTrackIrql(_QWORD *a1)
{
  ULONG CurrentProcessorNumber; // eax
  int CurrentIrql; // edx
  __int64 v4; // r9
  int v5; // edx
  KIRQL v6; // cl
  ULONG_PTR v7; // rax
  ULONG_PTR v8; // rax
  char v9; // al
  int v10; // edx
  int v11; // r8d
  int v12; // r9d
  int BugCheckParameter4; // [rsp+20h] [rbp-28h]

  CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
  CurrentIrql = KeGetCurrentIrql();
  if ( (_BYTE)CurrentIrql == 2 )
  {
    if ( CurrentProcessorNumber >= *((_DWORD *)a1 + 200) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(CurrentIrql) = 2;
        WPP_RECORDER_SF_d(
          a1[9],
          CurrentIrql,
          4,
          308,
          (__int64)&WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids,
          CurrentProcessorNumber);
      }
      v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 264))(WdfDriverGlobals, *a1);
      KeBugCheckEx(0x144u, 4uLL, v7, 2uLL, 1uLL);
    }
    v4 = a1[99];
    v5 = 0;
    v6 = *(_BYTE *)(v4 + 2LL * CurrentProcessorNumber + 1);
    if ( !*(_BYTE *)(v4 + 2LL * CurrentProcessorNumber) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = 2;
        WPP_RECORDER_SF_d(
          a1[9],
          v5,
          4,
          309,
          (__int64)&WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids,
          CurrentProcessorNumber);
      }
      v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 264))(WdfDriverGlobals, *a1);
      KeBugCheckEx(0x144u, 4uLL, v8, 2uLL, 2uLL);
    }
    *(_BYTE *)(v4 + 2LL * CurrentProcessorNumber) = 0;
    *(_BYTE *)(a1[99] + 2LL * CurrentProcessorNumber + 1) = -1;
    KeLowerIrql(v6);
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = KeGetCurrentIrql();
      LOBYTE(CurrentIrql) = 2;
      WPP_RECORDER_SF_d(a1[9], CurrentIrql, 4, 310, (__int64)&WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids, v9);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_sds(
          WPP_GLOBAL_Control->DeviceExtension,
          v10,
          v11,
          v12,
          BugCheckParameter4,
          (__int64)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c",
          205,
          (__int64)"Expected to be called at DISPATCH_LEVEL.");
    }
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
    Controller_ReportFatalError((_DWORD)a1, 0, 4136, 0, 0LL, 0LL, 0LL);
  }
}
