/*
 * XREFs of Controller_RaiseAndTrackIrql @ 0x1C0005358
 * Callers:
 *     Isoch_EP_StartMapping @ 0x1C0001C90 (Isoch_EP_StartMapping.c)
 *     Isoch_MapStage @ 0x1C0003780 (Isoch_MapStage.c)
 *     Control_WdfEvtIoDefault @ 0x1C0003DB0 (Control_WdfEvtIoDefault.c)
 *     Control_Transfer_Map @ 0x1C00040CC (Control_Transfer_Map.c)
 *     Interrupter_WdfEvtInterruptIsr @ 0x1C00053F0 (Interrupter_WdfEvtInterruptIsr.c)
 *     Command_HandleCommandCompletionEvent @ 0x1C0006928 (Command_HandleCommandCompletionEvent.c)
 *     Command_SendCommand @ 0x1C0006C80 (Command_SendCommand.c)
 *     Interrupter_WdfEvtInterruptDisable @ 0x1C000A840 (Interrupter_WdfEvtInterruptDisable.c)
 *     Bulk_EP_StartMapping @ 0x1C000C8B0 (Bulk_EP_StartMapping.c)
 *     Bulk_WdfEvtIoQueueReadyNotification @ 0x1C000CBA0 (Bulk_WdfEvtIoQueueReadyNotification.c)
 *     Bulk_MapStage @ 0x1C000D4EC (Bulk_MapStage.c)
 *     Control_EP_StartMapping @ 0x1C000ED30 (Control_EP_StartMapping.c)
 *     Interrupter_WdfEvtInterruptEnable @ 0x1C000F340 (Interrupter_WdfEvtInterruptEnable.c)
 *     RootHub_ReleaseReadModifyWriteLock @ 0x1C0011EE0 (RootHub_ReleaseReadModifyWriteLock.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x1C002EFA4 (Command_HandleCommandRingStoppedEvent.c)
 *     Interrupter_WdfEvtInterruptWorkItem @ 0x1C003CC10 (Interrupter_WdfEvtInterruptWorkItem.c)
 *     Control_WdfEvtWorkItemForTransferCompletion @ 0x1C00412A0 (Control_WdfEvtWorkItemForTransferCompletion.c)
 *     Isoch_WdfEvtWorkItemForTransferCompletion @ 0x1C0043E00 (Isoch_WdfEvtWorkItemForTransferCompletion.c)
 *     Bulk_WdfEvtWorkItemForTransferCompletion @ 0x1C00456B0 (Bulk_WdfEvtWorkItemForTransferCompletion.c)
 *     ESM_SmWorker @ 0x1C004F3D0 (ESM_SmWorker.c)
 *     SecureDmaEnabler_FreeCommonBufferPage @ 0x1C004FE68 (SecureDmaEnabler_FreeCommonBufferPage.c)
 *     SecureDmaEnabler_PrepareMemoryForDma @ 0x1C004FED8 (SecureDmaEnabler_PrepareMemoryForDma.c)
 *     SecureDmaEnabler_ReleaseResourcesAfterDma @ 0x1C0050030 (SecureDmaEnabler_ReleaseResourcesAfterDma.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C00502E8 (SecureChannel_SendRequestSynchronously.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000A0B8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C000F118 (WPP_RECORDER_SF_d.c)
 *     Controller_ReportFatalError @ 0x1C00338A0 (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_sds @ 0x1C0036B5C (WPP_RECORDER_SF_sds.c)
 */

char __fastcall Controller_RaiseAndTrackIrql(__int64 a1)
{
  char v2; // si
  KIRQL v3; // bp
  ULONG CurrentProcessorNumber; // eax
  int v5; // edx
  int v7; // edx
  int v8; // r8d
  int v9; // r9d
  int v10; // edx
  int v11; // r8d
  int v12; // r9d
  int v13; // [rsp+20h] [rbp-28h]
  int v14; // [rsp+20h] [rbp-28h]

  v2 = 0;
  if ( KeGetCurrentIrql() == 2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 2, 4, 306, (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_sds(
          WPP_GLOBAL_Control->DeviceExtension,
          v7,
          v8,
          v9,
          v13,
          (__int64)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c",
          123,
          (__int64)"Not expected to be called at DISPATCH_LEVEL.");
    }
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
    Controller_ReportFatalError(a1, 0, 4134, 0, 0LL, 0LL, 0LL);
  }
  else
  {
    v2 = 1;
    v3 = KfRaiseIrql(2u);
    CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
    if ( CurrentProcessorNumber >= *(_DWORD *)(a1 + 816) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a1 + 72),
          v5,
          4,
          307,
          (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids,
          CurrentProcessorNumber);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_sds(
            WPP_GLOBAL_Control->DeviceExtension,
            v10,
            v11,
            v12,
            v14,
            (__int64)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c",
            151,
            (__int64)"Processor index out of range.");
      }
      if ( !KdRefreshDebuggerNotPresent() )
        __debugbreak();
      Controller_ReportFatalError(a1, 0, 4135, 0, 0LL, 0LL, 0LL);
      KeLowerIrql(v3);
      return 0;
    }
    else
    {
      *(_BYTE *)(*(_QWORD *)(a1 + 808) + 2LL * CurrentProcessorNumber) = 1;
      *(_BYTE *)(*(_QWORD *)(a1 + 808) + 2LL * CurrentProcessorNumber + 1) = v3;
    }
  }
  return v2;
}
