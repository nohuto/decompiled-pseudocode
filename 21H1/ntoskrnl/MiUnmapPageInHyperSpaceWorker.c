/*
 * XREFs of MiUnmapPageInHyperSpaceWorker @ 0x1402915F0
 * Callers:
 *     MiCompletePrivateZeroFault @ 0x14020FD20 (MiCompletePrivateZeroFault.c)
 *     MiGetPageChain @ 0x1402121E0 (MiGetPageChain.c)
 *     MiWsleFree @ 0x140220E30 (MiWsleFree.c)
 *     KiInSwapProcesses @ 0x1402445C8 (KiInSwapProcesses.c)
 *     MmOutSwapProcess @ 0x1402446DC (MmOutSwapProcess.c)
 *     MiPfnShareCountIsZero @ 0x14028E490 (MiPfnShareCountIsZero.c)
 *     MiDecrementAndInsertStandbyPages @ 0x14028FAA0 (MiDecrementAndInsertStandbyPages.c)
 *     MiDeletePteRun @ 0x140298E00 (MiDeletePteRun.c)
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
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiFlushHyperSpace @ 0x140322470 (MiFlushHyperSpace.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiUnmapPageInHyperSpaceWorker(unsigned __int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rbp
  struct _KPRCB *CurrentPrcb; // r14
  unsigned __int64 *v5; // rdi
  unsigned int v6; // r15d
  unsigned __int64 v7; // r12
  _QWORD *MmInternal; // rsi
  unsigned __int64 v9; // rbx
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct _KPRCB *v13; // r10
  _DWORD *SchedulerAssist; // r9
  bool v15; // zf

  v3 = (unsigned __int8)a2;
  CurrentPrcb = KeGetCurrentPrcb();
  v5 = (unsigned __int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v6 = 0;
  v7 = 0LL;
  MmInternal = CurrentPrcb->MmInternal;
  if ( MmInternal )
  {
    MmInternal[1543] = 0LL;
  }
  else
  {
    v7 = (unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL;
    v6 = ((__int64)CurrentPrcb->HyperPte & 0xFFF) + 1;
  }
  if ( a3 >= 0 )
  {
    result = ZeroPte;
    *v5 = ZeroPte;
  }
  else
  {
    v9 = ZeroPte;
    result = MiPteInShadowRange(v5, a2);
    if ( !(_DWORD)result )
    {
LABEL_5:
      *v5 = v9;
      goto LABEL_6;
    }
    if ( !(unsigned int)MiPteHasShadow(v12, v11) )
    {
      result = (__int64)KeGetCurrentThread();
      if ( (*(_DWORD *)(*(_QWORD *)(result + 184) + 2172LL) & 0x1000) != 0 && (ZeroPte & 1) != 0 )
      {
        result = 0x8000000000000000uLL;
        v9 = ZeroPte | 0x8000000000000000uLL;
      }
      goto LABEL_5;
    }
    if ( !HIBYTE(word_140C4DF48) && (ZeroPte & 1) != 0 )
      v9 = ZeroPte | 0x8000000000000000uLL;
    *v5 = v9;
    result = MiWritePteShadow(v5, v9);
  }
LABEL_6:
  if ( !MmInternal )
  {
    if ( v6 == 64 )
    {
      MiFlushHyperSpace();
      v6 = 0;
    }
    result = v7 | v6;
    CurrentPrcb->HyperPte = (void *)result;
  }
  if ( (_BYTE)v3 != 17 )
  {
    result = (unsigned int)KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v3 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          v13 = KeGetCurrentPrcb();
          SchedulerAssist = v13->SchedulerAssist;
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
          v15 = ((unsigned int)result & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= result;
          if ( v15 )
            result = KiRemoveSystemWorkPriorityKick(v13);
        }
      }
    }
    __writecr8(v3);
  }
  return result;
}
