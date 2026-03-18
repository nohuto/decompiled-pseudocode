/*
 * XREFs of MiReleasePageListLock @ 0x140338D00
 * Callers:
 *     MiDecayPfnFullyInitialized @ 0x1402302B0 (MiDecayPfnFullyInitialized.c)
 *     MiUpdatePageAttributeStamp @ 0x14024DD20 (MiUpdatePageAttributeStamp.c)
 *     MiSynchronizeFastPageInsert @ 0x1402C0900 (MiSynchronizeFastPageInsert.c)
 *     MiReplaceTransitionPage @ 0x1402E7704 (MiReplaceTransitionPage.c)
 *     MiAcquirePageListLock @ 0x1403277D0 (MiAcquirePageListLock.c)
 *     MiInsertPagesInList @ 0x140338660 (MiInsertPagesInList.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x14038E608 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiUnlinkStandbyPage @ 0x14038EB20 (MiUnlinkStandbyPage.c)
 *     MiUnlinkPageFromBadList @ 0x1405ADEB8 (MiUnlinkPageFromBadList.c)
 *     MiGetSlabStandbyPage @ 0x1405B130C (MiGetSlabStandbyPage.c)
 *     MiLockPageListAndFirstPage @ 0x1405B350C (MiLockPageListAndFirstPage.c)
 *     MiRepointPteAtExtendedStandby @ 0x1405B3EB4 (MiRepointPteAtExtendedStandby.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14063D8E0 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

void __fastcall MiReleasePageListLock(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v2; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v5; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_BYTE *)a2 )
  {
    if ( *(_BYTE *)(a2 + 24) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(a2 + 16) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
      *(_BYTE *)(a2 + 24) = 0;
    }
    if ( *(_BYTE *)(a2 + 48) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(a2 + 40) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
      *(_BYTE *)(a2 + 48) = 0;
    }
    if ( *(_BYTE *)(a2 + 72) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(a2 + 64) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
      *(_BYTE *)(a2 + 72) = 0;
    }
    if ( *(_BYTE *)(a2 + 96) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(a2 + 88) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
      *(_BYTE *)(a2 + 96) = 0;
    }
    v2 = (volatile signed __int32 *)(a1 + 32);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v2, retaddr);
    }
    else
    {
      _InterlockedAnd(v2, 0xBFFFFFFF);
      _InterlockedDecrement(v2);
    }
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist && CurrentPrcb->NestingLevel <= 1u )
    {
      v5 = SchedulerAssist[6] - 1;
      SchedulerAssist[6] = v5;
      if ( !v5 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  else
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 32));
  }
}
