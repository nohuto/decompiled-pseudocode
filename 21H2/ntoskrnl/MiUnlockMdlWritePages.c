/*
 * XREFs of MiUnlockMdlWritePages @ 0x1403259E0
 * Callers:
 *     MiUnlockFlushMdl @ 0x1403572B8 (MiUnlockFlushMdl.c)
 *     MiFlushComplete @ 0x14053D160 (MiFlushComplete.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022EE10 (KeAcquireInStackQueuedSpinLock.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiWriteCompletePfn @ 0x140325C80 (MiWriteCompletePfn.c)
 *     MiSyncCommitSignals @ 0x1403BF928 (MiSyncCommitSignals.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiRestockOverCommit @ 0x140550714 (MiRestockOverCommit.c)
 */

void __fastcall MiUnlockMdlWritePages(_QWORD *a1, unsigned __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  _QWORD *v5; // rsi
  __int64 v6; // rdx
  ULONG_PTR v7; // rbx
  unsigned __int8 CurrentIrql; // r15
  __int64 v9; // rbp
  __int64 v10; // rcx
  __int64 v11; // rdi
  struct _KPRCB *v12; // rdx
  __int64 CachedCommit; // r8
  __int64 v14; // rcx
  unsigned __int64 v15; // r9
  struct _KPRCB *v16; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v18; // zf
  signed __int32 v19; // eax
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rdx
  unsigned __int64 OldIrql; // r14
  unsigned __int8 v24; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v26; // r9
  int v27; // eax
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r10
  int v30; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  int v32; // [rsp+80h] [rbp+8h] BYREF

  if ( (unsigned __int64)a1 < a2 )
  {
    v5 = a1;
    v6 = 2LL;
    do
    {
      v7 = 48LL * *v5 - 0x58000000000LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        v6 = (-1LL << (CurrentIrql + 1)) & 4;
        a3 = (unsigned int)v6 | SchedulerAssist[5];
        SchedulerAssist[5] = a3;
      }
      v32 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v32, v6, a3, (__int64)SchedulerAssist);
        while ( *(__int64 *)(v7 + 24) < 0 );
      }
      v9 = 1LL;
      v10 = (*(_QWORD *)(v7 + 40) >> 39) & 0x3FFLL;
      memset(&LockHandle, 0, sizeof(LockHandle));
      v11 = *(_QWORD *)(qword_140C4E648 + 8 * v10);
      if ( !*(_QWORD *)(v11 + 6264) )
        goto LABEL_56;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v11 + 6248), &LockHandle);
      v9 = MiRestockOverCommit(v11, 1LL);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v24 = KeGetCurrentIrql();
          if ( v24 <= 0xFu && LockHandle.OldIrql <= 0xFu && v24 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v26 = CurrentPrcb->SchedulerAssist;
            v27 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v18 = (v27 & v26[5]) == 0;
            v26[5] &= v27;
            if ( v18 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
      if ( v9 )
      {
LABEL_56:
        if ( (ULONG_PTR *)v11 == &MiSystemPartition
          && (v12 = KeGetCurrentPrcb(),
              _m_prefetchw((const void *)&v12->CachedCommit),
              CachedCommit = v12->CachedCommit,
              (unsigned __int64)(v9 + CachedCommit) <= 0x100) )
        {
          while ( 1 )
          {
            v14 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&v12->CachedCommit,
                    CachedCommit + v9,
                    CachedCommit);
            if ( v14 == CachedCommit )
              break;
            CachedCommit = v14;
            if ( (unsigned __int64)(v14 + v9) > 0x100 )
              goto LABEL_16;
          }
        }
        else
        {
LABEL_16:
          v20 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 7464), -v9);
          v21 = *(_QWORD *)(v11 + 6240);
          if ( v20 >= v21 && v20 - v9 < v21 || (v22 = *(_QWORD *)(v11 + 6232), v20 >= v22) && v20 - v9 < v22 )
            MiSyncCommitSignals(v11, 0LL);
        }
      }
      v15 = 1LL;
      if ( (ULONG_PTR *)v11 != &MiSystemPartition )
        goto LABEL_23;
      v16 = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)v16->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable == -1 )
        goto LABEL_23;
      if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
      {
        do
        {
          v19 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)&v16->CachedResidentAvailable,
                  CachedResidentAvailable + 1,
                  CachedResidentAvailable);
          v18 = (_DWORD)CachedResidentAvailable == v19;
          LODWORD(CachedResidentAvailable) = v19;
          if ( v18 )
            goto LABEL_13;
        }
        while ( v19 != -1 && (unsigned __int64)(v19 + 1LL) <= 0x100 );
      }
      if ( (int)CachedResidentAvailable > 192
        && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                (volatile signed __int32 *)&v16->CachedResidentAvailable,
                                                192,
                                                CachedResidentAvailable) )
      {
        v15 = (int)CachedResidentAvailable - 192 + 1LL;
      }
      if ( v15 )
LABEL_23:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 7168), v15);
LABEL_13:
      MiWriteCompletePfn(v7);
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v28 = KeGetCurrentIrql();
          if ( v28 <= 0xFu && CurrentIrql <= 0xFu && v28 >= 2u )
          {
            v29 = KeGetCurrentPrcb();
            SchedulerAssist = v29->SchedulerAssist;
            v30 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v18 = (v30 & SchedulerAssist[5]) == 0;
            a3 = (unsigned int)v30 & SchedulerAssist[5];
            SchedulerAssist[5] = a3;
            if ( v18 )
              KiRemoveSystemWorkPriorityKick(v29);
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
