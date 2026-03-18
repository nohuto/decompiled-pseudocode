/*
 * XREFs of ExEnterPriorityRegionAndAcquireResourceExclusive @ 0x14063D1F0
 * Callers:
 *     DifExEnterPriorityRegionAndAcquireResourceExclusiveWrapper @ 0x1406083A0 (DifExEnterPriorityRegionAndAcquireResourceExclusiveWrapper.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x1402ACD80 (PsBoostThreadIoEx.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 */

PVOID __fastcall ExEnterPriorityRegionAndAcquireResourceExclusive(PERESOURCE Resource)
{
  struct _KTHREAD *CurrentThread; // rdi

  CurrentThread = KeGetCurrentThread();
  PsBoostThreadIoEx((__int64)CurrentThread, 0, 0, 0LL);
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(Resource, 1u);
  return CurrentThread->WaitBlock[2].SparePtr;
}
