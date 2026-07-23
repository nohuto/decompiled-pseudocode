/*
 * XREFs of CcMdlWriteAbort @ 0x1404EBDB0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     IoFreeMdl @ 0x14029A950 (IoFreeMdl.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     MmUnlockPages @ 0x1402E92C0 (MmUnlockPages.c)
 *     CcDecrementOpenCount @ 0x14031DE8C (CcDecrementOpenCount.c)
 *     CcGetPartition @ 0x14031E550 (CcGetPartition.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

void __stdcall CcMdlWriteAbort(PFILE_OBJECT FileObject, PMDL MdlChain)
{
  CSHORT MdlFlags; // di
  PMDL v3; // rbx
  __int16 v4; // di
  _QWORD *SharedCacheMap; // rbp
  struct _MDL *Next; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  _DWORD *v9; // r9
  __int64 Partition; // rax
  char v11; // dl
  char v12; // r8
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // eax
  bool v18; // zf
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
    Partition = CcGetPartition(SharedCacheMap, v7, v8, v9);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
    CcDecrementOpenCount((__int64)SharedCacheMap, v11, v12);
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
          v17 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v18 = (v17 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v17;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
  }
}
