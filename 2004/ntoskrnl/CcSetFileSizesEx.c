/*
 * XREFs of CcSetFileSizesEx @ 0x1402C0280
 * Callers:
 *     CcSetFileSizes @ 0x140360490 (CcSetFileSizes.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcUnmapVacbArray @ 0x1402BEA50 (CcUnmapVacbArray.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402BF800 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402C0E10 (KeAcquireInStackQueuedSpinLock.c)
 *     CcDecrementOpenCount @ 0x1402C0EE4 (CcDecrementOpenCount.c)
 *     CcGetPartition @ 0x1402C15A0 (CcGetPartition.c)
 *     MmFlushSection @ 0x1402C25C4 (MmFlushSection.c)
 *     CcDeleteMbcb @ 0x1402C8B10 (CcDeleteMbcb.c)
 *     CcPurgeCacheSection @ 0x14031F970 (CcPurgeCacheSection.c)
 *     CcPurgeAndClearCacheSection @ 0x1403203EC (CcPurgeAndClearCacheSection.c)
 *     RtlRaiseStatus @ 0x1403281A0 (RtlRaiseStatus.c)
 *     CcExtendVacbArray @ 0x14034FAB0 (CcExtendVacbArray.c)
 *     FsRtlIsNtstatusExpected @ 0x1403502F0 (FsRtlIsNtstatusExpected.c)
 *     CcDeleteBcbs @ 0x14035F7D0 (CcDeleteBcbs.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     MmExtendSection @ 0x14060CAD4 (MmExtendSection.c)
 */

