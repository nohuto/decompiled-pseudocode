/*
 * XREFs of CcWriteBehindInternal @ 0x140288760
 * Callers:
 *     CcWriteBehind @ 0x140275FC0 (CcWriteBehind.c)
 * Callees:
 *     ObFastDereferenceObjectDeferDelete @ 0x140230680 (ObFastDereferenceObjectDeferDelete.c)
 *     CcShouldIssueVDLUpdate @ 0x14023A1D8 (CcShouldIssueVDLUpdate.c)
 *     CcSetValidData @ 0x14023F3E8 (CcSetValidData.c)
 *     CcIsFatalWriteError @ 0x140248C10 (CcIsFatalWriteError.c)
 *     CcDeleteSharedCacheMap @ 0x140275338 (CcDeleteSharedCacheMap.c)
 *     CcScheduleLazyWriteScan @ 0x140276758 (CcScheduleLazyWriteScan.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x1402767FC (CcInsertIntoDirtySharedCacheMapList.c)
 *     CcIsWriteBehindThreadpoolAtLowPriority @ 0x1402768B4 (CcIsWriteBehindThreadpoolAtLowPriority.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x14027A1B4 (CcReferenceSharedCacheMapFileObject.c)
 *     CcGetFlushedValidData @ 0x14027FB60 (CcGetFlushedValidData.c)
 *     CcDecrementOpenCount @ 0x140282AF4 (CcDecrementOpenCount.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcFlushCachePriv @ 0x140283030 (CcFlushCachePriv.c)
 *     CcApplyLowIoPriorityToThread @ 0x140288EE4 (CcApplyLowIoPriorityToThread.c)
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     CcCancelMmWaitForUninitializeCacheMap @ 0x140538890 (CcCancelMmWaitForUninitializeCacheMap.c)
 *     CcMmLogLostDelayedWriteError @ 0x14053A580 (CcMmLogLostDelayedWriteError.c)
 *     FsRtlAcquireFileExclusive @ 0x1406FE2E0 (FsRtlAcquireFileExclusive.c)
 *     FsRtlReleaseFile @ 0x1406FE310 (FsRtlReleaseFile.c)
 */

