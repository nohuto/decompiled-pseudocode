/*
 * XREFs of MiMapPageInHyperSpaceWorker @ 0x140331AB0
 * Callers:
 *     MiCompletePrivateZeroFault @ 0x140210850 (MiCompletePrivateZeroFault.c)
 *     MmOutSwapProcess @ 0x14024A494 (MmOutSwapProcess.c)
 *     KiInSwapProcesses @ 0x14024A538 (KiInSwapProcesses.c)
 *     MiBuildMappedCluster @ 0x1402560D0 (MiBuildMappedCluster.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1402696C0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x140269EA8 (MiRewriteTrimPteAsDemandZero.c)
 *     MiReplaceTransitionPage @ 0x14026D370 (MiReplaceTransitionPage.c)
 *     MiInitializeImageProtos @ 0x14026DF7C (MiInitializeImageProtos.c)
 *     MiClearContainingMapping @ 0x14029717C (MiClearContainingMapping.c)
 *     MiRestoreTransitionPte @ 0x1402A2DD0 (MiRestoreTransitionPte.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x1402A8920 (MiReadWriteAnyLevelShadowPte.c)
 *     MiCopySinglePage @ 0x1402B4BC4 (MiCopySinglePage.c)
 *     MiCreateSystemPageTable @ 0x1402E5210 (MiCreateSystemPageTable.c)
 *     MiFillPhysicalPages @ 0x1402E6470 (MiFillPhysicalPages.c)
 *     MiInitializeImageHeaderPage @ 0x1402E7B5C (MiInitializeImageHeaderPage.c)
 *     MiFreePagesFromMdl @ 0x1402FF4EC (MiFreePagesFromMdl.c)
 *     MiFlushCacheForAttributeChange @ 0x140303848 (MiFlushCacheForAttributeChange.c)
 *     MiCopyToUserVa @ 0x14030E538 (MiCopyToUserVa.c)
 *     MiWaitForInPageComplete @ 0x14031B1F0 (MiWaitForInPageComplete.c)
 *     MiConvertStandbyToProto @ 0x140366F78 (MiConvertStandbyToProto.c)
 *     MiConfirmPageIsZero @ 0x140369F90 (MiConfirmPageIsZero.c)
 *     MiConvertPrivateToProto @ 0x14036A050 (MiConvertPrivateToProto.c)
 *     MiMirrorOmitPagesFromCopy @ 0x140385E5C (MiMirrorOmitPagesFromCopy.c)
 *     MiComputePageHash @ 0x14038A190 (MiComputePageHash.c)
 *     MiGetFileHashPage @ 0x14038D060 (MiGetFileHashPage.c)
 *     MiReplicatePteChangeToProcess @ 0x1403A46A8 (MiReplicatePteChangeToProcess.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1403BA228 (MiDemoteValidLargePageOneLevel.c)
 *     MmUpdateUserShadowStackValue @ 0x1403F4628 (MmUpdateUserShadowStackValue.c)
 *     MiUpdateSystemPdes @ 0x14052C9E0 (MiUpdateSystemPdes.c)
 *     MmReplaceImportEntry @ 0x14053591C (MmReplaceImportEntry.c)
 *     MiPersistPage @ 0x14054189C (MiPersistPage.c)
 *     MiSplitDirectMapPage @ 0x14054213C (MiSplitDirectMapPage.c)
 *     MiArePageContentsZero @ 0x14054EBC8 (MiArePageContentsZero.c)
 *     MiSwapNumaStandbyPage @ 0x1405513D0 (MiSwapNumaStandbyPage.c)
 *     MiFinishLastForkPageTable @ 0x14055A6A0 (MiFinishLastForkPageTable.c)
 *     MiMakeProtoTransition @ 0x14055C768 (MiMakeProtoTransition.c)
 * Callees:
 *     MiGetUltraMapping @ 0x140234700 (MiGetUltraMapping.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiMakeValidPte @ 0x14032E730 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
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
  __int64 v16; // r8

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
  v13 = MiPteInShadowRange(v12, 0xFFFFF68000000000uLL);
  if ( a3 >= 0 )
  {
    if ( !v13 )
      goto LABEL_15;
    if ( (unsigned int)MiPteHasShadow() )
    {
      if ( HIBYTE(word_140C4E008) || (ValidPte & 1) == 0 )
        goto LABEL_29;
LABEL_28:
      ValidPte |= 0x8000000000000000uLL;
LABEL_29:
      *v12 = ValidPte;
      MiWritePteShadow((__int64)v12, ValidPte, v16);
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
      if ( HIBYTE(word_140C4E008) || (ValidPte & 1) == 0 )
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
