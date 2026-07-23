/*
 * XREFs of CcSetFileSizesEx @ 0x1402D2970
 * Callers:
 *     CcSetFileSizes @ 0x1402518A0 (CcSetFileSizes.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     RtlRaiseStatus @ 0x140212910 (RtlRaiseStatus.c)
 *     CcExtendVacbArray @ 0x140212CB4 (CcExtendVacbArray.c)
 *     FsRtlIsNtstatusExpected @ 0x1402406E0 (FsRtlIsNtstatusExpected.c)
 *     CcDeleteBcbs @ 0x140250A10 (CcDeleteBcbs.c)
 *     MmFlushSection @ 0x14026269C (MmFlushSection.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402D1E50 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     CcPurgeAndClearCacheSection @ 0x1402F9EE4 (CcPurgeAndClearCacheSection.c)
 *     CcPurgeCacheSection @ 0x1402FB670 (CcPurgeCacheSection.c)
 *     CcDeleteMbcb @ 0x1402FD68C (CcDeleteMbcb.c)
 *     CcUnmapVacbArray @ 0x14031DBC0 (CcUnmapVacbArray.c)
 *     CcDecrementOpenCount @ 0x14031DE8C (CcDecrementOpenCount.c)
 *     CcGetPartition @ 0x14031E550 (CcGetPartition.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MmExtendSection @ 0x1405E894C (MmExtendSection.c)
 */