void __fastcall CcWriteBehindInternal(__int64 a1)
{
  __int64 v2; // rbx
  char v3; // r12
  int *v4; // rax
  __int64 v5; // r14
  __int64 v6; // rdx
  unsigned __int64 OldIrql; // rdi
  bool v8; // r15
  __int64 v9; // rdx
  unsigned __int64 v10; // rdi
  __int64 v11; // rcx
  unsigned int v12; // r15d
  unsigned __int64 v13; // rdi
  __int64 v14; // rdi
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  signed __int64 *v17; // r9
  unsigned int v18; // r15d
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  int *v21; // r15
  int valid; // r15d
  unsigned __int64 v23; // rdi
  struct _FILE_OBJECT *v24; // rdi
  int v25; // ecx
  unsigned int v26; // eax
  struct _FILE_OBJECT *v27; // rdi
  char v28; // r12
  int v29; // eax
  unsigned __int64 v30; // rbx
  unsigned __int64 v31; // r15
  unsigned __int64 v32; // r15
  __int64 v33; // rax
  __int64 v34; // rdx
  char v35; // r9
  __int64 v36; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v40; // eax
  bool v41; // zf
  unsigned __int8 v42; // al
  struct _KPRCB *v43; // r10
  _DWORD *v44; // r9
  int v45; // eax
  unsigned __int8 v46; // al
  struct _KPRCB *v47; // r10
  _DWORD *v48; // r9
  int v49; // eax
  unsigned __int64 v50; // rdi
  unsigned __int8 v51; // al
  struct _KPRCB *v52; // r10
  _DWORD *v53; // r9
  int v54; // eax
  unsigned __int8 v55; // al
  struct _KPRCB *v56; // r10
  _DWORD *v57; // r9
  int v58; // eax
  unsigned __int8 v59; // al
  struct _KPRCB *v60; // r10
  _DWORD *v61; // r9
  int v62; // eax
  unsigned __int64 v63; // rdi
  unsigned __int8 v64; // al
  struct _KPRCB *v65; // r10
  _DWORD *v66; // r9
  int v67; // eax
  unsigned __int8 v68; // al
  struct _KPRCB *v69; // r9
  _DWORD *v70; // r8
  int v71; // eax
  __int64 v72; // rdx
  __int64 v73; // r8
  unsigned __int64 v74; // rbx
  unsigned __int8 v75; // al
  struct _KPRCB *v76; // r9
  _DWORD *v77; // r8
  int v78; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-59h] BYREF
  int *v80; // [rsp+48h] [rbp-41h]
  __int64 v81; // [rsp+50h] [rbp-39h]
  __int64 v82; // [rsp+58h] [rbp-31h] BYREF
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // [rsp+60h] [rbp-29h]
  struct _KLOCK_QUEUE_HANDLE v84; // [rsp+68h] [rbp-21h] BYREF
  struct _KLOCK_QUEUE_HANDLE v85; // [rsp+80h] [rbp-9h] BYREF
  char v86; // [rsp+F8h] [rbp+6Fh]
  int v87; // [rsp+100h] [rbp+77h]
  LARGE_INTEGER FlushedValidData; // [rsp+108h] [rbp+7Fh] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(_BYTE *)(a1 + 56);
  v4 = *(int **)(a1 + 24);
  v82 = 0LL;
  memset(&v84, 0, sizeof(v84));
  v80 = v4;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v86 = v3;
  memset(&v85, 0, sizeof(v85));
  v5 = *(_QWORD *)(v2 + 528);
  if ( CcEnablePerVolumeLazyWriter == 1 )
    v81 = *(_QWORD *)(v2 + 592);
  else
    v81 = 0LL;
  if ( v5 != *(_QWORD *)(a1 + 136) )
    KeBugCheckEx(0x34u, 0x1C3BuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  while ( 1 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 704), &LockHandle);
    ++*(_DWORD *)(v2 + 4);
    ++*(_DWORD *)(v2 + 536);
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
          v6 = -1LL << (LockHandle.OldIrql + 1);
          v40 = ~(unsigned __int16)v6;
          v41 = (v40 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v40;
          if ( v41 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    LOBYTE(v6) = 1;
    CcApplyLowIoPriorityToThread(v5, v6, v2);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 768), &v85);
    v8 = CcIsWriteBehindThreadpoolAtLowPriority(v5);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v85);
    v10 = v85.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v42 = KeGetCurrentIrql();
        if ( v42 <= 0xFu && v85.OldIrql <= 0xFu && v42 >= 2u )
        {
          v43 = KeGetCurrentPrcb();
          v44 = v43->SchedulerAssist;
          v9 = -1LL << (v85.OldIrql + 1);
          v45 = ~(unsigned __int16)v9;
          v41 = (v45 & v44[5]) == 0;
          v44[5] &= v45;
          if ( v41 )
            KiRemoveSystemWorkPriorityKick(v43);
        }
      }
    }
    __writecr8(v10);
    if ( !v8 )
      CcApplyLowIoPriorityToThread(v5, 0LL, v2);
    LOBYTE(v9) = 1;
    if ( !(**(unsigned __int8 (__fastcall ***)(_QWORD, __int64))(v2 + 208))(*(_QWORD *)(v2 + 216), v9) )
      break;
    ExAcquireFastMutex((PFAST_MUTEX)(v2 + 280));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 704), &LockHandle);
    v11 = *(_QWORD *)(v2 + 160);
    v87 = *(_DWORD *)(v2 + 152) & 0x10000;
    if ( v11 )
    {
      if ( CcEnablePerVolumeLazyWriter == 1 )
        v26 = *(_DWORD *)(*(_QWORD *)(v2 + 592) + 912LL);
      else
        v26 = *(_DWORD *)(v5 + 912);
      v12 = *(_DWORD *)(v11 + 8);
      *(_DWORD *)(v11 + 4) = v12;
      if ( v12 > v26 )
      {
        *(_DWORD *)(v11 + 4) = v26;
        v12 = v26;
      }
    }
    else
    {
      v12 = *(_DWORD *)(v2 + 192);
    }
    SectionObjectPointer = *(PSECTION_OBJECT_POINTERS *)((*(_QWORD *)(v2 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v13 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v46 = KeGetCurrentIrql();
        if ( v46 <= 0xFu && LockHandle.OldIrql <= 0xFu && v46 >= 2u )
        {
          v47 = KeGetCurrentPrcb();
          v48 = v47->SchedulerAssist;
          v49 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v41 = (v49 & v48[5]) == 0;
          v48[5] &= v49;
          if ( v41 )
            KiRemoveSystemWorkPriorityKick(v47);
        }
      }
    }
    __writecr8(v13);
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v2 + 280));
    _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v2 + 504) + 196LL), v12);
    if ( (*(_DWORD *)(v2 + 152) & 0x1000000) != 0 )
      _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v2 + 504) + 200LL), v12);
    v14 = *(_QWORD *)(v2 + 504);
    *(_QWORD *)(v14 + 264) += *(unsigned int *)(v14 + 196);
    v15 = *(_QWORD *)(v14 + 272);
    if ( v15 <= *(unsigned int *)(*(_QWORD *)(v2 + 504) + 196LL) )
      v15 = *(unsigned int *)(*(_QWORD *)(v2 + 504) + 196LL);
    ++*(_QWORD *)(v14 + 280);
    *(_QWORD *)(v14 + 272) = v15;
    *(_QWORD *)(v14 + 288) += *(unsigned int *)(*(_QWORD *)(v2 + 504) + 200LL);
    v16 = *(_QWORD *)(v14 + 296);
    if ( v16 <= *(unsigned int *)(*(_QWORD *)(v2 + 504) + 200LL) )
      v16 = *(unsigned int *)(*(_QWORD *)(v2 + 504) + 200LL);
    ++*(_QWORD *)(v14 + 304);
    *(_QWORD *)(v14 + 296) = v16;
    if ( (*(_DWORD *)(v2 + 152) & 0x1000000) != 0 )
    {
      v17 = &v82;
      v82 = *(_QWORD *)(*(_QWORD *)(v2 + 240) + 112LL);
    }
    else
    {
      v17 = 0LL;
    }
    CcFlushCachePriv((__int64)SectionObjectPointer, &CcNoDelay, 1u, v17, 0, v80);
    CcApplyLowIoPriorityToThread(v5, 0LL, v2);
    v18 = -v12;
    _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v2 + 504) + 196LL), v18);
    if ( (*(_DWORD *)(v2 + 152) & 0x1000000) != 0 )
      _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v2 + 504) + 200LL), v18);
    *(_QWORD *)(v14 + 264) += *(unsigned int *)(*(_QWORD *)(v2 + 504) + 196LL);
    v19 = *(_QWORD *)(v14 + 272);
    if ( v19 <= *(unsigned int *)(*(_QWORD *)(v2 + 504) + 196LL) )
      v19 = *(unsigned int *)(*(_QWORD *)(v2 + 504) + 196LL);
    ++*(_QWORD *)(v14 + 280);
    *(_QWORD *)(v14 + 272) = v19;
    *(_QWORD *)(v14 + 288) += *(unsigned int *)(*(_QWORD *)(v2 + 504) + 200LL);
    v20 = *(_QWORD *)(v14 + 296);
    if ( v20 <= *(unsigned int *)(*(_QWORD *)(v2 + 504) + 200LL) )
      v20 = *(unsigned int *)(*(_QWORD *)(v2 + 504) + 200LL);
    ++*(_QWORD *)(v14 + 304);
    *(_QWORD *)(v14 + 296) = v20;
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v2 + 208) + 8LL))(*(_QWORD *)(v2 + 216));
    v21 = v80;
    if ( *v80 != -2147483626 && CcIsFatalWriteError(v2, *v80) )
    {
      v50 = CcReferenceSharedCacheMapFileObject(v2);
      CcMmLogLostDelayedWriteError(v50, (unsigned int)*v21);
      ObFastDereferenceObjectDeferDelete((signed __int64 *)(v2 + 96), v50, 0x63536343u);
    }
    valid = 0;
    ExAcquireFastMutex((PFAST_MUTEX)(v2 + 280));
    FlushedValidData = *(LARGE_INTEGER *)(v2 + 40);
    if ( CcShouldIssueVDLUpdate(v2) )
    {
      FlushedValidData = CcGetFlushedValidData(SectionObjectPointer, 1u);
      if ( FlushedValidData.QuadPart >= *(_QWORD *)(v2 + 40) )
      {
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v2 + 280));
        v27 = (struct _FILE_OBJECT *)CcReferenceSharedCacheMapFileObject(v2);
        valid = CcSetValidData(v27, (__int64 *)&FlushedValidData);
        ObFastDereferenceObjectDeferDelete((signed __int64 *)(v2 + 96), (unsigned __int64)v27, 0x63536343u);
        ExAcquireFastMutex((PFAST_MUTEX)(v2 + 280));
        if ( valid < 0 )
        {
          if ( valid != -1073741740 && valid != -1073741670 && valid != -2147483626 )
            FlushedValidData = *(LARGE_INTEGER *)(v2 + 48);
        }
        else
        {
          *(LARGE_INTEGER *)(v2 + 40) = FlushedValidData;
        }
      }
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v2 + 280));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 704), &LockHandle);
    --*(_DWORD *)(v2 + 4);
    --*(_DWORD *)(v2 + 536);
    if ( *(_DWORD *)(v2 + 4) )
      goto LABEL_50;
    if ( valid == -1073741740 || valid == -2147483626 || valid == -1073741670 )
    {
      if ( (*(_DWORD *)(v2 + 152) & 0x10000) != 0 )
        CcCancelMmWaitForUninitializeCacheMap(v2);
      if ( !*(_DWORD *)(v2 + 112) )
      {
        CcInsertIntoDirtySharedCacheMapList(v2);
        v28 = 1;
        goto LABEL_51;
      }
LABEL_50:
      v28 = 0;
      goto LABEL_51;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v23 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v51 = KeGetCurrentIrql();
        if ( v51 <= 0xFu && LockHandle.OldIrql <= 0xFu && v51 >= 2u )
        {
          v52 = KeGetCurrentPrcb();
          v53 = v52->SchedulerAssist;
          v54 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v41 = (v54 & v53[5]) == 0;
          v53[5] &= v54;
          if ( v41 )
            KiRemoveSystemWorkPriorityKick(v52);
        }
      }
    }
    __writecr8(v23);
    v24 = (struct _FILE_OBJECT *)CcReferenceSharedCacheMapFileObject(v2);
    FsRtlAcquireFileExclusive(v24);
    KeAcquireInStackQueuedSpinLock(&CcMasterLock, &v84);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 704), &LockHandle);
    v25 = *(_DWORD *)(v2 + 4);
    if ( !v25
      && (!*(_DWORD *)(v2 + 112)
       && (*(_QWORD *)(v2 + 40) == 0x7FFFFFFFFFFFFFFFLL
        || (*(_DWORD *)(v2 + 152) & 0x400) == 0
        || FlushedValidData.QuadPart >= *(_QWORD *)(v2 + 48))
       || !*(_QWORD *)(v2 + 8) && (*(_DWORD *)(v2 + 152) & 4) == 0) )
    {
      CcDeleteSharedCacheMap((_QWORD *)v2, &v84, &LockHandle, 1, v24);
      *((_QWORD *)v80 + 1) = 0LL;
      goto LABEL_38;
    }
    if ( *(_DWORD *)(v2 + 112) )
    {
      if ( (*(_DWORD *)(v2 + 152) & 0x10000) != 0 )
        CcCancelMmWaitForUninitializeCacheMap(v2);
LABEL_62:
      v28 = 0;
      goto LABEL_63;
    }
    if ( v25 )
      goto LABEL_62;
    CcInsertIntoDirtySharedCacheMapList(v2);
    v28 = 1;
