/*
 * XREFs of MiLocateAddress @ 0x1403126F0
 * Callers:
 *     MiCaptureWriteWatchDirtyBit @ 0x1402358D4 (MiCaptureWriteWatchDirtyBit.c)
 *     MiUpdatePrefetchPriority @ 0x1402464E0 (MiUpdatePrefetchPriority.c)
 *     MiAdvanceToLastUntrimmableVa @ 0x140252ED0 (MiAdvanceToLastUntrimmableVa.c)
 *     MiImagePageOk @ 0x140271020 (MiImagePageOk.c)
 *     MiInitializeReadInProgressPfn @ 0x1402724C0 (MiInitializeReadInProgressPfn.c)
 *     MiTrimSharedPageFromViews @ 0x14027B820 (MiTrimSharedPageFromViews.c)
 *     MiObtainReferencedSecureVad @ 0x140281620 (MiObtainReferencedSecureVad.c)
 *     MiDeleteEmptyPageTables @ 0x14029F6FC (MiDeleteEmptyPageTables.c)
 *     NtUnlockVirtualMemory @ 0x1402CD9C0 (NtUnlockVirtualMemory.c)
 *     NtLockVirtualMemory @ 0x1402E5D90 (NtLockVirtualMemory.c)
 *     MiLockStealUserVm @ 0x1402EACBC (MiLockStealUserVm.c)
 *     MiSharePages @ 0x140314BA0 (MiSharePages.c)
 *     MiCopyOnWrite @ 0x140316400 (MiCopyOnWrite.c)
 *     MmAccessFault @ 0x14031C860 (MmAccessFault.c)
 *     MiUserFault @ 0x14031CD90 (MiUserFault.c)
 *     MiComputeMaximumFaultCluster @ 0x14031E900 (MiComputeMaximumFaultCluster.c)
 *     MiResolveProtoPteFault @ 0x14031EAA0 (MiResolveProtoPteFault.c)
 *     MiResolveDemandZeroFault @ 0x14031FD60 (MiResolveDemandZeroFault.c)
 *     MiCompleteProtoPteFault @ 0x1403203D0 (MiCompleteProtoPteFault.c)
 *     MiCompletePrivateZeroFault @ 0x140321F70 (MiCompletePrivateZeroFault.c)
 *     MiHandleTransitionFault @ 0x1403265B0 (MiHandleTransitionFault.c)
 *     MiComputeFaultNode @ 0x140339370 (MiComputeFaultNode.c)
 *     MiResolveMappedFileFault @ 0x140339520 (MiResolveMappedFileFault.c)
 *     MiCrcStillIntact @ 0x140339D70 (MiCrcStillIntact.c)
 *     MiReservePageFileSpace @ 0x14033AC90 (MiReservePageFileSpace.c)
 *     MiSharedVaToPartition @ 0x14033D80C (MiSharedVaToPartition.c)
 *     MiCheckVirtualAddress @ 0x1403536F0 (MiCheckVirtualAddress.c)
 *     MmOutSwapVirtualAddresses @ 0x140375974 (MmOutSwapVirtualAddresses.c)
 *     MiResolvePageFileFault @ 0x1403927C4 (MiResolvePageFileFault.c)
 *     MmStoreDecommitVirtualMemory @ 0x140395958 (MmStoreDecommitVirtualMemory.c)
 *     MiProcessCommitIntact @ 0x140580CE0 (MiProcessCommitIntact.c)
 *     MiCanGrantExecute @ 0x1405A6DAC (MiCanGrantExecute.c)
 *     MiFindPlaceholderVadToReplace @ 0x1405B2088 (MiFindPlaceholderVadToReplace.c)
 *     MiCloneVads @ 0x1405B99AC (MiCloneVads.c)
 *     MiLockVadRange @ 0x1406F7D78 (MiLockVadRange.c)
 *     MiUnlockVadRange @ 0x1406F7F40 (MiUnlockVadRange.c)
 *     MiCoalescePlaceholderAllocations @ 0x14096D8A8 (MiCoalescePlaceholderAllocations.c)
 *     MmCheckForSafeExecution @ 0x140977FF8 (MmCheckForSafeExecution.c)
 *     MiMapChildLargePageVads @ 0x140980FA0 (MiMapChildLargePageVads.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall MiLocateAddress(unsigned __int64 a1)
{
  _KPROCESS *Process; // r9
  __int64 **result; // rax
  unsigned __int64 v3; // r8

  Process = KeGetCurrentThread()->ApcState.Process;
  result = *(__int64 ***)&Process[1].Spare2[23];
  if ( !result )
    return 0LL;
  v3 = a1 >> 12;
  if ( a1 >> 12 < (*((unsigned int *)result + 6) | ((unsigned __int64)*((unsigned __int8 *)result + 32) << 32))
    || v3 > (*((unsigned int *)result + 7) | ((unsigned __int64)*((unsigned __int8 *)result + 33) << 32)) )
  {
    result = *(__int64 ***)&Process[1].Spare2[15];
    if ( result )
    {
      while ( 1 )
      {
        if ( v3 > (*((unsigned int *)result + 7) | ((unsigned __int64)*((unsigned __int8 *)result + 33) << 32)) )
        {
          result = (__int64 **)result[1];
        }
        else
        {
          if ( v3 >= (*((unsigned int *)result + 6) | ((unsigned __int64)*((unsigned __int8 *)result + 32) << 32)) )
          {
            *(_QWORD *)&Process[1].Spare2[23] = result;
            return result;
          }
          result = (__int64 **)*result;
        }
        if ( !result )
          return result;
      }
    }
    return 0LL;
  }
  return result;
}
