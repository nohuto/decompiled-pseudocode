/*
 * XREFs of CmpDereferenceKeyControlBlock @ 0x1407129F0
 * Callers:
 *     CmpLateUnloadHiveWorker @ 0x1405DFF10 (CmpLateUnloadHiveWorker.c)
 *     CmpCleanupParseContext @ 0x14064A8A0 (CmpCleanupParseContext.c)
 *     CmpDeleteKeyObject @ 0x14065C3E0 (CmpDeleteKeyObject.c)
 *     CmLoadDifferencingKey @ 0x140664A6C (CmLoadDifferencingKey.c)
 *     CmReleaseLoadKeyContext @ 0x140667510 (CmReleaseLoadKeyContext.c)
 *     CmpGetSymbolicLinkTarget @ 0x1406DE1D0 (CmpGetSymbolicLinkTarget.c)
 *     CmEnumerateKey @ 0x1406E3AB0 (CmEnumerateKey.c)
 *     CmpWalkOneLevel @ 0x1406E5B20 (CmpWalkOneLevel.c)
 *     CmpDoParseKey @ 0x140710550 (CmpDoParseKey.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1407137F0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDestroyVirtualStack @ 0x14086FF04 (CmpDestroyVirtualStack.c)
 *     CmpDoBuildVirtualStack @ 0x1408700FC (CmpDoBuildVirtualStack.c)
 *     CmpFreeSiloKeyLockEntry @ 0x140872914 (CmpFreeSiloKeyLockEntry.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x140872954 (CmpGlobalUnlockKeyForWrite.c)
 *     CmpKeyEnumStackFreeResumeContext @ 0x14087AC98 (CmpKeyEnumStackFreeResumeContext.c)
 * Callees:
 *     CmpArmDelayedCloseTimer @ 0x14022C868 (CmpArmDelayedCloseTimer.c)
 *     ExpReleaseFastMutexContended @ 0x1402FC46C (ExpReleaseFastMutexContended.c)
 *     ExpAcquireFastMutexContended @ 0x1402FD910 (ExpAcquireFastMutexContended.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140354F80 (KeAbPreAcquire.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     CmpInitializeDelayDerefContext @ 0x14035BE38 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x14035BE50 (CmpDrainDelayDerefContext.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     CmpDeleteHive @ 0x1405E0094 (CmpDeleteHive.c)
 *     CmpFreeKeyControlBlock @ 0x1405E0C60 (CmpFreeKeyControlBlock.c)
 *     CmpDoQueueLateUnloadWorker @ 0x14066782C (CmpDoQueueLateUnloadWorker.c)
 *     CmpLockKcbExclusive @ 0x1406DBABC (CmpLockKcbExclusive.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1406DDFD4 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpUnlockKcb @ 0x140709F20 (CmpUnlockKcb.c)
 */