LABEL_63:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v31 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v55 = KeGetCurrentIrql();
        if ( v55 <= 0xFu && LockHandle.OldIrql <= 0xFu && v55 >= 2u )
        {
          v56 = KeGetCurrentPrcb();
          v57 = v56->SchedulerAssist;
          v58 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v41 = (v58 & v57[5]) == 0;
          v57[5] &= v58;
          if ( v41 )
            KiRemoveSystemWorkPriorityKick(v56);
        }
      }
    }
    __writecr8(v31);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v84);
    v32 = v84.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v59 = KeGetCurrentIrql();
        if ( v59 <= 0xFu && v84.OldIrql <= 0xFu && v59 >= 2u )
        {
          v60 = KeGetCurrentPrcb();
          v61 = v60->SchedulerAssist;
          v62 = ~(unsigned __int16)(-1LL << (v84.OldIrql + 1));
          v41 = (v62 & v61[5]) == 0;
          v61[5] &= v62;
          if ( v41 )
            KiRemoveSystemWorkPriorityKick(v60);
        }
      }
    }
    __writecr8(v32);
    FsRtlReleaseFile(v24);
    ObFastDereferenceObjectDeferDelete((signed __int64 *)(v2 + 96), (unsigned __int64)v24, 0x63536343u);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 704), &LockHandle);
