/*
 * XREFs of PiSwLock @ 0x14072C754
 * Callers:
 *     PipEnumerateCompleted @ 0x14072AA10 (PipEnumerateCompleted.c)
 *     PiSwIrpInterfaceRegister @ 0x140752F94 (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpStartCreateWorker @ 0x140753958 (PiSwIrpStartCreateWorker.c)
 *     PiSwIrpInterfaceSetState @ 0x1407B90FC (PiSwIrpInterfaceSetState.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 */

BOOLEAN PiSwLock()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
}
