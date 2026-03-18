/*
 * XREFs of MiUnlockWorkingSetExclusive @ 0x14030FA80
 * Callers:
 *     MiRotateComplete @ 0x140200A64 (MiRotateComplete.c)
 *     MiDeleteRotateAndStopFaults @ 0x140200AEC (MiDeleteRotateAndStopFaults.c)
 *     MiWaitForRotateToComplete @ 0x140201E8C (MiWaitForRotateToComplete.c)
 *     MmEnforceWorkingSetLimit @ 0x1402091B0 (MmEnforceWorkingSetLimit.c)
 *     MiDeleteSessionAddressSpace @ 0x140216B04 (MiDeleteSessionAddressSpace.c)
 *     MiReleaseWalkLocks @ 0x1402341A4 (MiReleaseWalkLocks.c)
 *     MiSetTrimWhileAgingState @ 0x140236764 (MiSetTrimWhileAgingState.c)
 *     MiUnlockFaultWorkingSet @ 0x14024D050 (MiUnlockFaultWorkingSet.c)
 *     MiCleanWorkingSet @ 0x14024E9E0 (MiCleanWorkingSet.c)
 *     MiDeleteCloneZombies @ 0x14025247C (MiDeleteCloneZombies.c)
 *     MiLocateOldestSecure @ 0x1402588EC (MiLocateOldestSecure.c)
 *     MiBeginProcessClean @ 0x14025F344 (MiBeginProcessClean.c)
 *     MiOutSwapWorkingSet @ 0x1402608AC (MiOutSwapWorkingSet.c)
 *     MiRemoveFromSystemSpace @ 0x14026D048 (MiRemoveFromSystemSpace.c)
 *     MiInsertInSystemSpace @ 0x14026D460 (MiInsertInSystemSpace.c)
 *     MiUnlockSystemVa @ 0x14027A168 (MiUnlockSystemVa.c)
 *     MiIssueHardFault @ 0x14027A1F0 (MiIssueHardFault.c)
 *     MiDeleteProcessShadow @ 0x14027D408 (MiDeleteProcessShadow.c)
 *     MiReleaseFaultState @ 0x14027DA5C (MiReleaseFaultState.c)
 *     MiRemoveSecureEntry @ 0x140281480 (MiRemoveSecureEntry.c)
 *     MiSessionInsertImage @ 0x1402D9A54 (MiSessionInsertImage.c)
 *     MiCountSystemImageCommitment @ 0x1402DBA28 (MiCountSystemImageCommitment.c)
 *     MiSessionRemoveImage @ 0x1402DBD88 (MiSessionRemoveImage.c)
 *     MiPerformVadSplitting @ 0x1402ED194 (MiPerformVadSplitting.c)
 *     MiInsertVadEvent @ 0x14030BA20 (MiInsertVadEvent.c)
 *     MiGetVadWakeList @ 0x14030E280 (MiGetVadWakeList.c)
 *     MiFinishVadDeletion @ 0x14030FEC0 (MiFinishVadDeletion.c)
 *     MmAccessFault @ 0x14031C860 (MmAccessFault.c)
 *     MiUserFault @ 0x14031CD90 (MiUserFault.c)
 *     MiCommitExistingVad @ 0x14032C1B0 (MiCommitExistingVad.c)
 *     MiMakeSystemAddressValid @ 0x14032CE60 (MiMakeSystemAddressValid.c)
 *     MiDeletePagablePteRange @ 0x140330080 (MiDeletePagablePteRange.c)
 *     MmStealTopLevelPage @ 0x14036CD34 (MmStealTopLevelPage.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14036D62C (MmAdjustWorkingSetSizeEx.c)
 *     MiMakeSecureExclusive @ 0x140386F14 (MiMakeSecureExclusive.c)
 *     MiMapWithLargePages @ 0x1403C7090 (MiMapWithLargePages.c)
 *     MiDeleteBootRange @ 0x1403C84E4 (MiDeleteBootRange.c)
 *     MiFreeUnusedPfnPagesDpc @ 0x1403C89A0 (MiFreeUnusedPfnPagesDpc.c)
 *     MiClearCommitReleaseState @ 0x14057FE58 (MiClearCommitReleaseState.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x140580DB8 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x140580FA4 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x140581158 (MiReleaseOutSwappedProcessCommit.c)
 *     MmEnableProcessSvm @ 0x1405816E4 (MmEnableProcessSvm.c)
 *     MmReleaseCommitForMemResetPages @ 0x140581748 (MmReleaseCommitForMemResetPages.c)
 *     MmSetCommitReleaseEligibility @ 0x14058196C (MmSetCommitReleaseEligibility.c)
 *     MiRemoveVadEvent @ 0x140595D80 (MiRemoveVadEvent.c)
 *     MiBeginHoldingDirtyFaults @ 0x1405A2D90 (MiBeginHoldingDirtyFaults.c)
 *     MiFinishHoldingDirtyFaults @ 0x1405A3738 (MiFinishHoldingDirtyFaults.c)
 *     MiCloneCaptureVadCommit @ 0x1405A42BC (MiCloneCaptureVadCommit.c)
 *     MiLockWorkingSetForLargeMapping @ 0x1405B06E0 (MiLockWorkingSetForLargeMapping.c)
 *     MiBuildForkPte @ 0x1405B88D8 (MiBuildForkPte.c)
 *     MiCloneVads @ 0x1405B99AC (MiCloneVads.c)
 *     MiCreateCloneChain @ 0x1405BA158 (MiCreateCloneChain.c)
 *     MiCreateForkWsles @ 0x1405BA3BC (MiCreateForkWsles.c)
 *     MiDoneWithThisPageGetAnother @ 0x1405BA768 (MiDoneWithThisPageGetAnother.c)
 *     MiDuplicateCloneLeaf @ 0x1405BA864 (MiDuplicateCloneLeaf.c)
 *     MiHandleForkTransitionPte @ 0x1405BB090 (MiHandleForkTransitionPte.c)
 *     MiLockDownWorkingSet @ 0x1405BB938 (MiLockDownWorkingSet.c)
 *     MiMapUserLargePages @ 0x1405C2A4C (MiMapUserLargePages.c)
 *     MiCreateInitialSystemWsles @ 0x140B2F9C4 (MiCreateInitialSystemWsles.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiCheckProcessShadow @ 0x1402B2E40 (MiCheckProcessShadow.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x1405BA6F0 (MiDeleteDeferredCloneDescriptors.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14063D8B0 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall MiUnlockWorkingSetExclusive(__int64 a1, unsigned __int8 a2)
{
  int v3; // ebp
  _QWORD *v4; // r14
  unsigned __int64 v5; // r15
  _DWORD *v6; // rsi
  _KPROCESS *Process; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v10; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v12; // r10
  _DWORD *v13; // r9
  int v14; // eax
  bool v15; // zf
  _QWORD *v16; // rdi
  void *retaddr; // [rsp+38h] [rbp+0h]
  int v18; // [rsp+48h] [rbp+10h]

  v3 = 0;
  v4 = 0LL;
  v18 = *(_DWORD *)(a1 + 184);
  v5 = a2;
  if ( (v18 & 7) == 2 )
  {
    v6 = &unk_140C53D00;
  }
  else
  {
    v6 = (_DWORD *)(a1 + 192);
    if ( (v18 & 7) == 0 )
    {
      v6 = (_DWORD *)(a1 + 192);
      if ( *(_QWORD *)(a1 + 16) )
      {
        v6 = (_DWORD *)(a1 + 192);
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( *(_WORD *)(Process[1].ActiveProcessors.StaticBitmap[28] + 352) )
        {
          v4 = (_QWORD *)MiDeleteDeferredCloneDescriptors(Process);
          v6 = (_DWORD *)(a1 + 192);
        }
      }
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
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v10 = SchedulerAssist[6] - 1;
      SchedulerAssist[6] = v10;
      if ( !v10 )
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
        v12 = KeGetCurrentPrcb();
        v13 = v12->SchedulerAssist;
        v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v15 = (v14 & v13[5]) == 0;
        v13[5] &= v14;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick(v12);
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
  if ( !v3 && ((*(_DWORD *)(a1 + 188) & 3) != 0 || (v18 & 0x10000000) != 0) )
  {
    MiLockWorkingSetShared(a1);
    MiUnlockWorkingSetShared(a1, v5);
  }
}
