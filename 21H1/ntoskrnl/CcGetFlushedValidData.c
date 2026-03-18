/*
 * XREFs of CcGetFlushedValidData @ 0x140307F80
 * Callers:
 *     CcWriteBehindInternal @ 0x14022CE40 (CcWriteBehindInternal.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022DFE0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcDecrementOpenCount @ 0x14022E0B4 (CcDecrementOpenCount.c)
 *     CcGetPartition @ 0x14022E770 (CcGetPartition.c)
 *     ExAcquireFastMutex @ 0x1402600D0 (ExAcquireFastMutex.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeReleaseGuardedMutex @ 0x140263BB0 (KeReleaseGuardedMutex.c)
 *     MmGetControlAreaPartition @ 0x14027CB20 (MmGetControlAreaPartition.c)
 *     CcFindBitmapRangeToClean @ 0x14030806C (CcFindBitmapRangeToClean.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

LARGE_INTEGER __stdcall CcGetFlushedValidData(PSECTION_OBJECT_POINTERS SectionObjectPointer, BOOLEAN BcbListHeld)
{
  char *SharedCacheMap; // rdi
  __int64 Partition; // r13
  __int64 v6; // rdx
  __int64 v7; // r8
  _DWORD *v8; // r9
  LARGE_INTEGER v9; // rbx
  __int64 v11; // rcx
  __int64 BitmapRangeToClean; // rax
  _QWORD *v13; // rdx
  _QWORD *v14; // rax
  __int64 v15; // rcx
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
    Partition = CcGetPartition(SharedCacheMap);
    if ( *(_QWORD *)(MmGetControlAreaPartition((__int64)SectionObjectPointer, v6, v7, v8) + 8) != Partition )
      KeBugCheckEx(0x34u, 0x1DBBuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    v9 = *(LARGE_INTEGER *)(SharedCacheMap + 48);
    if ( *((_DWORD *)SharedCacheMap + 28) )
    {
      v11 = *((_QWORD *)SharedCacheMap + 20);
      if ( v11 && *(_DWORD *)(v11 + 8) )
      {
        BitmapRangeToClean = CcFindBitmapRangeToClean(v11, 0LL);
        v9.QuadPart = (*(_QWORD *)(BitmapRangeToClean + 16) + *(unsigned int *)(BitmapRangeToClean + 24)) << 12;
      }
      v13 = SharedCacheMap + 16;
      v14 = (_QWORD *)*((_QWORD *)SharedCacheMap + 2);
      v15 = (__int64)(v14 - 2);
      while ( v14 != v13 && (*(_WORD *)v15 != 765 || !*(_BYTE *)(v15 + 2)) )
      {
        v15 = *v14 - 16LL;
        v14 = (_QWORD *)*v14;
      }
      if ( (_QWORD *)(v15 + 16) != v13 && *(_QWORD *)(v15 + 8) < v9.QuadPart )
        v9 = *(LARGE_INTEGER *)(v15 + 8);
    }
    if ( !BcbListHeld )
    {
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)SharedCacheMap + 5);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &v38);
      CcDecrementOpenCount((__int64)SharedCacheMap);
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
    return v9;
  }
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  SharedCacheMap = (char *)SectionObjectPointer->SharedCacheMap;
  if ( SharedCacheMap )
  {
    v22 = CcGetPartition((_QWORD *)SectionObjectPointer->SharedCacheMap);
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
