/*
 * XREFs of MiUnlockVadTree @ 0x1402806E0
 * Callers:
 *     MiUpdatePrefetchPriority @ 0x1402464E0 (MiUpdatePrefetchPriority.c)
 *     MiAdvanceToLastUntrimmableVa @ 0x140252ED0 (MiAdvanceToLastUntrimmableVa.c)
 *     MiTranslatePageForCopy @ 0x14026C808 (MiTranslatePageForCopy.c)
 *     MiImagePageOk @ 0x140271020 (MiImagePageOk.c)
 *     MiInitializeReadInProgressPfn @ 0x1402724C0 (MiInitializeReadInProgressPfn.c)
 *     MiIsFaultPteIntact @ 0x1402803FC (MiIsFaultPteIntact.c)
 *     MiFindActualFaultingPte @ 0x1402804F0 (MiFindActualFaultingPte.c)
 *     MiLockStealUserVm @ 0x1402EACBC (MiLockStealUserVm.c)
 *     MiPerformVadSplitting @ 0x1402ED194 (MiPerformVadSplitting.c)
 *     MiSetVadFlags @ 0x14030B950 (MiSetVadFlags.c)
 *     MiCopyOnWrite @ 0x140316400 (MiCopyOnWrite.c)
 *     MmAccessFault @ 0x14031C860 (MmAccessFault.c)
 *     MiUserFault @ 0x14031CD90 (MiUserFault.c)
 *     MiComputeMaximumFaultCluster @ 0x14031E900 (MiComputeMaximumFaultCluster.c)
 *     MiResolveProtoPteFault @ 0x14031EAA0 (MiResolveProtoPteFault.c)
 *     MiResolveDemandZeroFault @ 0x14031FD60 (MiResolveDemandZeroFault.c)
 *     MiCompletePrivateZeroFault @ 0x140321F70 (MiCompletePrivateZeroFault.c)
 *     MiHandleTransitionFault @ 0x1403265B0 (MiHandleTransitionFault.c)
 *     MiComputeFaultNode @ 0x140339370 (MiComputeFaultNode.c)
 *     MiResolveMappedFileFault @ 0x140339520 (MiResolveMappedFileFault.c)
 *     MiSharedVaToPartition @ 0x14033D80C (MiSharedVaToPartition.c)
 *     MiInPagePageTable @ 0x140353230 (MiInPagePageTable.c)
 *     MiResolvePageFileFault @ 0x1403927C4 (MiResolvePageFileFault.c)
 *     MmStoreDecommitVirtualMemory @ 0x140395958 (MmStoreDecommitVirtualMemory.c)
 *     MiProcessCommitIntact @ 0x140580CE0 (MiProcessCommitIntact.c)
 *     MiLeapPrefetch @ 0x1405943E4 (MiLeapPrefetch.c)
 *     MiCanGrantExecute @ 0x1405A6DAC (MiCanGrantExecute.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiUnlockVadTree(char a1, unsigned __int8 a2)
{
  unsigned __int64 v2; // rbx
  int v3; // edx
  bool v4; // zf
  volatile LONG *v5; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v9; // eax

  v2 = a2;
  v3 = a1 & 1;
  v4 = (a1 & 2) == 0;
  v5 = (volatile LONG *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28] + 284);
  if ( v4 )
  {
    if ( v3 )
    {
      ExReleaseSpinLockSharedFromDpcLevel(v5);
      return;
    }
    ExReleaseSpinLockSharedFromDpcLevel(v5);
  }
  else
  {
    if ( v3 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v5);
      return;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v5);
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v4 = (v9 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v9;
        if ( v4 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
}
