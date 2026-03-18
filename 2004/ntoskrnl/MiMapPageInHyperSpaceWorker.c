/*
 * XREFs of MiMapPageInHyperSpaceWorker @ 0x1402F7480
 * Callers:
 *     MiCopyToUserVa @ 0x1402548D0 (MiCopyToUserVa.c)
 *     MiWaitForInPageComplete @ 0x14025D620 (MiWaitForInPageComplete.c)
 *     MiClearContainingMapping @ 0x14026B83C (MiClearContainingMapping.c)
 *     KiInSwapProcesses @ 0x140280CC8 (KiInSwapProcesses.c)
 *     MmOutSwapProcess @ 0x140280DDC (MmOutSwapProcess.c)
 *     MiCompletePrivateZeroFault @ 0x1402A2830 (MiCompletePrivateZeroFault.c)
 *     MiCreateSystemPageTable @ 0x1402E2660 (MiCreateSystemPageTable.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x1402F4B78 (MiRewriteTrimPteAsDemandZero.c)
 *     MiFillPhysicalPages @ 0x1402F51CC (MiFillPhysicalPages.c)
 *     MiBuildMappedCluster @ 0x1402F5CD0 (MiBuildMappedCluster.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1402F64EC (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiRestoreTransitionPte @ 0x1402F6C10 (MiRestoreTransitionPte.c)
 *     MiFlushCacheForAttributeChange @ 0x1402F7368 (MiFlushCacheForAttributeChange.c)
 *     MiFreePagesFromMdl @ 0x140317C94 (MiFreePagesFromMdl.c)
 *     MiReplaceTransitionPage @ 0x14031BEAC (MiReplaceTransitionPage.c)
 *     MiInitializeImageProtos @ 0x14031C75C (MiInitializeImageProtos.c)
 *     MiCopySinglePage @ 0x14033F9B4 (MiCopySinglePage.c)
 *     MiInitializeImageHeaderPage @ 0x1403533CC (MiInitializeImageHeaderPage.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x1403619F0 (MiReadWriteAnyLevelShadowPte.c)
 *     MiConvertStandbyToProto @ 0x140364CE8 (MiConvertStandbyToProto.c)
 *     MiConfirmPageIsZero @ 0x140367D00 (MiConfirmPageIsZero.c)
 *     MiConvertPrivateToProto @ 0x140367DC0 (MiConvertPrivateToProto.c)
 *     MiMirrorOmitPagesFromCopy @ 0x14038339C (MiMirrorOmitPagesFromCopy.c)
 *     MiComputePageHash @ 0x140387880 (MiComputePageHash.c)
 *     MiGetFileHashPage @ 0x14038A6A0 (MiGetFileHashPage.c)
 *     MiReplicatePteChangeToProcess @ 0x1403A1918 (MiReplicatePteChangeToProcess.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1403B6D88 (MiDemoteValidLargePageOneLevel.c)
 *     MmUpdateUserShadowStackValue @ 0x1403EE978 (MmUpdateUserShadowStackValue.c)
 *     MiUpdateSystemPdes @ 0x140527510 (MiUpdateSystemPdes.c)
 *     MmReplaceImportEntry @ 0x14053044C (MmReplaceImportEntry.c)
 *     MiPersistPage @ 0x14053C3CC (MiPersistPage.c)
 *     MiSplitDirectMapPage @ 0x14053CC6C (MiSplitDirectMapPage.c)
 *     MiArePageContentsZero @ 0x1405496F8 (MiArePageContentsZero.c)
 *     MiSwapNumaStandbyPage @ 0x14054BF30 (MiSwapNumaStandbyPage.c)
 *     MiFinishLastForkPageTable @ 0x140555200 (MiFinishLastForkPageTable.c)
 *     MiMakeProtoTransition @ 0x1405572C8 (MiMakeProtoTransition.c)
 * Callees:
 *     MiMakeValidPte @ 0x1402342E0 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiGetUltraMapping @ 0x14023D870 (MiGetUltraMapping.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
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
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int8 CurrentIrql; // r10
  _DWORD *SchedulerAssist; // r9

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
    if ( (unsigned int)MiPteHasShadow(v15, v14, v16, v17) )
    {
      if ( HIBYTE(word_140C4DE08) || (ValidPte & 1) == 0 )
        goto LABEL_29;
LABEL_28:
      ValidPte |= 0x8000000000000000uLL;
LABEL_29:
      *v12 = ValidPte;
      MiWritePteShadow(v12, ValidPte);
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
    if ( (unsigned int)MiPteHasShadow(v15, v14, v16, v17) )
    {
      if ( HIBYTE(word_140C4DE08) || (ValidPte & 1) == 0 )
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
