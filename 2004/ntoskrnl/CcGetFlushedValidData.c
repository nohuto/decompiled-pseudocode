/*
 * XREFs of CcGetFlushedValidData @ 0x140345D80
 * Callers:
 *     CcWriteBehindInternal @ 0x1402BFC70 (CcWriteBehindInternal.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402071B0 (ExAcquireFastMutex.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeReleaseGuardedMutex @ 0x14020AC90 (KeReleaseGuardedMutex.c)
 *     MmGetControlAreaPartition @ 0x140223AD0 (MmGetControlAreaPartition.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402C0E10 (KeAcquireInStackQueuedSpinLock.c)
 *     CcDecrementOpenCount @ 0x1402C0EE4 (CcDecrementOpenCount.c)
 *     CcGetPartition @ 0x1402C15A0 (CcGetPartition.c)
 *     CcFindBitmapRangeToClean @ 0x140345E6C (CcFindBitmapRangeToClean.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

// local variable allocation has failed, the output may be wrong!
LARGE_INTEGER __stdcall CcGetFlushedValidData(PSECTION_OBJECT_POINTERS SectionObjectPointer, BOOLEAN BcbListHeld)
{
  __int64 v2; // r8
  _DWORD *v3; // r9
  char *SharedCacheMap; // rdi
  __int64 Partition; // r13
  LARGE_INTEGER v8; // rbx
  __int64 v10; // rcx
  __int64 BitmapRangeToClean; // rax
  _QWORD *v12; // rdx
  _QWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  _DWORD *v17; // r9
  unsigned __int64 v18; // rbx
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r9
  _DWORD *v21; // r8
  int v22; // eax
  bool v23; // zf
  __int64 v24; // rax
  unsigned __int64 v25; // rbx
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r10
  _DWORD *v28; // r9
  int v29; // eax
  unsigned __int64 v30; // rbx
  unsigned __int8 v31; // al
  struct _KPRCB *v32; // r10
  _DWORD *v33; // r9
  int v34; // eax
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v39; // eax
  struct _KLOCK_QUEUE_HANDLE v40; // [rsp+30h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-18h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v40, 0, sizeof(v40));
  if ( BcbListHeld )
  {
    SharedCacheMap = (char *)SectionObjectPointer->SharedCacheMap;
LABEL_3:
    Partition = CcGetPartition(SharedCacheMap, BcbListHeld, v2, v3);
    if ( *(_QWORD *)(MmGetControlAreaPartition((__int64)SectionObjectPointer) + 8) != Partition )
      KeBugCheckEx(0x34u, 0x1E8BuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    v8 = *(LARGE_INTEGER *)(SharedCacheMap + 48);
    if ( *((_DWORD *)SharedCacheMap + 28) )
    {
      v10 = *((_QWORD *)SharedCacheMap + 20);
      if ( v10 && *(_DWORD *)(v10 + 8) )
      {
        BitmapRangeToClean = CcFindBitmapRangeToClean(v10, 0LL);
        v8.QuadPart = (*(_QWORD *)(BitmapRangeToClean + 16) + *(unsigned int *)(BitmapRangeToClean + 24)) << 12;
      }
      v12 = SharedCacheMap + 16;
      v13 = (_QWORD *)*((_QWORD *)SharedCacheMap + 2);
      v14 = (__int64)(v13 - 2);
      while ( v13 != v12 && (*(_WORD *)v14 != 765 || !*(_BYTE *)(v14 + 2)) )
      {
        v14 = *v13 - 16LL;
        v13 = (_QWORD *)*v13;
      }
      if ( (_QWORD *)(v14 + 16) != v12 && *(_QWORD *)(v14 + 8) < v8.QuadPart )
        v8 = *(LARGE_INTEGER *)(v14 + 8);
    }
    if ( !BcbListHeld )
    {
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)SharedCacheMap + 5);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &v40);
      CcDecrementOpenCount((__int64)SharedCacheMap);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v40);
      OldIrql = v40.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && v40.OldIrql <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v39 = ~(unsigned __int16)(-1LL << (v40.OldIrql + 1));
            v23 = (v39 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v39;
            if ( v23 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
    }
    return v8;
  }
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  SharedCacheMap = (char *)SectionObjectPointer->SharedCacheMap;
  if ( SharedCacheMap )
  {
    v24 = CcGetPartition((_QWORD *)SectionObjectPointer->SharedCacheMap, v15, v16, v17);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v24 + 128), &v40);
    ++*((_DWORD *)SharedCacheMap + 1);
    ++*((_DWORD *)SharedCacheMap + 134);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v40);
    v25 = v40.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v26 = KeGetCurrentIrql();
        if ( v26 <= 0xFu && v40.OldIrql <= 0xFu && v26 >= 2u )
        {
          v27 = KeGetCurrentPrcb();
          v28 = v27->SchedulerAssist;
          v29 = ~(unsigned __int16)(-1LL << (v40.OldIrql + 1));
          v23 = (v29 & v28[5]) == 0;
          v28[5] &= v29;
          if ( v23 )
            KiRemoveSystemWorkPriorityKick(v27);
        }
      }
    }
    __writecr8(v25);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v30 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v31 = KeGetCurrentIrql();
        if ( v31 <= 0xFu && LockHandle.OldIrql <= 0xFu && v31 >= 2u )
        {
          v32 = KeGetCurrentPrcb();
          v33 = v32->SchedulerAssist;
          v34 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v23 = (v34 & v33[5]) == 0;
          v33[5] &= v34;
          if ( v23 )
            KiRemoveSystemWorkPriorityKick(v32);
        }
      }
    }
    __writecr8(v30);
    ExAcquireFastMutex((PFAST_MUTEX)SharedCacheMap + 5);
    goto LABEL_3;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v18 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v19 = KeGetCurrentIrql();
      if ( v19 <= 0xFu && LockHandle.OldIrql <= 0xFu && v19 >= 2u )
      {
        v20 = KeGetCurrentPrcb();
        v21 = v20->SchedulerAssist;
        v22 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v23 = (v22 & v21[5]) == 0;
        v21[5] &= v22;
        if ( v23 )
          KiRemoveSystemWorkPriorityKick(v20);
      }
    }
  }
  __writecr8(v18);
  return (LARGE_INTEGER)0x7FFFFFFFFFFFFFFFLL;
}
