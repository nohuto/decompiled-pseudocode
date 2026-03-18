/*
 * XREFs of CcWriteBehindInternal @ 0x140295920
 * Callers:
 *     CcWriteBehind @ 0x14024A910 (CcWriteBehind.c)
 * Callees:
 *     CcSetValidData @ 0x14020467C (CcSetValidData.c)
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     KeReleaseGuardedMutex @ 0x14021ECD0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140220130 (ExAcquireFastMutex.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x140241848 (CcInsertIntoDirtySharedCacheMapList.c)
 *     CcScheduleLazyWriteScan @ 0x1402418E0 (CcScheduleLazyWriteScan.c)
 *     CcDeleteSharedCacheMap @ 0x140247C98 (CcDeleteSharedCacheMap.c)
 *     CcDereferenceSharedCacheMapFileObject @ 0x140247FA8 (CcDereferenceSharedCacheMapFileObject.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x140247FF4 (CcReferenceSharedCacheMapFileObject.c)
 *     CcApplyLowIoPriorityToThread @ 0x14024AAB8 (CcApplyLowIoPriorityToThread.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     CcFlushCachePriv @ 0x140296300 (CcFlushCachePriv.c)
 *     CcDecrementOpenCount @ 0x14029A71C (CcDecrementOpenCount.c)
 *     CcGetPartition @ 0x14029ADE0 (CcGetPartition.c)
 *     CcGetFlushedValidData @ 0x1403170D0 (CcGetFlushedValidData.c)
 *     CcIsFatalWriteError @ 0x1403206AC (CcIsFatalWriteError.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     CcCancelMmWaitForUninitializeCacheMap @ 0x1404E6EF0 (CcCancelMmWaitForUninitializeCacheMap.c)
 *     CcMmLogLostDelayedWriteError @ 0x1404E8A38 (CcMmLogLostDelayedWriteError.c)
 *     FsRtlAcquireFileExclusive @ 0x140680270 (FsRtlAcquireFileExclusive.c)
 *     FsRtlReleaseFile @ 0x1406802A0 (FsRtlReleaseFile.c)
 */

