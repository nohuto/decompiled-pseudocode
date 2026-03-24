/*
 * XREFs of MiLocateAddress @ 0x14025B810
 * Callers:
 *     MiProcessCommitIntact @ 0x140201780 (MiProcessCommitIntact.c)
 *     MiProbeLockFrame @ 0x14020ACD0 (MiProbeLockFrame.c)
 *     MmAccessFault @ 0x14020D090 (MmAccessFault.c)
 *     MiUserFault @ 0x14020D770 (MiUserFault.c)
 *     MiComputeMaximumFaultCluster @ 0x14020F650 (MiComputeMaximumFaultCluster.c)
 *     MiResolveDemandZeroFault @ 0x14020FB50 (MiResolveDemandZeroFault.c)
 *     MiCompletePrivateZeroFault @ 0x140210850 (MiCompletePrivateZeroFault.c)
 *     MiCompleteProtoPteFault @ 0x140213D90 (MiCompleteProtoPteFault.c)
 *     MiResolveProtoPteFault @ 0x1402153D0 (MiResolveProtoPteFault.c)
 *     MiHandleTransitionFault @ 0x140217450 (MiHandleTransitionFault.c)
 *     MiReservePageFileSpace @ 0x14023D190 (MiReservePageFileSpace.c)
 *     MiComputeFaultNode @ 0x14023F100 (MiComputeFaultNode.c)
 *     MiCopyOnWrite @ 0x14023F300 (MiCopyOnWrite.c)
 *     MiSharedVaToPartition @ 0x14024144C (MiSharedVaToPartition.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x14025B15C (MiCaptureWriteWatchDirtyBit.c)
 *     MiObtainReferencedSecureVad @ 0x14025B6F0 (MiObtainReferencedSecureVad.c)
 *     MiLockStealUserVm @ 0x14026AFD4 (MiLockStealUserVm.c)
 *     MiUpdatePrefetchPriority @ 0x14026E760 (MiUpdatePrefetchPriority.c)
 *     NtLockVirtualMemory @ 0x140270060 (NtLockVirtualMemory.c)
 *     MiResolvePageFileFault @ 0x14028AF68 (MiResolvePageFileFault.c)
 *     MiCheckVirtualAddress @ 0x14028D510 (MiCheckVirtualAddress.c)
 *     MiImagePageOk @ 0x14028DC10 (MiImagePageOk.c)
 *     MmStoreDecommitVirtualMemory @ 0x1402D24B4 (MmStoreDecommitVirtualMemory.c)
 *     MiTrimSharedPageFromViews @ 0x1402EFC44 (MiTrimSharedPageFromViews.c)
 *     MiInitializeReadInProgressPfn @ 0x1402FBF30 (MiInitializeReadInProgressPfn.c)
 *     MiResolveMappedFileFault @ 0x140319480 (MiResolveMappedFileFault.c)
 *     NtUnlockVirtualMemory @ 0x14032DF30 (NtUnlockVirtualMemory.c)
 *     MmOutSwapVirtualAddresses @ 0x14035BCDC (MmOutSwapVirtualAddresses.c)
 *     MiCrcStillIntact @ 0x140367B74 (MiCrcStillIntact.c)
 *     MiSharePages @ 0x140368360 (MiSharePages.c)
 *     MiDeleteEmptyPageTables @ 0x1403F4F90 (MiDeleteEmptyPageTables.c)
 *     MiCanGrantExecute @ 0x1405480D8 (MiCanGrantExecute.c)
 *     MiWriteAwePtes @ 0x14054E298 (MiWriteAwePtes.c)
 *     MiFindPlaceholderVadToReplace @ 0x1405551F4 (MiFindPlaceholderVadToReplace.c)
 *     MiCloneVads @ 0x140559328 (MiCloneVads.c)
 *     MiLockVadRange @ 0x14061DC20 (MiLockVadRange.c)
 *     MiUnlockVadRange @ 0x140620130 (MiUnlockVadRange.c)
 *     MiCoalescePlaceholderAllocations @ 0x1408C87A4 (MiCoalescePlaceholderAllocations.c)
 *     MmCheckForSafeExecution @ 0x1408D0F40 (MmCheckForSafeExecution.c)
 *     MiMapChildLargePageVads @ 0x1408D9960 (MiMapChildLargePageVads.c)
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
