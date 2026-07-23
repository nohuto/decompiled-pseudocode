/*
 * XREFs of PopDripsWatchdogReleaseContextLock @ 0x1408EF620
 * Callers:
 *     PopDripsWatchdogCallbackWorker @ 0x1408EF0E0 (PopDripsWatchdogCallbackWorker.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 */

_QWORD *__fastcall PopDripsWatchdogReleaseContextLock(struct _ERESOURCE *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9

  ExReleaseResourceLite(a1);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v1, v2, v3);
}
