/*
 * XREFs of PiSwLock @ 0x1407470C4
 * Callers:
 *     PipEnumerateCompleted @ 0x140745380 (PipEnumerateCompleted.c)
 *     PiSwIrpInterfaceRegister @ 0x14074D118 (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpStartCreateWorker @ 0x14074DBB8 (PiSwIrpStartCreateWorker.c)
 *     PiSwIrpInterfaceSetState @ 0x1407CEDBC (PiSwIrpInterfaceSetState.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14034BBA0 (ExAcquireResourceExclusiveLite.c)
 */

BOOLEAN PiSwLock()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
}
