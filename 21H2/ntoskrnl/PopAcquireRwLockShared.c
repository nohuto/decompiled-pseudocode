/*
 * XREFs of PopAcquireRwLockShared @ 0x140272D04
 * Callers:
 *     PopThermalTraceRundownEvents @ 0x140272BF4 (PopThermalTraceRundownEvents.c)
 *     PopBatteryWorker @ 0x14077F9D0 (PopBatteryWorker.c)
 *     PoThermalCounterSetCallback @ 0x1408E7B20 (PoThermalCounterSetCallback.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall PopAcquireRwLockShared(ULONG_PTR a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquirePushLockSharedEx(a1, 0LL);
}
