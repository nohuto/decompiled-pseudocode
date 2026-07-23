/*
 * XREFs of PopBatteryAcquireExclusiveLock @ 0x1408ECF34
 * Callers:
 *     PopBatteryWorker @ 0x14077F9D0 (PopBatteryWorker.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x14026FD14 (PopAcquireRwLockExclusive.c)
 */

struct _KTHREAD *PopBatteryAcquireExclusiveLock()
{
  return PopAcquireRwLockExclusive((ULONG_PTR)&PopCB);
}
