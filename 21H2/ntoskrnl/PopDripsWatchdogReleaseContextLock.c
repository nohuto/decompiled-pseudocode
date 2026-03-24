/*
 * XREFs of PopDripsWatchdogReleaseContextLock @ 0x1408EF4C0
 * Callers:
 *     PopDripsWatchdogCallbackWorker @ 0x1408EEF80 (PopDripsWatchdogCallbackWorker.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14034B3F0 (ExReleaseResourceLite.c)
 */

_QWORD *__fastcall PopDripsWatchdogReleaseContextLock(struct _ERESOURCE *a1)
{
  ExReleaseResourceLite(a1);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
