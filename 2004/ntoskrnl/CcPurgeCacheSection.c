/*
 * XREFs of CcPurgeCacheSection @ 0x14031F970
 * Callers:
 *     CcZeroEndOfLastPage @ 0x140228884 (CcZeroEndOfLastPage.c)
 *     CcSetFileSizesEx @ 0x1402C0280 (CcSetFileSizesEx.c)
 *     CcUninitializeCacheMap @ 0x1402C4180 (CcUninitializeCacheMap.c)
 *     CcUnmapAndPurge @ 0x1402C67F0 (CcUnmapAndPurge.c)
 *     CcCoherencyFlushAndPurgeCache @ 0x14031E5A0 (CcCoherencyFlushAndPurgeCache.c)
 *     CcPurgeAndClearCacheSection @ 0x1403203EC (CcPurgeAndClearCacheSection.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MmGetControlAreaPartition @ 0x140223AD0 (MmGetControlAreaPartition.c)
 *     KeDelayExecutionThread @ 0x1402BC230 (KeDelayExecutionThread.c)
 *     CcUnmapVacbArray @ 0x1402BEA50 (CcUnmapVacbArray.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402C0E10 (KeAcquireInStackQueuedSpinLock.c)
 *     CcDecrementOpenCount @ 0x1402C0EE4 (CcDecrementOpenCount.c)
 *     CcGetPartition @ 0x1402C15A0 (CcGetPartition.c)
 *     CcUninitializeCacheMap @ 0x1402C4180 (CcUninitializeCacheMap.c)
 *     MmTrimSection @ 0x14031E698 (MmTrimSection.c)
 *     MmPurgeSection @ 0x14031FBF0 (MmPurgeSection.c)
 *     MmCanFileBeTruncated @ 0x1403201C0 (MmCanFileBeTruncated.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

BOOLEAN __stdcall CcPurgeCacheSection(
        PSECTION_OBJECT_POINTERS SectionObjectPointer,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        ULONG Flags)
{
  int v6; // r12d
  __int64 v7; // rdx
  __int64 v8; // r8
  _DWORD *v9; // r9
  char *SharedCacheMap; // rbx
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
  _DWORD *v34; // r9
  int v35; // eax
  _QWORD *i; // r15
  unsigned __int64 v37; // rbx
  unsigned __int8 v38; // al
  struct _KPRCB *v39; // r9
  _DWORD *v40; // r8
  int v41; // eax
  unsigned __int8 v42; // al
  struct _KPRCB *v43; // r9
  _DWORD *v44; // r8
  int v45; // eax
  char v46[8]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v47; // [rsp+38h] [rbp-48h]
  char *v48; // [rsp+40h] [rbp-40h]
  struct _KLOCK_QUEUE_HANDLE v49; // [rsp+48h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-20h] BYREF
  PSECTION_OBJECT_POINTERS SectionPointera; // [rsp+C0h] [rbp+40h]
  char v54; // [rsp+D8h] [rbp+58h]

  v54 = Flags;
  v46[0] = 0;
  v6 = 0;
  v47 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v49, 0, sizeof(v49));
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  SharedCacheMap = (char *)SectionObjectPointer->SharedCacheMap;
  v48 = SharedCacheMap;
  if ( SharedCacheMap )
  {
    Partition = CcGetPartition(SharedCacheMap, v7, v8, v9);
    v17 = (*((_DWORD *)SharedCacheMap + 38) & 0x2000) == 0;
    v47 = Partition;
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
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &v49);
    ++*((_DWORD *)SharedCacheMap + 1);
    ++*((_DWORD *)SharedCacheMap + 134);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v49);
    v18 = v49.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v28 = KeGetCurrentIrql();
        if ( v28 <= 0xFu && v49.OldIrql <= 0xFu && v28 >= 2u )
        {
          v29 = KeGetCurrentPrcb();
          v30 = v29->SchedulerAssist;
          v31 = ~(unsigned __int16)(-1LL << (v49.OldIrql + 1));
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
        v34 = v33->SchedulerAssist;
        v35 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v17 = (v35 & v34[5]) == 0;
        v34[5] &= v35;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick(v33);
      }
    }
  }
  __writecr8(v11);
  if ( !SharedCacheMap )
    goto LABEL_4;
  v19 = v47;
  if ( v47 != *(_QWORD *)(MmGetControlAreaPartition((__int64)SectionObjectPointer) + 8) )
    KeBugCheckEx(0x34u, 0x1232uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v20 = v54;
  if ( (v54 & 1) != 0 )
  {
    for ( i = SharedCacheMap + 224; (_QWORD *)*i != i; CcUninitializeCacheMap(*(PFILE_OBJECT *)(*i - 88LL), 0LL, 0LL) )
      ;
    v19 = v47;
    v20 = v54;
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
    if ( (v54 & 4) == 0 )
      v12 = v6;
    v13 = (v54 & 4) != 0 ? 5 : -1;
    v14 = MmPurgeSection((_DWORD)SectionObjectPointer, (_DWORD)FileOffset, Length, v12, (__int64)v46);
    if ( !v14 )
    {
      do
      {
        if ( Length )
          break;
        if ( !MmCanFileBeTruncated(SectionObjectPointer, FileOffset) )
          break;
        if ( (v54 & 2) != 0 )
          break;
        KeDelayExecutionThread(0, 0, &CcCollisionDelay);
        if ( !--v13 )
          break;
        v14 = MmPurgeSection((_DWORD)SectionObjectPointer, (_DWORD)FileOffset, 0, v12, (__int64)v46);
      }
      while ( !v14 );
      SharedCacheMap = v48;
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
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v47 + 128), &v49);
      CcDecrementOpenCount((__int64)SharedCacheMap);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v49);
      v21 = v49.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v42 = KeGetCurrentIrql();
          if ( v42 <= 0xFu && v49.OldIrql <= 0xFu && v42 >= 2u )
          {
            v43 = KeGetCurrentPrcb();
            v44 = v43->SchedulerAssist;
            v45 = ~(unsigned __int16)(-1LL << (v49.OldIrql + 1));
            v17 = (v45 & v44[5]) == 0;
            v44[5] &= v45;
            if ( v17 )
              KiRemoveSystemWorkPriorityKick(v43);
          }
        }
      }
      __writecr8(v21);
    }
    return v14;
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v19 + 128), &v49);
  CcDecrementOpenCount((__int64)SharedCacheMap);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v49);
  v37 = v49.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v38 = KeGetCurrentIrql();
      if ( v38 <= 0xFu && v49.OldIrql <= 0xFu && v38 >= 2u )
      {
        v39 = KeGetCurrentPrcb();
        v40 = v39->SchedulerAssist;
        v41 = ~(unsigned __int16)(-1LL << (v49.OldIrql + 1));
        v17 = (v41 & v40[5]) == 0;
        v40[5] &= v41;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick(v39);
      }
    }
  }
  __writecr8(v37);
  return 0;
}
