/*
 * XREFs of MiUnlockWorkingSetExclusive @ 0x14027F090
 * Callers:
 *     MiUnlockFaultWorkingSet @ 0x14020277C (MiUnlockFaultWorkingSet.c)
 *     MiInsertVadEvent @ 0x14022D57C (MiInsertVadEvent.c)
 *     MiInsertVad @ 0x14022DF50 (MiInsertVad.c)
 *     MiRemoveSecureEntry @ 0x14022EB00 (MiRemoveSecureEntry.c)
 *     MiFinishVadDeletion @ 0x14022EE20 (MiFinishVadDeletion.c)
 *     MiFreePhysicalView @ 0x140230018 (MiFreePhysicalView.c)
 *     MiGetVadWakeList @ 0x140230080 (MiGetVadWakeList.c)
 *     MiMakeSystemAddressValid @ 0x140235350 (MiMakeSystemAddressValid.c)
 *     MiDeleteProcessShadow @ 0x140236418 (MiDeleteProcessShadow.c)
 *     MmEnforceWorkingSetLimit @ 0x14023CEFC (MmEnforceWorkingSetLimit.c)
 *     MiInsertInSystemSpace @ 0x14024C1E0 (MiInsertInSystemSpace.c)
 *     MiRemoveFromSystemSpace @ 0x14024EF4C (MiRemoveFromSystemSpace.c)
 *     MiDeletePartialVad @ 0x14024FC00 (MiDeletePartialVad.c)
 *     MiDeleteRotateAndStopFaults @ 0x14025F304 (MiDeleteRotateAndStopFaults.c)
 *     MiRotateComplete @ 0x14025F904 (MiRotateComplete.c)
 *     MmAccessFault @ 0x14026E3B0 (MmAccessFault.c)
 *     MiUserFault @ 0x14026EA90 (MiUserFault.c)
 *     MiCommitExistingVad @ 0x14027A570 (MiCommitExistingVad.c)
 *     MiDeleteVad @ 0x14027E4D0 (MiDeleteVad.c)
 *     MiUnlockSystemVa @ 0x1402996DC (MiUnlockSystemVa.c)
 *     MiDeletePagablePteRange @ 0x1402BA840 (MiDeletePagablePteRange.c)
 *     MiReleaseFaultState @ 0x1402D0698 (MiReleaseFaultState.c)
 *     MiReleaseWalkLocks @ 0x14030BCFC (MiReleaseWalkLocks.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14031CBE4 (MmAdjustWorkingSetSizeEx.c)
 *     MiCleanWorkingSet @ 0x140322FC4 (MiCleanWorkingSet.c)
 *     MiMakeSecureExclusive @ 0x140327C80 (MiMakeSecureExclusive.c)
 *     MiDeleteCloneZombies @ 0x140327EFC (MiDeleteCloneZombies.c)
 *     MiWaitForRotateToComplete @ 0x140330980 (MiWaitForRotateToComplete.c)
 *     MiOutSwapWorkingSet @ 0x140339B4C (MiOutSwapWorkingSet.c)
 *     MiBeginProcessClean @ 0x14033B300 (MiBeginProcessClean.c)
 *     MiSetTrimWhileAgingState @ 0x14033B678 (MiSetTrimWhileAgingState.c)
 *     MiLocateOldestSecure @ 0x14037DF38 (MiLocateOldestSecure.c)
 *     MmStealTopLevelPage @ 0x140387E78 (MmStealTopLevelPage.c)
 *     MiDeleteSessionAddressSpace @ 0x140388E8C (MiDeleteSessionAddressSpace.c)
 *     MiSessionRemoveImage @ 0x14038A8A8 (MiSessionRemoveImage.c)
 *     MiCountSystemImageCommitment @ 0x14039F054 (MiCountSystemImageCommitment.c)
 *     MiSessionInsertImage @ 0x1403A20B4 (MiSessionInsertImage.c)
 *     MiDeleteBootRange @ 0x1403B3AF8 (MiDeleteBootRange.c)
 *     MiMapWithLargePages @ 0x1403B80EC (MiMapWithLargePages.c)
 *     MiFreeUnusedPfnPagesDpc @ 0x1403B8C50 (MiFreeUnusedPfnPagesDpc.c)
 *     MiDeleteTopLevelSessionMapping @ 0x1403F2C00 (MiDeleteTopLevelSessionMapping.c)
 *     MiDeleteEmptyPageTableCommit @ 0x1403F32D4 (MiDeleteEmptyPageTableCommit.c)
 *     MiClearCommitReleaseState @ 0x1405299D8 (MiClearCommitReleaseState.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x14052A868 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x14052AA54 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x14052AC08 (MiReleaseOutSwappedProcessCommit.c)
 *     MmEnableProcessSvm @ 0x14052B190 (MmEnableProcessSvm.c)
 *     MmReleaseCommitForMemResetPages @ 0x14052B1F4 (MmReleaseCommitForMemResetPages.c)
 *     MmSetCommitReleaseEligibility @ 0x14052B42C (MmSetCommitReleaseEligibility.c)
 *     MiRemoveVadEvent @ 0x140538C94 (MiRemoveVadEvent.c)
 *     MiBeginHoldingDirtyFaults @ 0x14053C730 (MiBeginHoldingDirtyFaults.c)
 *     MiFinishHoldingDirtyFaults @ 0x14053D004 (MiFinishHoldingDirtyFaults.c)
 *     MiCloneCaptureVadCommit @ 0x140543548 (MiCloneCaptureVadCommit.c)
 *     MiLockWorkingSetForLargeMapping @ 0x14054DD08 (MiLockWorkingSetForLargeMapping.c)
 *     MiRemovePlaceholderVad @ 0x140553898 (MiRemovePlaceholderVad.c)
 *     MiBuildForkPte @ 0x1405567EC (MiBuildForkPte.c)
 *     MiCloneVads @ 0x140557858 (MiCloneVads.c)
 *     MiCreateCloneChain @ 0x140557FF0 (MiCreateCloneChain.c)
 *     MiCreateForkWsles @ 0x1405582DC (MiCreateForkWsles.c)
 *     MiDoneWithThisPageGetAnother @ 0x140558668 (MiDoneWithThisPageGetAnother.c)
 *     MiDuplicateCloneLeaf @ 0x140558764 (MiDuplicateCloneLeaf.c)
 *     MiHandleForkTransitionPte @ 0x140558F94 (MiHandleForkTransitionPte.c)
 *     MiLockDownWorkingSet @ 0x140559828 (MiLockDownWorkingSet.c)
 *     MiMapUserLargePages @ 0x14055CC60 (MiMapUserLargePages.c)
 *     MiCreateInitialSystemWsles @ 0x140A4DC6C (MiCreateInitialSystemWsles.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiCheckProcessShadow @ 0x140270BA0 (MiCheckProcessShadow.c)
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x1405585F0 (MiDeleteDeferredCloneDescriptors.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B4374 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall MiUnlockWorkingSetExclusive(__int64 a1, unsigned __int8 a2)
{
  int v3; // esi
  _QWORD *v4; // r14
  unsigned __int64 v5; // rbp
  LONG *v6; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v9; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v11; // r10
  _DWORD *v12; // r9
  int v13; // eax
  bool v14; // zf
  _QWORD *v15; // rbx
  void *retaddr; // [rsp+38h] [rbp+0h]
  int v17; // [rsp+48h] [rbp+10h]

  v3 = 0;
  v4 = 0LL;
  v17 = *(_DWORD *)(a1 + 184);
  v5 = a2;
  if ( (v17 & 7) == 2 )
    v6 = &dword_140C4F600;
  else
    v6 = (LONG *)(a1 + 192);
  if ( (v17 & 7) == 0
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
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v9 = SchedulerAssist[6] - 1;
      SchedulerAssist[6] = v9;
      if ( !v9 )
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
        v11 = KeGetCurrentPrcb();
        v12 = v11->SchedulerAssist;
        v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v14 = (v13 & v12[5]) == 0;
        v12[5] &= v13;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick(v11);
      }
    }
  }
  __writecr8(v5);
  if ( v4 )
  {
    do
    {
      v15 = (_QWORD *)*v4;
      ExFreePoolWithTag(v4, 0);
      v4 = v15;
    }
    while ( v15 );
  }
  if ( !v3 && ((v17 & 0x8000000) != 0 || (v17 & 0x4000000) != 0 || (v17 & 0x10000000) != 0) )
  {
    MiLockWorkingSetShared(a1);
    MiUnlockWorkingSetShared(a1, v5);
  }
}
