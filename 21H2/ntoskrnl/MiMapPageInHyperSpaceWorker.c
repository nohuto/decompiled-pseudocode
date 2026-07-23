/*
 * XREFs of MiMapPageInHyperSpaceWorker @ 0x14033C800
 * Callers:
 *     MiRestoreTransitionPte @ 0x140220210 (MiRestoreTransitionPte.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x140226A60 (MiReadWriteAnyLevelShadowPte.c)
 *     MiCopySinglePage @ 0x140232D74 (MiCopySinglePage.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140257660 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x140257E48 (MiRewriteTrimPteAsDemandZero.c)
 *     MiReplaceTransitionPage @ 0x14025B310 (MiReplaceTransitionPage.c)
 *     MiInitializeImageProtos @ 0x14025BF1C (MiInitializeImageProtos.c)
 *     MiClearContainingMapping @ 0x14027425C (MiClearContainingMapping.c)
 *     MiBuildMappedCluster @ 0x140277640 (MiBuildMappedCluster.c)
 *     MiCreateSystemPageTable @ 0x140296560 (MiCreateSystemPageTable.c)
 *     MiFillPhysicalPages @ 0x1402977C0 (MiFillPhysicalPages.c)
 *     MiInitializeImageHeaderPage @ 0x140298EAC (MiInitializeImageHeaderPage.c)
 *     MiCompletePrivateZeroFault @ 0x1402B5150 (MiCompletePrivateZeroFault.c)
 *     MmOutSwapProcess @ 0x1402EECE4 (MmOutSwapProcess.c)
 *     KiInSwapProcesses @ 0x1402EED88 (KiInSwapProcesses.c)
 *     MiFreePagesFromMdl @ 0x14030A23C (MiFreePagesFromMdl.c)
 *     MiFlushCacheForAttributeChange @ 0x14030E598 (MiFlushCacheForAttributeChange.c)
 *     MiCopyToUserVa @ 0x140319288 (MiCopyToUserVa.c)
 *     MiWaitForInPageComplete @ 0x140325F40 (MiWaitForInPageComplete.c)
 *     MiConvertStandbyToProto @ 0x140367128 (MiConvertStandbyToProto.c)
 *     MiConfirmPageIsZero @ 0x14036A140 (MiConfirmPageIsZero.c)
 *     MiConvertPrivateToProto @ 0x14036A200 (MiConvertPrivateToProto.c)
 *     MiMirrorOmitPagesFromCopy @ 0x140385FAC (MiMirrorOmitPagesFromCopy.c)
 *     MiComputePageHash @ 0x14038A2E0 (MiComputePageHash.c)
 *     MiGetFileHashPage @ 0x14038D1B0 (MiGetFileHashPage.c)
 *     MiReplicatePteChangeToProcess @ 0x1403A47F8 (MiReplicatePteChangeToProcess.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1403BA398 (MiDemoteValidLargePageOneLevel.c)
 *     MmUpdateUserShadowStackValue @ 0x1403F4628 (MmUpdateUserShadowStackValue.c)
 *     MiUpdateSystemPdes @ 0x14052CC20 (MiUpdateSystemPdes.c)
 *     MmReplaceImportEntry @ 0x140535B5C (MmReplaceImportEntry.c)
 *     MiPersistPage @ 0x140541ADC (MiPersistPage.c)
 *     MiSplitDirectMapPage @ 0x14054237C (MiSplitDirectMapPage.c)
 *     MiArePageContentsZero @ 0x14054EE08 (MiArePageContentsZero.c)
 *     MiSwapNumaStandbyPage @ 0x140551610 (MiSwapNumaStandbyPage.c)
 *     MiFinishLastForkPageTable @ 0x14055A8E0 (MiFinishLastForkPageTable.c)
 *     MiMakeProtoTransition @ 0x14055C9A8 (MiMakeProtoTransition.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiGetUltraMapping @ 0x1402D8F50 (MiGetUltraMapping.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 */

unsigned __int64 __fastcall MiMapPageInHyperSpaceWorker(__int64 a1, unsigned __int8 *a2, int a3)
{
  int v4; // r8d
  int v6; // eax
  unsigned __int64 ValidPte; // rbx
  unsigned __int8 CurrentIrql; // r10
  struct _KPRCB *CurrentPrcb; // rbp
  unsigned __int64 *MmInternal; // rsi
  unsigned __int64 UltraMapping; // r15
  unsigned __int64 *v12; // rdi
  int v13; // eax
  _DWORD *SchedulerAssist; // r9

  v4 = 4;
  if ( (a3 & 0x20000000) != 0 )
    v4 = 1;
  if ( (a3 & 0x40000000) != 0 )
  {
    v6 = a3 & 3;
    if ( v6 == 2 )
    {
      v4 |= 0x2000000u;
LABEL_19:
      v4 |= 0x18u;
      goto LABEL_8;
    }
  }
  else
  {
    v6 = *(unsigned __int8 *)(48 * a1 - 0x58000000000LL + 34) >> 6;
  }
  if ( v6 && v6 != 3 )
  {
    if ( v6 != 2 )
      goto LABEL_8;
    goto LABEL_19;
  }
  v4 |= 8u;
LABEL_8:
  ValidPte = MiMakeValidPte(0LL, a1, v4 | 0xA0000000);
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
  v13 = MiPteInShadowRange(v12);
  if ( a3 >= 0 )
  {
    if ( !v13 )
      goto LABEL_15;
    if ( (unsigned int)MiPteHasShadow() )
    {
      if ( HIBYTE(word_140C4E048) || (ValidPte & 1) == 0 )
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
      goto LABEL_15;
    }
LABEL_40:
    ValidPte |= 0x8000000000000000uLL;
    goto LABEL_15;
  }
  if ( v13 )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      if ( HIBYTE(word_140C4E048) || (ValidPte & 1) == 0 )
        goto LABEL_29;
      goto LABEL_28;
    }
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0
      || (ValidPte & 1) == 0 )
    {
      goto LABEL_15;
    }
    goto LABEL_40;
  }
LABEL_15:
  *v12 = ValidPte;
  return UltraMapping;
}
