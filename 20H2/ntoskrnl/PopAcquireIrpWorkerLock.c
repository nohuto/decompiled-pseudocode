/*
 * XREFs of PopAcquireIrpWorkerLock @ 0x1405761C0
 * Callers:
 *     PopIrpWorker @ 0x14039C4D0 (PopIrpWorker.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140220130 (ExAcquireFastMutex.c)
 */

void PopAcquireIrpWorkerLock()
{
  ExAcquireFastMutex(&PopIrpWorkerMutex);
}
