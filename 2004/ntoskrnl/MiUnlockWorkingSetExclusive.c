/*
 * XREFs of MiUnlockWorkingSetExclusive @ 0x140213300
 * Callers:
 *     MiDeleteVad @ 0x140212740 (MiDeleteVad.c)
 *     MiFinishVadDeletion @ 0x1402209B0 (MiFinishVadDeletion.c)
 *     MiFreePhysicalView @ 0x140221BA8 (MiFreePhysicalView.c)
 *     MiGetVadWakeList @ 0x140221C10 (MiGetVadWakeList.c)
 *     MiDeletePagablePteRange @ 0x140242470 (MiDeletePagablePteRange.c)
 *     MiInsertVadEvent @ 0x1402481DC (MiInsertVadEvent.c)
 *     MiInsertVad @ 0x1402499D0 (MiInsertVad.c)
 *     MiRemoveSecureEntry @ 0x14024B900 (MiRemoveSecureEntry.c)
 *     MiRemoveFromSystemSpace @ 0x140251150 (MiRemoveFromSystemSpace.c)
 *     MiDeletePartialVad @ 0x140251734 (MiDeletePartialVad.c)
 *     MiDeleteProcessShadow @ 0x140254168 (MiDeleteProcessShadow.c)
 *     MiMakeSystemAddressValid @ 0x1402556E0 (MiMakeSystemAddressValid.c)
 *     MiReleaseFaultState @ 0x14025BE38 (MiReleaseFaultState.c)
 *     MiInsertInSystemSpace @ 0x140264130 (MiInsertInSystemSpace.c)
 *     MmEnforceWorkingSetLimit @ 0x14027B43C (MmEnforceWorkingSetLimit.c)
 *     MmAccessFault @ 0x14029F070 (MmAccessFault.c)
 *     MiUserFault @ 0x14029F750 (MiUserFault.c)
 *     MiCommitExistingVad @ 0x1402AB230 (MiCommitExistingVad.c)
 *     MiUnlockSystemVa @ 0x1402BE18C (MiUnlockSystemVa.c)
 *     MiOutSwapWorkingSet @ 0x14030E3BC (MiOutSwapWorkingSet.c)
 *     MiBeginProcessClean @ 0x140310758 (MiBeginProcessClean.c)
 *     MiRotateComplete @ 0x140337EFC (MiRotateComplete.c)
 *     MiDeleteRotateAndStopFaults @ 0x1403384D4 (MiDeleteRotateAndStopFaults.c)
 *     MiReleaseWalkLocks @ 0x140339578 (MiReleaseWalkLocks.c)
 *     MiSetTrimWhileAgingState @ 0x140343F50 (MiSetTrimWhileAgingState.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14034BC24 (MmAdjustWorkingSetSizeEx.c)
 *     MiCleanWorkingSet @ 0x140352534 (MiCleanWorkingSet.c)
 *     MiUnlockFaultWorkingSet @ 0x1403541F4 (MiUnlockFaultWorkingSet.c)
 *     MiMakeSecureExclusive @ 0x140357280 (MiMakeSecureExclusive.c)
 *     MiDeleteCloneZombies @ 0x1403574FC (MiDeleteCloneZombies.c)
 *     MiWaitForRotateToComplete @ 0x14035FBF0 (MiWaitForRotateToComplete.c)
 *     MiLocateOldestSecure @ 0x14037C208 (MiLocateOldestSecure.c)
 *     MmStealTopLevelPage @ 0x140385CD8 (MmStealTopLevelPage.c)
 *     MiDeleteSessionAddressSpace @ 0x140386CEC (MiDeleteSessionAddressSpace.c)
 *     MiSessionRemoveImage @ 0x1403886E8 (MiSessionRemoveImage.c)
 *     MiCountSystemImageCommitment @ 0x14039BF04 (MiCountSystemImageCommitment.c)
 *     MiSessionInsertImage @ 0x14039FBE4 (MiSessionInsertImage.c)
 *     MiDeleteBootRange @ 0x1403B1188 (MiDeleteBootRange.c)
 *     MiMapWithLargePages @ 0x1403B51CC (MiMapWithLargePages.c)
 *     MiFreeUnusedPfnPagesDpc @ 0x1403B61B0 (MiFreeUnusedPfnPagesDpc.c)
 *     MiDeleteTopLevelSessionMapping @ 0x1403EE798 (MiDeleteTopLevelSessionMapping.c)
 *     MiDeleteEmptyPageTableCommit @ 0x1403EEE64 (MiDeleteEmptyPageTableCommit.c)
 *     MiClearCommitReleaseState @ 0x140526008 (MiClearCommitReleaseState.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x140526E98 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x140527084 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x140527238 (MiReleaseOutSwappedProcessCommit.c)
 *     MmEnableProcessSvm @ 0x1405277C0 (MmEnableProcessSvm.c)
 *     MmReleaseCommitForMemResetPages @ 0x140527824 (MmReleaseCommitForMemResetPages.c)
 *     MmSetCommitReleaseEligibility @ 0x140527A5C (MmSetCommitReleaseEligibility.c)
 *     MiRemoveVadEvent @ 0x1405352C4 (MiRemoveVadEvent.c)
 *     MiBeginHoldingDirtyFaults @ 0x140538D60 (MiBeginHoldingDirtyFaults.c)
 *     MiFinishHoldingDirtyFaults @ 0x140539634 (MiFinishHoldingDirtyFaults.c)
 *     MiCloneCaptureVadCommit @ 0x14053FB78 (MiCloneCaptureVadCommit.c)
 *     MiLockWorkingSetForLargeMapping @ 0x14054A338 (MiLockWorkingSetForLargeMapping.c)
 *     MiRemovePlaceholderVad @ 0x14054FEC8 (MiRemovePlaceholderVad.c)
 *     MiBuildForkPte @ 0x140552E1C (MiBuildForkPte.c)
 *     MiCloneVads @ 0x140553E88 (MiCloneVads.c)
 *     MiCreateCloneChain @ 0x140554620 (MiCreateCloneChain.c)
 *     MiCreateForkWsles @ 0x14055490C (MiCreateForkWsles.c)
 *     MiDoneWithThisPageGetAnother @ 0x140554C98 (MiDoneWithThisPageGetAnother.c)
 *     MiDuplicateCloneLeaf @ 0x140554D94 (MiDuplicateCloneLeaf.c)
 *     MiHandleForkTransitionPte @ 0x1405555C4 (MiHandleForkTransitionPte.c)
 *     MiLockDownWorkingSet @ 0x140555E58 (MiLockDownWorkingSet.c)
 *     MiMapUserLargePages @ 0x140559290 (MiMapUserLargePages.c)
 *     MiCreateInitialSystemWsles @ 0x140A479D0 (MiCreateInitialSystemWsles.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     MiCheckProcessShadow @ 0x1402A1860 (MiCheckProcessShadow.c)
 *     MiLockWorkingSetShared @ 0x1402AC150 (MiLockWorkingSetShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x140554C20 (MiDeleteDeferredCloneDescriptors.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B0814 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
    v6 = &dword_140C4F580;
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
  MiCheckProcessShadow(a1, 2LL);
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
    MiUnlockWorkingSetShared(a1, (unsigned __int8)v5);
  }
}
