/*
 * XREFs of UsbhInitRetryTimer @ 0x1C00436A0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhQueueWorkItemWithRetry @ 0x1C000BEB0 (UsbhQueueWorkItemWithRetry.c)
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E0B4 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall UsbhInitRetryTimer(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  FdoExt(a2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xAu,
      (__int64)&WPP_ec3ff651113137de15f233520a661d88_Traceguids);
  return UsbhQueueWorkItemWithRetry(a2, 0LL, (int)UsbhInitCallbackWorker, 1u, a4, 0, 1230468211);
}
