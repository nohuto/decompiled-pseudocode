/*
 * XREFs of PopBatteryAcquireExclusiveLock @ 0x1408EF5D4
 * Callers:
 *     PopBatteryWorker @ 0x14077BA30 (PopBatteryWorker.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x14036343C (PopAcquireRwLockExclusive.c)
 */

struct _KTHREAD *PopBatteryAcquireExclusiveLock()
{
  return PopAcquireRwLockExclusive((ULONG_PTR)&PopCB);
}
