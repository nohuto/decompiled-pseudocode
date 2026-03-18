/*
 * XREFs of PopDripsWatchdogAcquireContextLock @ 0x1408EA720
 * Callers:
 *     PopDripsWatchdogCallbackWorker @ 0x1408EA8F0 (PopDripsWatchdogCallbackWorker.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 */

BOOLEAN __fastcall PopDripsWatchdogAcquireContextLock(struct _ERESOURCE *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceExclusiveLite(a1, 1u);
}
