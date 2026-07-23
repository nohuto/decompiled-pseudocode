/*
 * XREFs of MiLocateAddress @ 0x14027CD80
 * Callers:
 *     MiProcessCommitIntact @ 0x140201780 (MiProcessCommitIntact.c)
 *     MiResolvePageFileFault @ 0x140208108 (MiResolvePageFileFault.c)
 *     MiCheckVirtualAddress @ 0x14020A6B0 (MiCheckVirtualAddress.c)
 *     MiImagePageOk @ 0x14020ADB0 (MiImagePageOk.c)
 *     MmStoreDecommitVirtualMemory @ 0x140250884 (MmStoreDecommitVirtualMemory.c)
 *     MiLockStealUserVm @ 0x140258F74 (MiLockStealUserVm.c)
 *     MiUpdatePrefetchPriority @ 0x14025C700 (MiUpdatePrefetchPriority.c)
 *     NtLockVirtualMemory @ 0x14025E000 (NtLockVirtualMemory.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x14027C6CC (MiCaptureWriteWatchDirtyBit.c)
 *     MiObtainReferencedSecureVad @ 0x14027CC60 (MiObtainReferencedSecureVad.c)
 *     MmOutSwapVirtualAddresses @ 0x1402A0C0C (MmOutSwapVirtualAddresses.c)
 *     MiProbeLockFrame @ 0x1402AF5D0 (MiProbeLockFrame.c)
 *     MmAccessFault @ 0x1402B1990 (MmAccessFault.c)
 *     MiUserFault @ 0x1402B2070 (MiUserFault.c)
 *     MiComputeMaximumFaultCluster @ 0x1402B3F50 (MiComputeMaximumFaultCluster.c)
 *     MiResolveDemandZeroFault @ 0x1402B4450 (MiResolveDemandZeroFault.c)
 *     MiCompletePrivateZeroFault @ 0x1402B5150 (MiCompletePrivateZeroFault.c)
 *     MiCompleteProtoPteFault @ 0x1402B8690 (MiCompleteProtoPteFault.c)
 *     MiResolveProtoPteFault @ 0x1402B9CD0 (MiResolveProtoPteFault.c)
 *     MiHandleTransitionFault @ 0x1402BBD50 (MiHandleTransitionFault.c)
 *     MiReservePageFileSpace @ 0x1402E19E0 (MiReservePageFileSpace.c)
 *     MiComputeFaultNode @ 0x1402E3950 (MiComputeFaultNode.c)
 *     MiCopyOnWrite @ 0x1402E3B50 (MiCopyOnWrite.c)
 *     MiSharedVaToPartition @ 0x1402E5C9C (MiSharedVaToPartition.c)
 *     MiTrimSharedPageFromViews @ 0x1402FA994 (MiTrimSharedPageFromViews.c)
 *     MiInitializeReadInProgressPfn @ 0x140306C80 (MiInitializeReadInProgressPfn.c)
 *     MiResolveMappedFileFault @ 0x1403241D0 (MiResolveMappedFileFault.c)
 *     NtUnlockVirtualMemory @ 0x140338C80 (NtUnlockVirtualMemory.c)
 *     MiCrcStillIntact @ 0x140367D24 (MiCrcStillIntact.c)
 *     MiSharePages @ 0x140368510 (MiSharePages.c)
 *     MiDeleteEmptyPageTables @ 0x1403F4F90 (MiDeleteEmptyPageTables.c)
 *     MiCanGrantExecute @ 0x140548318 (MiCanGrantExecute.c)
 *     MiWriteAwePtes @ 0x14054E4D8 (MiWriteAwePtes.c)
 *     MiFindPlaceholderVadToReplace @ 0x140555434 (MiFindPlaceholderVadToReplace.c)
 *     MiCloneVads @ 0x140559568 (MiCloneVads.c)
 *     MiLockVadRange @ 0x140687890 (MiLockVadRange.c)
 *     MiUnlockVadRange @ 0x140689DA0 (MiUnlockVadRange.c)
 *     MiCoalescePlaceholderAllocations @ 0x1408C8904 (MiCoalescePlaceholderAllocations.c)
 *     MmCheckForSafeExecution @ 0x1408D10A0 (MmCheckForSafeExecution.c)
 *     MiMapChildLargePageVads @ 0x1408D9AC0 (MiMapChildLargePageVads.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall MiLocateAddress(unsigned __int64 a1)
{
  _KPROCESS *Process; // r9
  __int64 **result; // rax
  unsigned __int64 v3; // r8
  __int64 **v4; // rdx

  Process = KeGetCurrentThread()->ApcState.Process;
  result = *(__int64 ***)&Process[1].Spare2[23];
  if ( !result )
    return 0LL;
  v3 = a1 >> 12;
  if ( a1 >> 12 < (*((unsigned int *)result + 6) | ((unsigned __int64)*((unsigned __int8 *)result + 32) << 32))
    || v3 > (*((unsigned int *)result + 7) | ((unsigned __int64)*((unsigned __int8 *)result + 33) << 32)) )
  {
    v4 = *(__int64 ***)&Process[1].Spare2[15];
    if ( v4 )
    {
      while ( 1 )
      {
        if ( v3 > (*((unsigned int *)v4 + 7) | ((unsigned __int64)*((unsigned __int8 *)v4 + 33) << 32)) )
        {
          v4 = (__int64 **)v4[1];
        }
        else
        {
          if ( v3 >= (*((unsigned int *)v4 + 6) | ((unsigned __int64)*((unsigned __int8 *)v4 + 32) << 32)) )
          {
            *(_QWORD *)&Process[1].Spare2[23] = v4;
            return v4;
          }
          v4 = (__int64 **)*v4;
        }
        if ( !v4 )
          return 0LL;
      }
    }
    return 0LL;
  }
  return result;
}
