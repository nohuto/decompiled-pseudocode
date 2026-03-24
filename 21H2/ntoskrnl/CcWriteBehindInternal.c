/*
 * XREFs of CcWriteBehindInternal @ 0x14022DA70
 * Callers:
 *     CcWriteBehind @ 0x1402F6160 (CcWriteBehind.c)
 * Callees:
 *     CcFlushCachePriv @ 0x14022CBA0 (CcFlushCachePriv.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14022EE10 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseGuardedMutex @ 0x140265CD0 (KeReleaseGuardedMutex.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcGetFlushedValidData @ 0x1402B9D30 (CcGetFlushedValidData.c)
 *     CcIsFatalWriteError @ 0x1402C1E0C (CcIsFatalWriteError.c)
 *     CcDeleteSharedCacheMap @ 0x1402F3DDC (CcDeleteSharedCacheMap.c)
 *     CcDereferenceSharedCacheMapFileObject @ 0x1402F5784 (CcDereferenceSharedCacheMapFileObject.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x1402F57D0 (CcReferenceSharedCacheMapFileObject.c)
 *     CcApplyLowIoPriorityToThread @ 0x1402F6308 (CcApplyLowIoPriorityToThread.c)
 *     CcScheduleLazyWriteScan @ 0x1402F6D5C (CcScheduleLazyWriteScan.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x1402F6DE8 (CcInsertIntoDirtySharedCacheMapList.c)
 *     CcDecrementOpenCount @ 0x14031313C (CcDecrementOpenCount.c)
 *     CcGetPartition @ 0x140313800 (CcGetPartition.c)
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 *     ExAcquireFastMutex @ 0x14034A080 (ExAcquireFastMutex.c)
 *     CcSetValidData @ 0x140361EF4 (CcSetValidData.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     CcCancelMmWaitForUninitializeCacheMap @ 0x1404E8A80 (CcCancelMmWaitForUninitializeCacheMap.c)
 *     CcMmLogLostDelayedWriteError @ 0x1404EA5C8 (CcMmLogLostDelayedWriteError.c)
 *     FsRtlAcquireFileExclusive @ 0x140707A40 (FsRtlAcquireFileExclusive.c)
 *     FsRtlReleaseFile @ 0x140707A70 (FsRtlReleaseFile.c)
 */

