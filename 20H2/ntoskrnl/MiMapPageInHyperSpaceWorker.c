/*
 * XREFs of MiMapPageInHyperSpaceWorker @ 0x140349980
 * Callers:
 *     MiCopyToUserVa @ 0x140234540 (MiCopyToUserVa.c)
 *     MiCopySinglePage @ 0x1402516D4 (MiCopySinglePage.c)
 *     MiClearContainingMapping @ 0x14026335C (MiClearContainingMapping.c)
 *     MiCompletePrivateZeroFault @ 0x140271B70 (MiCompletePrivateZeroFault.c)
 *     MiWaitForInPageComplete @ 0x1402D0710 (MiWaitForInPageComplete.c)
 *     MmOutSwapProcess @ 0x1402DD934 (MmOutSwapProcess.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x1402FE740 (MiReadWriteAnyLevelShadowPte.c)
 *     KiInSwapProcesses @ 0x14030A250 (KiInSwapProcesses.c)
 *     MiInitializeImageHeaderPage @ 0x140323DAC (MiInitializeImageHeaderPage.c)
 *     MiFillPhysicalPages @ 0x1403333BC (MiFillPhysicalPages.c)
 *     MiCreateSystemPageTable @ 0x1403360F0 (MiCreateSystemPageTable.c)
 *     MiBuildMappedCluster @ 0x140345BF8 (MiBuildMappedCluster.c)
 *     MiRestoreTransitionPte @ 0x140346AA0 (MiRestoreTransitionPte.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x140346EE4 (MiRewriteTrimPteAsDemandZero.c)
 *     MiFlushCacheForAttributeChange @ 0x14034986C (MiFlushCacheForAttributeChange.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140349C1C (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiFreePagesFromMdl @ 0x14034E438 (MiFreePagesFromMdl.c)
 *     MiInitializeImageProtos @ 0x140350EE8 (MiInitializeImageProtos.c)
 *     MiReplaceTransitionPage @ 0x140351C54 (MiReplaceTransitionPage.c)
 *     MiConvertStandbyToProto @ 0x140366CC8 (MiConvertStandbyToProto.c)
 *     MiConfirmPageIsZero @ 0x140369CE0 (MiConfirmPageIsZero.c)
 *     MiConvertPrivateToProto @ 0x140369DA0 (MiConvertPrivateToProto.c)
 *     MiMirrorOmitPagesFromCopy @ 0x14038507C (MiMirrorOmitPagesFromCopy.c)
 *     MiComputePageHash @ 0x140389A40 (MiComputePageHash.c)
 *     MiGetFileHashPage @ 0x14038C940 (MiGetFileHashPage.c)
 *     MiReplicatePteChangeToProcess @ 0x1403A3DE8 (MiReplicatePteChangeToProcess.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1403B9828 (MiDemoteValidLargePageOneLevel.c)
 *     MmUpdateUserShadowStackValue @ 0x1403F2DE0 (MmUpdateUserShadowStackValue.c)
 *     MiUpdateSystemPdes @ 0x14052AEE0 (MiUpdateSystemPdes.c)
 *     MmReplaceImportEntry @ 0x140533E1C (MmReplaceImportEntry.c)
 *     MiPersistPage @ 0x14053FD9C (MiPersistPage.c)
 *     MiSplitDirectMapPage @ 0x14054063C (MiSplitDirectMapPage.c)
 *     MiArePageContentsZero @ 0x14054D0C8 (MiArePageContentsZero.c)
 *     MiSwapNumaStandbyPage @ 0x14054F900 (MiSwapNumaStandbyPage.c)
 *     MiFinishLastForkPageTable @ 0x140558BD0 (MiFinishLastForkPageTable.c)
 *     MiMakeProtoTransition @ 0x14055AC98 (MiMakeProtoTransition.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x1402B1B40 (MiMakeValidPte.c)
 *     MiGetUltraMapping @ 0x1402C2F20 (MiGetUltraMapping.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 */

unsigned __int64 __fastcall MiMapPageInHyperSpaceWorker(__int64 a1, unsigned __int8 *a2, int a3, __int64 a4)
{
  int v5; // r8d
  int v7; // eax
  unsigned __int64 ValidPte; // rbx
  struct _KPRCB *CurrentPrcb; // r14
  unsigned __int64 *MmInternal; // rsi
  unsigned __int64 UltraMapping; // r15
  unsigned __int64 *v12; // rdi
  BOOL v13; // eax
  unsigned __int8 CurrentIrql; // r10
  _DWORD *SchedulerAssist; // r9
  __int64 v17; // r8

  v5 = 4;
  if ( (a3 & 0x20000000) != 0 )
    v5 = 1;
  if ( (a3 & 0x40000000) != 0 )
  {
    v7 = a3 & 3;
    if ( v7 == 2 )
    {
      v5 |= 0x2000000u;
LABEL_17:
      v5 |= 0x18u;
      goto LABEL_8;
    }
  }
  else
  {
    v7 = *(unsigned __int8 *)(48 * a1 - 0x58000000000LL + 34) >> 6;
  }
  if ( v7 && v7 != 3 )
  {
    if ( v7 != 2 )
      goto LABEL_8;
    goto LABEL_17;
  }
  v5 |= 8u;
LABEL_8:
  ValidPte = MiMakeValidPte(0LL, a1, v5 | 0xA0000000, a4);
  if ( a2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    *a2 = CurrentIrql;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  MmInternal = (unsigned __int64 *)CurrentPrcb->MmInternal;
  if ( !MmInternal
    || (UltraMapping = MiGetUltraMapping(MmInternal + 1556, 3u, 1LL, 0),
        v12 = (unsigned __int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
        MmInternal[1543] = (unsigned __int64)v12,
        !UltraMapping) )
  {
    UltraMapping = ((unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL)
                 + (((__int64)CurrentPrcb->HyperPte & 0xFFF) << 12);
    v12 = (unsigned __int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  }
  v13 = MiPteInShadowRange((unsigned __int64)v12);
  if ( a3 >= 0 )
  {
    if ( !v13 )
      goto LABEL_13;
    if ( (unsigned int)MiPteHasShadow() )
    {
      if ( HIBYTE(word_140C4DE88) || (ValidPte & 1) == 0 )
        goto LABEL_29;
LABEL_28:
      ValidPte |= 0x8000000000000000uLL;
LABEL_29:
      *v12 = ValidPte;
      MiWritePteShadow((__int64)v12, ValidPte, v17);
      return UltraMapping;
    }
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0
      || (ValidPte & 1) == 0 )
    {
      goto LABEL_13;
    }
LABEL_40:
    ValidPte |= 0x8000000000000000uLL;
    goto LABEL_13;
  }
  if ( v13 )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      if ( HIBYTE(word_140C4DE88) || (ValidPte & 1) == 0 )
        goto LABEL_29;
      goto LABEL_28;
    }
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0
      || (ValidPte & 1) == 0 )
    {
      goto LABEL_13;
    }
    goto LABEL_40;
  }
LABEL_13:
  *v12 = ValidPte;
  return UltraMapping;
}
