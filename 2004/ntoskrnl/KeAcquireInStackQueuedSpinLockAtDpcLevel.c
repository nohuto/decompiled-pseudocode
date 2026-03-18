/*
 * XREFs of KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402BED20
 * Callers:
 *     MiDeleteClusterSection @ 0x1402273C0 (MiDeleteClusterSection.c)
 *     CcSerializeWithLazyWriter @ 0x1403ECEF4 (CcSerializeWithLazyWriter.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x1403EFD9C (MiChangePageAttributeLargeFreeZeroPage.c)
 *     MiLargePageMovesComplete @ 0x1403F1070 (MiLargePageMovesComplete.c)
 *     MiLargePagePromote @ 0x1403F10E8 (MiLargePagePromote.c)
 *     MiUnlinkNodeLargePages @ 0x1403F1438 (MiUnlinkNodeLargePages.c)
 *     ExShareAddressSpaceWithDevice @ 0x1405B1CF0 (ExShareAddressSpaceWithDevice.c)
 *     PnprMirrorMarkedPages @ 0x1409AB1BC (PnprMirrorMarkedPages.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x1402C0EA0 (KxWaitForLockOwnerShip.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140510F5C (KiAcquireQueuedSpinLockInstrumented.c)
 */

void __stdcall KeAcquireInStackQueuedSpinLockAtDpcLevel(PKSPIN_LOCK SpinLock, PKLOCK_QUEUE_HANDLE LockHandle)
{
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v6; // eax

  LockHandle->LockQueue.Lock = SpinLock;
  LockHandle->LockQueue.Next = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v6 = SchedulerAssist[6];
      SchedulerAssist[6] = v6 + 1;
      if ( v6 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(LockHandle, SpinLock);
  }
  else if ( _InterlockedExchange64((volatile __int64 *)SpinLock, (__int64)LockHandle) )
  {
    KxWaitForLockOwnerShip(LockHandle);
  }
}
