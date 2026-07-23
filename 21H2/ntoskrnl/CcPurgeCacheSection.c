/*
 * XREFs of CcPurgeCacheSection @ 0x1402FB670
 * Callers:
 *     CcSetFileSizesEx @ 0x1402D2970 (CcSetFileSizesEx.c)
 *     CcPurgeAndClearCacheSection @ 0x1402F9EE4 (CcPurgeAndClearCacheSection.c)
 *     CcCoherencyFlushAndPurgeCache @ 0x1402FA2A0 (CcCoherencyFlushAndPurgeCache.c)
 *     CcUnmapAndPurge @ 0x1402FEDC0 (CcUnmapAndPurge.c)
 *     CcUninitializeCacheMap @ 0x140301600 (CcUninitializeCacheMap.c)
 *     CcZeroEndOfLastPage @ 0x140361E4C (CcZeroEndOfLastPage.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MmCanFileBeTruncated @ 0x14021E5B0 (MmCanFileBeTruncated.c)
 *     KeDelayExecutionThread @ 0x140278A00 (KeDelayExecutionThread.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     MmPurgeSection @ 0x1402DD3F0 (MmPurgeSection.c)
 *     MmTrimSection @ 0x1402FA398 (MmTrimSection.c)
 *     CcUninitializeCacheMap @ 0x140301600 (CcUninitializeCacheMap.c)
 *     CcUnmapVacbArray @ 0x14031DBC0 (CcUnmapVacbArray.c)
 *     CcDecrementOpenCount @ 0x14031DE8C (CcDecrementOpenCount.c)
 *     CcGetPartition @ 0x14031E550 (CcGetPartition.c)
 *     MmGetControlAreaPartition @ 0x14033D860 (MmGetControlAreaPartition.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

BOOLEAN __stdcall CcPurgeCacheSection(
        PSECTION_OBJECT_POINTERS SectionObjectPointer,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        ULONG Flags)
{
  int v6; // r12d
  char v7; // dl
  char v8; // r8
  char *SharedCacheMap; // rbx
  unsigned __int64 v10; // r15
  unsigned int v11; // r13d
  int v12; // r15d
  BOOLEAN v13; // r12
  __int64 Partition; // rax
  bool v16; // zf
  unsigned __int64 v17; // r15
  __int64 v18; // r15
  char v19; // al
  unsigned __int64 v20; // rbx
  LONGLONG QuadPart; // rax
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v26; // edx
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r10
  _DWORD *v29; // r9
  int v30; // eax
  unsigned __int8 v31; // al
  struct _KPRCB *v32; // r10
  _DWORD *v33; // r9
  int v34; // eax
  _QWORD *i; // r15
  unsigned __int64 v36; // rbx
  unsigned __int8 v37; // al
  struct _KPRCB *v38; // r9
  _DWORD *v39; // r8
  int v40; // eax
  unsigned __int8 v41; // al
  struct _KPRCB *v42; // r9
  _DWORD *v43; // r8
  int v44; // eax
  char v45[8]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v46; // [rsp+38h] [rbp-48h]
  char *v47; // [rsp+40h] [rbp-40h]
  struct _KLOCK_QUEUE_HANDLE v48; // [rsp+48h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-20h] BYREF
  PSECTION_OBJECT_POINTERS SectionPointera; // [rsp+C0h] [rbp+40h]
  char v53; // [rsp+D8h] [rbp+58h]

  v53 = Flags;
  v45[0] = 0;
  v6 = 0;
  v46 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v48, 0, sizeof(v48));
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  SharedCacheMap = (char *)SectionObjectPointer->SharedCacheMap;
  v47 = SharedCacheMap;
  if ( SharedCacheMap )
  {
    Partition = CcGetPartition(SharedCacheMap, v7, v8);
    v16 = (*((_DWORD *)SharedCacheMap + 38) & 0x2000) == 0;
    v46 = Partition;
    if ( !v16 )
    {
      if ( ((unsigned __int8)FileOffset & 1) == 0 )
      {
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
              v26 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v16 = (v26 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v26;
              if ( v16 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(OldIrql);
        return 1;
      }
      FileOffset = (PLARGE_INTEGER)((unsigned __int64)FileOffset ^ 1);
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &v48);
    ++*((_DWORD *)SharedCacheMap + 1);
    ++*((_DWORD *)SharedCacheMap + 134);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v48);
    v17 = v48.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v27 = KeGetCurrentIrql();
        if ( v27 <= 0xFu && v48.OldIrql <= 0xFu && v27 >= 2u )
        {
          v28 = KeGetCurrentPrcb();
          v29 = v28->SchedulerAssist;
          v30 = ~(unsigned __int16)(-1LL << (v48.OldIrql + 1));
          v16 = (v30 & v29[5]) == 0;
          v29[5] &= v30;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick(v28);
        }
      }
    }
    __writecr8(v17);
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v10 = LockHandle.OldIrql;
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
        v16 = (v34 & v33[5]) == 0;
        v33[5] &= v34;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick(v32);
      }
    }
  }
  __writecr8(v10);
  if ( !SharedCacheMap )
    goto LABEL_4;
  v18 = v46;
  if ( v46 != *(_QWORD *)(MmGetControlAreaPartition(SectionObjectPointer) + 8) )
    KeBugCheckEx(0x34u, 0x122BuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v19 = v53;
  if ( (v53 & 1) != 0 )
  {
    for ( i = SharedCacheMap + 224; (_QWORD *)*i != i; CcUninitializeCacheMap(*(PFILE_OBJECT *)(*i - 88LL), 0LL, 0LL) )
      ;
    v18 = v46;
    v19 = v53;
  }
  if ( (v19 & 8) == 0 )
  {
    CcUnmapVacbArray((_DWORD)SharedCacheMap, (_DWORD)FileOffset, Length, 0, 1, 0);
    goto LABEL_16;
  }
  if ( (int)MmTrimSection((__int64)SectionObjectPointer, (__int64 *)FileOffset, Length, 0) >= 0 )
  {
LABEL_16:
    if ( FileOffset )
      v6 = 1;
LABEL_4:
    v11 = v6 | 2;
    if ( (v53 & 4) == 0 )
      v11 = v6;
    v12 = (v53 & 4) != 0 ? 5 : -1;
    v13 = MmPurgeSection(SectionObjectPointer, (unsigned __int64 *)&FileOffset->QuadPart, Length, v11, v45);
    if ( !v13 )
    {
      do
      {
        if ( Length )
          break;
        if ( !MmCanFileBeTruncated(SectionObjectPointer, FileOffset) )
          break;
        if ( (v53 & 2) != 0 )
          break;
        KeDelayExecutionThread(0, 0, &CcCollisionDelay);
        if ( !--v12 )
          break;
        v13 = MmPurgeSection(SectionObjectPointer, (unsigned __int64 *)&FileOffset->QuadPart, 0, v11, v45);
      }
      while ( !v13 );
      SharedCacheMap = v47;
    }
    if ( SharedCacheMap )
    {
      if ( !Length )
      {
        if ( FileOffset )
        {
          QuadPart = FileOffset->QuadPart;
          if ( FileOffset->QuadPart < *((_QWORD *)SharedCacheMap + 46) )
          {
            SectionPointera = (PSECTION_OBJECT_POINTERS)(QuadPart + 0x3FFFF);
            LODWORD(SectionPointera) = (QuadPart + 0x3FFFF) & 0xFFFC0000;
            *((_QWORD *)SharedCacheMap + 46) = (char *)SectionPointera + 0x40000;
          }
        }
        else
        {
          *((_QWORD *)SharedCacheMap + 46) = 0LL;
        }
      }
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v46 + 128), &v48);
      CcDecrementOpenCount(SharedCacheMap);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v48);
      v20 = v48.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v41 = KeGetCurrentIrql();
          if ( v41 <= 0xFu && v48.OldIrql <= 0xFu && v41 >= 2u )
          {
            v42 = KeGetCurrentPrcb();
            v43 = v42->SchedulerAssist;
            v44 = ~(unsigned __int16)(-1LL << (v48.OldIrql + 1));
            v16 = (v44 & v43[5]) == 0;
            v43[5] &= v44;
            if ( v16 )
              KiRemoveSystemWorkPriorityKick(v42);
          }
        }
      }
      __writecr8(v20);
    }
    return v13;
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v18 + 128), &v48);
  CcDecrementOpenCount(SharedCacheMap);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v48);
  v36 = v48.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v37 = KeGetCurrentIrql();
      if ( v37 <= 0xFu && v48.OldIrql <= 0xFu && v37 >= 2u )
      {
        v38 = KeGetCurrentPrcb();
        v39 = v38->SchedulerAssist;
        v40 = ~(unsigned __int16)(-1LL << (v48.OldIrql + 1));
        v16 = (v40 & v39[5]) == 0;
        v39[5] &= v40;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick(v38);
      }
    }
  }
  __writecr8(v36);
  return 0;
}
