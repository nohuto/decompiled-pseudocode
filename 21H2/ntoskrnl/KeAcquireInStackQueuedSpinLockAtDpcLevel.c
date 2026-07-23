/*
 * XREFs of KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402D1370
 * Callers:
 *     MiDeleteClusterSection @ 0x14030B130 (MiDeleteClusterSection.c)
 *     CcSerializeWithLazyWriter @ 0x1403F0534 (CcSerializeWithLazyWriter.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x1403F5A4C (MiChangePageAttributeLargeFreeZeroPage.c)
 *     MiLargePageMovesComplete @ 0x1403F6D20 (MiLargePageMovesComplete.c)
 *     MiLargePagePromote @ 0x1403F6D98 (MiLargePagePromote.c)
 *     MiUnlinkNodeLargePages @ 0x1403F70E8 (MiUnlinkNodeLargePages.c)
 *     ExShareAddressSpaceWithDevice @ 0x1405B74B0 (ExShareAddressSpaceWithDevice.c)
 *     PnprMirrorMarkedPages @ 0x1409AEF5C (PnprMirrorMarkedPages.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x1402D36F0 (KxWaitForLockOwnerShip.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051660C (KiAcquireQueuedSpinLockInstrumented.c)
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