LABEL_51:
    v29 = *(_DWORD *)(v2 + 152);
    if ( (v29 & 0x10000) == 0 || v87 )
    {
      if ( *((_QWORD *)v80 + 1) != 35422LL )
        *(_DWORD *)(v2 + 152) = v29 & 0xFFFFFFDF;
      if ( v28 )
      {
        if ( CcEnablePerVolumeLazyWriter == 1 )
          v33 = *(_QWORD *)(v2 + 592);
        else
          v33 = *(_QWORD *)(v2 + 528);
        v34 = v81;
        *(_BYTE *)(v33 + 986) = 1;
        if ( (*(_DWORD *)(v2 + 152) & 0x10000) != 0 )
        {
          v35 = 1;
          v36 = 1LL;
        }
        else
        {
          v35 = 0;
          v36 = 0LL;
        }
        CcScheduleLazyWriteScan((_BYTE *)v5, v34, v36, v35);
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v30 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v68 = KeGetCurrentIrql();
          if ( v68 <= 0xFu && LockHandle.OldIrql <= 0xFu && v68 >= 2u )
          {
            v69 = KeGetCurrentPrcb();
            v70 = v69->SchedulerAssist;
            v71 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v41 = (v71 & v70[5]) == 0;
            v70[5] &= v71;
            if ( v41 )
              KiRemoveSystemWorkPriorityKick(v69);
          }
        }
      }
      __writecr8(v30);
      goto LABEL_38;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v63 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v64 = KeGetCurrentIrql();
        if ( v64 <= 0xFu && LockHandle.OldIrql <= 0xFu && v64 >= 2u )
        {
          v65 = KeGetCurrentPrcb();
          v66 = v65->SchedulerAssist;
          v67 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v41 = (v67 & v66[5]) == 0;
          v66[5] &= v67;
          if ( v41 )
            KiRemoveSystemWorkPriorityKick(v65);
        }
      }
    }
    __writecr8(v63);
  }
  CcApplyLowIoPriorityToThread(v5, 0LL, v2);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 704), &LockHandle);
  *(_DWORD *)(v2 + 152) &= ~0x20u;
  if ( (*(_DWORD *)(v2 + 152) & 0x10000) != 0 )
    CcCancelMmWaitForUninitializeCacheMap(v2);
  CcDecrementOpenCount(v2, v72, v73);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v74 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v75 = KeGetCurrentIrql();
      if ( v75 <= 0xFu && LockHandle.OldIrql <= 0xFu && v75 >= 2u )
      {
        v76 = KeGetCurrentPrcb();
        v77 = v76->SchedulerAssist;
        v78 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v41 = (v78 & v77[5]) == 0;
        v77[5] &= v78;
        if ( v41 )
          KiRemoveSystemWorkPriorityKick(v76);
      }
    }
  }
  __writecr8(v74);
  *v80 = -1073741740;
LABEL_38:
  if ( v86 )
    KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
}
