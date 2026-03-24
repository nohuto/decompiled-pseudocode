/*
 * XREFs of PopAcquireIrpWorkerLock @ 0x140577BD0
 * Callers:
 *     PopIrpWorker @ 0x14039FE70 (PopIrpWorker.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14034A080 (ExAcquireFastMutex.c)
 */

void PopAcquireIrpWorkerLock()
{
  ExAcquireFastMutex(&PopIrpWorkerMutex);
}
