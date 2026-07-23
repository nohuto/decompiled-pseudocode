/*
 * XREFs of CmpDereferenceKeyControlBlock @ 0x1405EEA10
 * Callers:
 *     CmpGetSymbolicLinkTarget @ 0x1405E6CF0 (CmpGetSymbolicLinkTarget.c)
 *     CmpWalkOneLevel @ 0x1405EC120 (CmpWalkOneLevel.c)
 *     CmpDeleteKeyObject @ 0x1405ED4B0 (CmpDeleteKeyObject.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405EF010 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1405EF1F0 (CmpDoParseKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x140642ECC (CmpTransMgrFreeVolatileData.c)
 *     CmpLateUnloadHiveWorker @ 0x1406434F0 (CmpLateUnloadHiveWorker.c)
 *     CmLoadDifferencingKey @ 0x140650EAC (CmLoadDifferencingKey.c)
 *     CmReleaseLoadKeyContext @ 0x1406525A0 (CmReleaseLoadKeyContext.c)
 *     CmEnumerateKey @ 0x140672240 (CmEnumerateKey.c)
 *     CmpCleanupParseContext @ 0x140694400 (CmpCleanupParseContext.c)
 *     CmpFreeSiloKeyLockEntry @ 0x14086F414 (CmpFreeSiloKeyLockEntry.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x14086F454 (CmpGlobalUnlockKeyForWrite.c)
 *     CmpKeyEnumStackFreeResumeContext @ 0x140877640 (CmpKeyEnumStackFreeResumeContext.c)
 * Callees:
 *     CmpDrainDelayDerefContext @ 0x140205E60 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x140205F64 (CmpInitializeDelayDerefContext.c)
 *     KeAbPreAcquire @ 0x140207360 (KeAbPreAcquire.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1402740C0 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x140274B8C (ExpReleaseFastMutexContended.c)
 *     CmpArmDelayedCloseTimer @ 0x14033B4A8 (CmpArmDelayedCloseTimer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     CmpLockKcbExclusive @ 0x1405DF678 (CmpLockKcbExclusive.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1405E6B2C (CmpCleanUpKcbCacheWithLock.c)
 *     CmpUnlockKcb @ 0x1405F0C10 (CmpUnlockKcb.c)
 *     CmpDoQueueLateUnloadWorker @ 0x14063FF6C (CmpDoQueueLateUnloadWorker.c)
 *     CmpDeleteHive @ 0x140644B4C (CmpDeleteHive.c)
 *     CmpFreeKeyControlBlock @ 0x140652CD0 (CmpFreeKeyControlBlock.c)
 */

