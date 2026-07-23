/*
 * XREFs of CcExitPartition @ 0x1404EC394
 * Callers:
 *     MiDeletePartitionResources @ 0x140561B58 (MiDeletePartitionResources.c)
 *     MiDrainCrossPartitionUsage @ 0x1405622DC (MiDrainCrossPartitionUsage.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     CcNotifyWriteBehindInternal @ 0x1402405C0 (CcNotifyWriteBehindInternal.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     DbgPrintEx @ 0x14037F370 (DbgPrintEx.c)
 *     CcWaitForCurrentLazyWriterActivityInternal @ 0x140380FDC (CcWaitForCurrentLazyWriterActivityInternal.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     CcPostDeferredWrites @ 0x1404EA530 (CcPostDeferredWrites.c)
 *     CcDeletePartition @ 0x1404EBEC0 (CcDeletePartition.c)
 *     CcDeleteSectionsForPartition @ 0x1404EC0C4 (CcDeleteSectionsForPartition.c)
 */

void __fastcall CcExitPartition(_QWORD *a1, int a2)
{
  __int64 v2; // rbx
  unsigned __int64 v4; // rbp
  unsigned __int8 v5; // al
  struct _KPRCB *v6; // r10
  _DWORD *v7; // r9
  int v8; // eax
  bool v9; // zf
  unsigned __int64 v10; // rbp
  unsigned __int8 v11; // al
  struct _KPRCB *v12; // r9
  _DWORD *v13; // r8
  int v14; // eax
  unsigned __int64 v16; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v20; // eax
  unsigned __int64 OldIrql; // rbp
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // rdx
  _DWORD *v24; // r9
  int v25; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v2 = a1[1];
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( v2 )
  {
    if ( a2 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 128), &LockHandle);
      v16 = KeAcquireSpinLockRaiseToDpc(&CcGlobalPartitionLock);
      *(_BYTE *)(v2 + 966) = 2;
      KxReleaseSpinLock(&CcGlobalPartitionLock);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v16 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
            v9 = (v20 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v20;
            if ( v9 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v16);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v22 = KeGetCurrentIrql();
          if ( v22 <= 0xFu && LockHandle.OldIrql <= 0xFu && v22 >= 2u )
          {
            v23 = KeGetCurrentPrcb();
            v24 = v23->SchedulerAssist;
            v25 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v9 = (v25 & v24[5]) == 0;
            v24[5] &= v25;
            if ( v9 )
              KiRemoveSystemWorkPriorityKick((__int64)v23);
          }
        }
      }
      __writecr8(OldIrql);
      CcPostDeferredWrites(v2);
      DbgPrintEx(
        0x7Fu,
        2u,
        "CcExitPartition: Partition Exited=%p, PartitionObject=%p now deleting Partition \n",
        (const void *)v2,
        a1);
      CcDeletePartition((char *)v2);
    }
    else
    {
      CcNotifyWriteBehindInternal(v2, 2);
      CcWaitForCurrentLazyWriterActivityInternal(v2);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 128), &LockHandle);
      v4 = KeAcquireSpinLockRaiseToDpc(&CcGlobalPartitionLock);
      *(_BYTE *)(v2 + 966) = 1;
      KxReleaseSpinLock(&CcGlobalPartitionLock);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v5 = KeGetCurrentIrql();
          if ( v5 <= 0xFu && (unsigned __int8)v4 <= 0xFu && v5 >= 2u )
          {
            v6 = KeGetCurrentPrcb();
            v7 = v6->SchedulerAssist;
            v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
            v9 = (v8 & v7[5]) == 0;
            v7[5] &= v8;
            if ( v9 )
              KiRemoveSystemWorkPriorityKick((__int64)v6);
          }
        }
      }
      __writecr8(v4);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v10 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v11 = KeGetCurrentIrql();
          if ( v11 <= 0xFu && LockHandle.OldIrql <= 0xFu && v11 >= 2u )
          {
            v12 = KeGetCurrentPrcb();
            v13 = v12->SchedulerAssist;
            v14 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v9 = (v14 & v13[5]) == 0;
            v13[5] &= v14;
            if ( v9 )
              KiRemoveSystemWorkPriorityKick((__int64)v12);
          }
        }
      }
      __writecr8(v10);
      while ( *(_QWORD *)(v2 + 16) != v2 + 16 || *(_QWORD *)(v2 + 48) != v2 + 72 || *(_QWORD *)(v2 + 56) != v2 + 72 )
      {
        CcDeleteSectionsForPartition((_QWORD **)(v2 + 48), v2);
        CcDeleteSectionsForPartition((_QWORD **)(v2 + 16), v2);
      }
    }
  }
}
