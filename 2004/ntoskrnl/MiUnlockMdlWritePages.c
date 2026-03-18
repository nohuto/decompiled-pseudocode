/*
 * XREFs of MiUnlockMdlWritePages @ 0x140233E80
 * Callers:
 *     MiUnlockFlushMdl @ 0x14022856C (MiUnlockFlushMdl.c)
 *     MiFlushComplete @ 0x140537C90 (MiFlushComplete.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiWriteCompletePfn @ 0x140234120 (MiWriteCompletePfn.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402C0E10 (KeAcquireInStackQueuedSpinLock.c)
 *     MiSyncCommitSignals @ 0x1403BCC54 (MiSyncCommitSignals.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiRestockOverCommit @ 0x14054B274 (MiRestockOverCommit.c)
 */

void __fastcall MiUnlockMdlWritePages(_QWORD *a1, unsigned __int64 a2)
{
  _QWORD *v3; // rsi
  __int64 v4; // rdx
  ULONG_PTR v5; // rbx
  unsigned __int8 CurrentIrql; // r15
  __int64 v7; // rbp
  __int64 v8; // rcx
  __int64 v9; // rdi
  struct _KPRCB *v10; // rdx
  __int64 CachedCommit; // r8
  __int64 v12; // rcx
  unsigned __int64 v13; // r9
  struct _KPRCB *v14; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v16; // zf
  signed __int32 v17; // eax
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rdx
  _DWORD *SchedulerAssist; // r9
  unsigned __int64 OldIrql; // r14
  unsigned __int8 v23; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v25; // r9
  int v26; // eax
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r10
  _DWORD *v29; // r9
  int v30; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  int v32; // [rsp+80h] [rbp+8h] BYREF

  if ( (unsigned __int64)a1 < a2 )
  {
    v3 = a1;
    v4 = 2LL;
    do
    {
      v5 = 48LL * *v3 - 0x58000000000LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        v4 = (-1LL << (CurrentIrql + 1)) & 4;
        SchedulerAssist[5] |= v4;
      }
      v32 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v32, v4);
        while ( *(__int64 *)(v5 + 24) < 0 );
      }
      v7 = 1LL;
      v8 = (*(_QWORD *)(v5 + 40) >> 39) & 0x3FFLL;
      memset(&LockHandle, 0, sizeof(LockHandle));
      v9 = *(_QWORD *)(qword_140C4E448 + 8 * v8);
      if ( !*(_QWORD *)(v9 + 6264) )
        goto LABEL_56;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v9 + 6248), &LockHandle);
      v7 = MiRestockOverCommit(v9, 1LL);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v23 = KeGetCurrentIrql();
          if ( v23 <= 0xFu && LockHandle.OldIrql <= 0xFu && v23 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v25 = CurrentPrcb->SchedulerAssist;
            v26 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v16 = (v26 & v25[5]) == 0;
            v25[5] &= v26;
            if ( v16 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
      if ( v7 )
      {
LABEL_56:
        if ( (ULONG_PTR *)v9 == &MiSystemPartition
          && (v10 = KeGetCurrentPrcb(),
              _m_prefetchw((const void *)&v10->CachedCommit),
              CachedCommit = v10->CachedCommit,
              (unsigned __int64)(v7 + CachedCommit) <= 0x100) )
        {
          while ( 1 )
          {
            v12 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&v10->CachedCommit,
                    CachedCommit + v7,
                    CachedCommit);
            if ( v12 == CachedCommit )
              break;
            CachedCommit = v12;
            if ( (unsigned __int64)(v12 + v7) > 0x100 )
              goto LABEL_16;
          }
        }
        else
        {
LABEL_16:
          v18 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 7464), -v7);
          v19 = *(_QWORD *)(v9 + 6240);
          if ( v18 >= v19 && v18 - v7 < v19 || (v20 = *(_QWORD *)(v9 + 6232), v18 >= v20) && v18 - v7 < v20 )
            MiSyncCommitSignals(v9, 0LL);
        }
      }
      v13 = 1LL;
      if ( (ULONG_PTR *)v9 != &MiSystemPartition )
        goto LABEL_23;
      v14 = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)v14->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable == -1 )
        goto LABEL_23;
      if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
      {
        do
        {
          v17 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)&v14->CachedResidentAvailable,
                  CachedResidentAvailable + 1,
                  CachedResidentAvailable);
          v16 = (_DWORD)CachedResidentAvailable == v17;
          LODWORD(CachedResidentAvailable) = v17;
          if ( v16 )
            goto LABEL_13;
        }
        while ( v17 != -1 && (unsigned __int64)(v17 + 1LL) <= 0x100 );
      }
      if ( (int)CachedResidentAvailable > 192
        && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                (volatile signed __int32 *)&v14->CachedResidentAvailable,
                                                192,
                                                CachedResidentAvailable) )
      {
        v13 = (int)CachedResidentAvailable - 192 + 1LL;
      }
      if ( v13 )
LABEL_23:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 7168), v13);
LABEL_13:
      MiWriteCompletePfn(v5);
      _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v27 = KeGetCurrentIrql();
          if ( v27 <= 0xFu && CurrentIrql <= 0xFu && v27 >= 2u )
          {
            v28 = KeGetCurrentPrcb();
            v29 = v28->SchedulerAssist;
            v30 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v16 = (v30 & v29[5]) == 0;
            v29[5] &= v30;
            if ( v16 )
              KiRemoveSystemWorkPriorityKick(v28);
          }
        }
      }
      __writecr8(CurrentIrql);
      ++v3;
      v4 = 2LL;
    }
    while ( (unsigned __int64)v3 < a2 );
  }
}
