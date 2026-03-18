/*
 * XREFs of KiSynchronizePassiveInterruptExecution @ 0x140520320
 * Callers:
 *     KeSynchronizeExecution @ 0x1403FD280 (KeSynchronizeExecution.c)
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

char __fastcall KiSynchronizePassiveInterruptExecution(__int64 a1, __int64 (__fastcall *a2)(__int64), __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  KeWaitForSingleObject(*(PVOID *)(a1 + 128), Executive, 0, 0, 0LL);
  LOBYTE(a3) = a2(a3);
  KeSetEvent(*(PRKEVENT *)(a1 + 128), 0, 0);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return a3;
}
