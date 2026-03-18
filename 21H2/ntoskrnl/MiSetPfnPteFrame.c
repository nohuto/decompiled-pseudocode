/*
 * XREFs of MiSetPfnPteFrame @ 0x14033C3E0
 * Callers:
 *     KiInSwapProcesses @ 0x14021119C (KiInSwapProcesses.c)
 *     MiConvertStandbyToProto @ 0x140227490 (MiConvertStandbyToProto.c)
 *     MiInitializeLargeNonPagedPoolLeafFrames @ 0x140246BF0 (MiInitializeLargeNonPagedPoolLeafFrames.c)
 *     MiReplacePageOfProtoPool @ 0x14026FB78 (MiReplacePageOfProtoPool.c)
 *     MiConvertPrivateToProto @ 0x140272A10 (MiConvertPrivateToProto.c)
 *     MiDeleteClusterSection @ 0x140276E5C (MiDeleteClusterSection.c)
 *     MiInitializePfnForOtherProcess @ 0x14027CCE4 (MiInitializePfnForOtherProcess.c)
 *     MiInitializeTransitionPfn @ 0x1402E4724 (MiInitializeTransitionPfn.c)
 *     MiReplaceTransitionPage @ 0x1402E7704 (MiReplaceTransitionPage.c)
 *     MiStealPage @ 0x1402E97D4 (MiStealPage.c)
 *     MiUnlinkPageFromListEx @ 0x140326870 (MiUnlinkPageFromListEx.c)
 *     MiDemoteCombinedPte @ 0x1403336E0 (MiDemoteCombinedPte.c)
 *     MiAssignNonPagedPoolPte @ 0x14033A6B0 (MiAssignNonPagedPoolPte.c)
 *     MiAllocateKernelStackPages @ 0x14033B770 (MiAllocateKernelStackPages.c)
 *     MiReplacePageTablePage @ 0x14036CF60 (MiReplacePageTablePage.c)
 *     MiUnlinkProtectedStandbyPfn @ 0x14038EF10 (MiUnlinkProtectedStandbyPfn.c)
 *     MiAddExpansionNonPagedPool @ 0x1403C3290 (MiAddExpansionNonPagedPool.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1403C9590 (MiDemoteValidLargePageOneLevel.c)
 *     MiUpdateLargePageSectionPfns @ 0x14058D990 (MiUpdateLargePageSectionPfns.c)
 *     MiReturnBadPagesToBadList @ 0x14058EA88 (MiReturnBadPagesToBadList.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14058F250 (MmMarkPhysicalMemoryAsBad.c)
 *     MiSwitchToTransition @ 0x1405954F4 (MiSwitchToTransition.c)
 *     MiMakeLargePageTable @ 0x140598DA4 (MiMakeLargePageTable.c)
 *     MiExtendPagingFileMaximum @ 0x14059BFB0 (MiExtendPagingFileMaximum.c)
 *     MmMapHotPatchTablePage @ 0x1405A3E3C (MmMapHotPatchTablePage.c)
 *     MiSwapNumaStandbyPage @ 0x1405B4024 (MiSwapNumaStandbyPage.c)
 *     MiBuildForkPageTable @ 0x1405B85F8 (MiBuildForkPageTable.c)
 *     MiBuildForkPte @ 0x1405B88D8 (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x1405BB090 (MiHandleForkTransitionPte.c)
 *     MiAllocateTopLevelPage @ 0x1407F1AF8 (MiAllocateTopLevelPage.c)
 *     MxMovePageTables @ 0x140AF3770 (MxMovePageTables.c)
 *     MxCreatePfn @ 0x140AF3E9C (MxCreatePfn.c)
 *     MiSwitchToPfns @ 0x140AF522C (MiSwitchToPfns.c)
 *     MiAllocateDummyPage @ 0x140B09B18 (MiAllocateDummyPage.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall MiSetPfnPteFrame(__int64 a1, __int64 a2)
{
  signed __int64 v2; // r9
  signed __int64 result; // rax
  signed __int64 v4; // r8

  v2 = *(_QWORD *)(a1 + 40);
  result = _InterlockedCompareExchange64(
             (volatile signed __int64 *)(a1 + 40),
             a2 & 0xFFFFFFFFFFLL | v2 & 0xFFFFFF0000000000uLL,
             v2);
  if ( v2 != result )
  {
    do
    {
      v4 = result;
      result = _InterlockedCompareExchange64(
                 (volatile signed __int64 *)(a1 + 40),
                 a2 & 0xFFFFFFFFFFLL | result & 0xFFFFFF0000000000uLL,
                 result);
    }
    while ( v4 != result );
  }
  return result;
}
