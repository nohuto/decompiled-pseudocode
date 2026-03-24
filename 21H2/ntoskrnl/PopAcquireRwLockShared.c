/*
 * XREFs of PopAcquireRwLockShared @ 0x1402846AC
 * Callers:
 *     PopThermalTraceRundownEvents @ 0x14028459C (PopThermalTraceRundownEvents.c)
 *     PopBatteryWorker @ 0x14077F810 (PopBatteryWorker.c)
 *     PoThermalCounterSetCallback @ 0x1408E79C0 (PoThermalCounterSetCallback.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14034AB50 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall PopAcquireRwLockShared(ULONG_PTR a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquirePushLockSharedEx(a1, 0LL);
}
