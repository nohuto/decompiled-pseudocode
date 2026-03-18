/*
 * XREFs of PopAcquireIrpWorkerLock @ 0x140572140
 * Callers:
 *     PopIrpWorker @ 0x14039C950 (PopIrpWorker.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402600D0 (ExAcquireFastMutex.c)
 */

void PopAcquireIrpWorkerLock()
{
  ExAcquireFastMutex(&PopIrpWorkerMutex);
}
