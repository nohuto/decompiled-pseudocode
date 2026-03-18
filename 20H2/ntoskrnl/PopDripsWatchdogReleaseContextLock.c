/*
 * XREFs of PopDripsWatchdogReleaseContextLock @ 0x1408F1CC0
 * Callers:
 *     PopDripsWatchdogCallbackWorker @ 0x1408F1780 (PopDripsWatchdogCallbackWorker.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 */

_QWORD *__fastcall PopDripsWatchdogReleaseContextLock(struct _ERESOURCE *a1)
{
  ExReleaseResourceLite(a1);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
