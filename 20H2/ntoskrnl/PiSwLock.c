/*
 * XREFs of PiSwLock @ 0x140747260
 * Callers:
 *     PipEnumerateCompleted @ 0x1407342E0 (PipEnumerateCompleted.c)
 *     PiSwIrpStartCreateWorker @ 0x140746C88 (PiSwIrpStartCreateWorker.c)
 *     PiSwIrpInterfaceRegister @ 0x140746F1C (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpInterfaceSetState @ 0x1407CAAFC (PiSwIrpInterfaceSetState.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140221C70 (ExAcquireResourceExclusiveLite.c)
 */

BOOLEAN PiSwLock()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
}
