/*
 * XREFs of CcPurgeCacheSection @ 0x1402CF540
 * Callers:
 *     CcSetFileSizesEx @ 0x14022D450 (CcSetFileSizesEx.c)
 *     CcUninitializeCacheMap @ 0x140231350 (CcUninitializeCacheMap.c)
 *     CcUnmapAndPurge @ 0x1402339C0 (CcUnmapAndPurge.c)
 *     CcZeroEndOfLastPage @ 0x1402818D4 (CcZeroEndOfLastPage.c)
 *     CcPurgeAndClearCacheSection @ 0x1402CDFA8 (CcPurgeAndClearCacheSection.c)
 *     CcCoherencyFlushAndPurgeCache @ 0x1402CE170 (CcCoherencyFlushAndPurgeCache.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402295B0 (KeDelayExecutionThread.c)
 *     CcUnmapVacbArray @ 0x14022BDD0 (CcUnmapVacbArray.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14022DFE0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcDecrementOpenCount @ 0x14022E0B4 (CcDecrementOpenCount.c)
 *     CcGetPartition @ 0x14022E770 (CcGetPartition.c)
 *     CcUninitializeCacheMap @ 0x140231350 (CcUninitializeCacheMap.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MmGetControlAreaPartition @ 0x14027CB20 (MmGetControlAreaPartition.c)
 *     MmTrimSection @ 0x1402CE268 (MmTrimSection.c)
 *     MmPurgeSection @ 0x1402CF7C0 (MmPurgeSection.c)
 *     MmCanFileBeTruncated @ 0x1402CFD90 (MmCanFileBeTruncated.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

BOOLEAN __stdcall CcPurgeCacheSection(
        PSECTION_OBJECT_POINTERS SectionObjectPointer,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        ULONG Flags)
{
  int v6; // r12d
  char *SharedCacheMap; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  _DWORD *v10; // r9
  unsigned __int64 v11; // r15
  int v12; // r13d
  int v13; // r15d
  BOOLEAN v14; // r12
  __int64 Partition; // rax
  bool v17; // zf
  unsigned __int64 v18; // r15
  __int64 v19; // r15
  char v20; // al
  unsigned __int64 v21; // rbx
  LONGLONG QuadPart; // rax
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v27; // edx
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r10
  _DWORD *v30; // r9
  int v31; // eax
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // r10
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
    Partition = CcGetPartition(SharedCacheMap);
    v17 = (*((_DWORD *)SharedCacheMap + 38) & 0x2000) == 0;
    v46 = Partition;
    if ( !v17 )
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
              v27 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v17 = (v27 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v27;
              if ( v17 )
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
    v18 = v48.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v28 = KeGetCurrentIrql();
        if ( v28 <= 0xFu && v48.OldIrql <= 0xFu && v28 >= 2u )
        {
          v29 = KeGetCurrentPrcb();
          v30 = v29->SchedulerAssist;
          v31 = ~(unsigned __int16)(-1LL << (v48.OldIrql + 1));
          v17 = (v31 & v30[5]) == 0;
          v30[5] &= v31;
          if ( v17 )
            KiRemoveSystemWorkPriorityKick(v29);
        }
      }
    }
    __writecr8(v18);
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v11 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v32 = KeGetCurrentIrql();
      if ( v32 <= 0xFu && LockHandle.OldIrql <= 0xFu && v32 >= 2u )
      {
        v33 = KeGetCurrentPrcb();
        v10 = v33->SchedulerAssist;
        v8 = -1LL << (LockHandle.OldIrql + 1);
        v34 = ~(unsigned __int16)v8;
        v17 = (v34 & v10[5]) == 0;
        v9 = (unsigned int)v34 & v10[5];
        v10[5] = v9;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick(v33);
      }
    }
  }
  __writecr8(v11);
  if ( !SharedCacheMap )
    goto LABEL_4;
  v19 = v46;
  if ( v46 != *(_QWORD *)(MmGetControlAreaPartition((__int64)SectionObjectPointer, v8, v9, v10) + 8) )
    KeBugCheckEx(0x34u, 0x1227uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v20 = v53;
  if ( (v53 & 1) != 0 )
  {
    for ( i = SharedCacheMap + 224; (_QWORD *)*i != i; CcUninitializeCacheMap(*(PFILE_OBJECT *)(*i - 88LL), 0LL, 0LL) )
      ;
    v19 = v46;
    v20 = v53;
  }
  if ( (v20 & 8) == 0 )
  {
    CcUnmapVacbArray((__int64)SharedCacheMap, (__int64 *)FileOffset, Length, 0, 1, 0);
    goto LABEL_16;
  }
  if ( (int)MmTrimSection((__int64)SectionObjectPointer, (__int64 *)FileOffset, Length, 0) >= 0 )
  {
LABEL_16:
    if ( FileOffset )
      v6 = 1;
LABEL_4:
    v12 = v6 | 2;
    if ( (v53 & 4) == 0 )
      v12 = v6;
    v13 = (v53 & 4) != 0 ? 5 : -1;
    v14 = MmPurgeSection((_DWORD)SectionObjectPointer, (_DWORD)FileOffset, Length, v12, (__int64)v45);
    if ( !v14 )
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
        if ( !--v13 )
          break;
        v14 = MmPurgeSection((_DWORD)SectionObjectPointer, (_DWORD)FileOffset, 0, v12, (__int64)v45);
      }
      while ( !v14 );
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
      CcDecrementOpenCount((__int64)SharedCacheMap);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v48);
      v21 = v48.OldIrql;
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
            v17 = (v44 & v43[5]) == 0;
            v43[5] &= v44;
            if ( v17 )
              KiRemoveSystemWorkPriorityKick(v42);
          }
        }
      }
      __writecr8(v21);
    }
    return v14;
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v19 + 128), &v48);
  CcDecrementOpenCount((__int64)SharedCacheMap);
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
        v17 = (v40 & v39[5]) == 0;
        v39[5] &= v40;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick(v38);
      }
    }
  }
  __writecr8(v36);
  return 0;
}
