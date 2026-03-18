/*
 * XREFs of KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140296D60
 * Callers:
 *     MiDeleteClusterSection @ 0x14034A680 (MiDeleteClusterSection.c)
 *     CcSerializeWithLazyWriter @ 0x1403EFA24 (CcSerializeWithLazyWriter.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x1403F42B0 (MiChangePageAttributeLargeFreeZeroPage.c)
 *     MiLargePageMovesComplete @ 0x1403F5584 (MiLargePageMovesComplete.c)
 *     MiLargePagePromote @ 0x1403F55FC (MiLargePagePromote.c)
 *     MiUnlinkNodeLargePages @ 0x1403F594C (MiUnlinkNodeLargePages.c)
 *     ExShareAddressSpaceWithDevice @ 0x1405B5850 (ExShareAddressSpaceWithDevice.c)
 *     PnprMirrorMarkedPages @ 0x1409B112C (PnprMirrorMarkedPages.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x1402950A0 (KxWaitForLockOwnerShip.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051488C (KiAcquireQueuedSpinLockInstrumented.c)
 */

void __stdcall KeAcquireInStackQueuedSpinLockAtDpcLevel(PKSPIN_LOCK SpinLock, PKLOCK_QUEUE_HANDLE LockHandle)
{
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  _QWORD *v6; // rdx
  int v7; // eax

  LockHandle->LockQueue.Lock = SpinLock;
  LockHandle->LockQueue.Next = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v7 = SchedulerAssist[6];
      SchedulerAssist[6] = v7 + 1;
      if ( v7 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(LockHandle, SpinLock);
  }
  else
  {
    v6 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)SpinLock, (__int64)LockHandle);
    if ( v6 )
      KxWaitForLockOwnerShip((__int64)LockHandle, v6);
  }
}
