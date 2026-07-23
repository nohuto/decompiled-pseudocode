/*
 * XREFs of CcGetFlushedValidData @ 0x140237F40
 * Callers:
 *     CcWriteBehindInternal @ 0x1402D22C0 (CcWriteBehindInternal.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcFindBitmapRangeToClean @ 0x14023802C (CcFindBitmapRangeToClean.c)
 *     KeReleaseGuardedMutex @ 0x140253C70 (KeReleaseGuardedMutex.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     CcDecrementOpenCount @ 0x14031DE8C (CcDecrementOpenCount.c)
 *     CcGetPartition @ 0x14031E550 (CcGetPartition.c)
 *     MmGetControlAreaPartition @ 0x14033D860 (MmGetControlAreaPartition.c)
 *     ExAcquireFastMutex @ 0x140354DD0 (ExAcquireFastMutex.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

LARGE_INTEGER __stdcall CcGetFlushedValidData(PSECTION_OBJECT_POINTERS SectionObjectPointer, BOOLEAN BcbListHeld)
{
  char v2; // r8
  char *SharedCacheMap; // rdi
  __int64 Partition; // r13
  LARGE_INTEGER v7; // rbx
  __int64 v9; // rcx
  __int64 BitmapRangeToClean; // rax
  _QWORD *v11; // rdx
  _QWORD *v12; // rax
  __int64 v13; // rcx
  char v14; // dl
  char v15; // r8
  unsigned __int64 v16; // rbx
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r9
  _DWORD *v19; // r8
  int v20; // eax
  bool v21; // zf
  __int64 v22; // rax
  unsigned __int64 v23; // rbx
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r10
  _DWORD *v26; // r9
  int v27; // eax
  unsigned __int64 v28; // rbx
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r10
  _DWORD *v31; // r9
  int v32; // eax
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v37; // eax
  struct _KLOCK_QUEUE_HANDLE v38; // [rsp+30h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-18h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v38, 0, sizeof(v38));
  if ( BcbListHeld )
  {
    SharedCacheMap = (char *)SectionObjectPointer->SharedCacheMap;
LABEL_3:
    Partition = CcGetPartition(SharedCacheMap, BcbListHeld, v2);
    if ( *(_QWORD *)(MmGetControlAreaPartition(SectionObjectPointer) + 8) != Partition )
      KeBugCheckEx(0x34u, 0x1E8CuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    v7 = *(LARGE_INTEGER *)(SharedCacheMap + 48);
    if ( *((_DWORD *)SharedCacheMap + 28) )
    {
      v9 = *((_QWORD *)SharedCacheMap + 20);
      if ( v9 && *(_DWORD *)(v9 + 8) )
      {
        BitmapRangeToClean = CcFindBitmapRangeToClean(v9, 0LL);
        v7.QuadPart = (*(_QWORD *)(BitmapRangeToClean + 16) + *(unsigned int *)(BitmapRangeToClean + 24)) << 12;
      }
      v11 = SharedCacheMap + 16;
      v12 = (_QWORD *)*((_QWORD *)SharedCacheMap + 2);
      v13 = (__int64)(v12 - 2);
      while ( v12 != v11 && (*(_WORD *)v13 != 765 || !*(_BYTE *)(v13 + 2)) )
      {
        v13 = *v12 - 16LL;
        v12 = (_QWORD *)*v12;
      }
      if ( (_QWORD *)(v13 + 16) != v11 && *(_QWORD *)(v13 + 8) < v7.QuadPart )
        v7 = *(LARGE_INTEGER *)(v13 + 8);
    }
    if ( !BcbListHeld )
    {
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)SharedCacheMap + 5);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &v38);
      CcDecrementOpenCount(SharedCacheMap);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v38);
      OldIrql = v38.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && v38.OldIrql <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v37 = ~(unsigned __int16)(-1LL << (v38.OldIrql + 1));
            v21 = (v37 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v37;
            if ( v21 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
    }
    return v7;
  }
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  SharedCacheMap = (char *)SectionObjectPointer->SharedCacheMap;
  if ( SharedCacheMap )
  {
    v22 = CcGetPartition(SectionObjectPointer->SharedCacheMap, v14, v15);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v22 + 128), &v38);
    ++*((_DWORD *)SharedCacheMap + 1);
    ++*((_DWORD *)SharedCacheMap + 134);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v38);
    v23 = v38.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v24 = KeGetCurrentIrql();
        if ( v24 <= 0xFu && v38.OldIrql <= 0xFu && v24 >= 2u )
        {
          v25 = KeGetCurrentPrcb();
          v26 = v25->SchedulerAssist;
          v27 = ~(unsigned __int16)(-1LL << (v38.OldIrql + 1));
          v21 = (v27 & v26[5]) == 0;
          v26[5] &= v27;
          if ( v21 )
            KiRemoveSystemWorkPriorityKick(v25);
        }
      }
    }
    __writecr8(v23);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v28 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v29 = KeGetCurrentIrql();
        if ( v29 <= 0xFu && LockHandle.OldIrql <= 0xFu && v29 >= 2u )
        {
          v30 = KeGetCurrentPrcb();
          v31 = v30->SchedulerAssist;
          v32 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v21 = (v32 & v31[5]) == 0;
          v31[5] &= v32;
          if ( v21 )
            KiRemoveSystemWorkPriorityKick(v30);
        }
      }
    }
    __writecr8(v28);
    ExAcquireFastMutex((PFAST_MUTEX)SharedCacheMap + 5);
    goto LABEL_3;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v16 = LockHandle.OldIrql;
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
        v21 = (v20 & v19[5]) == 0;
        v19[5] &= v20;
        if ( v21 )
          KiRemoveSystemWorkPriorityKick(v18);
      }
    }
  }
  __writecr8(v16);
  return (LARGE_INTEGER)0x7FFFFFFFFFFFFFFFLL;
}