void __fastcall CcWriteBehindInternal(__int64 a1)
{
  __int64 v1; // rdi
  char v3; // al
  __int64 Partition; // rax
  __int64 v5; // r13
  KSPIN_LOCK *v6; // rsi
  KSPIN_LOCK *v7; // r15
  unsigned __int64 OldIrql; // rbx
  unsigned int v9; // esi
  unsigned int v10; // r14d
  __int64 v11; // rdx
  unsigned __int64 v12; // rbx
  __int64 v13; // rax
  unsigned int v14; // ebx
  SECTION_OBJECT_POINTERS *v15; // r15
  unsigned __int64 v16; // rsi
  __int64 *v17; // r9
  _DWORD *v18; // rsi
  unsigned int v19; // ebx
  int valid; // esi
  __int64 v21; // rax
  bool v22; // cl
  bool v23; // al
  unsigned __int64 v24; // rbx
  struct _FILE_OBJECT *v25; // rsi
  int v26; // r11d
  bool v27; // zf
  __int64 v28; // rax
  unsigned int v29; // ecx
  struct _FILE_OBJECT *v30; // rbx
  unsigned __int64 v31; // rbx
  unsigned __int64 v32; // rbx
  char v33; // dl
  int v34; // eax
  unsigned __int64 v35; // rbx
  bool v36; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v40; // eax
  unsigned __int8 v41; // al
  struct _KPRCB *v42; // r10
  _DWORD *v43; // r9
  int v44; // eax
  unsigned __int8 v45; // al
  struct _KPRCB *v46; // r10
  _DWORD *v47; // r9
  int v48; // eax
  ULONG_PTR v49; // rbx
  unsigned __int8 v50; // al
  struct _KPRCB *v51; // r10
  _DWORD *v52; // r9
  int v53; // eax
  int v54; // r11d
  unsigned __int8 v55; // al
  struct _KPRCB *v56; // r10
  _DWORD *v57; // r9
  int v58; // eax
  unsigned __int8 v59; // al
  struct _KPRCB *v60; // r10
  _DWORD *v61; // r9
  int v62; // eax
  unsigned __int64 v63; // rbx
  unsigned __int8 v64; // al
  struct _KPRCB *v65; // r10
  _DWORD *v66; // r9
  int v67; // eax
  char v68; // r8
  char v69; // dl
  unsigned __int8 v70; // al
  struct _KPRCB *v71; // r9
  _DWORD *v72; // r8
  int v73; // eax
  unsigned __int64 v74; // rbx
  unsigned __int8 v75; // al
  struct _KPRCB *v76; // r9
  _DWORD *v77; // r8
  int v78; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-49h] BYREF
  LARGE_INTEGER FlushedValidData; // [rsp+48h] [rbp-31h] BYREF
  __int64 v81; // [rsp+50h] [rbp-29h]
  __int64 v82; // [rsp+58h] [rbp-21h] BYREF
  struct _KLOCK_QUEUE_HANDLE v83; // [rsp+60h] [rbp-19h] BYREF
  struct _KLOCK_QUEUE_HANDLE v84; // [rsp+78h] [rbp-1h] BYREF
  char v86; // [rsp+E8h] [rbp+6Fh]
  char v87; // [rsp+F0h] [rbp+77h]
  int v88; // [rsp+F8h] [rbp+7Fh]

  v1 = *(_QWORD *)(a1 + 16);
  v3 = *(_BYTE *)(a1 + 56);
  v81 = *(_QWORD *)(a1 + 24);
  v87 = v3;
  FlushedValidData.QuadPart = 0LL;
  v82 = 0LL;
  memset(&v83, 0, sizeof(v83));
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v84, 0, sizeof(v84));
  Partition = CcGetPartition(v1);
  v5 = Partition;
  if ( Partition != *(_QWORD *)(a1 + 128) )
    KeBugCheckEx(0x34u, 0x1A98uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v6 = (KSPIN_LOCK *)(Partition + 192);
  v7 = (KSPIN_LOCK *)(Partition + 128);
  while ( 1 )
  {
    v86 = 0;
    KeAcquireInStackQueuedSpinLock(v7, &LockHandle);
    ++*(_DWORD *)(v1 + 4);
    ++*(_DWORD *)(v1 + 536);
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
          v40 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v27 = (v40 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v40;
          if ( v27 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    CcApplyLowIoPriorityToThread(v5, 1, (_DWORD *)v1);
    KeAcquireInStackQueuedSpinLock(v6, &v84);
    v9 = *(_DWORD *)(v5 + 960);
    v10 = *(_DWORD *)(v5 + 200);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v84);
    v12 = v84.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v41 = KeGetCurrentIrql();
        if ( v41 <= 0xFu && v84.OldIrql <= 0xFu && v41 >= 2u )
        {
          v42 = KeGetCurrentPrcb();
          v43 = v42->SchedulerAssist;
          v11 = -1LL << (v84.OldIrql + 1);
          v44 = ~(unsigned __int16)v11;
          v27 = (v44 & v43[5]) == 0;
          v43[5] &= v44;
          if ( v27 )
            KiRemoveSystemWorkPriorityKick(v42);
        }
      }
    }
    __writecr8(v12);
    if ( v9 >= v10 )
      CcApplyLowIoPriorityToThread(v5, 0, (_DWORD *)v1);
    LOBYTE(v11) = 1;
    if ( !(**(unsigned __int8 (__fastcall ***)(_QWORD, __int64))(v1 + 208))(*(_QWORD *)(v1 + 216), v11) )
      break;
    ExAcquireFastMutex((PFAST_MUTEX)(v1 + 280));
    KeAcquireInStackQueuedSpinLock(v7, &LockHandle);
    v88 = *(_DWORD *)(v1 + 152) & 0x10000;
    v13 = *(_QWORD *)(v1 + 160);
    if ( v13 )
    {
      v14 = *(_DWORD *)(v13 + 8);
      *(_DWORD *)(v13 + 4) = v14;
      v29 = *(_DWORD *)(v5 + 496);
      if ( v14 > v29 )
      {
        *(_DWORD *)(v13 + 4) = v29;
        v14 = v29;
      }
    }
    else
    {
      v14 = *(_DWORD *)(v1 + 192);
    }
    v15 = *(SECTION_OBJECT_POINTERS **)((*(_QWORD *)(v1 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v16 = LockHandle.OldIrql;
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
          v27 = (v48 & v47[5]) == 0;
          v47[5] &= v48;
          if ( v27 )
            KiRemoveSystemWorkPriorityKick(v46);
        }
      }
    }
    __writecr8(v16);
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v1 + 280));
    _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v1 + 504) + 196LL), v14);
    if ( (*(_DWORD *)(v1 + 152) & 0x1000000) != 0
      && (_InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v1 + 504) + 200LL), v14),
          (*(_DWORD *)(v1 + 152) & 0x1000000) != 0) )
    {
      v17 = &v82;
      v82 = *(_QWORD *)(*(_QWORD *)(v1 + 240) + 112LL);
    }
    else
    {
      LODWORD(v17) = 0;
    }
    v18 = (_DWORD *)v81;
    CcFlushCachePriv((_DWORD)v15, (unsigned int)&CcNoDelay, 1, (_DWORD)v17, 0, v81);
    CcApplyLowIoPriorityToThread(v5, 0, (_DWORD *)v1);
    v19 = -v14;
    _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v1 + 504) + 196LL), v19);
    if ( (*(_DWORD *)(v1 + 152) & 0x1000000) != 0 )
      _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v1 + 504) + 200LL), v19);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v1 + 208) + 8LL))(*(_QWORD *)(v1 + 216));
    if ( *v18 != -2147483626 && (unsigned __int8)CcIsFatalWriteError(v1) )
    {
      v49 = CcReferenceSharedCacheMapFileObject(v1);
      CcMmLogLostDelayedWriteError(v49, (unsigned int)*v18);
      CcDereferenceSharedCacheMapFileObject(v1, v49);
    }
    valid = 0;
    ExAcquireFastMutex((PFAST_MUTEX)(v1 + 280));
    FlushedValidData = *(LARGE_INTEGER *)(v1 + 40);
    v21 = CcGetPartition(v1);
    v22 = *(_DWORD *)(v1 + 4) > 1u && *(_QWORD *)(v21 + 784) != v21 + 784;
    v23 = 0;
    if ( (*(_DWORD *)(v1 + 152) & 0x400) != 0 )
    {
      v28 = *(_QWORD *)(v1 + 40);
      if ( *(_QWORD *)(v1 + 48) >= v28 && v28 != 0x7FFFFFFFFFFFFFFFLL && *(_QWORD *)(v1 + 8) )
        v23 = 1;
    }
    if ( !*(_DWORD *)(v1 + 516) && v23 && !v22 )
    {
      FlushedValidData = CcGetFlushedValidData(v15, 1u);
      if ( FlushedValidData.QuadPart >= *(_QWORD *)(v1 + 40) )
      {
        if ( (*(_DWORD *)(v1 + 152) & 0x40000000) != 0
          || (KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v1 + 280)),
              v30 = (struct _FILE_OBJECT *)CcReferenceSharedCacheMapFileObject(v1),
              valid = CcSetValidData(v30, (__int64 *)&FlushedValidData),
              CcDereferenceSharedCacheMapFileObject(v1, (unsigned __int64)v30),
              ExAcquireFastMutex((PFAST_MUTEX)(v1 + 280)),
              valid >= 0) )
        {
          *(LARGE_INTEGER *)(v1 + 40) = FlushedValidData;
        }
        else if ( valid != -1073741670 && valid != -2147483626 && valid != -1073741740 )
        {
          FlushedValidData = *(LARGE_INTEGER *)(v1 + 48);
        }
      }
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v1 + 280));
    v7 = (KSPIN_LOCK *)(v5 + 128);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 128), &LockHandle);
    --*(_DWORD *)(v1 + 4);
    --*(_DWORD *)(v1 + 536);
    if ( !*(_DWORD *)(v1 + 4) )
    {
      if ( valid == -1073741740 || valid == -2147483626 || valid == -1073741670 )
      {
        if ( (*(_DWORD *)(v1 + 152) & 0x10000) != 0 )
          CcCancelMmWaitForUninitializeCacheMap(v1);
        if ( !*(_DWORD *)(v1 + 112) )
        {
          CcInsertIntoDirtySharedCacheMapList(v1);
          v33 = 1;
          goto LABEL_57;
        }
      }
      else
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v24 = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v50 = KeGetCurrentIrql();
            if ( v50 <= 0xFu && LockHandle.OldIrql <= 0xFu && v50 >= 2u )
            {
              v51 = KeGetCurrentPrcb();
              v52 = v51->SchedulerAssist;
              v53 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v27 = (v53 & v52[5]) == 0;
              v52[5] &= v53;
              if ( v27 )
                KiRemoveSystemWorkPriorityKick(v51);
            }
          }
        }
        __writecr8(v24);
        v25 = (struct _FILE_OBJECT *)CcReferenceSharedCacheMapFileObject(v1);
        FsRtlAcquireFileExclusive(v25);
        KeAcquireInStackQueuedSpinLock(&CcMasterLock, &v83);
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 128), &LockHandle);
        v26 = *(_DWORD *)(v1 + 4);
        if ( !v26
          && (!*(_DWORD *)(v1 + 112)
           && (*(_QWORD *)(v1 + 40) == 0x7FFFFFFFFFFFFFFFLL
            || (*(_DWORD *)(v1 + 152) & 0x400) == 0
            || FlushedValidData.QuadPart >= *(_QWORD *)(v1 + 48))
           || !*(_QWORD *)(v1 + 8) && (*(_DWORD *)(v1 + 152) & 4) == 0) )
        {
          CcDeleteSharedCacheMap((char *)v1, &v83, &LockHandle, 1, v25);
          *(_QWORD *)(v81 + 8) = 0LL;
LABEL_32:
          v27 = v87 == 0;
          goto LABEL_33;
        }
        if ( *(_DWORD *)(v1 + 112) )
        {
          if ( (*(_DWORD *)(v1 + 152) & 0x10000) != 0 )
            CcCancelMmWaitForUninitializeCacheMap(v1);
        }
        else
        {
          v36 = v26 == 0;
          if ( !v26 )
          {
            CcInsertIntoDirtySharedCacheMapList(v1);
            v36 = v54 == 0;
          }
          v86 = v36;
        }
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
              v27 = (v58 & v57[5]) == 0;
              v57[5] &= v58;
              if ( v27 )
                KiRemoveSystemWorkPriorityKick(v56);
            }
          }
        }
        __writecr8(v31);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v83);
        v32 = v83.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v59 = KeGetCurrentIrql();
            if ( v59 <= 0xFu && v83.OldIrql <= 0xFu && v59 >= 2u )
            {
              v60 = KeGetCurrentPrcb();
              v61 = v60->SchedulerAssist;
              v62 = ~(unsigned __int16)(-1LL << (v83.OldIrql + 1));
              v27 = (v62 & v61[5]) == 0;
              v61[5] &= v62;
              if ( v27 )
                KiRemoveSystemWorkPriorityKick(v60);
            }
          }
        }
        __writecr8(v32);
        FsRtlReleaseFile(v25);
        CcDereferenceSharedCacheMapFileObject(v1, (unsigned __int64)v25);
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 128), &LockHandle);
      }
    }
    v33 = v86;
