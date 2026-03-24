/*
 * XREFs of MiUnlockWorkingSetExclusive @ 0x14021CAE0
 * Callers:
 *     MmAccessFault @ 0x14020D090 (MmAccessFault.c)
 *     MiUserFault @ 0x14020D770 (MiUserFault.c)
 *     MiCommitExistingVad @ 0x140218D90 (MiCommitExistingVad.c)
 *     MiDeleteVad @ 0x14021BFF0 (MiDeleteVad.c)
 *     MmEnforceWorkingSetLimit @ 0x1402521D8 (MmEnforceWorkingSetLimit.c)
 *     MiRemoveSecureEntry @ 0x14025B5E0 (MiRemoveSecureEntry.c)
 *     MiInsertVadEvent @ 0x14025B9BC (MiInsertVadEvent.c)
 *     MiUnlockFaultWorkingSet @ 0x14028DD1C (MiUnlockFaultWorkingSet.c)
 *     MiRotateComplete @ 0x14029804C (MiRotateComplete.c)
 *     MiDeleteRotateAndStopFaults @ 0x140298624 (MiDeleteRotateAndStopFaults.c)
 *     MiReleaseWalkLocks @ 0x1402AA590 (MiReleaseWalkLocks.c)
 *     MiSetTrimWhileAgingState @ 0x1402AC54C (MiSetTrimWhileAgingState.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1402BE19C (MmAdjustWorkingSetSizeEx.c)
 *     MiCleanWorkingSet @ 0x1402C4164 (MiCleanWorkingSet.c)
 *     MiMakeSecureExclusive @ 0x1402C8E50 (MiMakeSecureExclusive.c)
 *     MiDeleteCloneZombies @ 0x1402C915C (MiDeleteCloneZombies.c)
 *     MiWaitForRotateToComplete @ 0x1402D2AF0 (MiWaitForRotateToComplete.c)
 *     MiBeginProcessClean @ 0x1402D5048 (MiBeginProcessClean.c)
 *     MiInsertInSystemSpace @ 0x1402FADE0 (MiInsertInSystemSpace.c)
 *     MiDeletePartialVad @ 0x1402FD8DC (MiDeletePartialVad.c)
 *     MiRemoveFromSystemSpace @ 0x140304E4C (MiRemoveFromSystemSpace.c)
 *     MiDeleteProcessShadow @ 0x140305768 (MiDeleteProcessShadow.c)
 *     MiMakeSystemAddressValid @ 0x14030E390 (MiMakeSystemAddressValid.c)
 *     MiReleaseFaultState @ 0x14030F4F4 (MiReleaseFaultState.c)
 *     MiUnlockSystemVa @ 0x1403120FC (MiUnlockSystemVa.c)
 *     MiInsertVad @ 0x140316330 (MiInsertVad.c)
 *     MiFinishVadDeletion @ 0x140316DC0 (MiFinishVadDeletion.c)
 *     MiFreePhysicalView @ 0x140317FB8 (MiFreePhysicalView.c)
 *     MiGetVadWakeList @ 0x140318020 (MiGetVadWakeList.c)
 *     MiDeletePagablePteRange @ 0x140337360 (MiDeletePagablePteRange.c)
 *     MiOutSwapWorkingSet @ 0x14035CE28 (MiOutSwapWorkingSet.c)
 *     MiLocateOldestSecure @ 0x14037E2C8 (MiLocateOldestSecure.c)
 *     MmStealTopLevelPage @ 0x1403885D8 (MmStealTopLevelPage.c)
 *     MiDeleteSessionAddressSpace @ 0x1403895EC (MiDeleteSessionAddressSpace.c)
 *     MiSessionRemoveImage @ 0x14038AFF8 (MiSessionRemoveImage.c)
 *     MiCountSystemImageCommitment @ 0x14039EC94 (MiCountSystemImageCommitment.c)
 *     MiSessionInsertImage @ 0x1403A2974 (MiSessionInsertImage.c)
 *     MiDeleteBootRange @ 0x1403B5178 (MiDeleteBootRange.c)
 *     MiMapWithLargePages @ 0x1403B8AEC (MiMapWithLargePages.c)
 *     MiFreeUnusedPfnPagesDpc @ 0x1403B9650 (MiFreeUnusedPfnPagesDpc.c)
 *     MiDeleteTopLevelSessionMapping @ 0x1403F4448 (MiDeleteTopLevelSessionMapping.c)
 *     MiDeleteEmptyPageTableCommit @ 0x1403F4B14 (MiDeleteEmptyPageTableCommit.c)
 *     MiClearCommitReleaseState @ 0x14052B4D8 (MiClearCommitReleaseState.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x14052C368 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x14052C554 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x14052C708 (MiReleaseOutSwappedProcessCommit.c)
 *     MmEnableProcessSvm @ 0x14052CC90 (MmEnableProcessSvm.c)
 *     MmReleaseCommitForMemResetPages @ 0x14052CCF4 (MmReleaseCommitForMemResetPages.c)
 *     MmSetCommitReleaseEligibility @ 0x14052CF2C (MmSetCommitReleaseEligibility.c)
 *     MiRemoveVadEvent @ 0x14053A794 (MiRemoveVadEvent.c)
 *     MiBeginHoldingDirtyFaults @ 0x14053E230 (MiBeginHoldingDirtyFaults.c)
 *     MiFinishHoldingDirtyFaults @ 0x14053EB04 (MiFinishHoldingDirtyFaults.c)
 *     MiCloneCaptureVadCommit @ 0x14054504C (MiCloneCaptureVadCommit.c)
 *     MiLockWorkingSetForLargeMapping @ 0x14054F7D8 (MiLockWorkingSetForLargeMapping.c)
 *     MiRemovePlaceholderVad @ 0x140555368 (MiRemovePlaceholderVad.c)
 *     MiBuildForkPte @ 0x1405582BC (MiBuildForkPte.c)
 *     MiCloneVads @ 0x140559328 (MiCloneVads.c)
 *     MiCreateCloneChain @ 0x140559AC0 (MiCreateCloneChain.c)
 *     MiCreateForkWsles @ 0x140559DAC (MiCreateForkWsles.c)
 *     MiDoneWithThisPageGetAnother @ 0x14055A138 (MiDoneWithThisPageGetAnother.c)
 *     MiDuplicateCloneLeaf @ 0x14055A234 (MiDuplicateCloneLeaf.c)
 *     MiHandleForkTransitionPte @ 0x14055AA64 (MiHandleForkTransitionPte.c)
 *     MiLockDownWorkingSet @ 0x14055B2F8 (MiLockDownWorkingSet.c)
 *     MiMapUserLargePages @ 0x14055E730 (MiMapUserLargePages.c)
 *     MiCreateInitialSystemWsles @ 0x140A4F20C (MiCreateInitialSystemWsles.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020F790 (MiUnlockWorkingSetShared.c)
 *     MiCheckProcessShadow @ 0x14020F880 (MiCheckProcessShadow.c)
 *     MiLockWorkingSetShared @ 0x140219CB0 (MiLockWorkingSetShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x14055A0C0 (MiDeleteDeferredCloneDescriptors.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B5D8C (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall MiUnlockWorkingSetExclusive(__int64 a1, unsigned __int8 a2)
{
  int v3; // esi
  _QWORD *v4; // r14
  unsigned __int64 v5; // rbp
  LONG *v6; // rbx
  __int64 v7; // r8
  _DWORD *v8; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 SchedulerAssist; // rdx
  int v11; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v13; // r10
  int v14; // eax
  bool v15; // zf
  _QWORD *v16; // rbx
  void *retaddr; // [rsp+38h] [rbp+0h]
  int v18; // [rsp+48h] [rbp+10h]

  v3 = 0;
  v4 = 0LL;
  v18 = *(_DWORD *)(a1 + 184);
  v5 = a2;
  if ( (v18 & 7) == 2 )
    v6 = &dword_140C4F780;
  else
    v6 = (LONG *)(a1 + 192);
  if ( (v18 & 7) == 0
    && *(_QWORD *)(a1 + 16)
    && *(_WORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[8] + 368) )
  {
    v4 = (_QWORD *)MiDeleteDeferredCloneDescriptors();
  }
  if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x400000) != 0 )
    v3 = 1;
  MiCheckProcessShadow(a1, 2u);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v6, retaddr);
  else
    *v6 = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = (__int64)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v11 = *(_DWORD *)(SchedulerAssist + 24) - 1;
      *(_DWORD *)(SchedulerAssist + 24) = v11;
      if ( !v11 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
      {
        v13 = KeGetCurrentPrcb();
        SchedulerAssist = -1LL << ((unsigned __int8)v5 + 1);
        v8 = v13->SchedulerAssist;
        v14 = ~(unsigned __int16)SchedulerAssist;
        v15 = (v14 & v8[5]) == 0;
        v7 = (unsigned int)v14 & v8[5];
        v8[5] = v7;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick(v13);
      }
    }
  }
  __writecr8(v5);
  if ( v4 )
  {
    do
    {
      v16 = (_QWORD *)*v4;
      ExFreePoolWithTag(v4, 0);
      v4 = v16;
    }
    while ( v16 );
  }
  if ( !v3 && ((v18 & 0x8000000) != 0 || (v18 & 0x4000000) != 0 || (v18 & 0x10000000) != 0) )
  {
    MiLockWorkingSetShared(a1, SchedulerAssist, v7, v8);
    MiUnlockWorkingSetShared(a1, v5);
  }
}
