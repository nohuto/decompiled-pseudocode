/*
 * XREFs of MiMapPageInHyperSpaceWorker @ 0x140353460
 * Callers:
 *     MiCompletePrivateZeroFault @ 0x14020FD20 (MiCompletePrivateZeroFault.c)
 *     KiInSwapProcesses @ 0x1402445C8 (KiInSwapProcesses.c)
 *     MmOutSwapProcess @ 0x1402446DC (MmOutSwapProcess.c)
 *     MiCopyToUserVa @ 0x1402AD900 (MiCopyToUserVa.c)
 *     MiWaitForInPageComplete @ 0x1402B6650 (MiWaitForInPageComplete.c)
 *     MiClearContainingMapping @ 0x1402D51DC (MiClearContainingMapping.c)
 *     MiCopySinglePage @ 0x140302BB4 (MiCopySinglePage.c)
 *     MiInitializeImageHeaderPage @ 0x14031554C (MiInitializeImageHeaderPage.c)
 *     MiCreateSystemPageTable @ 0x1403289C0 (MiCreateSystemPageTable.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x14033BD80 (MiReadWriteAnyLevelShadowPte.c)
 *     MiFreePagesFromMdl @ 0x140346FD4 (MiFreePagesFromMdl.c)
 *     MiReplaceTransitionPage @ 0x14034B1EC (MiReplaceTransitionPage.c)
 *     MiInitializeImageProtos @ 0x14034BA9C (MiInitializeImageProtos.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x140350B54 (MiRewriteTrimPteAsDemandZero.c)
 *     MiFillPhysicalPages @ 0x1403511A8 (MiFillPhysicalPages.c)
 *     MiBuildMappedCluster @ 0x140351CB0 (MiBuildMappedCluster.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403524CC (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiRestoreTransitionPte @ 0x140352BF0 (MiRestoreTransitionPte.c)
 *     MiFlushCacheForAttributeChange @ 0x140353348 (MiFlushCacheForAttributeChange.c)
 *     MiConvertStandbyToProto @ 0x140364328 (MiConvertStandbyToProto.c)
 *     MiConfirmPageIsZero @ 0x140367340 (MiConfirmPageIsZero.c)
 *     MiConvertPrivateToProto @ 0x140367400 (MiConvertPrivateToProto.c)
 *     MiMirrorOmitPagesFromCopy @ 0x140382B5C (MiMirrorOmitPagesFromCopy.c)
 *     MiComputePageHash @ 0x140386910 (MiComputePageHash.c)
 *     MiGetFileHashPage @ 0x140389630 (MiGetFileHashPage.c)
 *     MiReplicatePteChangeToProcess @ 0x1403A1188 (MiReplicatePteChangeToProcess.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1403B5F58 (MiDemoteValidLargePageOneLevel.c)
 *     MiUpdateSystemPdes @ 0x140526EC0 (MiUpdateSystemPdes.c)
 *     MmReplaceImportEntry @ 0x14052FDFC (MmReplaceImportEntry.c)
 *     MiPersistPage @ 0x14053BD7C (MiPersistPage.c)
 *     MiSplitDirectMapPage @ 0x14053C61C (MiSplitDirectMapPage.c)
 *     MiArePageContentsZero @ 0x1405490A8 (MiArePageContentsZero.c)
 *     MiSwapNumaStandbyPage @ 0x14054B8E0 (MiSwapNumaStandbyPage.c)
 *     MiFinishLastForkPageTable @ 0x140554BB0 (MiFinishLastForkPageTable.c)
 *     MiMakeProtoTransition @ 0x140556C78 (MiMakeProtoTransition.c)
 * Callees:
 *     MiMakeValidPte @ 0x14028D330 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiGetUltraMapping @ 0x1402968A0 (MiGetUltraMapping.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
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
      if ( HIBYTE(word_140C4DF48) || (ValidPte & 1) == 0 )
        goto LABEL_29;
LABEL_28:
      ValidPte |= 0x8000000000000000uLL;
LABEL_29:
      *v12 = ValidPte;
      MiWritePteShadow((__int64)v12, ValidPte);
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
      if ( HIBYTE(word_140C4DF48) || (ValidPte & 1) == 0 )
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