void __fastcall CmpDereferenceKeyControlBlock(ULONG_PTR BugCheckParameter2)
{
  unsigned __int64 v2; // rcx
  __int64 v3; // r9
  unsigned __int64 v4; // rdx
  bool v5; // r8
  ULONG_PTR v6; // rsi
  int v7; // r13d
  ULONG_PTR v8; // rdi
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  ULONG_PTR v11; // rbp
  ULONG_PTR v12; // r12
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  signed __int64 v16; // rax
  __int64 v17; // rdi
  struct _KTHREAD *CurrentThread; // rax
  bool v19; // dl
  int v20; // ecx
  _RTL_BALANCED_NODE *v21; // rax
  _RTL_BALANCED_NODE *v22; // rdi
  unsigned __int8 CurrentIrql; // r13
  _QWORD *v24; // rax
  __int64 v25; // rcx
  unsigned __int64 v26; // rdi
  bool v27; // r13
  signed __int32 v28; // eax
  unsigned __int8 v29; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v32; // eax
  bool v33; // zf
  int v34; // edi
  ULONG_PTR v35; // rcx
  __int128 v36; // [rsp+30h] [rbp-38h] BYREF
  int v37; // [rsp+70h] [rbp+8h]

  v36 = 0LL;
  CmpInitializeDelayDerefContext(&v36);
  v2 = *(_QWORD *)BugCheckParameter2;
  v3 = *(_QWORD *)(BugCheckParameter2 + 32);
  if ( *(_QWORD *)BugCheckParameter2 <= 1uLL )
  {
LABEL_9:
    v6 = *(_QWORD *)(BugCheckParameter2 + 32);
    v7 = *(_DWORD *)(BugCheckParameter2 + 16) ^ (*(_DWORD *)(BugCheckParameter2 + 16) >> 9);
    v37 = v7;
    v8 = *(_QWORD *)(v6 + 1640)
       + 24
       * ((unsigned int)(*(_DWORD *)(v6 + 1648) - 1) & ((unsigned int)(101027 * v7) ^ ((unsigned __int64)(unsigned int)(101027 * v7) >> 9)));
    ExAcquirePushLockExclusiveEx(v8, 0LL);
    *(_QWORD *)(v8 + 8) = KeGetCurrentThread();
    _m_prefetchw((const void *)(v6 + 4272));
    v9 = *(_DWORD *)(v6 + 4272);
    if ( !v9 )
LABEL_69:
      KeBugCheckEx(0x51u, 0x17uLL, v6, 8uLL, BugCheckParameter2);
    while ( 1 )
    {
      v10 = v9;
      v9 = _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 4272), v9 + 1, v9);
      if ( v10 == v9 )
        break;
      if ( !v9 )
        goto LABEL_69;
    }
    v11 = BugCheckParameter2 + 48;
    ExAcquirePushLockExclusiveEx(BugCheckParameter2 + 48, 0LL);
    *(_QWORD *)(BugCheckParameter2 + 56) = KeGetCurrentThread();
    v12 = 0LL;
    v13 = *(_QWORD *)(BugCheckParameter2 + 192);
    if ( v13 )
    {
      v14 = *(_QWORD *)(v13 + 24);
      if ( v14 )
      {
        v12 = *(_QWORD *)(v14 + 16);
        CmpUnlockKcb(BugCheckParameter2);
        CmpLockKcbExclusive(v12);
        CmpLockKcbExclusive(BugCheckParameter2);
      }
    }
    v15 = *(_QWORD *)(BugCheckParameter2 + 32);
    v16 = _InterlockedDecrement64((volatile signed __int64 *)BugCheckParameter2);
    if ( v16 == 2 )
    {
      if ( (*(_DWORD *)(BugCheckParameter2 + 184) & 0x40000) != 0 && *(_BYTE *)(v15 + 2936) == 1 )
        CmpDoQueueLateUnloadWorker(v15);
    }
    else if ( !v16 )
    {
      if ( (*(_DWORD *)(BugCheckParameter2 + 184) & 0x40000) != 0 )
      {
        v17 = *(_QWORD *)(BugCheckParameter2 + 32);
        CmpCleanUpKcbCacheWithLock(BugCheckParameter2, (__int64)&v36);
        CurrentThread = KeGetCurrentThread();
        *(_DWORD *)(v17 + 160) |= 0x80u;
        *(_QWORD *)(v17 + 4216) = CurrentThread;
        *(_DWORD *)(v17 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v17 + 4276), 1u) & 0x7F) + 4280) = 31;
        if ( (*(_DWORD *)(v17 + 160) & 0x20) == 0
          && _InterlockedExchangeAdd((volatile signed __int32 *)(v17 + 4272), 0xFFFFFFFF) == 1 )
        {
          CmpDeleteHive((_QWORD *)v17);
        }
      }
      else
      {
        v19 = 0;
        v20 = *(_DWORD *)(BugCheckParameter2 + 8);
        if ( (v20 & 0x20) == 0 )
          v19 = (v20 & 0x20000) == 0;
        if ( CmpHoldLazyFlush
          && (*(_DWORD *)(BugCheckParameter2 + 184) & 0x100000) == 0
          && (*(_DWORD *)(BugCheckParameter2 + 8) & 8) == 0
          || !v19 )
        {
          CmpCleanUpKcbCacheWithLock(BugCheckParameter2, (__int64)&v36);
          if ( *(struct _KTHREAD **)(BugCheckParameter2 + 56) != KeGetCurrentThread()
            && (*(_DWORD *)(BugCheckParameter2 + 8) & 0x80000) != 0 )
          {
            CmpFreeKeyControlBlock(BugCheckParameter2);
          }
          goto LABEL_54;
        }
        v21 = KeAbPreAcquire((ULONG_PTR)&CmpDelayedCloseTableLock, 0LL, 0);
        v22 = v21;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(1uLL);
        if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpDelayedCloseTableLock, 0) )
          ExpAcquireFastMutexContended((ULONG_PTR)&CmpDelayedCloseTableLock, v21);
        if ( v22 )
          BYTE2(v22[1].Left) |= 1u;
        *(&CmpDelayedCloseTableLock + 1) = (ULONG_PTR)KeGetCurrentThread();
        *((_DWORD *)&CmpDelayedCloseTableLock + 12) = CurrentIrql;
        v24 = (_QWORD *)(BugCheckParameter2 + 224);
        if ( (_QWORD *)*v24 != v24 )
          KeBugCheckEx(0x51u, 0x34uLL, BugCheckParameter2, 0LL, 0LL);
        v25 = CmpDelayedLRUListHead;
        if ( *(__int64 **)(CmpDelayedLRUListHead + 8) != &CmpDelayedLRUListHead )
          __fastfail(3u);
        *v24 = CmpDelayedLRUListHead;
        *(_QWORD *)(BugCheckParameter2 + 232) = &CmpDelayedLRUListHead;
        *(_QWORD *)(v25 + 8) = v24;
        CmpDelayedLRUListHead = BugCheckParameter2 + 224;
        *(_BYTE *)(BugCheckParameter2 + 64) |= 2u;
        ++qword_140D2EF88;
        v26 = *((unsigned __int8 *)&CmpDelayedCloseTableLock + 48);
        v27 = ++CmpDelayedCloseElements > (unsigned int)CmpDelayedCloseSize;
        *(&CmpDelayedCloseTableLock + 1) = 0LL;
        v28 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpDelayedCloseTableLock, 1, 0);
        if ( v28 )
          ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpDelayedCloseTableLock, v28);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v29 = KeGetCurrentIrql();
            if ( v29 <= 0xFu && (unsigned __int8)v26 <= 0xFu && v29 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v32 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v26 + 1));
              v33 = (v32 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v32;
              if ( v33 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(v26);
        KeAbPostRelease((ULONG_PTR)&CmpDelayedCloseTableLock);
        if ( v27 )
          CmpArmDelayedCloseTimer();
        v7 = v37;
      }
      v11 = BugCheckParameter2 + 48;
    }