void __fastcall CmpDereferenceKeyControlBlock(ULONG_PTR BugCheckParameter4)
{
  unsigned __int64 v2; // rcx
  __int64 v3; // r8
  unsigned __int64 v4; // rdx
  bool v5; // r9
  ULONG_PTR v6; // rsi
  unsigned int v7; // r12d
  ULONG_PTR v8; // rdi
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  __int64 v11; // rax
  __int64 v12; // rcx
  signed __int64 v13; // rax
  bool v14; // dl
  int v15; // ecx
  __int64 v16; // rax
  __int64 v17; // rbp
  unsigned __int8 CurrentIrql; // r13
  __int64 v19; // rcx
  _QWORD *v20; // rax
  int v21; // eax
  bool v22; // r13
  unsigned __int64 v23; // rbp
  signed __int32 v24; // eax
  int v25; // ebp
  ULONG_PTR v26; // rcx
  __int64 v27; // rbp
  __int64 v28; // rbp
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int8 v30; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v33; // eax
  bool v34; // zf
  __int128 v35; // [rsp+30h] [rbp-48h] BYREF
  ULONG_PTR v36; // [rsp+88h] [rbp+10h]

  v35 = 0LL;
  CmpInitializeDelayDerefContext(&v35);
  v2 = *(_QWORD *)BugCheckParameter4;
  v3 = *(_QWORD *)(BugCheckParameter4 + 32);
  if ( *(_QWORD *)BugCheckParameter4 <= 1uLL )
  {
LABEL_8:
    v6 = *(_QWORD *)(BugCheckParameter4 + 32);
    v7 = *(_DWORD *)(BugCheckParameter4 + 16);
    v8 = *(_QWORD *)(v6 + 1640)
       + 24
       * ((unsigned int)(*(_DWORD *)(v6 + 1648) - 1) & ((101027 * (v7 ^ (v7 >> 9))) ^ ((unsigned __int64)(101027 * (v7 ^ (v7 >> 9))) >> 9)));
    ExAcquirePushLockExclusiveEx(v8, 0LL);
    *(_QWORD *)(v8 + 8) = KeGetCurrentThread();
    _m_prefetchw((const void *)(v6 + 4272));
    v9 = *(_DWORD *)(v6 + 4272);
    if ( !v9 )
LABEL_70:
      KeBugCheckEx(0x51u, 0x17uLL, v6, 8uLL, BugCheckParameter4);
    while ( 1 )
    {
      v10 = v9;
      v9 = _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 4272), v9 + 1, v9);
      if ( v10 == v9 )
        break;
      if ( !v9 )
        goto LABEL_70;
    }
    ExAcquirePushLockExclusiveEx(BugCheckParameter4 + 48, 0LL);
    *(_QWORD *)(BugCheckParameter4 + 56) = KeGetCurrentThread();
    v11 = *(_QWORD *)(BugCheckParameter4 + 192);
    v36 = 0LL;
    if ( v11 )
    {
      v27 = *(_QWORD *)(v11 + 24);
      if ( v27 )
      {
        v36 = *(_QWORD *)(v27 + 16);
        CmpUnlockKcb(BugCheckParameter4);
        CmpLockKcbExclusive(v36);
        CmpLockKcbExclusive(BugCheckParameter4);
      }
    }
    v12 = *(_QWORD *)(BugCheckParameter4 + 32);
    v13 = _InterlockedDecrement64((volatile signed __int64 *)BugCheckParameter4);
    if ( v13 == 2 )
    {
      if ( (*(_DWORD *)(BugCheckParameter4 + 184) & 0x40000) != 0 && *(_BYTE *)(v12 + 2936) == 1 )
        CmpDoQueueLateUnloadWorker(v12);
    }
    else if ( !v13 )
    {
      if ( (*(_DWORD *)(BugCheckParameter4 + 184) & 0x40000) != 0 )
      {
        v28 = *(_QWORD *)(BugCheckParameter4 + 32);
        CmpCleanUpKcbCacheWithLock(BugCheckParameter4, (__int64)&v35);
        CurrentThread = KeGetCurrentThread();
        *(_DWORD *)(v28 + 160) |= 0x80u;
        *(_QWORD *)(v28 + 4216) = CurrentThread;
        *(_DWORD *)(v28 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v28 + 4276), 1u) & 0x7F) + 4280) = 31;
        if ( (*(_DWORD *)(v28 + 160) & 0x20) == 0
          && _InterlockedExchangeAdd((volatile signed __int32 *)(v28 + 4272), 0xFFFFFFFF) == 1 )
        {
          CmpDeleteHive((PVOID)v28);
        }
      }
      else
      {
        v14 = 0;
        v15 = *(_DWORD *)(BugCheckParameter4 + 8);
        if ( (v15 & 0x20) == 0 )
          v14 = (v15 & 0x20000) == 0;
        if ( CmpHoldLazyFlush
          && (*(_WORD *)(BugCheckParameter4 + 186) & 0x10) == 0
          && (*(_BYTE *)(BugCheckParameter4 + 8) & 8) == 0
          || !v14 )
        {
          CmpCleanUpKcbCacheWithLock(BugCheckParameter4, (__int64)&v35);
          if ( *(struct _KTHREAD **)(BugCheckParameter4 + 56) != KeGetCurrentThread()
            && (*(_DWORD *)(BugCheckParameter4 + 8) & 0x80000) != 0 )
          {
            CmpFreeKeyControlBlock(BugCheckParameter4);
          }
        }
        else
        {
          v16 = KeAbPreAcquire((ULONG_PTR)&CmpDelayedCloseTableLock, 0LL, 0);
          v17 = v16;
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(1uLL);
          if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpDelayedCloseTableLock, 0) )
            ExpAcquireFastMutexContended((ULONG_PTR)&CmpDelayedCloseTableLock, v16);
          if ( v17 )
            *(_BYTE *)(v17 + 26) |= 1u;
          v19 = CmpDelayedLRUListHead;
          *(&CmpDelayedCloseTableLock + 1) = (ULONG_PTR)KeGetCurrentThread();
          *((_DWORD *)&CmpDelayedCloseTableLock + 12) = CurrentIrql;
          v20 = (_QWORD *)(BugCheckParameter4 + 224);
          if ( *(__int64 **)(CmpDelayedLRUListHead + 8) != &CmpDelayedLRUListHead )
            __fastfail(3u);
          *v20 = CmpDelayedLRUListHead;
          *(_QWORD *)(BugCheckParameter4 + 232) = &CmpDelayedLRUListHead;
          *(_QWORD *)(v19 + 8) = v20;
          CmpDelayedLRUListHead = BugCheckParameter4 + 224;
          v21 = CmpDelayedCloseElements;
          *(_BYTE *)(BugCheckParameter4 + 64) |= 2u;
          ++qword_140D2EF88;
          CmpDelayedCloseElements = v21 + 1;
          v22 = v21 + 1 > (unsigned int)CmpDelayedCloseSize;
          v23 = *((unsigned __int8 *)&CmpDelayedCloseTableLock + 48);
          *(&CmpDelayedCloseTableLock + 1) = 0LL;
          v24 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpDelayedCloseTableLock, 1, 0);
          if ( v24 )
            ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpDelayedCloseTableLock, v24);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v30 = KeGetCurrentIrql();
              if ( v30 <= 0xFu && (unsigned __int8)v23 <= 0xFu && v30 >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v33 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v23 + 1));
                v34 = (v33 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v33;
                if ( v34 )
                  KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
              }
            }
          }
          __writecr8(v23);
          KeAbPostRelease((ULONG_PTR)&CmpDelayedCloseTableLock);
          if ( v22 )
            CmpArmDelayedCloseTimer();
        }
      }
    }
    v25 = *(_DWORD *)(BugCheckParameter4 + 8) & 0x80000;
    if ( *(struct _KTHREAD **)(BugCheckParameter4 + 56) == KeGetCurrentThread() )
      *(_QWORD *)(BugCheckParameter4 + 56) = 0LL;
    else
      _InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter4 + 56));
    ExReleasePushLockEx(BugCheckParameter4 + 48, 0LL);
    if ( v25 && (*(_DWORD *)(BugCheckParameter4 + 8) & 0x80000) != 0 )
      CmpFreeKeyControlBlock(BugCheckParameter4);
    if ( v36 )
      CmpUnlockKcb(v36);
    v26 = *(_QWORD *)(v6 + 1640)
        + 24
        * ((unsigned int)(*(_DWORD *)(v6 + 1648) - 1) & ((101027 * (v7 ^ (v7 >> 9))) ^ ((unsigned __int64)(101027 * (v7 ^ (v7 >> 9))) >> 9)));
    *(_QWORD *)(v26 + 8) = 0LL;
    ExReleasePushLockEx(v26, 0LL);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 4272), 0xFFFFFFFF) == 1 )
      CmpDeleteHive((PVOID)v6);
    CmpDrainDelayDerefContext((_QWORD **)&v35);
  }
  else
  {
    while ( 1 )
    {
      v4 = v2 - 1;
      v5 = v2 == 3 && (*(_DWORD *)(BugCheckParameter4 + 184) & 0x40000) != 0 && *(_BYTE *)(v3 + 2936) == 1;
      v2 = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter4, v4, v2);
      if ( v2 == v4 + 1 )
        break;
      if ( v2 <= 1 )
        goto LABEL_8;
    }
    if ( v2 < v4 )
      KeBugCheckEx(0x51u, 0x25uLL, BugCheckParameter4, 0LL, 0LL);
    if ( v5 )
      CmpDoQueueLateUnloadWorker(v3);
  }
}
