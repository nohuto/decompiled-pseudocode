/*
 * XREFs of PopBatteryReleaseLock @ 0x1408E8F74
 * Callers:
 *     PopBatteryWorker @ 0x14076A860 (PopBatteryWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140205C14 (PopReleaseRwLock.c)
 */

void PopBatteryReleaseLock()
{
  PopReleaseRwLock((ULONG_PTR)&PopCB);
}
