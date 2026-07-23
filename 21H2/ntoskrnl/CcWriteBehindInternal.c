/*
 * XREFs of CcWriteBehindInternal @ 0x1402D22C0
 * Callers:
 *     CcWriteBehind @ 0x140300EB0 (CcWriteBehind.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcGetFlushedValidData @ 0x140237F40 (CcGetFlushedValidData.c)
 *     CcIsFatalWriteError @ 0x1402402AC (CcIsFatalWriteError.c)
 *     KeReleaseGuardedMutex @ 0x140253C70 (KeReleaseGuardedMutex.c)
 *     CcFlushCachePriv @ 0x1402D13F0 (CcFlushCachePriv.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     CcSetValidData @ 0x1402F75BC (CcSetValidData.c)
 *     CcDeleteSharedCacheMap @ 0x1402FEB2C (CcDeleteSharedCacheMap.c)
 *     CcDereferenceSharedCacheMapFileObject @ 0x1403004D4 (CcDereferenceSharedCacheMapFileObject.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x140300520 (CcReferenceSharedCacheMapFileObject.c)
 *     CcApplyLowIoPriorityToThread @ 0x140301058 (CcApplyLowIoPriorityToThread.c)
 *     CcScheduleLazyWriteScan @ 0x140301AAC (CcScheduleLazyWriteScan.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x140301B38 (CcInsertIntoDirtySharedCacheMapList.c)
 *     CcDecrementOpenCount @ 0x14031DE8C (CcDecrementOpenCount.c)
 *     CcGetPartition @ 0x14031E550 (CcGetPartition.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     ExAcquireFastMutex @ 0x140354DD0 (ExAcquireFastMutex.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CcCancelMmWaitForUninitializeCacheMap @ 0x1404E8CC0 (CcCancelMmWaitForUninitializeCacheMap.c)
 *     CcMmLogLostDelayedWriteError @ 0x1404EA808 (CcMmLogLostDelayedWriteError.c)
 *     FsRtlAcquireFileExclusive @ 0x14071EE20 (FsRtlAcquireFileExclusive.c)
 *     FsRtlReleaseFile @ 0x14071EE50 (FsRtlReleaseFile.c)
 */

