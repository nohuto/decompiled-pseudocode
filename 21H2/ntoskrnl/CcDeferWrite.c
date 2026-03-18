/*
 * XREFs of CcDeferWrite @ 0x140539E20
 * Callers:
 *     DifCcDeferWriteWrapper @ 0x140605B10 (DifCcDeferWriteWrapper.c)
 * Callees:
 *     ExInterlockedInsertTailList @ 0x140223920 (ExInterlockedInsertTailList.c)
 *     ExInterlockedInsertHeadList @ 0x1402430F0 (ExInterlockedInsertHeadList.c)
 *     CcDereferencePartition @ 0x140276728 (CcDereferencePartition.c)
 *     CcScheduleLazyWriteScan @ 0x140276758 (CcScheduleLazyWriteScan.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcGetPrivateVolumeCacheMapFromFileObject @ 0x140284848 (CcGetPrivateVolumeCacheMapFromFileObject.c)
 *     CcGetPartitionFromFileObject @ 0x14029C124 (CcGetPartitionFromFileObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     CcPostDeferredWrites @ 0x14053A100 (CcPostDeferredWrites.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

void __stdcall CcDeferWrite(
        PFILE_OBJECT FileObject,
        PCC_POST_DEFERRED_WRITE PostRoutine,
        PVOID Context1,
        PVOID Context2,
        ULONG BytesToWrite,
        BOOLEAN Retrying)
{
  char *PoolWithTag; // rdi
  __int64 PartitionFromFileObject; // rbx
  _QWORD *v12; // rcx
  _QWORD *PrivateVolumeCacheMapFromFileObject; // rsi
  unsigned __int64 OldIrql; // r15
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v18; // eax
  bool v19; // zf
  KSPIN_LOCK *v20; // r8
  struct _LIST_ENTRY *v21; // rdx
  struct _LIST_ENTRY *v22; // rcx
  struct _LIST_ENTRY *v23; // rcx
  __int64 v24; // r8
  unsigned __int64 v25; // rdi
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r9
  _DWORD *v28; // r8
  int v29; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v31; // [rsp+38h] [rbp-18h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v31, 0, sizeof(v31));
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x68uLL, 0x77446343u);
  if ( PoolWithTag )
  {
    KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
    PartitionFromFileObject = CcGetPartitionFromFileObject((__int64)FileObject);
    PrivateVolumeCacheMapFromFileObject = CcGetPrivateVolumeCacheMapFromFileObject(v12, PartitionFromFileObject);
    if ( _InterlockedIncrement64((volatile signed __int64 *)(PartitionFromFileObject + 1232)) <= 1 )
      __fastfail(0xEu);
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
          v18 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v19 = (v18 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v18;
          if ( v19 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    if ( _InterlockedIncrement64((volatile signed __int64 *)(PartitionFromFileObject + 1232)) <= 1 )
      __fastfail(0xEu);
    if ( PrivateVolumeCacheMapFromFileObject && _InterlockedIncrement64(PrivateVolumeCacheMapFromFileObject + 1) <= 1 )
      __fastfail(0xEu);
    v20 = (KSPIN_LOCK *)(PartitionFromFileObject + 1152);
    *((_QWORD *)PoolWithTag + 5) = 0LL;
    v21 = (struct _LIST_ENTRY *)(PoolWithTag + 24);
    *((_QWORD *)PoolWithTag + 1) = FileObject;
    v22 = (struct _LIST_ENTRY *)PrivateVolumeCacheMapFromFileObject;
    *((_DWORD *)PoolWithTag + 4) = BytesToWrite;
    if ( !PrivateVolumeCacheMapFromFileObject )
      v22 = (struct _LIST_ENTRY *)PartitionFromFileObject;
    v23 = v22 + 69;
    *((_QWORD *)PoolWithTag + 6) = PostRoutine;
    *((_QWORD *)PoolWithTag + 9) = PartitionFromFileObject;
    *((_QWORD *)PoolWithTag + 10) = PrivateVolumeCacheMapFromFileObject;
    *(_DWORD *)PoolWithTag = 6816508;
    *((_QWORD *)PoolWithTag + 7) = Context1;
    *((_QWORD *)PoolWithTag + 8) = Context2;
    *((_QWORD *)PoolWithTag + 12) = MEMORY[0xFFFFF78000000320];
    PoolWithTag[88] = 0;
    if ( Retrying )
      ExInterlockedInsertHeadList(v23, v21, v20);
    else
      ExInterlockedInsertTailList(v23, v21, v20);
    CcPostDeferredWrites(PartitionFromFileObject, PrivateVolumeCacheMapFromFileObject);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(PartitionFromFileObject + 704), &v31);
    LOBYTE(v24) = 1;
    CcScheduleLazyWriteScan((_BYTE *)PartitionFromFileObject, (__int64)PrivateVolumeCacheMapFromFileObject, v24, 0);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v31);
    v25 = v31.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v26 = KeGetCurrentIrql();
        if ( v26 <= 0xFu && v31.OldIrql <= 0xFu && v26 >= 2u )
        {
          v27 = KeGetCurrentPrcb();
          v28 = v27->SchedulerAssist;
          v29 = ~(unsigned __int16)(-1LL << (v31.OldIrql + 1));
          v19 = (v29 & v28[5]) == 0;
          v28[5] &= v29;
          if ( v19 )
            KiRemoveSystemWorkPriorityKick((__int64)v27);
        }
      }
    }
    __writecr8(v25);
    CcDereferencePartition(PartitionFromFileObject);
  }
  else
  {
    ((void (__fastcall *)(PVOID, PVOID))PostRoutine)(Context1, Context2);
  }
}