LONG __fastcall CcWriteBehindInternal(__int64 a1)
{
  __int64 v1; // rdi
  char v3; // al
  __int64 Partition; // rax
  __int64 v5; // r13
  KSPIN_LOCK *v6; // rsi
  KSPIN_LOCK *v7; // r15
  __int64 v8; // rdx
  unsigned __int64 OldIrql; // rbx
  unsigned int v10; // esi
  unsigned int v11; // r14d
  __int64 v12; // rdx
  unsigned __int64 v13; // rbx
  __int64 v14; // rax
  unsigned int v15; // ebx
  SECTION_OBJECT_POINTERS *v16; // r15
  unsigned __int64 v17; // rsi
  __int64 *v18; // r9
  __int128 *v19; // rsi
  unsigned int v20; // ebx
  int valid; // esi
  __int64 v22; // rax
  bool v23; // cl
  bool v24; // al
  __int64 v25; // rdx
  unsigned __int64 v26; // rbx
  struct _FILE_OBJECT *v27; // rsi
  int v28; // r11d
  LONG result; // eax
  bool v30; // zf
  __int64 v31; // rax
  unsigned int v32; // ecx
  __int64 v33; // rbx
  unsigned __int64 v34; // rbx
  unsigned __int64 v35; // rbx
  int v36; // eax
  __int64 v37; // r8
  unsigned __int64 v38; // rbx
  bool v39; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v43; // eax
  unsigned __int8 v44; // al
  struct _KPRCB *v45; // r10
  _DWORD *v46; // r9
  int v47; // eax
  unsigned __int8 v48; // al
  struct _KPRCB *v49; // r10
  _DWORD *v50; // r9
  int v51; // eax
  __int64 v52; // rbx
  unsigned __int8 v53; // al
  struct _KPRCB *v54; // r10
  _DWORD *v55; // r9
  int v56; // eax
  int v57; // r11d
  unsigned __int8 v58; // al
  struct _KPRCB *v59; // r10
  _DWORD *v60; // r9
  int v61; // eax
  unsigned __int8 v62; // al
  struct _KPRCB *v63; // r10
  _DWORD *v64; // r9
  int v65; // eax
  unsigned __int64 v66; // rbx
  unsigned __int8 v67; // al
  struct _KPRCB *v68; // r10
  _DWORD *v69; // r9
  int v70; // eax
  struct _KPRCB *v71; // r9
  _DWORD *v72; // r8
  unsigned __int64 v73; // rbx
  struct _KPRCB *v74; // r9
  _DWORD *v75; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-49h] BYREF
  LARGE_INTEGER FlushedValidData; // [rsp+48h] [rbp-31h] BYREF
  __int128 *v78; // [rsp+50h] [rbp-29h]
  __int64 v79; // [rsp+58h] [rbp-21h] BYREF
  struct _KLOCK_QUEUE_HANDLE v80; // [rsp+60h] [rbp-19h] BYREF
  struct _KLOCK_QUEUE_HANDLE v81; // [rsp+78h] [rbp-1h] BYREF
  bool v83; // [rsp+E8h] [rbp+6Fh]
  char v84; // [rsp+F0h] [rbp+77h]
  int v85; // [rsp+F8h] [rbp+7Fh]

  v1 = *(_QWORD *)(a1 + 16);
  v3 = *(_BYTE *)(a1 + 56);
  v78 = *(__int128 **)(a1 + 24);
  v84 = v3;
  FlushedValidData.QuadPart = 0LL;
  v79 = 0LL;
  memset(&v80, 0, sizeof(v80));
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v81, 0, sizeof(v81));
  Partition = CcGetPartition(v1);
  v5 = Partition;
  if ( Partition != *(_QWORD *)(a1 + 128) )
    KeBugCheckEx(0x34u, 0x1A99uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v6 = (KSPIN_LOCK *)(Partition + 192);
  v7 = (KSPIN_LOCK *)(Partition + 128);
  while ( 1 )
  {
    v83 = 0;
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
          v8 = -1LL << (LockHandle.OldIrql + 1);
          v43 = ~(unsigned __int16)v8;
          v30 = (v43 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v43;
          if ( v30 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    LOBYTE(v8) = 1;
    CcApplyLowIoPriorityToThread(v5, v8, v1);
    KeAcquireInStackQueuedSpinLock(v6, &v81);
    v10 = *(_DWORD *)(v5 + 960);
    v11 = *(_DWORD *)(v5 + 200);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v81);
    v13 = v81.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v44 = KeGetCurrentIrql();
        if ( v44 <= 0xFu && v81.OldIrql <= 0xFu && v44 >= 2u )
        {
          v45 = KeGetCurrentPrcb();
          v46 = v45->SchedulerAssist;
          v12 = -1LL << (v81.OldIrql + 1);
          v47 = ~(unsigned __int16)v12;
          v30 = (v47 & v46[5]) == 0;
          v46[5] &= v47;
          if ( v30 )
            KiRemoveSystemWorkPriorityKick(v45);
        }
      }
    }
    __writecr8(v13);
    if ( v10 >= v11 )
      CcApplyLowIoPriorityToThread(v5, 0LL, v1);
    LOBYTE(v12) = 1;
    if ( !(**(unsigned __int8 (__fastcall ***)(_QWORD, __int64))(v1 + 208))(*(_QWORD *)(v1 + 216), v12) )
      break;
    ExAcquireFastMutex((PFAST_MUTEX)(v1 + 280));
    KeAcquireInStackQueuedSpinLock(v7, &LockHandle);
    v85 = *(_DWORD *)(v1 + 152) & 0x10000;
    v14 = *(_QWORD *)(v1 + 160);
    if ( v14 )
    {
      v15 = *(_DWORD *)(v14 + 8);
      *(_DWORD *)(v14 + 4) = v15;
      v32 = *(_DWORD *)(v5 + 496);
      if ( v15 > v32 )
      {
        *(_DWORD *)(v14 + 4) = v32;
        v15 = v32;
      }
    }
    else
    {
      v15 = *(_DWORD *)(v1 + 192);
    }
    v16 = *(SECTION_OBJECT_POINTERS **)((*(_QWORD *)(v1 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v17 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v48 = KeGetCurrentIrql();
        if ( v48 <= 0xFu && LockHandle.OldIrql <= 0xFu && v48 >= 2u )
        {
          v49 = KeGetCurrentPrcb();
          v50 = v49->SchedulerAssist;
          v51 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v30 = (v51 & v50[5]) == 0;
          v50[5] &= v51;
          if ( v30 )
            KiRemoveSystemWorkPriorityKick(v49);
        }
      }
    }
    __writecr8(v17);
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v1 + 280));
    _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v1 + 504) + 196LL), v15);
    if ( (*(_DWORD *)(v1 + 152) & 0x1000000) != 0
      && (_InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v1 + 504) + 200LL), v15),
          (*(_DWORD *)(v1 + 152) & 0x1000000) != 0) )
    {
      v18 = &v79;
      v79 = *(_QWORD *)(*(_QWORD *)(v1 + 240) + 112LL);
    }
    else
    {
      v18 = 0LL;
    }
    v19 = v78;
    CcFlushCachePriv((__int64)v16, &CcNoDelay, 1u, (__int64)v18, 0, v78);
    CcApplyLowIoPriorityToThread(v5, 0LL, v1);
    v20 = -v15;
    _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v1 + 504) + 196LL), v20);
    if ( (*(_DWORD *)(v1 + 152) & 0x1000000) != 0 )
      _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v1 + 504) + 200LL), v20);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v1 + 208) + 8LL))(*(_QWORD *)(v1 + 216));
    if ( *(_DWORD *)v19 != -2147483626 && (unsigned __int8)CcIsFatalWriteError(v1) )
    {
      v52 = CcReferenceSharedCacheMapFileObject(v1);
      CcMmLogLostDelayedWriteError(v52, *(unsigned int *)v19);
      CcDereferenceSharedCacheMapFileObject(v1, v52);
    }
    valid = 0;
    ExAcquireFastMutex((PFAST_MUTEX)(v1 + 280));
    FlushedValidData = *(LARGE_INTEGER *)(v1 + 40);
    v22 = CcGetPartition(v1);
    v23 = *(_DWORD *)(v1 + 4) > 1u && *(_QWORD *)(v22 + 784) != v22 + 784;
    v24 = 0;
    if ( (*(_DWORD *)(v1 + 152) & 0x400) != 0 )
    {
      v31 = *(_QWORD *)(v1 + 40);
      if ( *(_QWORD *)(v1 + 48) >= v31 && v31 != 0x7FFFFFFFFFFFFFFFLL && *(_QWORD *)(v1 + 8) )
        v24 = 1;
    }
    if ( !*(_DWORD *)(v1 + 516) && v24 && !v23 )
    {
      FlushedValidData = CcGetFlushedValidData(v16, 1u);
      if ( FlushedValidData.QuadPart >= *(_QWORD *)(v1 + 40) )
      {
        if ( (*(_DWORD *)(v1 + 152) & 0x40000000) != 0
          || (KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v1 + 280)),
              v33 = CcReferenceSharedCacheMapFileObject(v1),
              valid = CcSetValidData(v33, &FlushedValidData),
              CcDereferenceSharedCacheMapFileObject(v1, v33),
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
          LOBYTE(v25) = 1;
          goto LABEL_57;
        }
      }
      else
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v26 = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v53 = KeGetCurrentIrql();
            if ( v53 <= 0xFu && LockHandle.OldIrql <= 0xFu && v53 >= 2u )
            {
              v54 = KeGetCurrentPrcb();
              v55 = v54->SchedulerAssist;
              v56 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v30 = (v56 & v55[5]) == 0;
              v55[5] &= v56;
              if ( v30 )
                KiRemoveSystemWorkPriorityKick(v54);
            }
          }
        }
        __writecr8(v26);
        v27 = (struct _FILE_OBJECT *)CcReferenceSharedCacheMapFileObject(v1);
        FsRtlAcquireFileExclusive(v27);
        KeAcquireInStackQueuedSpinLock(&CcMasterLock, &v80);
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 128), &LockHandle);
        v28 = *(_DWORD *)(v1 + 4);
        if ( !v28
          && (!*(_DWORD *)(v1 + 112)
           && (*(_QWORD *)(v1 + 40) == 0x7FFFFFFFFFFFFFFFLL
            || (*(_DWORD *)(v1 + 152) & 0x400) == 0
            || FlushedValidData.QuadPart >= *(_QWORD *)(v1 + 48))
           || !*(_QWORD *)(v1 + 8) && (*(_DWORD *)(v1 + 152) & 4) == 0) )
        {
          result = CcDeleteSharedCacheMap((PVOID)v1, &v80, &LockHandle, v27);
          *((_QWORD *)v78 + 1) = 0LL;
LABEL_32:
          v30 = v84 == 0;
          goto LABEL_33;
        }
        if ( *(_DWORD *)(v1 + 112) )
        {
          if ( (*(_DWORD *)(v1 + 152) & 0x10000) != 0 )
            CcCancelMmWaitForUninitializeCacheMap(v1);
        }
        else
        {
          v39 = v28 == 0;
          if ( !v28 )
          {
            CcInsertIntoDirtySharedCacheMapList(v1);
            v39 = v57 == 0;
          }
          v83 = v39;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v34 = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v58 = KeGetCurrentIrql();
            if ( v58 <= 0xFu && LockHandle.OldIrql <= 0xFu && v58 >= 2u )
            {
              v59 = KeGetCurrentPrcb();
              v60 = v59->SchedulerAssist;
              v61 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v30 = (v61 & v60[5]) == 0;
              v60[5] &= v61;
              if ( v30 )
                KiRemoveSystemWorkPriorityKick(v59);
            }
          }
        }
        __writecr8(v34);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v80);
        v35 = v80.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v62 = KeGetCurrentIrql();
            if ( v62 <= 0xFu && v80.OldIrql <= 0xFu && v62 >= 2u )
            {
              v63 = KeGetCurrentPrcb();
              v64 = v63->SchedulerAssist;
              v65 = ~(unsigned __int16)(-1LL << (v80.OldIrql + 1));
              v30 = (v65 & v64[5]) == 0;
              v64[5] &= v65;
              if ( v30 )
                KiRemoveSystemWorkPriorityKick(v63);
            }
          }
        }
        __writecr8(v35);
        FsRtlReleaseFile(v27);
        CcDereferenceSharedCacheMapFileObject(v1, v27);
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 128), &LockHandle);
      }
    }
    LOBYTE(v25) = v83;
