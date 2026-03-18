/*
 * XREFs of MiRemoveLockedPageCharge @ 0x1403377E0
 * Callers:
 *     MiHardFaultPageRelease @ 0x140231A68 (MiHardFaultPageRelease.c)
 *     MiCopyDataPageToImagePage @ 0x14026F180 (MiCopyDataPageToImagePage.c)
 *     MiResolveProtoPteFault @ 0x14031EAA0 (MiResolveProtoPteFault.c)
 *     MiResolveDemandZeroFault @ 0x14031FD60 (MiResolveDemandZeroFault.c)
 *     MiResolveTransitionFault @ 0x140325B30 (MiResolveTransitionFault.c)
 *     MiMigratePfn @ 0x140327C60 (MiMigratePfn.c)
 *     MiUnlockProtoPoolPage @ 0x140334790 (MiUnlockProtoPoolPage.c)
 *     MiFinishHardFault @ 0x140334C40 (MiFinishHardFault.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140336AD8 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiWalkEntireImage @ 0x140336B30 (MiWalkEntireImage.c)
 *     MiCanBatchHardFaultPages @ 0x140595E34 (MiCanBatchHardFaultPages.c)
 *     MiPurgeBadFileOnlyPages @ 0x1405A032C (MiPurgeBadFileOnlyPages.c)
 *     MiSplitDirectMapPage @ 0x1405A0B10 (MiSplitDirectMapPage.c)
 *     MiIdealClusterPage @ 0x1405C3C6C (MiIdealClusterPage.c)
 *     MiSwapHardFaultPage @ 0x1405C4C94 (MiSwapHardFaultPage.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     MiSyncCommitSignals @ 0x1403CF698 (MiSyncCommitSignals.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     MiBadRefCount @ 0x1405AD67C (MiBadRefCount.c)
 *     MiRestockOverCommit @ 0x1405B3340 (MiRestockOverCommit.c)
 */

__int64 __fastcall MiRemoveLockedPageCharge(__int64 a1)
{
  __int16 v1; // ax
  bool v3; // zf
  __int16 v4; // ax
  __int64 v5; // rcx
  unsigned __int64 v6; // rdi
  __int64 v7; // r8
  unsigned int v8; // esi
  unsigned __int64 v9; // r8
  char v10; // al
  __int64 v11; // rbx
  struct _KPRCB *v12; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v14; // eax
  __int64 v16; // rbp
  struct _KPRCB *v17; // rdx
  __int64 CachedCommit; // r8
  __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  unsigned __int64 OldIrql; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v28; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v1 = *(_WORD *)(a1 + 32);
  if ( !v1 )
    MiBadRefCount(a1);
  v3 = v1 == 1;
  v4 = v1 - 1;
  *(_WORD *)(a1 + 32) = v4;
  if ( v3 && _bittest64((const signed __int64 *)(a1 + 40), 0x35u) )
    return 1LL;
  v5 = *(_QWORD *)(a1 + 40);
  if ( (v5 & 0x10000000000LL) != 0 || (v5 & 0x20000000000000LL) != 0 )
    return 0LL;
  v6 = 1LL;
  v7 = *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      if ( v7 || (*(_BYTE *)(a1 + 34) & 8) != 0 )
      {
LABEL_8:
        v8 = 0;
        goto LABEL_9;
      }
    }
    else if ( v4 == 2 && v7 && (*(_BYTE *)(a1 + 34) & 8) != 0 )
    {
      goto LABEL_8;
    }
    return 0LL;
  }
  v8 = 1;
LABEL_9:
  v9 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  if ( v9 <= 0xFFFFF6BFFFFFFF78uLL && v9 >= 0xFFFFF68000000000uLL || (v10 = *(_BYTE *)(a1 + 35), (v10 & 0x20) == 0) )
  {
    if ( v5 < 0 && (*(_DWORD *)(a1 + 16) & 0x400LL) != 0
      || v9 <= 0xFFFFF6BFFFFFFF78uLL && v9 >= 0xFFFFF68000000000uLL && (*(_BYTE *)(a1 + 35) & 0x20) != 0
      || v8 && (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
    {
      v16 = 1LL;
      memset(&LockHandle, 0, sizeof(LockHandle));
      v11 = *(_QWORD *)(qword_140C51F48 + 8 * (((unsigned __int64)v5 >> 43) & 0x3FF));
      if ( !*(_QWORD *)(v11 + 16056) )
        goto LABEL_72;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v11 + 16040), &LockHandle);
      v16 = MiRestockOverCommit(v11, 1LL);
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
            v28 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v3 = (v28 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v28;
            if ( v3 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
      if ( v16 )
      {
LABEL_72:
        if ( (ULONG_PTR *)v11 == &MiSystemPartition )
        {
          v17 = KeGetCurrentPrcb();
          _m_prefetchw((const void *)&v17->CachedCommit);
          CachedCommit = v17->CachedCommit;
          if ( (unsigned __int64)(v16 + CachedCommit) <= 0x100 )
          {
            while ( 1 )
            {
              v19 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&v17->CachedCommit,
                      CachedCommit + v16,
                      CachedCommit);
              if ( v19 == CachedCommit )
                break;
              CachedCommit = v19;
              if ( (unsigned __int64)(v19 + v16) > 0x100 )
                goto LABEL_35;
            }
LABEL_16:
            v12 = KeGetCurrentPrcb();
            CachedResidentAvailable = (int)v12->CachedResidentAvailable;
            if ( (_DWORD)CachedResidentAvailable != -1 )
            {
              if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
              {
                do
                {
                  v14 = _InterlockedCompareExchange(
                          (volatile signed __int32 *)&v12->CachedResidentAvailable,
                          CachedResidentAvailable + 1,
                          CachedResidentAvailable);
                  v3 = (_DWORD)CachedResidentAvailable == v14;
                  LODWORD(CachedResidentAvailable) = v14;
                  if ( v3 )
                    return v8;
                }
                while ( v14 != -1 && (unsigned __int64)(v14 + 1LL) <= 0x100 );
              }
              v23 = 1LL;
              if ( (int)CachedResidentAvailable > 192 )
              {
                v23 = 1LL;
                if ( (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                          (volatile signed __int32 *)&v12->CachedResidentAvailable,
                                                          192,
                                                          CachedResidentAvailable) )
                  v23 = (int)CachedResidentAvailable - 192 + 1LL;
              }
              v6 = v23;
              if ( !v23 )
                return v8;
            }
LABEL_49:
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 16960), v6);
            return v8;
          }
        }
LABEL_35:
        v20 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 17256), -v16);
        v21 = *(_QWORD *)(v11 + 16032);
        if ( v20 >= v21 && v20 - v16 < v21 || (v22 = *(_QWORD *)(v11 + 16024), v20 >= v22) && v20 - v16 < v22 )
          MiSyncCommitSignals(v11, 0LL);
      }
    }
    else
    {
      v11 = *(_QWORD *)(qword_140C51F48 + 8 * (((unsigned __int64)v5 >> 43) & 0x3FF));
    }
    if ( (ULONG_PTR *)v11 != &MiSystemPartition )
      goto LABEL_49;
    goto LABEL_16;
  }
  *(_BYTE *)(a1 + 35) = v10 & 0xDF;
  return v8;
}
