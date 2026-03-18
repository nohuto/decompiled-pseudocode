/*
 * XREFs of PopBatteryReleaseLock @ 0x1408EFE04
 * Callers:
 *     PopBatteryWorker @ 0x14077BA30 (PopBatteryWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14033E5A4 (PopReleaseRwLock.c)
 */

void PopBatteryReleaseLock()
{
  PopReleaseRwLock((ULONG_PTR)&PopCB);
}