LABEL_54:
    v34 = *(_DWORD *)(BugCheckParameter2 + 8) & 0x80000;
    if ( *(struct _KTHREAD **)(BugCheckParameter2 + 56) == KeGetCurrentThread() )
      *(_QWORD *)(BugCheckParameter2 + 56) = 0LL;
    else
      _InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter2 + 56));
    ExReleasePushLockEx(v11, 0LL);
    if ( v34 && (*(_DWORD *)(BugCheckParameter2 + 8) & 0x80000) != 0 )
      CmpFreeKeyControlBlock(BugCheckParameter2);
    if ( v12 )
      CmpUnlockKcb(v12);
    v35 = *(_QWORD *)(v6 + 1640)
        + 24
        * ((unsigned int)(*(_DWORD *)(v6 + 1648) - 1) & ((unsigned int)(101027 * v7) ^ ((unsigned __int64)(unsigned int)(101027 * v7) >> 9)));
    *(_QWORD *)(v35 + 8) = 0LL;
    ExReleasePushLockEx(v35, 0LL);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 4272), 0xFFFFFFFF) == 1 )
      CmpDeleteHive((_QWORD *)v6);
    CmpDrainDelayDerefContext((_QWORD **)&v36);
    return;
  }
  while ( 1 )
  {
    v4 = v2 - 1;
    v5 = v2 == 3 && (*(_DWORD *)(BugCheckParameter2 + 184) & 0x40000) != 0 && *(_BYTE *)(v3 + 2936) == 1;
    v2 = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v4, v2);
    if ( v2 == v4 + 1 )
      break;
    if ( v2 <= 1 )
      goto LABEL_9;
  }
  if ( v2 < v4 )
    KeBugCheckEx(0x51u, 0x25uLL, BugCheckParameter2, 0LL, 0LL);
  if ( v5 )
    CmpDoQueueLateUnloadWorker(v3);
}
