/*
 * XREFs of MiLocateAddress @ 0x14022ED30
 * Callers:
 *     MiProcessCommitIntact @ 0x140201770 (MiProcessCommitIntact.c)
 *     MiImagePageOk @ 0x140202670 (MiImagePageOk.c)
 *     MiObtainReferencedSecureVad @ 0x14022EC10 (MiObtainReferencedSecureVad.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1402309EC (MiCaptureWriteWatchDirtyBit.c)
 *     MiResolveMappedFileFault @ 0x140231830 (MiResolveMappedFileFault.c)
 *     MiComputeFaultNode @ 0x140232270 (MiComputeFaultNode.c)
 *     MiCheckVirtualAddress @ 0x1402382DC (MiCheckVirtualAddress.c)
 *     MiResolvePageFileFault @ 0x140239F98 (MiResolvePageFileFault.c)
 *     MiInitializeReadInProgressPfn @ 0x14024D760 (MiInitializeReadInProgressPfn.c)
 *     MiProbeLockFrame @ 0x14026BFF0 (MiProbeLockFrame.c)
 *     MmAccessFault @ 0x14026E3B0 (MmAccessFault.c)
 *     MiUserFault @ 0x14026EA90 (MiUserFault.c)
 *     MiComputeMaximumFaultCluster @ 0x140270970 (MiComputeMaximumFaultCluster.c)
 *     MiResolveDemandZeroFault @ 0x140270E70 (MiResolveDemandZeroFault.c)
 *     MiCompletePrivateZeroFault @ 0x140271B70 (MiCompletePrivateZeroFault.c)
 *     MiCompleteProtoPteFault @ 0x140275570 (MiCompleteProtoPteFault.c)
 *     MiResolveProtoPteFault @ 0x140276BB0 (MiResolveProtoPteFault.c)
 *     MiHandleTransitionFault @ 0x140278C30 (MiHandleTransitionFault.c)
 *     MiSharedVaToPartition @ 0x14028EF98 (MiSharedVaToPartition.c)
 *     MiCopyOnWrite @ 0x14028F8B0 (MiCopyOnWrite.c)
 *     NtUnlockVirtualMemory @ 0x1402B1340 (NtUnlockVirtualMemory.c)
 *     NtLockVirtualMemory @ 0x1402D3000 (NtLockVirtualMemory.c)
 *     MiUpdatePrefetchPriority @ 0x140301150 (MiUpdatePrefetchPriority.c)
 *     MmStoreDecommitVirtualMemory @ 0x1403303B4 (MmStoreDecommitVirtualMemory.c)
 *     MmOutSwapVirtualAddresses @ 0x14033AC68 (MmOutSwapVirtualAddresses.c)
 *     MiLockStealUserVm @ 0x1403415B0 (MiLockStealUserVm.c)
 *     MiReservePageFileSpace @ 0x1403481F0 (MiReservePageFileSpace.c)
 *     MiTrimSharedPageFromViews @ 0x140354B14 (MiTrimSharedPageFromViews.c)
 *     MiCrcStillIntact @ 0x1403678C4 (MiCrcStillIntact.c)
 *     MiSharePages @ 0x1403680B0 (MiSharePages.c)
 *     MiDeleteEmptyPageTables @ 0x1403F3750 (MiDeleteEmptyPageTables.c)
 *     MiCanGrantExecute @ 0x1405465D8 (MiCanGrantExecute.c)
 *     MiWriteAwePtes @ 0x14054C798 (MiWriteAwePtes.c)
 *     MiFindPlaceholderVadToReplace @ 0x140553724 (MiFindPlaceholderVadToReplace.c)
 *     MiCloneVads @ 0x140557858 (MiCloneVads.c)
 *     MiUnlockVadRange @ 0x14062DF70 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x14062E080 (MiLockVadRange.c)
 *     MiCoalescePlaceholderAllocations @ 0x1408CAFE4 (MiCoalescePlaceholderAllocations.c)
 *     MmCheckForSafeExecution @ 0x1408D3780 (MmCheckForSafeExecution.c)
 *     MiMapChildLargePageVads @ 0x1408DC1A0 (MiMapChildLargePageVads.c)
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
