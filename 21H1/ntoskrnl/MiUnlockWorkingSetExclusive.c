/*
 * XREFs of MiUnlockWorkingSetExclusive @ 0x14026C350
 * Callers:
 *     MiSetTrimWhileAgingState @ 0x140202F1C (MiSetTrimWhileAgingState.c)
 *     MmAccessFault @ 0x14020C560 (MmAccessFault.c)
 *     MiUserFault @ 0x14020CC40 (MiUserFault.c)
 *     MiCommitExistingVad @ 0x140218720 (MiCommitExistingVad.c)
 *     MiUnlockSystemVa @ 0x14022B50C (MiUnlockSystemVa.c)
 *     MiDeleteVad @ 0x14026B790 (MiDeleteVad.c)
 *     MiFinishVadDeletion @ 0x140279A00 (MiFinishVadDeletion.c)
 *     MiFreePhysicalView @ 0x14027ABF8 (MiFreePhysicalView.c)
 *     MiGetVadWakeList @ 0x14027AC60 (MiGetVadWakeList.c)
 *     MiDeletePagablePteRange @ 0x14029B4A0 (MiDeletePagablePteRange.c)
 *     MiInsertVadEvent @ 0x1402A120C (MiInsertVadEvent.c)
 *     MiInsertVad @ 0x1402A2A00 (MiInsertVad.c)
 *     MiRemoveSecureEntry @ 0x1402A4930 (MiRemoveSecureEntry.c)
 *     MiRemoveFromSystemSpace @ 0x1402AA180 (MiRemoveFromSystemSpace.c)
 *     MiDeletePartialVad @ 0x1402AA764 (MiDeletePartialVad.c)
 *     MiDeleteProcessShadow @ 0x1402AD198 (MiDeleteProcessShadow.c)
 *     MiMakeSystemAddressValid @ 0x1402AE710 (MiMakeSystemAddressValid.c)
 *     MiReleaseFaultState @ 0x1402B4E68 (MiReleaseFaultState.c)
 *     MiInsertInSystemSpace @ 0x1402BD160 (MiInsertInSystemSpace.c)
 *     MiOutSwapWorkingSet @ 0x1402CC77C (MiOutSwapWorkingSet.c)
 *     MiBeginProcessClean @ 0x1402CC91C (MiBeginProcessClean.c)
 *     MmEnforceWorkingSetLimit @ 0x1402D8388 (MmEnforceWorkingSetLimit.c)
 *     MiRotateComplete @ 0x1402FAECC (MiRotateComplete.c)
 *     MiDeleteRotateAndStopFaults @ 0x1402FB4A4 (MiDeleteRotateAndStopFaults.c)
 *     MiReleaseWalkLocks @ 0x1402FC23C (MiReleaseWalkLocks.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14030E744 (MmAdjustWorkingSetSizeEx.c)
 *     MiCleanWorkingSet @ 0x140314724 (MiCleanWorkingSet.c)
 *     MiUnlockFaultWorkingSet @ 0x14031667C (MiUnlockFaultWorkingSet.c)
 *     MiMakeSecureExclusive @ 0x140319690 (MiMakeSecureExclusive.c)
 *     MiDeleteCloneZombies @ 0x1403199AC (MiDeleteCloneZombies.c)
 *     MiWaitForRotateToComplete @ 0x1403222E0 (MiWaitForRotateToComplete.c)
 *     MiLocateOldestSecure @ 0x14037B488 (MiLocateOldestSecure.c)
 *     MmStealTopLevelPage @ 0x140384D68 (MmStealTopLevelPage.c)
 *     MiDeleteSessionAddressSpace @ 0x140385D7C (MiDeleteSessionAddressSpace.c)
 *     MiSessionRemoveImage @ 0x140387778 (MiSessionRemoveImage.c)
 *     MiCountSystemImageCommitment @ 0x14039B774 (MiCountSystemImageCommitment.c)
 *     MiSessionInsertImage @ 0x14039F454 (MiSessionInsertImage.c)
 *     MiDeleteBootRange @ 0x1403AB508 (MiDeleteBootRange.c)
 *     MiMapWithLargePages @ 0x1403B48CC (MiMapWithLargePages.c)
 *     MiFreeUnusedPfnPagesDpc @ 0x1403B5380 (MiFreeUnusedPfnPagesDpc.c)
 *     MiDeleteTopLevelSessionMapping @ 0x1403ED6D8 (MiDeleteTopLevelSessionMapping.c)
 *     MiDeleteEmptyPageTableCommit @ 0x1403EDB04 (MiDeleteEmptyPageTableCommit.c)
 *     MiClearCommitReleaseState @ 0x1405259B8 (MiClearCommitReleaseState.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x140526848 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x140526A34 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x140526BE8 (MiReleaseOutSwappedProcessCommit.c)
 *     MmEnableProcessSvm @ 0x140527170 (MmEnableProcessSvm.c)
 *     MmReleaseCommitForMemResetPages @ 0x1405271D4 (MmReleaseCommitForMemResetPages.c)
 *     MmSetCommitReleaseEligibility @ 0x14052740C (MmSetCommitReleaseEligibility.c)
 *     MiRemoveVadEvent @ 0x140534C74 (MiRemoveVadEvent.c)
 *     MiBeginHoldingDirtyFaults @ 0x140538710 (MiBeginHoldingDirtyFaults.c)
 *     MiFinishHoldingDirtyFaults @ 0x140538FE4 (MiFinishHoldingDirtyFaults.c)
 *     MiCloneCaptureVadCommit @ 0x14053F528 (MiCloneCaptureVadCommit.c)
 *     MiLockWorkingSetForLargeMapping @ 0x140549CE8 (MiLockWorkingSetForLargeMapping.c)
 *     MiRemovePlaceholderVad @ 0x14054F878 (MiRemovePlaceholderVad.c)
 *     MiBuildForkPte @ 0x1405527CC (MiBuildForkPte.c)
 *     MiCloneVads @ 0x140553838 (MiCloneVads.c)
 *     MiCreateCloneChain @ 0x140553FD0 (MiCreateCloneChain.c)
 *     MiCreateForkWsles @ 0x1405542BC (MiCreateForkWsles.c)
 *     MiDoneWithThisPageGetAnother @ 0x140554648 (MiDoneWithThisPageGetAnother.c)
 *     MiDuplicateCloneLeaf @ 0x140554744 (MiDuplicateCloneLeaf.c)
 *     MiHandleForkTransitionPte @ 0x140554F74 (MiHandleForkTransitionPte.c)
 *     MiLockDownWorkingSet @ 0x140555808 (MiLockDownWorkingSet.c)
 *     MiMapUserLargePages @ 0x140558C40 (MiMapUserLargePages.c)
 *     MiCreateInitialSystemWsles @ 0x140A42174 (MiCreateInitialSystemWsles.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiCheckProcessShadow @ 0x14020ED50 (MiCheckProcessShadow.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x1405545D0 (MiDeleteDeferredCloneDescriptors.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B00F4 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
    v6 = &dword_140C4F6C0;
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
