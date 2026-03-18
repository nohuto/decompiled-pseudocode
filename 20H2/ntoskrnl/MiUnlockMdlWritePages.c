/*
 * XREFs of MiUnlockMdlWritePages @ 0x1402A9130
 * Callers:
 *     MiUnlockFlushMdl @ 0x14029F3E4 (MiUnlockFlushMdl.c)
 *     MiFlushComplete @ 0x14053B660 (MiFlushComplete.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     MiWriteCompletePfn @ 0x1402A93D0 (MiWriteCompletePfn.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     MiSyncCommitSignals @ 0x1403BF0D4 (MiSyncCommitSignals.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiRestockOverCommit @ 0x14054EC44 (MiRestockOverCommit.c)
 */

void __fastcall MiUnlockMdlWritePages(_QWORD *a1, unsigned __int64 a2)
{
  _QWORD *i; // rsi
  ULONG_PTR v4; // rbx
  unsigned __int8 CurrentIrql; // r15
  __int64 v6; // rbp
  __int64 v7; // rcx
  __int64 v8; // rdi
  struct _KPRCB *v9; // rdx
  __int64 CachedCommit; // r8
  __int64 v11; // rcx
  unsigned __int64 v12; // r9
  struct _KPRCB *v13; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v15; // zf
  signed __int32 v16; // eax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rdx
  _DWORD *SchedulerAssist; // r9
  unsigned __int64 OldIrql; // r14
  unsigned __int8 v22; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v24; // r9
  int v25; // eax
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r10
  _DWORD *v28; // r9
  int v29; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  int v31; // [rsp+80h] [rbp+8h] BYREF

  if ( (unsigned __int64)a1 < a2 )
  {
    for ( i = a1; (unsigned __int64)i < a2; ++i )
    {
      v4 = 48LL * *i - 0x58000000000LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
      }
      v31 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v31);
        while ( *(__int64 *)(v4 + 24) < 0 );
      }
      v6 = 1LL;
      v7 = (*(_QWORD *)(v4 + 40) >> 39) & 0x3FFLL;
      memset(&LockHandle, 0, sizeof(LockHandle));
      v8 = *(_QWORD *)(qword_140C4E4C8 + 8 * v7);
      if ( !*(_QWORD *)(v8 + 6264) )
        goto LABEL_56;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v8 + 6248), &LockHandle);
      v6 = MiRestockOverCommit(v8, 1LL);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v22 = KeGetCurrentIrql();
          if ( v22 <= 0xFu && LockHandle.OldIrql <= 0xFu && v22 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v24 = CurrentPrcb->SchedulerAssist;
            v25 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v15 = (v25 & v24[5]) == 0;
            v24[5] &= v25;
            if ( v15 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
      if ( v6 )
      {
LABEL_56:
        if ( (ULONG_PTR *)v8 == &MiSystemPartition
          && (v9 = KeGetCurrentPrcb(),
              _m_prefetchw((const void *)&v9->CachedCommit),
              CachedCommit = v9->CachedCommit,
              (unsigned __int64)(v6 + CachedCommit) <= 0x100) )
        {
          while ( 1 )
          {
            v11 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&v9->CachedCommit,
                    CachedCommit + v6,
                    CachedCommit);
            if ( v11 == CachedCommit )
              break;
            CachedCommit = v11;
            if ( (unsigned __int64)(v11 + v6) > 0x100 )
              goto LABEL_16;
          }
        }
        else
        {
LABEL_16:
          v17 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 7464), -v6);
          v18 = *(_QWORD *)(v8 + 6240);
          if ( v17 >= v18 && v17 - v6 < v18 || (v19 = *(_QWORD *)(v8 + 6232), v17 >= v19) && v17 - v6 < v19 )
            MiSyncCommitSignals(v8, 0LL);
        }
      }
      v12 = 1LL;
      if ( (ULONG_PTR *)v8 != &MiSystemPartition )
        goto LABEL_23;
      v13 = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)v13->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable == -1 )
        goto LABEL_23;
      if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
      {
        do
        {
          v16 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)&v13->CachedResidentAvailable,
                  CachedResidentAvailable + 1,
                  CachedResidentAvailable);
          v15 = (_DWORD)CachedResidentAvailable == v16;
          LODWORD(CachedResidentAvailable) = v16;
          if ( v15 )
            goto LABEL_13;
        }
        while ( v16 != -1 && (unsigned __int64)(v16 + 1LL) <= 0x100 );
      }
      if ( (int)CachedResidentAvailable > 192
        && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                (volatile signed __int32 *)&v13->CachedResidentAvailable,
                                                192,
                                                CachedResidentAvailable) )
      {
        v12 = (int)CachedResidentAvailable - 192 + 1LL;
      }
      if ( v12 )
LABEL_23:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 7168), v12);
LABEL_13:
      MiWriteCompletePfn(v4);
      _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v26 = KeGetCurrentIrql();
          if ( v26 <= 0xFu && CurrentIrql <= 0xFu && v26 >= 2u )
          {
            v27 = KeGetCurrentPrcb();
            v28 = v27->SchedulerAssist;
            v29 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v15 = (v29 & v28[5]) == 0;
            v28[5] &= v29;
            if ( v15 )
              KiRemoveSystemWorkPriorityKick(v27);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
  }
}
