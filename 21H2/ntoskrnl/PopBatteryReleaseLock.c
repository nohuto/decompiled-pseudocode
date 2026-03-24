/*
 * XREFs of PopBatteryReleaseLock @ 0x1408ED604
 * Callers:
 *     PopBatteryWorker @ 0x14077F810 (PopBatteryWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14027C284 (PopReleaseRwLock.c)
 */

void PopBatteryReleaseLock()
{
  PopReleaseRwLock((ULONG_PTR)&PopCB);
}
