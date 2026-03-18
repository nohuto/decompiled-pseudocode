/*
 * XREFs of PopReleaseIrpWorkerLock @ 0x14057215C
 * Callers:
 *     PopIrpWorker @ 0x14039C950 (PopIrpWorker.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140263BB0 (KeReleaseGuardedMutex.c)
 */

void PopReleaseIrpWorkerLock()
{
  KeReleaseGuardedMutex(&PopIrpWorkerMutex);
}
