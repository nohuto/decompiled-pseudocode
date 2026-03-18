/*
 * XREFs of CcMdlWriteAbort @ 0x1404E9FE0
 * Callers:
 *     <none>
 * Callees:
 *     IoFreeMdl @ 0x14020A410 (IoFreeMdl.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MmUnlockPages @ 0x1402936A0 (MmUnlockPages.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     CcDecrementOpenCount @ 0x14029A71C (CcDecrementOpenCount.c)
 *     CcGetPartition @ 0x14029ADE0 (CcGetPartition.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

void __stdcall CcMdlWriteAbort(PFILE_OBJECT FileObject, PMDL MdlChain)
{
  CSHORT MdlFlags; // di
  PMDL v3; // rbx
  __int16 v4; // di
  _QWORD *SharedCacheMap; // rbp
  struct _MDL *Next; // rsi
  __int64 Partition; // rax
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  MdlFlags = MdlChain->MdlFlags;
  v3 = MdlChain;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = MdlFlags & 2;
  SharedCacheMap = FileObject->SectionObjectPointer->SharedCacheMap;
  do
  {
    Next = v3->Next;
    if ( v4 )
      MmUnlockPages(v3);
    IoFreeMdl(v3);
    v3 = Next;
  }
  while ( Next );
  if ( v4 )
  {
    Partition = CcGetPartition(SharedCacheMap);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
    CcDecrementOpenCount((__int64)SharedCacheMap);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v12 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v13 = (v12 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v12;
          if ( v13 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
  }
}
