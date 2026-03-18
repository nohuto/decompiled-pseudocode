/*
 * XREFs of PopReleaseIrpWorkerLock @ 0x1405761DC
 * Callers:
 *     PopIrpWorker @ 0x14039C4D0 (PopIrpWorker.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14021ECD0 (KeReleaseGuardedMutex.c)
 */

void PopReleaseIrpWorkerLock()
{
  KeReleaseGuardedMutex(&PopIrpWorkerMutex);
}