LABEL_57:
    v34 = *(_DWORD *)(v1 + 152);
    if ( (v34 & 0x10000) == 0 || v88 )
    {
      if ( *(_QWORD *)(v81 + 8) != 35422LL )
        *(_DWORD *)(v1 + 152) = v34 & 0xFFFFFFDF;
      if ( v33 )
      {
        *(_BYTE *)(v5 + 633) = 1;
        if ( (*(_DWORD *)(v1 + 152) & 0x10000) != 0 )
        {
          v68 = 1;
          v69 = 1;
        }
        else
        {
          v68 = 0;
          v69 = 0;
        }
        CcScheduleLazyWriteScan(v5, v69, v68);
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v35 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v70 = KeGetCurrentIrql();
          if ( v70 <= 0xFu && LockHandle.OldIrql <= 0xFu && v70 >= 2u )
          {
            v71 = KeGetCurrentPrcb();
            v72 = v71->SchedulerAssist;
            v73 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v27 = (v73 & v72[5]) == 0;
            v72[5] &= v73;
            if ( v27 )
              KiRemoveSystemWorkPriorityKick(v71);
          }
        }
      }
      __writecr8(v35);
      goto LABEL_32;
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
          v27 = (v67 & v66[5]) == 0;
          v66[5] &= v67;
          if ( v27 )
            KiRemoveSystemWorkPriorityKick(v65);
        }
      }
    }
    __writecr8(v63);
    v6 = (KSPIN_LOCK *)(v5 + 192);
  }
  CcApplyLowIoPriorityToThread(v5, 0, (_DWORD *)v1);
  KeAcquireInStackQueuedSpinLock(v7, &LockHandle);
  *(_DWORD *)(v1 + 152) &= ~0x20u;
  if ( (*(_DWORD *)(v1 + 152) & 0x10000) != 0 )
    CcCancelMmWaitForUninitializeCacheMap(v1);
  CcDecrementOpenCount(v1);
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
        v27 = (v78 & v77[5]) == 0;
        v77[5] &= v78;
        if ( v27 )
          KiRemoveSystemWorkPriorityKick(v76);
      }
    }
  }
  __writecr8(v74);
  v27 = v87 == 0;
  *(_DWORD *)v81 = -1073741740;
LABEL_33:
  if ( !v27 )
    KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
}
