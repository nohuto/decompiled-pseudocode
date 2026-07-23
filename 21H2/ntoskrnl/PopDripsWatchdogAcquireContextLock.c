/*
 * XREFs of PopDripsWatchdogAcquireContextLock @ 0x1408EEF10
 * Callers:
 *     PopDripsWatchdogCallbackWorker @ 0x1408EF0E0 (PopDripsWatchdogCallbackWorker.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 */

BOOLEAN __fastcall PopDripsWatchdogAcquireContextLock(struct _ERESOURCE *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceExclusiveLite(a1, 1u);
}
