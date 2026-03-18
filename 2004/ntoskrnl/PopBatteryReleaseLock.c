/*
 * XREFs of PopBatteryReleaseLock @ 0x1408EA1F4
 * Callers:
 *     PopBatteryWorker @ 0x14076D000 (PopBatteryWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402985D4 (PopReleaseRwLock.c)
 */

void PopBatteryReleaseLock()
{
  PopReleaseRwLock((ULONG_PTR)&PopCB);
}
