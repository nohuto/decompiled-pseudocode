/*
 * XREFs of PopAcquireRwLockShared @ 0x140278790
 * Callers:
 *     PopThermalTraceRundownEvents @ 0x140278680 (PopThermalTraceRundownEvents.c)
 *     PopBatteryWorker @ 0x14076D000 (PopBatteryWorker.c)
 *     PoThermalCounterSetCallback @ 0x1408E45B0 (PoThermalCounterSetCallback.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall PopAcquireRwLockShared(ULONG_PTR a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquirePushLockSharedEx(a1, 0LL);
}
