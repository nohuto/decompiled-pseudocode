/*
 * XREFs of PopDripsWatchdogAcquireContextLock @ 0x1408F15B0
 * Callers:
 *     PopDripsWatchdogCallbackWorker @ 0x1408F1780 (PopDripsWatchdogCallbackWorker.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140221C70 (ExAcquireResourceExclusiveLite.c)
 */

BOOLEAN __fastcall PopDripsWatchdogAcquireContextLock(struct _ERESOURCE *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceExclusiveLite(a1, 1u);
}
