/*
 * XREFs of rimNormalApcIoUnregisterPlugPlayNotificationEx @ 0x1C0023830
 * Callers:
 *     <none>
 * Callees:
 *     rimApcIoUnregisterPlugPlayNotificationExWorker @ 0x1C002394C (rimApcIoUnregisterPlugPlayNotificationExWorker.c)
 */

__int64 __fastcall rimNormalApcIoUnregisterPlugPlayNotificationEx(__int64 a1)
{
  return rimApcIoUnregisterPlugPlayNotificationExWorker(a1 - 88);
}
