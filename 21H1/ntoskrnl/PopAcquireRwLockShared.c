/*
 * XREFs of PopAcquireRwLockShared @ 0x14033C450
 * Callers:
 *     PopThermalTraceRundownEvents @ 0x14033C340 (PopThermalTraceRundownEvents.c)
 *     PopBatteryWorker @ 0x14076A860 (PopBatteryWorker.c)
 *     PoThermalCounterSetCallback @ 0x1408E3330 (PoThermalCounterSetCallback.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall PopAcquireRwLockShared(ULONG_PTR a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquirePushLockSharedEx(a1, 0LL);
}
