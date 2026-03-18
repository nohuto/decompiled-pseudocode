/*
 * XREFs of PopBatteryAcquireExclusiveLock @ 0x1408E8744
 * Callers:
 *     PopBatteryWorker @ 0x14076A860 (PopBatteryWorker.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x14035D404 (PopAcquireRwLockExclusive.c)
 */

struct _KTHREAD *PopBatteryAcquireExclusiveLock()
{
  return PopAcquireRwLockExclusive((ULONG_PTR)&PopCB);
}