LABEL_57:
    v36 = *(_DWORD *)(v1 + 152);
    v37 = 0x10000LL;
    if ( (v36 & 0x10000) == 0 || v85 )
    {
      if ( *((_QWORD *)v78 + 1) != 35422LL )
        *(_DWORD *)(v1 + 152) = v36 & 0xFFFFFFDF;
      if ( (_BYTE)v25 )
      {
        *(_BYTE *)(v5 + 633) = 1;
        if ( (*(_DWORD *)(v1 + 152) & 0x10000) != 0 )
        {
          LOBYTE(v37) = 1;
          LOBYTE(v25) = 1;
        }
        else
        {
          v37 = 0LL;
          v25 = 0LL;
        }
        CcScheduleLazyWriteScan(v5, v25, v37);
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      result = KiIrqlFlags;
      v38 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          result = KeGetCurrentIrql();
          if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
          {
            v71 = KeGetCurrentPrcb();
            v72 = v71->SchedulerAssist;
            result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v30 = (result & v72[5]) == 0;
            v72[5] &= result;
            if ( v30 )
              result = KiRemoveSystemWorkPriorityKick(v71);
          }
        }
      }
      __writecr8(v38);
      goto LABEL_32;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v66 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v67 = KeGetCurrentIrql();
        if ( v67 <= 0xFu && LockHandle.OldIrql <= 0xFu && v67 >= 2u )
        {
          v68 = KeGetCurrentPrcb();
          v69 = v68->SchedulerAssist;
          v70 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v30 = (v70 & v69[5]) == 0;
          v69[5] &= v70;
          if ( v30 )
            KiRemoveSystemWorkPriorityKick(v68);
        }
      }
    }
    __writecr8(v66);
    v6 = (KSPIN_LOCK *)(v5 + 192);
  }
  CcApplyLowIoPriorityToThread(v5, 0LL, v1);
  KeAcquireInStackQueuedSpinLock(v7, &LockHandle);
  *(_DWORD *)(v1 + 152) &= ~0x20u;
  if ( (*(_DWORD *)(v1 + 152) & 0x10000) != 0 )
    CcCancelMmWaitForUninitializeCacheMap(v1);
  CcDecrementOpenCount(v1);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = KiIrqlFlags;
  v73 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
      {
        v74 = KeGetCurrentPrcb();
        v75 = v74->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v30 = (result & v75[5]) == 0;
        v75[5] &= result;
        if ( v30 )
          result = KiRemoveSystemWorkPriorityKick(v74);
      }
    }
  }
  __writecr8(v73);
  v30 = v84 == 0;
  *(_DWORD *)v78 = -1073741740;
LABEL_33:
  if ( !v30 )
    return KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
  return result;
}
