/*
 * XREFs of PiSwLock @ 0x140747284
 * Callers:
 *     PipEnumerateCompleted @ 0x140745540 (PipEnumerateCompleted.c)
 *     PiSwIrpInterfaceRegister @ 0x14074D2D8 (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpStartCreateWorker @ 0x14074DD78 (PiSwIrpStartCreateWorker.c)
 *     PiSwIrpInterfaceSetState @ 0x1407CEF2C (PiSwIrpInterfaceSetState.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 */

BOOLEAN PiSwLock()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
}