NTSTATUS __stdcall CcSetFileSizesEx(PFILE_OBJECT FileObject, PCC_FILE_SIZES FileSizes)
{
  LARGE_INTEGER AllocationSize; // r14
  LARGE_INTEGER ValidDataLength; // rbx
  PFILE_OBJECT v4; // rsi
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rax
  char v6; // r13
  LARGE_INTEGER *SharedCacheMap; // rdi
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // r14
  KSPIN_LOCK *v10; // r14
  LARGE_INTEGER v11; // rcx
  NTSTATUS v12; // ebx
  unsigned __int64 v13; // rdi
  NTSTATUS result; // eax
  unsigned __int64 v15; // rbx
  unsigned __int64 OldIrql; // r14
  unsigned __int64 v17; // r14
  LARGE_INTEGER v18; // rcx
  NTSTATUS v19; // eax
  NTSTATUS v20; // r14d
  struct _KPRCB *v21; // r9
  unsigned __int64 v22; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v26; // eax
  bool v27; // zf
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r10
  _DWORD *v30; // r9
  int v31; // eax
  unsigned __int64 v32; // rbx
  unsigned __int8 v33; // al
  struct _KPRCB *v34; // r9
  _DWORD *v35; // r8
  int v36; // eax
  unsigned __int8 v37; // al
  struct _KPRCB *v38; // r10
  _DWORD *v39; // r9
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
  struct _KPRCB *v50; // r9
  _DWORD *v51; // r8
  int v52; // eax
  unsigned __int8 v53; // al
  _DWORD *v54; // r8
  int v55; // eax
  __int128 v56; // [rsp+30h] [rbp-40h] BYREF
  struct _KLOCK_QUEUE_HANDLE v57; // [rsp+40h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-18h] BYREF
  LARGE_INTEGER FileOffset; // [rsp+B8h] [rbp+48h] BYREF
  LARGE_INTEGER v61; // [rsp+C0h] [rbp+50h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+C8h] [rbp+58h]

  AllocationSize = FileSizes->AllocationSize;
  ValidDataLength = FileSizes->ValidDataLength;
  v4 = FileObject;
  FileOffset = FileSizes->FileSize;
  v56 = 0LL;
  v61 = AllocationSize;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v57, 0, sizeof(v57));
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  SectionObjectPointer = v4->SectionObjectPointer;
  v6 = 1;
  SharedCacheMap = (LARGE_INTEGER *)SectionObjectPointer->SharedCacheMap;
  if ( SharedCacheMap && SharedCacheMap[21].QuadPart )
  {
    SpinLock = (PKSPIN_LOCK)(CcGetPartition(SectionObjectPointer->SharedCacheMap) + 128);
    KeAcquireInStackQueuedSpinLock(SpinLock, &v57);
    if ( AllocationSize.QuadPart <= SharedCacheMap[4].QuadPart )
      goto LABEL_4;
    ++SharedCacheMap->HighPart;
    ++SharedCacheMap[67].LowPart;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v57);
    OldIrql = v57.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v57.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v26 = ~(unsigned __int16)(-1LL << (v57.OldIrql + 1));
          v27 = (v26 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v26;
          if ( v27 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v17 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v28 = KeGetCurrentIrql();
        if ( v28 <= 0xFu && LockHandle.OldIrql <= 0xFu && v28 >= 2u )
        {
          v29 = KeGetCurrentPrcb();
          v30 = v29->SchedulerAssist;
          v31 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v27 = (v31 & v30[5]) == 0;
          v30[5] &= v31;
          if ( v27 )
            KiRemoveSystemWorkPriorityKick(v29);
        }
      }
    }
    __writecr8(v17);
    v61.QuadPart += 0xFFFFFLL;
    v18 = SharedCacheMap[21];
    v61.LowPart &= 0xFFF00000;
    v6 = 0;
    v19 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))MmExtendSection)((LARGE_INTEGER)v18.QuadPart, &v61, 1LL);
    v20 = v19;
    if ( v19 < 0 )
    {
      if ( !FsRtlIsNtstatusExpected(v19) )
        v20 = -1073741588;
    }
    else
    {
      v20 = ((__int64 (__fastcall *)(_QWORD, _QWORD))CcExtendVacbArray)(SharedCacheMap, (LARGE_INTEGER)v61.QuadPart);
    }
    KeAcquireInStackQueuedSpinLock(SpinLock, &v57);
    CcDecrementOpenCount(SharedCacheMap);
    if ( v20 < 0 )
    {
      KeReleaseInStackQueuedSpinLock(&v57);
      RtlRaiseStatus(v20);
    }
    SharedCacheMap = (LARGE_INTEGER *)FileObject->SectionObjectPointer->SharedCacheMap;
    if ( SharedCacheMap )
    {
LABEL_4:
      ++SharedCacheMap->HighPart;
      ++SharedCacheMap[67].LowPart;
      if ( v6 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v57);
        v8 = v57.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v37 = KeGetCurrentIrql();
            if ( v37 <= 0xFu && v57.OldIrql <= 0xFu && v37 >= 2u )
            {
              v38 = KeGetCurrentPrcb();
              v39 = v38->SchedulerAssist;
              v40 = ~(unsigned __int16)(-1LL << (v57.OldIrql + 1));
              v27 = (v40 & v39[5]) == 0;
              v39[5] &= v40;
              if ( v27 )
                KiRemoveSystemWorkPriorityKick(v38);
            }
          }
        }
        __writecr8(v8);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v9 = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v41 = KeGetCurrentIrql();
            if ( v41 <= 0xFu && LockHandle.OldIrql <= 0xFu && v41 >= 2u )
            {
              v42 = KeGetCurrentPrcb();
              v43 = v42->SchedulerAssist;
              v44 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v27 = (v44 & v43[5]) == 0;
              v43[5] &= v44;
              if ( v27 )
                KiRemoveSystemWorkPriorityKick(v42);
            }
          }
        }
        __writecr8(v9);
        v10 = SpinLock;
        KeAcquireInStackQueuedSpinLock(SpinLock, &v57);
      }
      else
      {
        v10 = SpinLock;
      }
      v11 = SharedCacheMap[5];
      if ( v11.QuadPart != 0x7FFFFFFFFFFFFFFFLL )
      {
        if ( FileOffset.QuadPart < v11.QuadPart )
          SharedCacheMap[5] = FileOffset;
        SharedCacheMap[6] = ValidDataLength;
      }
      v12 = 0;
      if ( FileOffset.QuadPart < SharedCacheMap[1].QuadPart && (SharedCacheMap[19].LowPart & 4) == 0 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v57);
        v15 = v57.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v45 = KeGetCurrentIrql();
            if ( v45 <= 0xFu && v57.OldIrql <= 0xFu && v45 >= 2u )
            {
              v46 = KeGetCurrentPrcb();
              v47 = v46->SchedulerAssist;
              v48 = ~(unsigned __int16)(-1LL << (v57.OldIrql + 1));
              v27 = (v48 & v47[5]) == 0;
              v47[5] &= v48;
              if ( v27 )
                KiRemoveSystemWorkPriorityKick(v46);
            }
          }
        }
        __writecr8(v15);
        v12 = 0;
        if ( (unsigned __int8)CcUnmapVacbArray((__int64)SharedCacheMap, (__int64 *)&FileOffset, 0, 0, 0, 0) )
        {
          if ( !FileOffset.QuadPart )
          {
            if ( SharedCacheMap[20].QuadPart )
              CcDeleteMbcb(SharedCacheMap);
            if ( (LARGE_INTEGER *)SharedCacheMap[2].QuadPart != &SharedCacheMap[2] )
              CcDeleteBcbs(SharedCacheMap);
          }
          v12 = CcPurgeAndClearCacheSection(SharedCacheMap, &FileOffset);
        }
        KeAcquireInStackQueuedSpinLock(v10, &v57);
      }
      SharedCacheMap[1] = FileOffset;
      CcDecrementOpenCount(SharedCacheMap);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v57);
      v13 = v57.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v49 = KeGetCurrentIrql();
          if ( v49 <= 0xFu && v57.OldIrql <= 0xFu && v49 >= 2u )
          {
            v50 = KeGetCurrentPrcb();
            v51 = v50->SchedulerAssist;
            v52 = ~(unsigned __int16)(-1LL << (v57.OldIrql + 1));
            v27 = (v52 & v51[5]) == 0;
            v51[5] &= v52;
            if ( v27 )
              KiRemoveSystemWorkPriorityKick(v50);
          }
        }
      }
      __writecr8(v13);
      return v12;
    }
    else
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v57);
      v32 = v57.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v33 = KeGetCurrentIrql();
          if ( v33 <= 0xFu && v57.OldIrql <= 0xFu && v33 >= 2u )
          {
            v34 = KeGetCurrentPrcb();
            v35 = v34->SchedulerAssist;
            v36 = ~(unsigned __int16)(-1LL << (v57.OldIrql + 1));
            v27 = (v36 & v35[5]) == 0;
            v35[5] &= v36;
            if ( v27 )
              KiRemoveSystemWorkPriorityKick(v34);
          }
        }
      }
      __writecr8(v32);
      return 0;
    }
  }
  else
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v22 = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 )
    {
      v53 = KeGetCurrentIrql();
      if ( v53 <= 0xFu && LockHandle.OldIrql <= 0xFu && v53 >= 2u )
      {
        v21 = KeGetCurrentPrcb();
        v54 = v21->SchedulerAssist;
        v55 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v27 = (v55 & v54[5]) == 0;
        v54[5] &= v55;
        if ( v27 )
          KiRemoveSystemWorkPriorityKick(v21);
      }
      v4 = FileObject;
    }
    __writecr8(v22);
    if ( (FileOffset.LowPart & 0xFFF) == 0 )
      return CcPurgeCacheSection(v4->SectionObjectPointer, &FileOffset, 0, 0) == 0 ? 0xC0000435 : 0;
    MmFlushSection(v4->SectionObjectPointer, (unsigned int)&FileOffset, 1, (_DWORD)v21, (__int64)&v56, 0);
    result = v56;
    if ( (int)v56 >= 0 )
      return CcPurgeCacheSection(v4->SectionObjectPointer, &FileOffset, 0, 0) == 0 ? 0xC0000435 : 0;
  }
  return result;
}
