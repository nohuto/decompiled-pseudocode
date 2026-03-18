/*
 * XREFs of MiLocateAddress @ 0x1402A4B60
 * Callers:
 *     MiProcessCommitIntact @ 0x140201704 (MiProcessCommitIntact.c)
 *     MmAccessFault @ 0x14020C560 (MmAccessFault.c)
 *     MiUserFault @ 0x14020CC40 (MiUserFault.c)
 *     MiComputeMaximumFaultCluster @ 0x14020EB20 (MiComputeMaximumFaultCluster.c)
 *     MiResolveDemandZeroFault @ 0x14020F020 (MiResolveDemandZeroFault.c)
 *     MiCompletePrivateZeroFault @ 0x14020FD20 (MiCompletePrivateZeroFault.c)
 *     MiCompleteProtoPteFault @ 0x140213720 (MiCompleteProtoPteFault.c)
 *     MiResolveProtoPteFault @ 0x140214D60 (MiResolveProtoPteFault.c)
 *     MiHandleTransitionFault @ 0x140216DE0 (MiHandleTransitionFault.c)
 *     MiSharedVaToPartition @ 0x140226348 (MiSharedVaToPartition.c)
 *     MiReservePageFileSpace @ 0x140227910 (MiReservePageFileSpace.c)
 *     MiCopyOnWrite @ 0x140291750 (MiCopyOnWrite.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1402A44AC (MiCaptureWriteWatchDirtyBit.c)
 *     MiObtainReferencedSecureVad @ 0x1402A4A40 (MiObtainReferencedSecureVad.c)
 *     NtLockVirtualMemory @ 0x1402A5D80 (NtLockVirtualMemory.c)
 *     MiProbeLockFrame @ 0x1402A6D80 (MiProbeLockFrame.c)
 *     NtUnlockVirtualMemory @ 0x1402AF520 (NtUnlockVirtualMemory.c)
 *     MiImagePageOk @ 0x1402B4660 (MiImagePageOk.c)
 *     MiResolveMappedFileFault @ 0x1402B7380 (MiResolveMappedFileFault.c)
 *     MiComputeFaultNode @ 0x1402B7BF0 (MiComputeFaultNode.c)
 *     MiInitializeReadInProgressPfn @ 0x1402BAAF0 (MiInitializeReadInProgressPfn.c)
 *     MiTrimSharedPageFromViews @ 0x1402CE864 (MiTrimSharedPageFromViews.c)
 *     MmOutSwapVirtualAddresses @ 0x1402D10EC (MmOutSwapVirtualAddresses.c)
 *     MmStoreDecommitVirtualMemory @ 0x140321C94 (MmStoreDecommitVirtualMemory.c)
 *     MiUpdatePrefetchPriority @ 0x1403354A0 (MiUpdatePrefetchPriority.c)
 *     MiResolvePageFileFault @ 0x1403432DC (MiResolvePageFileFault.c)
 *     MiCheckVirtualAddress @ 0x140345240 (MiCheckVirtualAddress.c)
 *     MiLockStealUserVm @ 0x14034C738 (MiLockStealUserVm.c)
 *     MiCrcStillIntact @ 0x140364F24 (MiCrcStillIntact.c)
 *     MiSharePages @ 0x140365710 (MiSharePages.c)
 *     MiDeleteEmptyPageTables @ 0x1403EDF80 (MiDeleteEmptyPageTables.c)
 *     MiCanGrantExecute @ 0x1405425B8 (MiCanGrantExecute.c)
 *     MiWriteAwePtes @ 0x140548778 (MiWriteAwePtes.c)
 *     MiFindPlaceholderVadToReplace @ 0x14054F704 (MiFindPlaceholderVadToReplace.c)
 *     MiCloneVads @ 0x140553838 (MiCloneVads.c)
 *     MiLockVadRange @ 0x140637338 (MiLockVadRange.c)
 *     MiUnlockVadRange @ 0x14063C4D4 (MiUnlockVadRange.c)
 *     MiCoalescePlaceholderAllocations @ 0x1408C3E54 (MiCoalescePlaceholderAllocations.c)
 *     MmCheckForSafeExecution @ 0x1408CC5F0 (MmCheckForSafeExecution.c)
 *     MiMapChildLargePageVads @ 0x1408D5010 (MiMapChildLargePageVads.c)
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
