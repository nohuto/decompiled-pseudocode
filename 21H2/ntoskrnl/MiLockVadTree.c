/*
 * XREFs of MiLockVadTree @ 0x1402ED128
 * Callers:
 *     MiUpdatePrefetchPriority @ 0x1402464E0 (MiUpdatePrefetchPriority.c)
 *     MiAdvanceToLastUntrimmableVa @ 0x140252ED0 (MiAdvanceToLastUntrimmableVa.c)
 *     MiImagePageOk @ 0x140271020 (MiImagePageOk.c)
 *     MiInitializeReadInProgressPfn @ 0x1402724C0 (MiInitializeReadInProgressPfn.c)
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
 *     MiResolvePageFileFault @ 0x1403927C4 (MiResolvePageFileFault.c)
 *     MmStoreDecommitVirtualMemory @ 0x140395958 (MmStoreDecommitVirtualMemory.c)
 *     MiProcessCommitIntact @ 0x140580CE0 (MiProcessCommitIntact.c)
 *     MiLeapPrefetch @ 0x1405943E4 (MiLeapPrefetch.c)
 *     MiCanGrantExecute @ 0x1405A6DAC (MiCanGrantExecute.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1403127E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 */

KIRQL __fastcall MiLockVadTree(char a1)
{
  int v1; // r8d
  bool v2; // zf
  volatile LONG *v3; // rcx
  char v4; // bl

  v1 = a1 & 1;
  v2 = (a1 & 2) == 0;
  v3 = (volatile LONG *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28] + 284);
  if ( !v2 )
  {
    if ( v1 )
    {
      v4 = 17;
      ExAcquireSpinLockExclusiveAtDpcLevel(v3);
      return v4;
    }
    return ExAcquireSpinLockExclusive(v3);
  }
  if ( !v1 )
    return ExAcquireSpinLockShared(v3);
  v4 = 17;
  ExAcquireSpinLockSharedAtDpcLevel(v3);
  return v4;
}
