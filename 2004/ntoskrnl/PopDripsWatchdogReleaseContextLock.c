/*
 * XREFs of PopDripsWatchdogReleaseContextLock @ 0x1408EC0B0
 * Callers:
 *     PopDripsWatchdogCallbackWorker @ 0x1408EBB70 (PopDripsWatchdogCallbackWorker.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 */

_QWORD *__fastcall PopDripsWatchdogReleaseContextLock(struct _ERESOURCE *a1)
{
  ExReleaseResourceLite(a1);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
