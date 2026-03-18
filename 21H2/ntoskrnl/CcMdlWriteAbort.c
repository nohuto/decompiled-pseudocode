/*
 * XREFs of CcMdlWriteAbort @ 0x14053BB80
 * Callers:
 *     <none>
 * Callees:
 *     CcDecrementOpenCount @ 0x140282AF4 (CcDecrementOpenCount.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MmUnlockPages @ 0x1402B8AD0 (MmUnlockPages.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     IoFreeMdl @ 0x140349550 (IoFreeMdl.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
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
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  bool v14; // zf
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
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(SharedCacheMap[66] + 704LL), &LockHandle);
    CcDecrementOpenCount((__int64)SharedCacheMap, v7, v8);
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
          v13 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v14 = (v13 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v13;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
  }
}
