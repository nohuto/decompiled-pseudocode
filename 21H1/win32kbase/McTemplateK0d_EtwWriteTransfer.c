/*
 * XREFs of McTemplateK0d_EtwWriteTransfer @ 0x1C01300D0
 * Callers:
 *     EtwTraceDwmSyncFlushForceRenderAndWaitForBatchEnd @ 0x1C0049660 (EtwTraceDwmSyncFlushForceRenderAndWaitForBatchEnd.c)
 *     EtwTraceDwmSyncFlushForceRenderAndWaitForBatchBegin @ 0x1C0049680 (EtwTraceDwmSyncFlushForceRenderAndWaitForBatchBegin.c)
 *     EtwTracePowerOnMonitorEnd @ 0x1C0053B50 (EtwTracePowerOnMonitorEnd.c)
 *     EtwTracPowerOnMonitoreBegin @ 0x1C0053ED8 (EtwTracPowerOnMonitoreBegin.c)
 *     EtwTraceWinlogonSleepStartEvent @ 0x1C00C98D0 (EtwTraceWinlogonSleepStartEvent.c)
 *     EtwTraceWinlogonSleepEndEvent @ 0x1C00CA170 (EtwTraceWinlogonSleepEndEvent.c)
 *     EtwTracePowerOnGdiEnd @ 0x1C00CBF90 (EtwTracePowerOnGdiEnd.c)
 *     EtwTracexxxUserResetDisplayDeviceEnd @ 0x1C00CC0D0 (EtwTracexxxUserResetDisplayDeviceEnd.c)
 *     EtwTracexxxUserResetDisplayDeviceBegin @ 0x1C00CC0F0 (EtwTracexxxUserResetDisplayDeviceBegin.c)
 *     EtwTracePowerOnGdiBegin @ 0x1C00CC110 (EtwTracePowerOnGdiBegin.c)
 *     EtwTraceContactVisualizationInfo @ 0x1C012DBA0 (EtwTraceContactVisualizationInfo.c)
 *     EtwTraceConvertibleState @ 0x1C012DC40 (EtwTraceConvertibleState.c)
 *     EtwTraceDockState @ 0x1C012DE00 (EtwTraceDockState.c)
 *     EtwTraceEdgyDetectionStop @ 0x1C012DEC0 (EtwTraceEdgyDetectionStop.c)
 *     EtwTracePointerDeviceTransformationStart @ 0x1C012E810 (EtwTracePointerDeviceTransformationStart.c)
 *     EtwTracePointerDeviceTransformationStop @ 0x1C012E840 (EtwTracePointerDeviceTransformationStop.c)
 *     EtwTracePointerPredictionStart @ 0x1C012E8D0 (EtwTracePointerPredictionStart.c)
 *     EtwTracePointerPredictionStop @ 0x1C012E900 (EtwTracePointerPredictionStop.c)
 *     EtwTraceScreenSaverProcessEvent @ 0x1C012E9EC (EtwTraceScreenSaverProcessEvent.c)
 *     EtwTraceTouchPadConfidenceUpped @ 0x1C012ECF0 (EtwTraceTouchPadConfidenceUpped.c)
 *     EtwTraceTouchPadTypeDiscovered @ 0x1C012EF10 (EtwTraceTouchPadTypeDiscovered.c)
 *     EtwTraceSPIBlockedByFiltering @ 0x1C01562A0 (EtwTraceSPIBlockedByFiltering.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C00A2A70 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0d_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, int a4)
{
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+30h] [rbp-38h] BYREF
  int *v6; // [rsp+40h] [rbp-28h]
  int v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+4Ch] [rbp-1Ch]
  int v9; // [rsp+88h] [rbp+20h] BYREF

  v9 = a4;
  v6 = &v9;
  v8 = 0;
  v7 = 4;
  return McGenEventWrite_EtwWriteTransfer(a1, a2, &W32kControlGuid, 2u, &v5);
}
