/*
 * XREFs of PopAcquireRwLockShared @ 0x140330BEC
 * Callers:
 *     PopThermalTraceRundownEvents @ 0x140330ADC (PopThermalTraceRundownEvents.c)
 *     PopBatteryWorker @ 0x14077BA30 (PopBatteryWorker.c)
 *     PoThermalCounterSetCallback @ 0x1408EA1C0 (PoThermalCounterSetCallback.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall PopAcquireRwLockShared(ULONG_PTR a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquirePushLockSharedEx(a1, 0LL);
}
