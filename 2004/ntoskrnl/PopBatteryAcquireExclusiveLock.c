/*
 * XREFs of PopBatteryAcquireExclusiveLock @ 0x1408E99C4
 * Callers:
 *     PopBatteryWorker @ 0x14076D000 (PopBatteryWorker.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x1402DF2F4 (PopAcquireRwLockExclusive.c)
 */

struct _KTHREAD *PopBatteryAcquireExclusiveLock()
{
  return PopAcquireRwLockExclusive((ULONG_PTR)&PopCB);
}
