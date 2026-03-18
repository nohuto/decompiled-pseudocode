/*
 * XREFs of ExEnterCriticalRegionAndAcquireSharedWaitForExclusive @ 0x1405B3950
 * Callers:
 *     VerifierExEnterCriticalRegionAndAcquireSharedWaitForExclusive @ 0x1409D4B70 (VerifierExEnterCriticalRegionAndAcquireSharedWaitForExclusive.c)
 * Callees:
 *     ExAcquireSharedWaitForExclusive @ 0x1405B3370 (ExAcquireSharedWaitForExclusive.c)
 */

PVOID __stdcall ExEnterCriticalRegionAndAcquireSharedWaitForExclusive(PERESOURCE Resource)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireSharedWaitForExclusive(Resource, 1u);
  return KeGetCurrentThread()->WaitBlock[2].SparePtr;
}
