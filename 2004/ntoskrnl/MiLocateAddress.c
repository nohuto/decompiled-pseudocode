/*
 * XREFs of MiLocateAddress @ 0x14024BB30
 * Callers:
 *     MiProcessCommitIntact @ 0x140201704 (MiProcessCommitIntact.c)
 *     MiCopyOnWrite @ 0x140238700 (MiCopyOnWrite.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x14024B47C (MiCaptureWriteWatchDirtyBit.c)
 *     MiObtainReferencedSecureVad @ 0x14024BA10 (MiObtainReferencedSecureVad.c)
 *     NtLockVirtualMemory @ 0x14024CD50 (NtLockVirtualMemory.c)
 *     MiProbeLockFrame @ 0x14024DD50 (MiProbeLockFrame.c)
 *     NtUnlockVirtualMemory @ 0x1402564F0 (NtUnlockVirtualMemory.c)
 *     MiImagePageOk @ 0x14025B630 (MiImagePageOk.c)
 *     MiResolveMappedFileFault @ 0x14025E350 (MiResolveMappedFileFault.c)
 *     MiComputeFaultNode @ 0x14025EBC0 (MiComputeFaultNode.c)
 *     MiInitializeReadInProgressPfn @ 0x140261AC0 (MiInitializeReadInProgressPfn.c)
 *     MmAccessFault @ 0x14029F070 (MmAccessFault.c)
 *     MiUserFault @ 0x14029F750 (MiUserFault.c)
 *     MiComputeMaximumFaultCluster @ 0x1402A1630 (MiComputeMaximumFaultCluster.c)
 *     MiResolveDemandZeroFault @ 0x1402A1B30 (MiResolveDemandZeroFault.c)
 *     MiCompletePrivateZeroFault @ 0x1402A2830 (MiCompletePrivateZeroFault.c)
 *     MiCompleteProtoPteFault @ 0x1402A6230 (MiCompleteProtoPteFault.c)
 *     MiResolveProtoPteFault @ 0x1402A7870 (MiResolveProtoPteFault.c)
 *     MiHandleTransitionFault @ 0x1402A98F0 (MiHandleTransitionFault.c)
 *     MiSharedVaToPartition @ 0x1402B8FC8 (MiSharedVaToPartition.c)
 *     MiReservePageFileSpace @ 0x1402BA590 (MiReservePageFileSpace.c)
 *     MiUpdatePrefetchPriority @ 0x1402F0360 (MiUpdatePrefetchPriority.c)
 *     MmOutSwapVirtualAddresses @ 0x1403100C0 (MmOutSwapVirtualAddresses.c)
 *     MiResolvePageFileFault @ 0x140313F9C (MiResolvePageFileFault.c)
 *     MiCheckVirtualAddress @ 0x140315F00 (MiCheckVirtualAddress.c)
 *     MiLockStealUserVm @ 0x14031D3F8 (MiLockStealUserVm.c)
 *     MiTrimSharedPageFromViews @ 0x14031EC94 (MiTrimSharedPageFromViews.c)
 *     MmStoreDecommitVirtualMemory @ 0x14035F644 (MmStoreDecommitVirtualMemory.c)
 *     MiCrcStillIntact @ 0x1403658E4 (MiCrcStillIntact.c)
 *     MiSharePages @ 0x1403660D0 (MiSharePages.c)
 *     MiDeleteEmptyPageTables @ 0x1403EF2E0 (MiDeleteEmptyPageTables.c)
 *     MiCanGrantExecute @ 0x140542C08 (MiCanGrantExecute.c)
 *     MiWriteAwePtes @ 0x140548DC8 (MiWriteAwePtes.c)
 *     MiFindPlaceholderVadToReplace @ 0x14054FD54 (MiFindPlaceholderVadToReplace.c)
 *     MiCloneVads @ 0x140553E88 (MiCloneVads.c)
 *     MiLockVadRange @ 0x1406022F8 (MiLockVadRange.c)
 *     MiUnlockVadRange @ 0x140607384 (MiUnlockVadRange.c)
 *     MiCoalescePlaceholderAllocations @ 0x1408C51A4 (MiCoalescePlaceholderAllocations.c)
 *     MmCheckForSafeExecution @ 0x1408CD940 (MmCheckForSafeExecution.c)
 *     MiMapChildLargePageVads @ 0x1408D6360 (MiMapChildLargePageVads.c)
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
