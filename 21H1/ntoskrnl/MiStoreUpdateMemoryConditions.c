/*
 * XREFs of MiStoreUpdateMemoryConditions @ 0x140336F38
 * Callers:
 *     MiAdjustModifiedPageLoad @ 0x14024012C (MiAdjustModifiedPageLoad.c)
 *     MiFlushAllHintedStorePages @ 0x1402D0518 (MiFlushAllHintedStorePages.c)
 *     MiFlushAllPagesWorker @ 0x14037F430 (MiFlushAllPagesWorker.c)
 *     MiModifiedPageWriter @ 0x1403BAE20 (MiModifiedPageWriter.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022DFE0 (KeAcquireInStackQueuedSpinLock.c)
 *     ?SmUpdateMemoryConditions@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x14023DC84 (-SmUpdateMemoryConditions@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeSetActualBasePriorityThread @ 0x14026C9E0 (KeSetActualBasePriorityThread.c)
 *     MiGetAvailablePagesBelowPriority @ 0x1402803A4 (MiGetAvailablePagesBelowPriority.c)
 *     ?SmDrainSList@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z @ 0x14031EE6C (-SmDrainSList@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z.c)
 *     KeQueryEffectiveBasePriorityThread @ 0x140336F08 (KeQueryEffectiveBasePriorityThread.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x140337094 (MiUseLowIoPriorityForModifiedPages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiStoreUpdateMemoryConditions(__int64 a1)
{
  unsigned __int64 v2; // rbx
  int v3; // r15d
  int v4; // ebp
  unsigned int v5; // edi
  unsigned __int64 AvailablePagesBelowPriority; // rax
  unsigned __int64 v7; // rcx
  int v8; // ebx
  __int64 v9; // r8
  _DWORD *v10; // r9
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf
  signed __int32 v17[8]; // [rsp+0h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 4928), &LockHandle);
  v2 = *(_QWORD *)(a1 + 7104);
  v3 = MiUseLowIoPriorityForModifiedPages(a1);
  if ( v2 < 0xA0 )
  {
    v8 = 0;
    v5 = 18;
    v4 = 1;
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
      AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority((_QWORD *)a1, 6u);
      if ( AvailablePagesBelowPriority < 3LL * *(_QWORD *)(*(_QWORD *)(a1 + 6848) + 2392LL) )
      {
        v8 = 2;
      }
      else
      {
        v7 = *(_QWORD *)(a1 + 7600);
        if ( v7 >= AvailablePagesBelowPriority + 0x2000 )
          v8 = (v7 < AvailablePagesBelowPriority + 0x2000 + AvailablePagesBelowPriority) + 2;
        else
          v8 = 4;
      }
    }
  }
  if ( (unsigned int)KeQueryEffectiveBasePriorityThread(*(_QWORD *)(a1 + 1192)) != v5 )
    KeSetActualBasePriorityThread(*(_QWORD *)(a1 + 1192), v5, v9, v10);
  if ( v4 )
    KeSetEvent((PRKEVENT)(a1 + 1200), 0, 0);
  if ( (unsigned __int8)byte_140D24168 != v8 || !v8 || byte_140D24169 != (v3 == 0) )
  {
    byte_140D24168 = v8;
    byte_140D24169 = v3 == 0;
    _InterlockedOr(v17, 0);
    SMKM_STORE_MGR<SM_TRAITS>::SmUpdateMemoryConditions((__int64)&SmGlobals, v8);
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
        v15 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v16 = (v15 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v15;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  if ( !v8 )
    SMKM_STORE_MGR<SM_TRAITS>::SmDrainSList(&ListHead, 0);
}
