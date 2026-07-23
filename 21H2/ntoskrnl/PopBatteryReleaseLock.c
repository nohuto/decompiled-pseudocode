/*
 * XREFs of PopBatteryReleaseLock @ 0x1408ED764
 * Callers:
 *     PopBatteryWorker @ 0x14077F9D0 (PopBatteryWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14026A224 (PopReleaseRwLock.c)
 */

void PopBatteryReleaseLock()
{
  PopReleaseRwLock((ULONG_PTR)&PopCB);
}