LONG __fastcall CcWriteBehindInternal(__int64 a1, char a2, char a3)
{
  __int64 v3; // rdi
  char v5; // al
  __int64 Partition; // rax
  __int64 v7; // r13
  KSPIN_LOCK *v8; // rsi
  KSPIN_LOCK *v9; // r15
  __int64 v10; // rdx
  unsigned __int64 OldIrql; // rbx
  unsigned int v12; // esi
  unsigned int v13; // r14d
  __int64 v14; // rdx
  unsigned __int64 v15; // rbx
  __int64 v16; // rax
  unsigned int v17; // ebx
  SECTION_OBJECT_POINTERS *v18; // r15
  unsigned __int64 v19; // rsi
  __int64 *v20; // r9
  int *v21; // rsi
  unsigned int v22; // ebx
  int valid; // esi
  char v24; // dl
  char v25; // r8
  __int64 v26; // rax
  bool v27; // cl
  bool v28; // al
  __int64 v29; // rdx
  unsigned __int64 v30; // rbx
  struct _FILE_OBJECT *v31; // rsi
  int v32; // r11d
  LONG result; // eax
  bool v34; // zf
  __int64 v35; // rax
  unsigned int v36; // ecx
  __int64 v37; // rbx
  unsigned __int64 v38; // rbx
  unsigned __int64 v39; // rbx
  int v40; // eax
  __int64 v41; // r8
  unsigned __int64 v42; // rbx
  bool v43; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v47; // eax
  unsigned __int8 v48; // al
  struct _KPRCB *v49; // r10
  _DWORD *v50; // r9
  int v51; // eax
  unsigned __int8 v52; // al
  struct _KPRCB *v53; // r10
  _DWORD *v54; // r9
  int v55; // eax
  __int64 v56; // rbx
  unsigned __int8 v57; // al
  struct _KPRCB *v58; // r10
  _DWORD *v59; // r9
  int v60; // eax
  int v61; // r11d
  unsigned __int8 v62; // al
  struct _KPRCB *v63; // r10
  _DWORD *v64; // r9
  int v65; // eax
  unsigned __int8 v66; // al
  struct _KPRCB *v67; // r10
  _DWORD *v68; // r9
  int v69; // eax
  unsigned __int64 v70; // rbx
  unsigned __int8 v71; // al
  struct _KPRCB *v72; // r10
  _DWORD *v73; // r9
  int v74; // eax
  struct _KPRCB *v75; // r9
  _DWORD *v76; // r8
  unsigned __int64 v77; // rbx
  struct _KPRCB *v78; // r9
  _DWORD *v79; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-49h] BYREF
  LARGE_INTEGER FlushedValidData; // [rsp+48h] [rbp-31h] BYREF
  __int128 *v82; // [rsp+50h] [rbp-29h]
  __int64 v83; // [rsp+58h] [rbp-21h] BYREF
  struct _KLOCK_QUEUE_HANDLE v84; // [rsp+60h] [rbp-19h] BYREF
  struct _KLOCK_QUEUE_HANDLE v85; // [rsp+78h] [rbp-1h] BYREF
  bool v87; // [rsp+E8h] [rbp+6Fh]
  char v88; // [rsp+F0h] [rbp+77h]
  int v89; // [rsp+F8h] [rbp+7Fh]

  v3 = *(_QWORD *)(a1 + 16);
  v5 = *(_BYTE *)(a1 + 56);
  v82 = *(__int128 **)(a1 + 24);
  v88 = v5;
  FlushedValidData.QuadPart = 0LL;
  v83 = 0LL;
  memset(&v84, 0, sizeof(v84));
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v85, 0, sizeof(v85));
  Partition = CcGetPartition(v3, a2, a3);
  v7 = Partition;
  if ( Partition != *(_QWORD *)(a1 + 128) )
    KeBugCheckEx(0x34u, 0x1A99uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v8 = (KSPIN_LOCK *)(Partition + 192);
  v9 = (KSPIN_LOCK *)(Partition + 128);
  while ( 1 )
  {
    v87 = 0;
    KeAcquireInStackQueuedSpinLock(v9, &LockHandle);
    ++*(_DWORD *)(v3 + 4);
    ++*(_DWORD *)(v3 + 536);
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
          v10 = -1LL << (LockHandle.OldIrql + 1);
          v47 = ~(unsigned __int16)v10;
          v34 = (v47 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v47;
          if ( v34 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    LOBYTE(v10) = 1;
    CcApplyLowIoPriorityToThread(v7, v10, v3);
    KeAcquireInStackQueuedSpinLock(v8, &v85);
    v12 = *(_DWORD *)(v7 + 960);
    v13 = *(_DWORD *)(v7 + 200);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v85);
    v15 = v85.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v48 = KeGetCurrentIrql();
        if ( v48 <= 0xFu && v85.OldIrql <= 0xFu && v48 >= 2u )
        {
          v49 = KeGetCurrentPrcb();
          v50 = v49->SchedulerAssist;
          v14 = -1LL << (v85.OldIrql + 1);
          v51 = ~(unsigned __int16)v14;
          v34 = (v51 & v50[5]) == 0;
          v50[5] &= v51;
          if ( v34 )
            KiRemoveSystemWorkPriorityKick(v49);
        }
      }
    }
    __writecr8(v15);
    if ( v12 >= v13 )
      CcApplyLowIoPriorityToThread(v7, 0LL, v3);
    LOBYTE(v14) = 1;
    if ( !(**(unsigned __int8 (__fastcall ***)(_QWORD, __int64))(v3 + 208))(*(_QWORD *)(v3 + 216), v14) )
      break;
    ExAcquireFastMutex((PFAST_MUTEX)(v3 + 280));
    KeAcquireInStackQueuedSpinLock(v9, &LockHandle);
    v89 = *(_DWORD *)(v3 + 152) & 0x10000;
    v16 = *(_QWORD *)(v3 + 160);
    if ( v16 )
    {
      v17 = *(_DWORD *)(v16 + 8);
      *(_DWORD *)(v16 + 4) = v17;
      v36 = *(_DWORD *)(v7 + 496);
      if ( v17 > v36 )
      {
        *(_DWORD *)(v16 + 4) = v36;
        v17 = v36;
      }
    }
    else
    {
      v17 = *(_DWORD *)(v3 + 192);
    }
    v18 = *(SECTION_OBJECT_POINTERS **)((*(_QWORD *)(v3 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v19 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v52 = KeGetCurrentIrql();
        if ( v52 <= 0xFu && LockHandle.OldIrql <= 0xFu && v52 >= 2u )
        {
          v53 = KeGetCurrentPrcb();
          v54 = v53->SchedulerAssist;
          v55 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v34 = (v55 & v54[5]) == 0;
          v54[5] &= v55;
          if ( v34 )
            KiRemoveSystemWorkPriorityKick(v53);
        }
      }
    }
    __writecr8(v19);
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v3 + 280));
    _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v3 + 504) + 196LL), v17);
    if ( (*(_DWORD *)(v3 + 152) & 0x1000000) != 0
      && (_InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v3 + 504) + 200LL), v17),
          (*(_DWORD *)(v3 + 152) & 0x1000000) != 0) )
    {
      v20 = &v83;
      v83 = *(_QWORD *)(*(_QWORD *)(v3 + 240) + 112LL);
    }
    else
    {
      v20 = 0LL;
    }
    v21 = (int *)v82;
    CcFlushCachePriv((__int64)v18, &CcNoDelay, 1u, (__int64)v20, 0, v82);
    CcApplyLowIoPriorityToThread(v7, 0LL, v3);
    v22 = -v17;
    _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v3 + 504) + 196LL), v22);
    if ( (*(_DWORD *)(v3 + 152) & 0x1000000) != 0 )
      _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v3 + 504) + 200LL), v22);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v3 + 208) + 8LL))(*(_QWORD *)(v3 + 216));
    if ( *v21 != -2147483626 && CcIsFatalWriteError(v3, *v21) )
    {
      v56 = CcReferenceSharedCacheMapFileObject(v3);
      CcMmLogLostDelayedWriteError(v56, (unsigned int)*v21);
      CcDereferenceSharedCacheMapFileObject(v3, v56);
    }
    valid = 0;
    ExAcquireFastMutex((PFAST_MUTEX)(v3 + 280));
    FlushedValidData = *(LARGE_INTEGER *)(v3 + 40);
    v26 = CcGetPartition(v3, v24, v25);
    v27 = *(_DWORD *)(v3 + 4) > 1u && *(_QWORD *)(v26 + 784) != v26 + 784;
    v28 = 0;
    if ( (*(_DWORD *)(v3 + 152) & 0x400) != 0 )
    {
      v35 = *(_QWORD *)(v3 + 40);
      if ( *(_QWORD *)(v3 + 48) >= v35 && v35 != 0x7FFFFFFFFFFFFFFFLL && *(_QWORD *)(v3 + 8) )
        v28 = 1;
    }
    if ( !*(_DWORD *)(v3 + 516) && v28 && !v27 )
    {
      FlushedValidData = CcGetFlushedValidData(v18, 1u);
      if ( FlushedValidData.QuadPart >= *(_QWORD *)(v3 + 40) )
      {
        if ( (*(_DWORD *)(v3 + 152) & 0x40000000) != 0
          || (KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v3 + 280)),
              v37 = CcReferenceSharedCacheMapFileObject(v3),
              valid = CcSetValidData(v37, &FlushedValidData),
              CcDereferenceSharedCacheMapFileObject(v3, v37),
              ExAcquireFastMutex((PFAST_MUTEX)(v3 + 280)),
              valid >= 0) )
        {
          *(LARGE_INTEGER *)(v3 + 40) = FlushedValidData;
        }
        else if ( valid != -1073741670 && valid != -2147483626 && valid != -1073741740 )
        {
          FlushedValidData = *(LARGE_INTEGER *)(v3 + 48);
        }
      }
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v3 + 280));
    v9 = (KSPIN_LOCK *)(v7 + 128);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v7 + 128), &LockHandle);
    --*(_DWORD *)(v3 + 4);
    --*(_DWORD *)(v3 + 536);
    if ( !*(_DWORD *)(v3 + 4) )
    {
      if ( valid == -1073741740 || valid == -2147483626 || valid == -1073741670 )
      {
        if ( (*(_DWORD *)(v3 + 152) & 0x10000) != 0 )
          CcCancelMmWaitForUninitializeCacheMap(v3);
        if ( !*(_DWORD *)(v3 + 112) )
        {
          CcInsertIntoDirtySharedCacheMapList(v3);
          LOBYTE(v29) = 1;
          goto LABEL_57;
        }
      }
      else
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v30 = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v57 = KeGetCurrentIrql();
            if ( v57 <= 0xFu && LockHandle.OldIrql <= 0xFu && v57 >= 2u )
            {
              v58 = KeGetCurrentPrcb();
              v59 = v58->SchedulerAssist;
              v60 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v34 = (v60 & v59[5]) == 0;
              v59[5] &= v60;
              if ( v34 )
                KiRemoveSystemWorkPriorityKick(v58);
            }
          }
        }
        __writecr8(v30);
        v31 = (struct _FILE_OBJECT *)CcReferenceSharedCacheMapFileObject(v3);
        FsRtlAcquireFileExclusive(v31);
        KeAcquireInStackQueuedSpinLock(&CcMasterLock, &v84);
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v7 + 128), &LockHandle);
        v32 = *(_DWORD *)(v3 + 4);
        if ( !v32
          && (!*(_DWORD *)(v3 + 112)
           && (*(_QWORD *)(v3 + 40) == 0x7FFFFFFFFFFFFFFFLL
            || (*(_DWORD *)(v3 + 152) & 0x400) == 0
            || FlushedValidData.QuadPart >= *(_QWORD *)(v3 + 48))
           || !*(_QWORD *)(v3 + 8) && (*(_DWORD *)(v3 + 152) & 4) == 0) )
        {
          result = CcDeleteSharedCacheMap((PVOID)v3, &v84, &LockHandle, v31);
          *((_QWORD *)v82 + 1) = 0LL;
LABEL_32:
          v34 = v88 == 0;
          goto LABEL_33;
        }
        if ( *(_DWORD *)(v3 + 112) )
        {
          if ( (*(_DWORD *)(v3 + 152) & 0x10000) != 0 )
            CcCancelMmWaitForUninitializeCacheMap(v3);
        }
        else
        {
          v43 = v32 == 0;
          if ( !v32 )
          {
            CcInsertIntoDirtySharedCacheMapList(v3);
            v43 = v61 == 0;
          }
          v87 = v43;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v38 = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v62 = KeGetCurrentIrql();
            if ( v62 <= 0xFu && LockHandle.OldIrql <= 0xFu && v62 >= 2u )
            {
              v63 = KeGetCurrentPrcb();
              v64 = v63->SchedulerAssist;
              v65 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v34 = (v65 & v64[5]) == 0;
              v64[5] &= v65;
              if ( v34 )
                KiRemoveSystemWorkPriorityKick(v63);
            }
          }
        }
        __writecr8(v38);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v84);
        v39 = v84.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v66 = KeGetCurrentIrql();
            if ( v66 <= 0xFu && v84.OldIrql <= 0xFu && v66 >= 2u )
            {
              v67 = KeGetCurrentPrcb();
              v68 = v67->SchedulerAssist;
              v69 = ~(unsigned __int16)(-1LL << (v84.OldIrql + 1));
              v34 = (v69 & v68[5]) == 0;
              v68[5] &= v69;
              if ( v34 )
                KiRemoveSystemWorkPriorityKick(v67);
            }
          }
        }
        __writecr8(v39);
        FsRtlReleaseFile(v31);
        CcDereferenceSharedCacheMapFileObject(v3, v31);
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v7 + 128), &LockHandle);
      }
    }
    LOBYTE(v29) = v87;
