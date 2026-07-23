/*
 * XREFs of MiRemoveLockedPageCharge @ 0x1402DF700
 * Callers:
 *     MiMigratePfn @ 0x1402BCEF0 (MiMigratePfn.c)
 *     MiUnlockProtoPoolPage @ 0x1402DE040 (MiUnlockProtoPoolPage.c)
 *     MiFinishHardFault @ 0x1402DE0E0 (MiFinishHardFault.c)
 *     MiWalkEntireImage @ 0x1402DED00 (MiWalkEntireImage.c)
 *     MiCopyDataPageToImagePage @ 0x14030F138 (MiCopyDataPageToImagePage.c)
 *     MiPurgeBadFileOnlyPages @ 0x140541B30 (MiPurgeBadFileOnlyPages.c)
 *     MiDeleteDirectMapFixupPfn @ 0x140554534 (MiDeleteDirectMapFixupPfn.c)
 *     MiIdealClusterPage @ 0x140556054 (MiIdealClusterPage.c)
 *     MiSwapHardFaultPage @ 0x1405639B0 (MiSwapHardFaultPage.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     MiSyncCommitSignals @ 0x1403BFD54 (MiSyncCommitSignals.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     MiBadRefCount @ 0x1403F48DC (MiBadRefCount.c)
 *     MiRestockOverCommit @ 0x140550954 (MiRestockOverCommit.c)
 */

__int64 __fastcall MiRemoveLockedPageCharge(__int64 a1)
{
  __int16 v1; // dx
  bool v2; // zf
  __int16 v3; // dx
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  unsigned int v8; // r14d
  unsigned __int64 v9; // rdx
  char v10; // al
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // r8d
  __int64 v14; // r9
  unsigned __int64 v15; // r10
  unsigned __int64 v16; // r11
  __int64 v17; // rsi
  __int64 v18; // rdi
  unsigned __int64 OldIrql; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v23; // eax
  struct _KPRCB *v24; // r8
  __int64 CachedCommit; // rdx
  __int64 v26; // rcx
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rdx
  struct _KPRCB *v30; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v32; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v1 = *(_WORD *)(a1 + 32);
  if ( !v1 )
    MiBadRefCount(a1);
  v2 = v1 == 1;
  v3 = v1 - 1;
  *(_WORD *)(a1 + 32) = v3;
  if ( v2 && (*(_QWORD *)(a1 + 40) & 0x2000000000000LL) != 0 )
    return 1LL;
  v5 = *(_QWORD *)(a1 + 40);
  if ( (v5 & 0x1000000000LL) != 0 || (v5 & 0x2000000000000LL) != 0 )
    return 0LL;
  v6 = 1LL;
  v7 = *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  if ( !v3 )
  {
    v8 = 1;
    goto LABEL_16;
  }
  if ( v3 == 1 )
  {
    if ( v7 )
    {
LABEL_14:
      v8 = 0;
LABEL_16:
      v9 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
      if ( v9 > 0xFFFFF6BFFFFFFF78uLL || v9 < 0xFFFFF68000000000uLL )
      {
        v10 = *(_BYTE *)(a1 + 35);
        if ( (v10 & 0x20) != 0 )
        {
          *(_BYTE *)(a1 + 35) = v10 & 0xDF;
          return v8;
        }
      }
      if ( (unsigned int)MI_PFN_IS_PROTO(a1) && (*(_DWORD *)(v12 + 16) & 0x400LL) != 0 )
      {
        v13 = 1;
      }
      else if ( v11 <= v15 && v11 >= v16 && (*(_BYTE *)(v12 + 35) & 0x20) != 0 )
      {
        v13 = 1;
      }
      else if ( v8 == 1 && (v14 & 0x4000000000000000LL) != 0 )
      {
        v13 = 1;
      }
      v17 = *(_QWORD *)(qword_140C4E688 + 8 * ((v5 >> 39) & 0x3FF));
      if ( v13 == 1 )
      {
        v18 = 1LL;
        memset(&LockHandle, 0, sizeof(LockHandle));
        if ( !*(_QWORD *)(v17 + 6264) )
          goto LABEL_65;
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v17 + 6248), &LockHandle);
        v18 = MiRestockOverCommit(v17, 1LL);
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
              v23 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v2 = (v23 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v23;
              if ( v2 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(OldIrql);
        if ( v18 )
        {
LABEL_65:
          if ( (ULONG_PTR *)v17 == &MiSystemPartition
            && (v24 = KeGetCurrentPrcb(),
                _m_prefetchw((const void *)&v24->CachedCommit),
                CachedCommit = v24->CachedCommit,
                (unsigned __int64)(v18 + CachedCommit) <= 0x100) )
          {
            while ( 1 )
            {
              v26 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&v24->CachedCommit,
                      CachedCommit + v18,
                      CachedCommit);
              if ( v26 == CachedCommit )
                break;
              CachedCommit = v26;
              if ( (unsigned __int64)(v26 + v18) > 0x100 )
                goto LABEL_44;
            }
          }
          else
          {
LABEL_44:
            v27 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v17 + 7464), -v18);
            v28 = *(_QWORD *)(v17 + 6240);
            if ( v27 >= v28 && v27 - v18 < v28 || (v29 = *(_QWORD *)(v17 + 6232), v27 - v18 < v29) && v27 >= v29 )
              MiSyncCommitSignals(v17, 0LL);
          }
        }
      }
      if ( (ULONG_PTR *)v17 != &MiSystemPartition )
        goto LABEL_59;
      v30 = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)v30->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable == -1 )
        goto LABEL_59;
      if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
      {
        do
        {
          v32 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)&v30->CachedResidentAvailable,
                  CachedResidentAvailable + 1,
                  CachedResidentAvailable);
          v2 = (_DWORD)CachedResidentAvailable == v32;
          LODWORD(CachedResidentAvailable) = v32;
          if ( v2 )
            return v8;
        }
        while ( v32 != -1 && (unsigned __int64)(v32 + 1LL) <= 0x100 );
      }
      if ( (int)CachedResidentAvailable > 192
        && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                (volatile signed __int32 *)&v30->CachedResidentAvailable,
                                                192,
                                                CachedResidentAvailable) )
      {
        v6 = (int)CachedResidentAvailable - 192 + 1LL;
      }
      if ( v6 )
LABEL_59:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v17 + 7168), v6);
      return v8;
    }
  }
  else if ( v3 != 2 || !v7 )
  {
    return 0LL;
  }
  if ( (*(_BYTE *)(a1 + 34) & 8) != 0 )
    goto LABEL_14;
  return 0LL;
}
