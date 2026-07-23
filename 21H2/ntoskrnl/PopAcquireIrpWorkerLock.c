/*
 * XREFs of PopAcquireIrpWorkerLock @ 0x140577E10
 * Callers:
 *     PopIrpWorker @ 0x14039FFC0 (PopIrpWorker.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140354DD0 (ExAcquireFastMutex.c)
 */

void PopAcquireIrpWorkerLock()
{
  ExAcquireFastMutex(&PopIrpWorkerMutex);
}
