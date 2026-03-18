/*
 * XREFs of ExEnterPriorityRegionAndAcquireResourceExclusive @ 0x1405AF710
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     PsBoostThreadIoEx @ 0x140263860 (PsBoostThreadIoEx.c)
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
