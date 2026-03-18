/*
 * XREFs of MiStoreUpdateMemoryConditions @ 0x1402664E8
 * Callers:
 *     MiAdjustModifiedPageLoad @ 0x140268CA8 (MiAdjustModifiedPageLoad.c)
 *     MiFlushAllHintedStorePages @ 0x1403773D8 (MiFlushAllHintedStorePages.c)
 *     MiFlushAllPagesWorker @ 0x14038A914 (MiFlushAllPagesWorker.c)
 *     MiModifiedPageWriter @ 0x1403CFD20 (MiModifiedPageWriter.c)
 * Callees:
 *     ?SmDrainSList@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z @ 0x140258C54 (-SmDrainSList@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z.c)
 *     MiGetAvailablePagesBelowPriority @ 0x140266B40 (MiGetAvailablePagesBelowPriority.c)
 *     KeQueryEffectiveBasePriorityThread @ 0x140266B8C (KeQueryEffectiveBasePriorityThread.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x140266C0C (MiUseLowIoPriorityForModifiedPages.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeSetActualBasePriorityThread @ 0x14028FD20 (KeSetActualBasePriorityThread.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     ?SmUpdateMemoryConditions@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x14035F4C8 (-SmUpdateMemoryConditions@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiStoreUpdateMemoryConditions(__int64 a1)
{
  unsigned __int64 v2; // rbx
  unsigned int v3; // r14d
  int v4; // ebp
  int v5; // edi
  unsigned __int64 AvailablePagesBelowPriority; // rax
  unsigned __int64 v7; // rcx
  unsigned int v8; // ebx
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  bool v14; // zf
  signed __int32 v15[8]; // [rsp+0h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 15680), &LockHandle);
  v2 = *(_QWORD *)(a1 + 16896);
  v3 = MiUseLowIoPriorityForModifiedPages(a1) == 0;
  if ( v2 < 0xA0 )
  {
    v8 = 0;
    v4 = 1;
    v5 = 18;
  }
  else
  {
    v4 = 0;
    if ( v2 < 0x420 )
    {
      v8 = 1;
      v5 = 18;
    }
    else
    {
      v5 = 8;
      AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(a1, 6LL);
      if ( AvailablePagesBelowPriority < 3LL * *(_QWORD *)(*(_QWORD *)(a1 + 16600) + 2392LL) )
      {
        v8 = 2;
      }
      else
      {
        v7 = *(_QWORD *)(a1 + 17504);
        if ( v7 >= AvailablePagesBelowPriority + 0x2000 )
          v8 = (v7 < AvailablePagesBelowPriority + 0x2000 + AvailablePagesBelowPriority) + 2;
        else
          v8 = 4;
      }
    }
  }
  if ( (unsigned int)KeQueryEffectiveBasePriorityThread(*(_QWORD *)(a1 + 1208)) != v5 )
    KeSetActualBasePriorityThread(*(_QWORD *)(a1 + 1208));
  if ( v4 )
    KeSetEvent((PRKEVENT)(a1 + 1216), 0, 0);
  if ( (unsigned __int8)byte_140D321A8 != v8 || !v8 || (unsigned __int8)byte_140D321A9 != v3 )
  {
    byte_140D321A8 = v8;
    byte_140D321A9 = v3 != 0;
    _InterlockedOr(v15, 0);
    SMKM_STORE_MGR<SM_TRAITS>::SmUpdateMemoryConditions(&SmGlobals, v8, v3);
  }
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
        v13 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v14 = (v13 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v13;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  if ( !v8 )
    SMKM_STORE_MGR<SM_TRAITS>::SmDrainSList(&stru_140D31F80, 0);
}
