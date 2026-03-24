/*
 * XREFs of CcPurgeCacheSection @ 0x1402F0920
 * Callers:
 *     CcSetFileSizesEx @ 0x14022E120 (CcSetFileSizesEx.c)
 *     CcPurgeAndClearCacheSection @ 0x1402EF194 (CcPurgeAndClearCacheSection.c)
 *     CcCoherencyFlushAndPurgeCache @ 0x1402EF550 (CcCoherencyFlushAndPurgeCache.c)
 *     CcUnmapAndPurge @ 0x1402F4070 (CcUnmapAndPurge.c)
 *     CcUninitializeCacheMap @ 0x1402F68B0 (CcUninitializeCacheMap.c)
 *     CcZeroEndOfLastPage @ 0x1403570FC (CcZeroEndOfLastPage.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022EE10 (KeAcquireInStackQueuedSpinLock.c)
 *     MmPurgeSection @ 0x140238BA0 (MmPurgeSection.c)
 *     KeDelayExecutionThread @ 0x140257490 (KeDelayExecutionThread.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MmCanFileBeTruncated @ 0x1402A1030 (MmCanFileBeTruncated.c)
 *     MmTrimSection @ 0x1402EF648 (MmTrimSection.c)
 *     CcUninitializeCacheMap @ 0x1402F68B0 (CcUninitializeCacheMap.c)
 *     CcUnmapVacbArray @ 0x140312E70 (CcUnmapVacbArray.c)
 *     CcDecrementOpenCount @ 0x14031313C (CcDecrementOpenCount.c)
 *     CcGetPartition @ 0x140313800 (CcGetPartition.c)
 *     MmGetControlAreaPartition @ 0x140332B10 (MmGetControlAreaPartition.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 */

BOOLEAN __stdcall CcPurgeCacheSection(
        PSECTION_OBJECT_POINTERS SectionObjectPointer,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        ULONG Flags)
{
  int v6; // r12d
  char *SharedCacheMap; // rbx
  unsigned __int64 v8; // r15
  int v9; // r13d
  int v10; // r15d
  BOOLEAN v11; // r12
  __int64 Partition; // rax
  bool v14; // zf
  unsigned __int64 v15; // r15
  __int64 v16; // r15
  char v17; // al
  unsigned __int64 v18; // rbx
  LONGLONG QuadPart; // rax
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v24; // edx
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r10
  _DWORD *v27; // r9
  int v28; // eax
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r10
  _DWORD *v31; // r9
  int v32; // eax
  _QWORD *i; // r15
  unsigned __int64 v34; // rbx
  unsigned __int8 v35; // al
  struct _KPRCB *v36; // r9
  _DWORD *v37; // r8
  int v38; // eax
  unsigned __int8 v39; // al
  struct _KPRCB *v40; // r9
  _DWORD *v41; // r8
  int v42; // eax
  char v43[8]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v44; // [rsp+38h] [rbp-48h]
  char *v45; // [rsp+40h] [rbp-40h]
  struct _KLOCK_QUEUE_HANDLE v46; // [rsp+48h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-20h] BYREF
  PSECTION_OBJECT_POINTERS SectionPointera; // [rsp+C0h] [rbp+40h]
  char v51; // [rsp+D8h] [rbp+58h]

  v51 = Flags;
  v43[0] = 0;
  v6 = 0;
  v44 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v46, 0, sizeof(v46));
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  SharedCacheMap = (char *)SectionObjectPointer->SharedCacheMap;
  v45 = SharedCacheMap;
  if ( SharedCacheMap )
  {
    Partition = CcGetPartition(SharedCacheMap);
    v14 = (*((_DWORD *)SharedCacheMap + 38) & 0x2000) == 0;
    v44 = Partition;
    if ( !v14 )
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
              v24 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v14 = (v24 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v24;
              if ( v14 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(OldIrql);
        return 1;
      }
      FileOffset = (PLARGE_INTEGER)((unsigned __int64)FileOffset ^ 1);
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &v46);
    ++*((_DWORD *)SharedCacheMap + 1);
    ++*((_DWORD *)SharedCacheMap + 134);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v46);
    v15 = v46.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v25 = KeGetCurrentIrql();
        if ( v25 <= 0xFu && v46.OldIrql <= 0xFu && v25 >= 2u )
        {
          v26 = KeGetCurrentPrcb();
          v27 = v26->SchedulerAssist;
          v28 = ~(unsigned __int16)(-1LL << (v46.OldIrql + 1));
          v14 = (v28 & v27[5]) == 0;
          v27[5] &= v28;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick(v26);
        }
      }
    }
    __writecr8(v15);
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v8 = LockHandle.OldIrql;
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
        v14 = (v32 & v31[5]) == 0;
        v31[5] &= v32;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick(v30);
      }
    }
  }
  __writecr8(v8);
  if ( !SharedCacheMap )
    goto LABEL_4;
  v16 = v44;
  if ( v44 != *(_QWORD *)(MmGetControlAreaPartition(SectionObjectPointer) + 8) )
    KeBugCheckEx(0x34u, 0x122BuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v17 = v51;
  if ( (v51 & 1) != 0 )
  {
    for ( i = SharedCacheMap + 224; (_QWORD *)*i != i; CcUninitializeCacheMap(*(PFILE_OBJECT *)(*i - 88LL), 0LL, 0LL) )
      ;
    v16 = v44;
    v17 = v51;
  }
  if ( (v17 & 8) == 0 )
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
    v9 = v6 | 2;
    if ( (v51 & 4) == 0 )
      v9 = v6;
    v10 = (v51 & 4) != 0 ? 5 : -1;
    v11 = MmPurgeSection(SectionObjectPointer, (__int64 *)FileOffset, Length, v9, v43);
    if ( !v11 )
    {
      do
      {
        if ( Length )
          break;
        if ( !MmCanFileBeTruncated(SectionObjectPointer, FileOffset) )
          break;
        if ( (v51 & 2) != 0 )
          break;
        KeDelayExecutionThread(0, 0, &CcCollisionDelay);
        if ( !--v10 )
          break;
        v11 = MmPurgeSection(SectionObjectPointer, (__int64 *)FileOffset, 0, v9, v43);
      }
      while ( !v11 );
      SharedCacheMap = v45;
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
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v44 + 128), &v46);
      CcDecrementOpenCount(SharedCacheMap);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v46);
      v18 = v46.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v39 = KeGetCurrentIrql();
          if ( v39 <= 0xFu && v46.OldIrql <= 0xFu && v39 >= 2u )
          {
            v40 = KeGetCurrentPrcb();
            v41 = v40->SchedulerAssist;
            v42 = ~(unsigned __int16)(-1LL << (v46.OldIrql + 1));
            v14 = (v42 & v41[5]) == 0;
            v41[5] &= v42;
            if ( v14 )
              KiRemoveSystemWorkPriorityKick(v40);
          }
        }
      }
      __writecr8(v18);
    }
    return v11;
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v16 + 128), &v46);
  CcDecrementOpenCount(SharedCacheMap);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v46);
  v34 = v46.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v35 = KeGetCurrentIrql();
      if ( v35 <= 0xFu && v46.OldIrql <= 0xFu && v35 >= 2u )
      {
        v36 = KeGetCurrentPrcb();
        v37 = v36->SchedulerAssist;
        v38 = ~(unsigned __int16)(-1LL << (v46.OldIrql + 1));
        v14 = (v38 & v37[5]) == 0;
        v37[5] &= v38;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick(v36);
      }
    }
  }
  __writecr8(v34);
  return 0;
}