LABEL_57:
    v40 = *(_DWORD *)(v3 + 152);
    v41 = 0x10000LL;
    if ( (v40 & 0x10000) == 0 || v89 )
    {
      if ( *((_QWORD *)v82 + 1) != 35422LL )
        *(_DWORD *)(v3 + 152) = v40 & 0xFFFFFFDF;
      if ( (_BYTE)v29 )
      {
        *(_BYTE *)(v7 + 633) = 1;
        if ( (*(_DWORD *)(v3 + 152) & 0x10000) != 0 )
        {
          LOBYTE(v41) = 1;
          LOBYTE(v29) = 1;
        }
        else
        {
          v41 = 0LL;
          v29 = 0LL;
        }
        CcScheduleLazyWriteScan(v7, v29, v41);
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      result = KiIrqlFlags;
      v42 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          result = KeGetCurrentIrql();
          if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
          {
            v75 = KeGetCurrentPrcb();
            v76 = v75->SchedulerAssist;
            result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v34 = (result & v76[5]) == 0;
            v76[5] &= result;
            if ( v34 )
              result = KiRemoveSystemWorkPriorityKick(v75);
          }
        }
      }
      __writecr8(v42);
      goto LABEL_32;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v70 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v71 = KeGetCurrentIrql();
        if ( v71 <= 0xFu && LockHandle.OldIrql <= 0xFu && v71 >= 2u )
        {
          v72 = KeGetCurrentPrcb();
          v73 = v72->SchedulerAssist;
          v74 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v34 = (v74 & v73[5]) == 0;
          v73[5] &= v74;
          if ( v34 )
            KiRemoveSystemWorkPriorityKick(v72);
        }
      }
    }
    __writecr8(v70);
    v8 = (KSPIN_LOCK *)(v7 + 192);
  }
  CcApplyLowIoPriorityToThread(v7, 0LL, v3);
  KeAcquireInStackQueuedSpinLock(v9, &LockHandle);
  *(_DWORD *)(v3 + 152) &= ~0x20u;
  if ( (*(_DWORD *)(v3 + 152) & 0x10000) != 0 )
    CcCancelMmWaitForUninitializeCacheMap(v3);
  CcDecrementOpenCount(v3);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = KiIrqlFlags;
  v77 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
      {
        v78 = KeGetCurrentPrcb();
        v79 = v78->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v34 = (result & v79[5]) == 0;
        v79[5] &= result;
        if ( v34 )
          result = KiRemoveSystemWorkPriorityKick(v78);
      }
    }
  }
  __writecr8(v77);
  v34 = v88 == 0;
  *(_DWORD *)v82 = -1073741740;
LABEL_33:
  if ( !v34 )
    return KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
  return result;
}
