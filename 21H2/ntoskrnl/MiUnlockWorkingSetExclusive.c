/*
 * XREFs of MiUnlockWorkingSetExclusive @ 0x1402C13E0
 * Callers:
 *     MiUnlockFaultWorkingSet @ 0x14020AEBC (MiUnlockFaultWorkingSet.c)
 *     MiRotateComplete @ 0x140218ACC (MiRotateComplete.c)
 *     MiDeleteRotateAndStopFaults @ 0x1402190A4 (MiDeleteRotateAndStopFaults.c)
 *     MiReleaseWalkLocks @ 0x1402286D0 (MiReleaseWalkLocks.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14023C7DC (MmAdjustWorkingSetSizeEx.c)
 *     MiCleanWorkingSet @ 0x1402426E4 (MiCleanWorkingSet.c)
 *     MiMakeSecureExclusive @ 0x1402476B0 (MiMakeSecureExclusive.c)
 *     MiDeleteCloneZombies @ 0x140247A3C (MiDeleteCloneZombies.c)
 *     MiSetTrimWhileAgingState @ 0x140250EBC (MiSetTrimWhileAgingState.c)
 *     MiWaitForRotateToComplete @ 0x140251070 (MiWaitForRotateToComplete.c)
 *     MiRemoveSecureEntry @ 0x14027CB50 (MiRemoveSecureEntry.c)
 *     MiInsertVadEvent @ 0x14027CF2C (MiInsertVadEvent.c)
 *     MiBeginProcessClean @ 0x1402A0890 (MiBeginProcessClean.c)
 *     MiOutSwapWorkingSet @ 0x1402A1D58 (MiOutSwapWorkingSet.c)
 *     MmAccessFault @ 0x1402B1990 (MmAccessFault.c)
 *     MiUserFault @ 0x1402B2070 (MiUserFault.c)
 *     MiCommitExistingVad @ 0x1402BD690 (MiCommitExistingVad.c)
 *     MiDeleteVad @ 0x1402C08F0 (MiDeleteVad.c)
 *     MmEnforceWorkingSetLimit @ 0x1402F69E8 (MmEnforceWorkingSetLimit.c)
 *     MiInsertInSystemSpace @ 0x140305B30 (MiInsertInSystemSpace.c)
 *     MiDeletePartialVad @ 0x14030862C (MiDeletePartialVad.c)
 *     MiRemoveFromSystemSpace @ 0x14030FB9C (MiRemoveFromSystemSpace.c)
 *     MiDeleteProcessShadow @ 0x1403104B8 (MiDeleteProcessShadow.c)
 *     MiMakeSystemAddressValid @ 0x1403190E0 (MiMakeSystemAddressValid.c)
 *     MiReleaseFaultState @ 0x14031A244 (MiReleaseFaultState.c)
 *     MiUnlockSystemVa @ 0x14031CE4C (MiUnlockSystemVa.c)
 *     MiInsertVad @ 0x140321080 (MiInsertVad.c)
 *     MiFinishVadDeletion @ 0x140321B10 (MiFinishVadDeletion.c)
 *     MiFreePhysicalView @ 0x140322D08 (MiFreePhysicalView.c)
 *     MiGetVadWakeList @ 0x140322D70 (MiGetVadWakeList.c)
 *     MiDeletePagablePteRange @ 0x1403420B0 (MiDeletePagablePteRange.c)
 *     MiLocateOldestSecure @ 0x14037DE18 (MiLocateOldestSecure.c)
 *     MmStealTopLevelPage @ 0x140388728 (MmStealTopLevelPage.c)
 *     MiDeleteSessionAddressSpace @ 0x14038973C (MiDeleteSessionAddressSpace.c)
 *     MiSessionRemoveImage @ 0x14038B148 (MiSessionRemoveImage.c)
 *     MiCountSystemImageCommitment @ 0x14039EDE4 (MiCountSystemImageCommitment.c)
 *     MiSessionInsertImage @ 0x1403A2AC4 (MiSessionInsertImage.c)
 *     MiDeleteBootRange @ 0x1403B52E8 (MiDeleteBootRange.c)
 *     MiMapWithLargePages @ 0x1403B8C5C (MiMapWithLargePages.c)
 *     MiFreeUnusedPfnPagesDpc @ 0x1403B97C0 (MiFreeUnusedPfnPagesDpc.c)
 *     MiDeleteTopLevelSessionMapping @ 0x1403F4448 (MiDeleteTopLevelSessionMapping.c)
 *     MiDeleteEmptyPageTableCommit @ 0x1403F4B14 (MiDeleteEmptyPageTableCommit.c)
 *     MiClearCommitReleaseState @ 0x14052B718 (MiClearCommitReleaseState.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x14052C5A8 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x14052C794 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x14052C948 (MiReleaseOutSwappedProcessCommit.c)
 *     MmEnableProcessSvm @ 0x14052CED0 (MmEnableProcessSvm.c)
 *     MmReleaseCommitForMemResetPages @ 0x14052CF34 (MmReleaseCommitForMemResetPages.c)
 *     MmSetCommitReleaseEligibility @ 0x14052D16C (MmSetCommitReleaseEligibility.c)
 *     MiRemoveVadEvent @ 0x14053A9D4 (MiRemoveVadEvent.c)
 *     MiBeginHoldingDirtyFaults @ 0x14053E470 (MiBeginHoldingDirtyFaults.c)
 *     MiFinishHoldingDirtyFaults @ 0x14053ED44 (MiFinishHoldingDirtyFaults.c)
 *     MiCloneCaptureVadCommit @ 0x14054528C (MiCloneCaptureVadCommit.c)
 *     MiLockWorkingSetForLargeMapping @ 0x14054FA18 (MiLockWorkingSetForLargeMapping.c)
 *     MiRemovePlaceholderVad @ 0x1405555A8 (MiRemovePlaceholderVad.c)
 *     MiBuildForkPte @ 0x1405584FC (MiBuildForkPte.c)
 *     MiCloneVads @ 0x140559568 (MiCloneVads.c)
 *     MiCreateCloneChain @ 0x140559D00 (MiCreateCloneChain.c)
 *     MiCreateForkWsles @ 0x140559FEC (MiCreateForkWsles.c)
 *     MiDoneWithThisPageGetAnother @ 0x14055A378 (MiDoneWithThisPageGetAnother.c)
 *     MiDuplicateCloneLeaf @ 0x14055A474 (MiDuplicateCloneLeaf.c)
 *     MiHandleForkTransitionPte @ 0x14055ACA4 (MiHandleForkTransitionPte.c)
 *     MiLockDownWorkingSet @ 0x14055B538 (MiLockDownWorkingSet.c)
 *     MiMapUserLargePages @ 0x14055E970 (MiMapUserLargePages.c)
 *     MiCreateInitialSystemWsles @ 0x140A5020C (MiCreateInitialSystemWsles.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiCheckProcessShadow @ 0x1402B4180 (MiCheckProcessShadow.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x14055A300 (MiDeleteDeferredCloneDescriptors.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B5FBC (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall MiUnlockWorkingSetExclusive(__int64 a1, unsigned __int8 a2)
{
  int v3; // esi
  _QWORD *v4; // r14
  unsigned __int64 v5; // rbp
  LONG *v6; // rbx
  _KPROCESS *Process; // rcx
  __int64 v8; // r8
  _DWORD *v9; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 SchedulerAssist; // rdx
  int v12; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v14; // r10
  int v15; // eax
  bool v16; // zf
  _QWORD *v17; // rbx
  void *retaddr; // [rsp+38h] [rbp+0h]
  int v19; // [rsp+48h] [rbp+10h]

  v3 = 0;
  v4 = 0LL;
  v19 = *(_DWORD *)(a1 + 184);
  v5 = a2;
  if ( (v19 & 7) == 2 )
    v6 = &dword_140C4F7C0;
  else
    v6 = (LONG *)(a1 + 192);
  if ( (v19 & 7) == 0 )
  {
    if ( *(_QWORD *)(a1 + 16) )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( *(_WORD *)(Process[1].ActiveProcessorsPadding[8] + 368) )
        v4 = (_QWORD *)MiDeleteDeferredCloneDescriptors(Process);
    }
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
      v12 = *(_DWORD *)(SchedulerAssist + 24) - 1;
      *(_DWORD *)(SchedulerAssist + 24) = v12;
      if ( !v12 )
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
        v14 = KeGetCurrentPrcb();
        SchedulerAssist = -1LL << ((unsigned __int8)v5 + 1);
        v9 = v14->SchedulerAssist;
        v15 = ~(unsigned __int16)SchedulerAssist;
        v16 = (v15 & v9[5]) == 0;
        v8 = (unsigned int)v15 & v9[5];
        v9[5] = v8;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick(v14);
      }
    }
  }
  __writecr8(v5);
  if ( v4 )
  {
    do
    {
      v17 = (_QWORD *)*v4;
      ExFreePoolWithTag(v4, 0);
      v4 = v17;
    }
    while ( v17 );
  }
  if ( !v3 && ((v19 & 0x8000000) != 0 || (v19 & 0x4000000) != 0 || (v19 & 0x10000000) != 0) )
  {
    MiLockWorkingSetShared(a1, SchedulerAssist, v8, v9);
    MiUnlockWorkingSetShared(a1, v5);
  }
}
