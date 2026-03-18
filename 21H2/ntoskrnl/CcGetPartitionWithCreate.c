/*
 * XREFs of CcGetPartitionWithCreate @ 0x14023EB0C
 * Callers:
 *     CcInitializeCacheMapEx @ 0x140310F10 (CcInitializeCacheMapEx.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     PsDereferencePartition @ 0x1403606C4 (PsDereferencePartition.c)
 *     PsReferencePartitionSafe @ 0x1403606EC (PsReferencePartitionSafe.c)
 *     CcCreatePartition @ 0x1403D0F2C (CcCreatePartition.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     CcDeletePartition @ 0x14053DAFC (CcDeletePartition.c)
 */

_BYTE *__fastcall CcGetPartitionWithCreate(__int64 a1)
{
  _BYTE *v1; // rbx
  void *v2; // rsi
  __int64 Partition; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rbp
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  bool v15; // zf
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r9
  _DWORD *v19; // r8
  int v20; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  v1 = *(_BYTE **)(a1 + 8);
  v2 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( v1 )
    goto LABEL_2;
  Partition = CcCreatePartition();
  v1 = (_BYTE *)Partition;
  if ( Partition )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 704), &LockHandle);
    v7 = KeAcquireSpinLockRaiseToDpc(&CcGlobalPartitionLock);
    if ( *(_QWORD *)(a1 + 8) )
    {
      v2 = v1;
      v1 = *(_BYTE **)(a1 + 8);
    }
    else
    {
      ++CcPartitionCount;
      *(_QWORD *)(a1 + 8) = v1;
      v1[1229] = 1;
      if ( (unsigned __int8)PsReferencePartitionSafe(a1, v6, v8) )
        PsDereferencePartition(a1, v9, v10);
      else
        v1[1230] = 1;
    }
    KxReleaseSpinLock(&CcGlobalPartitionLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v15 = (v14 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v14;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v7);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v17 = KeGetCurrentIrql();
        if ( v17 <= 0xFu && LockHandle.OldIrql <= 0xFu && v17 >= 2u )
        {
          v18 = KeGetCurrentPrcb();
          v19 = v18->SchedulerAssist;
          v20 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v15 = (v20 & v19[5]) == 0;
          v19[5] &= v20;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick(v18);
        }
      }
    }
    __writecr8(OldIrql);
    if ( v2 )
      CcDeletePartition(v2);
    if ( v1 )
    {
LABEL_2:
      if ( v1[1230] >= 2u )
        KeBugCheckEx(0x34u, 0x5B5uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    }
  }
  return v1;
}
