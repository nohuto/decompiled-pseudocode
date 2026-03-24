/*
 * XREFs of PopBatteryAcquireExclusiveLock @ 0x1408ECDD4
 * Callers:
 *     PopBatteryWorker @ 0x14077F810 (PopBatteryWorker.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140281AD4 (PopAcquireRwLockExclusive.c)
 */

struct _KTHREAD *PopBatteryAcquireExclusiveLock()
{
  return PopAcquireRwLockExclusive((ULONG_PTR)&PopCB);
}