NTSTATUS __stdcall CcSetFileSizesEx(PFILE_OBJECT FileObject, PCC_FILE_SIZES FileSizes)
{
  LARGE_INTEGER AllocationSize; // r14
  LARGE_INTEGER ValidDataLength; // rbx
  PFILE_OBJECT v4; // rsi
  char v5; // dl
  char v6; // r8
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rax
  char v8; // r13
  LARGE_INTEGER *SharedCacheMap; // rdi
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // r14
  KSPIN_LOCK *v12; // r14
  LARGE_INTEGER v13; // rcx
  NTSTATUS v14; // ebx
  unsigned __int64 v15; // rdi
  NTSTATUS result; // eax
  unsigned __int64 v17; // rbx
  char v18; // dl
  char v19; // r8
  unsigned __int64 OldIrql; // r14
  unsigned __int64 v21; // r14
  LARGE_INTEGER v22; // rcx
  NTSTATUS v23; // eax
  NTSTATUS v24; // r14d
  struct _KPRCB *v25; // r9
  unsigned __int64 v26; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v30; // eax
  bool v31; // zf
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // r10
  _DWORD *v34; // r9
  int v35; // eax
  unsigned __int64 v36; // rbx
  unsigned __int8 v37; // al
  struct _KPRCB *v38; // r9
  _DWORD *v39; // r8
  int v40; // eax
  unsigned __int8 v41; // al
  struct _KPRCB *v42; // r10
  _DWORD *v43; // r9
  int v44; // eax
  unsigned __int8 v45; // al
  struct _KPRCB *v46; // r10
  _DWORD *v47; // r9
  int v48; // eax
  unsigned __int8 v49; // al
  struct _KPRCB *v50; // r10
  _DWORD *v51; // r9
  int v52; // eax
  unsigned __int8 v53; // al
  struct _KPRCB *v54; // r9
  _DWORD *v55; // r8
  int v56; // eax
  unsigned __int8 v57; // al
  _DWORD *v58; // r8
  int v59; // eax
  __int128 v60; // [rsp+30h] [rbp-40h] BYREF
  struct _KLOCK_QUEUE_HANDLE v61; // [rsp+40h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-18h] BYREF
  LARGE_INTEGER FileOffset; // [rsp+B8h] [rbp+48h] BYREF
  __int64 QuadPart; // [rsp+C0h] [rbp+50h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+C8h] [rbp+58h]

  AllocationSize = FileSizes->AllocationSize;
  ValidDataLength = FileSizes->ValidDataLength;
  v4 = FileObject;
  FileOffset = FileSizes->FileSize;
  v60 = 0LL;
  QuadPart = AllocationSize.QuadPart;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v61, 0, sizeof(v61));
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  SectionObjectPointer = v4->SectionObjectPointer;
  v8 = 1;
  SharedCacheMap = (LARGE_INTEGER *)SectionObjectPointer->SharedCacheMap;
  if ( SharedCacheMap && SharedCacheMap[21].QuadPart )
  {
    SpinLock = (PKSPIN_LOCK)(CcGetPartition(SectionObjectPointer->SharedCacheMap, v5, v6) + 128);
    KeAcquireInStackQueuedSpinLock(SpinLock, &v61);
    if ( AllocationSize.QuadPart <= SharedCacheMap[4].QuadPart )
      goto LABEL_4;
    ++SharedCacheMap->HighPart;
    ++SharedCacheMap[67].LowPart;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v61);
    OldIrql = v61.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v61.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v30 = ~(unsigned __int16)(-1LL << (v61.OldIrql + 1));
          v31 = (v30 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v30;
          if ( v31 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v21 = LockHandle.OldIrql;
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
          v31 = (v35 & v34[5]) == 0;
          v34[5] &= v35;
          if ( v31 )
            KiRemoveSystemWorkPriorityKick(v33);
        }
      }
    }
    __writecr8(v21);
    QuadPart += 0xFFFFFLL;
    v22 = SharedCacheMap[21];
    LODWORD(QuadPart) = QuadPart & 0xFFF00000;
    v8 = 0;
    v23 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))MmExtendSection)((LARGE_INTEGER)v22.QuadPart, &QuadPart, 1LL);
    v24 = v23;
    if ( v23 < 0 )
    {
      if ( !FsRtlIsNtstatusExpected(v23) )
        v24 = -1073741588;
    }
    else
    {
      v24 = CcExtendVacbArray((__int64)SharedCacheMap, QuadPart);
    }
    KeAcquireInStackQueuedSpinLock(SpinLock, &v61);
    CcDecrementOpenCount(SharedCacheMap);
    if ( v24 < 0 )
    {
      KeReleaseInStackQueuedSpinLock(&v61);
      RtlRaiseStatus(v24);
    }
    SharedCacheMap = (LARGE_INTEGER *)FileObject->SectionObjectPointer->SharedCacheMap;
    if ( SharedCacheMap )
    {
LABEL_4:
      ++SharedCacheMap->HighPart;
      ++SharedCacheMap[67].LowPart;
      if ( v8 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v61);
        v10 = v61.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v41 = KeGetCurrentIrql();
            if ( v41 <= 0xFu && v61.OldIrql <= 0xFu && v41 >= 2u )
            {
              v42 = KeGetCurrentPrcb();
              v43 = v42->SchedulerAssist;
              v44 = ~(unsigned __int16)(-1LL << (v61.OldIrql + 1));
              v31 = (v44 & v43[5]) == 0;
              v43[5] &= v44;
              if ( v31 )
                KiRemoveSystemWorkPriorityKick(v42);
            }
          }
        }
        __writecr8(v10);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v11 = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v45 = KeGetCurrentIrql();
            if ( v45 <= 0xFu && LockHandle.OldIrql <= 0xFu && v45 >= 2u )
            {
              v46 = KeGetCurrentPrcb();
              v47 = v46->SchedulerAssist;
              v48 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v31 = (v48 & v47[5]) == 0;
              v47[5] &= v48;
              if ( v31 )
                KiRemoveSystemWorkPriorityKick(v46);
            }
          }
        }
        __writecr8(v11);
        v12 = SpinLock;
        KeAcquireInStackQueuedSpinLock(SpinLock, &v61);
      }
      else
      {
        v12 = SpinLock;
      }
      v13 = SharedCacheMap[5];
      if ( v13.QuadPart != 0x7FFFFFFFFFFFFFFFLL )
      {
        if ( FileOffset.QuadPart < v13.QuadPart )
          SharedCacheMap[5] = FileOffset;
        SharedCacheMap[6] = ValidDataLength;
      }
      v14 = 0;
      if ( FileOffset.QuadPart < SharedCacheMap[1].QuadPart && (SharedCacheMap[19].LowPart & 4) == 0 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v61);
        v17 = v61.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v49 = KeGetCurrentIrql();
            if ( v49 <= 0xFu && v61.OldIrql <= 0xFu && v49 >= 2u )
            {
              v50 = KeGetCurrentPrcb();
              v51 = v50->SchedulerAssist;
              v52 = ~(unsigned __int16)(-1LL << (v61.OldIrql + 1));
              v31 = (v52 & v51[5]) == 0;
              v51[5] &= v52;
              if ( v31 )
                KiRemoveSystemWorkPriorityKick(v50);
            }
          }
        }
        __writecr8(v17);
        v14 = 0;
        if ( (unsigned __int8)CcUnmapVacbArray((_DWORD)SharedCacheMap, (unsigned int)&FileOffset, 0, 0, 0, 0) )
        {
          if ( !FileOffset.QuadPart )
          {
            if ( SharedCacheMap[20].QuadPart )
              CcDeleteMbcb(SharedCacheMap);
            if ( (LARGE_INTEGER *)SharedCacheMap[2].QuadPart != &SharedCacheMap[2] )
              CcDeleteBcbs((__int64)SharedCacheMap, v18, v19);
          }
          v14 = CcPurgeAndClearCacheSection(SharedCacheMap, &FileOffset);
        }
        KeAcquireInStackQueuedSpinLock(v12, &v61);
      }
      SharedCacheMap[1] = FileOffset;
      CcDecrementOpenCount(SharedCacheMap);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v61);
      v15 = v61.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v53 = KeGetCurrentIrql();
          if ( v53 <= 0xFu && v61.OldIrql <= 0xFu && v53 >= 2u )
          {
            v54 = KeGetCurrentPrcb();
            v55 = v54->SchedulerAssist;
            v56 = ~(unsigned __int16)(-1LL << (v61.OldIrql + 1));
            v31 = (v56 & v55[5]) == 0;
            v55[5] &= v56;
            if ( v31 )
              KiRemoveSystemWorkPriorityKick(v54);
          }
        }
      }
      __writecr8(v15);
      return v14;
    }
    else
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v61);
      v36 = v61.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v37 = KeGetCurrentIrql();
          if ( v37 <= 0xFu && v61.OldIrql <= 0xFu && v37 >= 2u )
          {
            v38 = KeGetCurrentPrcb();
            v39 = v38->SchedulerAssist;
            v40 = ~(unsigned __int16)(-1LL << (v61.OldIrql + 1));
            v31 = (v40 & v39[5]) == 0;
            v39[5] &= v40;
            if ( v31 )
              KiRemoveSystemWorkPriorityKick(v38);
          }
        }
      }
      __writecr8(v36);
      return 0;
    }
  }
  else
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v26 = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 )
    {
      v57 = KeGetCurrentIrql();
      if ( v57 <= 0xFu && LockHandle.OldIrql <= 0xFu && v57 >= 2u )
      {
        v25 = KeGetCurrentPrcb();
        v58 = v25->SchedulerAssist;
        v59 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v31 = (v59 & v58[5]) == 0;
        v58[5] &= v59;
        if ( v31 )
          KiRemoveSystemWorkPriorityKick(v25);
      }
      v4 = FileObject;
    }
    __writecr8(v26);
    if ( (FileOffset.LowPart & 0xFFF) == 0 )
      return CcPurgeCacheSection(v4->SectionObjectPointer, &FileOffset, 0, 0) == 0 ? 0xC0000435 : 0;
    MmFlushSection((int)v4->SectionObjectPointer, (__int64 *)&FileOffset, 1LL, (__int64)v25, &v60, 0);
    result = v60;
    if ( (int)v60 >= 0 )
      return CcPurgeCacheSection(v4->SectionObjectPointer, &FileOffset, 0, 0) == 0 ? 0xC0000435 : 0;
  }
  return result;
}
