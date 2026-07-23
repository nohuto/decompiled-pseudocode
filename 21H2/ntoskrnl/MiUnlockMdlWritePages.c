/*
 * XREFs of MiUnlockMdlWritePages @ 0x140330730
 * Callers:
 *     MiUnlockFlushMdl @ 0x140362008 (MiUnlockFlushMdl.c)
 *     MiFlushComplete @ 0x14053D3A0 (MiFlushComplete.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiWriteCompletePfn @ 0x1403309D0 (MiWriteCompletePfn.c)
 *     MiSyncCommitSignals @ 0x1403BFD54 (MiSyncCommitSignals.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiRestockOverCommit @ 0x140550954 (MiRestockOverCommit.c)
 */

void __fastcall MiUnlockMdlWritePages(_QWORD *a1, unsigned __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  _QWORD *v5; // rsi
  __int64 v6; // rdx
  unsigned int v7; // r13d
  __int64 v8; // rbx
  unsigned __int8 CurrentIrql; // r15
  __int64 v10; // rbp
  __int64 v11; // rcx
  __int64 v12; // rdi
  struct _KPRCB *v13; // rdx
  __int64 CachedCommit; // r8
  __int64 v15; // rcx
  unsigned __int64 v16; // r9
  struct _KPRCB *v17; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v19; // zf
  signed __int32 v20; // eax
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rdx
  unsigned __int64 OldIrql; // r14
  unsigned __int8 v25; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v27; // r9
  int v28; // eax
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r10
  int v31; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  int v33; // [rsp+80h] [rbp+8h] BYREF

  if ( (unsigned __int64)a1 < a2 )
  {
    v5 = a1;
    v6 = 2LL;
    v7 = *(_DWORD *)a3 >> 31;
    do
    {
      v8 = 48LL * *v5 - 0x58000000000LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        v6 = (-1LL << (CurrentIrql + 1)) & 4;
        a3 = (unsigned int)v6 | SchedulerAssist[5];
        SchedulerAssist[5] = a3;
      }
      v33 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v33, v6, a3, (__int64)SchedulerAssist);
        while ( *(__int64 *)(v8 + 24) < 0 );
      }
      v10 = 1LL;
      v11 = (*(_QWORD *)(v8 + 40) >> 39) & 0x3FFLL;
      memset(&LockHandle, 0, sizeof(LockHandle));
      v12 = *(_QWORD *)(qword_140C4E688 + 8 * v11);
      if ( !*(_QWORD *)(v12 + 6264) )
        goto LABEL_56;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v12 + 6248), &LockHandle);
      v10 = MiRestockOverCommit(v12, 1LL);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v25 = KeGetCurrentIrql();
          if ( v25 <= 0xFu && LockHandle.OldIrql <= 0xFu && v25 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v27 = CurrentPrcb->SchedulerAssist;
            v28 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v19 = (v28 & v27[5]) == 0;
            v27[5] &= v28;
            if ( v19 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
      if ( v10 )
      {
LABEL_56:
        if ( (ULONG_PTR *)v12 == &MiSystemPartition
          && (v13 = KeGetCurrentPrcb(),
              _m_prefetchw((const void *)&v13->CachedCommit),
              CachedCommit = v13->CachedCommit,
              (unsigned __int64)(v10 + CachedCommit) <= 0x100) )
        {
          while ( 1 )
          {
            v15 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&v13->CachedCommit,
                    CachedCommit + v10,
                    CachedCommit);
            if ( v15 == CachedCommit )
              break;
            CachedCommit = v15;
            if ( (unsigned __int64)(v15 + v10) > 0x100 )
              goto LABEL_16;
          }
        }
        else
        {
LABEL_16:
          v21 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 7464), -v10);
          v22 = *(_QWORD *)(v12 + 6240);
          if ( v21 >= v22 && v21 - v10 < v22 || (v23 = *(_QWORD *)(v12 + 6232), v21 >= v23) && v21 - v10 < v23 )
            MiSyncCommitSignals(v12, 0LL);
        }
      }
      v16 = 1LL;
      if ( (ULONG_PTR *)v12 != &MiSystemPartition )
        goto LABEL_23;
      v17 = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)v17->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable == -1 )
        goto LABEL_23;
      if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
      {
        do
        {
          v20 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)&v17->CachedResidentAvailable,
                  CachedResidentAvailable + 1,
                  CachedResidentAvailable);
          v19 = (_DWORD)CachedResidentAvailable == v20;
          LODWORD(CachedResidentAvailable) = v20;
          if ( v19 )
            goto LABEL_13;
        }
        while ( v20 != -1 && (unsigned __int64)(v20 + 1LL) <= 0x100 );
      }
      if ( (int)CachedResidentAvailable > 192
        && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                (volatile signed __int32 *)&v17->CachedResidentAvailable,
                                                192,
                                                CachedResidentAvailable) )
      {
        v16 = (int)CachedResidentAvailable - 192 + 1LL;
      }
      if ( v16 )
LABEL_23:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 7168), v16);
LABEL_13:
      MiWriteCompletePfn(v8, v7);
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v29 = KeGetCurrentIrql();
          if ( v29 <= 0xFu && CurrentIrql <= 0xFu && v29 >= 2u )
          {
            v30 = KeGetCurrentPrcb();
            SchedulerAssist = v30->SchedulerAssist;
            v31 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v19 = (v31 & SchedulerAssist[5]) == 0;
            a3 = (unsigned int)v31 & SchedulerAssist[5];
            SchedulerAssist[5] = a3;
            if ( v19 )
              KiRemoveSystemWorkPriorityKick(v30);
          }
        }
      }
      __writecr8(CurrentIrql);
      ++v5;
      v6 = 2LL;
    }
    while ( (unsigned __int64)v5 < a2 );
  }
}
