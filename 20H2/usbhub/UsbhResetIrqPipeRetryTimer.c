/*
 * XREFs of UsbhResetIrqPipeRetryTimer @ 0x1C0038EF0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhQueueWorkItemWithRetry @ 0x1C000BEB0 (UsbhQueueWorkItemWithRetry.c)
 */

__int64 __fastcall UsbhResetIrqPipeRetryTimer(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  return UsbhQueueWorkItemWithRetry(a2, 0LL, (int)UsbhHubResetIrqPipeWorker, 0, a4, a3, 1230467689);
}
