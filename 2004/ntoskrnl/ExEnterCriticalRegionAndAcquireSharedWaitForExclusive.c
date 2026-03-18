/*
 * XREFs of ExEnterCriticalRegionAndAcquireSharedWaitForExclusive @ 0x1405AFDF0
 * Callers:
 *     VerifierExEnterCriticalRegionAndAcquireSharedWaitForExclusive @ 0x1409CEB50 (VerifierExEnterCriticalRegionAndAcquireSharedWaitForExclusive.c)
 * Callees:
 *     ExAcquireSharedWaitForExclusive @ 0x1405AF810 (ExAcquireSharedWaitForExclusive.c)
 */

PVOID __stdcall ExEnterCriticalRegionAndAcquireSharedWaitForExclusive(PERESOURCE Resource)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireSharedWaitForExclusive(Resource, 1u);
  return KeGetCurrentThread()->WaitBlock[2].SparePtr;
}
