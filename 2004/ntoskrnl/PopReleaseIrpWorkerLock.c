/*
 * XREFs of PopReleaseIrpWorkerLock @ 0x1405727AC
 * Callers:
 *     PopIrpWorker @ 0x14039D0E0 (PopIrpWorker.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14020AC90 (KeReleaseGuardedMutex.c)
 */

void PopReleaseIrpWorkerLock()
{
  KeReleaseGuardedMutex(&PopIrpWorkerMutex);
}
