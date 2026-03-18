/*
 * XREFs of PopDripsWatchdogAcquireContextLock @ 0x1408EB9A0
 * Callers:
 *     PopDripsWatchdogCallbackWorker @ 0x1408EBB70 (PopDripsWatchdogCallbackWorker.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140208CF0 (ExAcquireResourceExclusiveLite.c)
 */

BOOLEAN __fastcall PopDripsWatchdogAcquireContextLock(struct _ERESOURCE *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceExclusiveLite(a1, 1u);
}
