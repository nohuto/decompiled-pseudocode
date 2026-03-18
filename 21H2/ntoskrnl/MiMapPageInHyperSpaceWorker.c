/*
 * XREFs of MiMapPageInHyperSpaceWorker @ 0x1402CC7C0
 * Callers:
 *     MiJumpStackTarget @ 0x1402003C0 (MiJumpStackTarget.c)
 *     MmOutSwapProcess @ 0x140211108 (MmOutSwapProcess.c)
 *     KiInSwapProcesses @ 0x14021119C (KiInSwapProcesses.c)
 *     MiClearContainingMapping @ 0x1402170F4 (MiClearContainingMapping.c)
 *     MiFreePagesFromMdl @ 0x140221A30 (MiFreePagesFromMdl.c)
 *     MiConfirmPageIsZero @ 0x140221FD0 (MiConfirmPageIsZero.c)
 *     MiConvertStandbyToProto @ 0x140227490 (MiConvertStandbyToProto.c)
 *     MiFillPhysicalPages @ 0x140235AAC (MiFillPhysicalPages.c)
 *     MiFlushCacheForAttributeChange @ 0x140268AB0 (MiFlushCacheForAttributeChange.c)
 *     MiCopySinglePage @ 0x14026BE94 (MiCopySinglePage.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1402710C4 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiConvertPrivateToProto @ 0x140272A10 (MiConvertPrivateToProto.c)
 *     MiWaitForInPageComplete @ 0x14027AA30 (MiWaitForInPageComplete.c)
 *     MiInitializeSystemPageTable @ 0x14027C784 (MiInitializeSystemPageTable.c)
 *     MiBuildMappedCluster @ 0x14028B8B0 (MiBuildMappedCluster.c)
 *     MiCopyToUserVa @ 0x14028DF40 (MiCopyToUserVa.c)
 *     MiInitializeImageHeaderPage @ 0x14029BC90 (MiInitializeImageHeaderPage.c)
 *     MiWsleFlush @ 0x1402C1F50 (MiWsleFlush.c)
 *     MiInitializeImageProtos @ 0x1402E4474 (MiInitializeImageProtos.c)
 *     MiReplaceTransitionPage @ 0x1402E7704 (MiReplaceTransitionPage.c)
 *     MiCompletePrivateZeroFault @ 0x140321F70 (MiCompletePrivateZeroFault.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x14033F8E0 (MiRewriteTrimPteAsDemandZero.c)
 *     MiRestoreTransitionPte @ 0x14033FAA4 (MiRestoreTransitionPte.c)
 *     MiReplicatePteChangeToProcess @ 0x14036C9FC (MiReplicatePteChangeToProcess.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x1403853B0 (MiReadWriteAnyLevelShadowPte.c)
 *     MiMirrorOmitPagesFromCopy @ 0x14038F830 (MiMirrorOmitPagesFromCopy.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1403C9590 (MiDemoteValidLargePageOneLevel.c)
 *     MiComputePageHash @ 0x14045D34E (MiComputePageHash.c)
 *     MiUpdateSystemPdes @ 0x140581434 (MiUpdateSystemPdes.c)
 *     MiReplaceImportEntry @ 0x1405905F0 (MiReplaceImportEntry.c)
 *     MiPersistPage @ 0x1405A02B8 (MiPersistPage.c)
 *     MiSplitDirectMapPage @ 0x1405A0B10 (MiSplitDirectMapPage.c)
 *     MmUpdateUserShadowStackValue @ 0x1405A7A98 (MmUpdateUserShadowStackValue.c)
 *     MiArePageContentsZero @ 0x1405AD468 (MiArePageContentsZero.c)
 *     MiSwapNumaStandbyPage @ 0x1405B4024 (MiSwapNumaStandbyPage.c)
 *     MiFinishLastForkPageTable @ 0x1405BACCC (MiFinishLastForkPageTable.c)
 * Callees:
 *     MiGetUltraMapping @ 0x1402C6260 (MiGetUltraMapping.c)
 *     MiMakeValidPte @ 0x1402CBD10 (MiMakeValidPte.c)
 */

unsigned __int64 __fastcall MiMapPageInHyperSpaceWorker(__int64 a1, unsigned __int8 *a2, int a3)
{
  int v5; // edx
  int v6; // r8d
  int v7; // eax
  unsigned __int64 ValidPte; // rbx
  struct _KPRCB *CurrentPrcb; // rbp
  unsigned __int64 *MmInternal; // rsi
  unsigned __int64 UltraMapping; // r8
  unsigned __int64 *v12; // rdx
  unsigned __int64 result; // rax
  unsigned __int8 CurrentIrql; // r10
  _DWORD *SchedulerAssist; // r9

  if ( (a3 & 0x20000000) != 0 )
  {
    v5 = 33554433;
    v6 = 1;
  }
  else
  {
    v5 = 33554436;
    v6 = 4;
  }
  if ( (a3 & 0x40000000) != 0 )
  {
    v7 = a3 & 3;
    if ( v7 == 2 )
    {
      v6 = v5;
LABEL_19:
      v6 |= 0x18u;
      goto LABEL_8;
    }
  }
  else
  {
    v7 = *(unsigned __int8 *)(48 * a1 - 0x220000000000LL + 34) >> 6;
  }
  if ( v7 && v7 != 3 )
  {
    if ( v7 != 2 )
      goto LABEL_8;
    goto LABEL_19;
  }
  v6 |= 8u;
LABEL_8:
  ValidPte = MiMakeValidPte(0LL, a1, v6 | 0xA0000000);
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
  result = UltraMapping;
  *v12 = ValidPte;
  return result;
}
