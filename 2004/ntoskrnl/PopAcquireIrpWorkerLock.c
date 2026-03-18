/*
 * XREFs of PopAcquireIrpWorkerLock @ 0x140572790
 * Callers:
 *     PopIrpWorker @ 0x14039D0E0 (PopIrpWorker.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402071B0 (ExAcquireFastMutex.c)
 */

void PopAcquireIrpWorkerLock()
{
  ExAcquireFastMutex(&PopIrpWorkerMutex);
}
