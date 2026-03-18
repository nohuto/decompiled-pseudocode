/*
 * XREFs of MiUnmapPageInHyperSpaceWorker @ 0x14021E940
 * Callers:
 *     MiCopyToUserVa @ 0x140234540 (MiCopyToUserVa.c)
 *     MiCopySinglePage @ 0x1402516D4 (MiCopySinglePage.c)
 *     MiClearContainingMapping @ 0x14026335C (MiClearContainingMapping.c)
 *     MiCompletePrivateZeroFault @ 0x140271B70 (MiCompletePrivateZeroFault.c)
 *     MiGetPageChain @ 0x140274030 (MiGetPageChain.c)
 *     MiPfnShareCountIsZero @ 0x1402A98E0 (MiPfnShareCountIsZero.c)
 *     MiWsleFree @ 0x1402AB620 (MiWsleFree.c)
 *     MiDecrementAndInsertStandbyPages @ 0x1402AF7F0 (MiDecrementAndInsertStandbyPages.c)
 *     MiDeletePteRun @ 0x1402C5480 (MiDeletePteRun.c)
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
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiFlushHyperSpace @ 0x140330C14 (MiFlushHyperSpace.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiUnmapPageInHyperSpaceWorker(unsigned __int64 a1, unsigned __int8 a2, int a3)
{
  unsigned __int64 v3; // rbp
  struct _KPRCB *CurrentPrcb; // r14
  unsigned __int64 *v5; // rdi
  unsigned int v6; // r15d
  unsigned __int64 v7; // r12
  _QWORD *MmInternal; // rsi
  unsigned __int64 v9; // rbx
  __int64 result; // rax
  struct _KPRCB *v11; // r10
  _DWORD *SchedulerAssist; // r9
  bool v13; // zf

  v3 = a2;
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
    result = MiPteInShadowRange(v5);
    if ( !(_DWORD)result )
    {
LABEL_5:
      *v5 = v9;
      goto LABEL_6;
    }
    if ( !(unsigned int)MiPteHasShadow() )
    {
      result = (__int64)KeGetCurrentThread();
      if ( (*(_DWORD *)(*(_QWORD *)(result + 184) + 2172LL) & 0x1000) != 0 && (ZeroPte & 1) != 0 )
      {
        result = 0x8000000000000000uLL;
        v9 = ZeroPte | 0x8000000000000000uLL;
      }
      goto LABEL_5;
    }
    if ( !HIBYTE(word_140C4DE88) && (ZeroPte & 1) != 0 )
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
          v11 = KeGetCurrentPrcb();
          SchedulerAssist = v11->SchedulerAssist;
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
          v13 = ((unsigned int)result & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= result;
          if ( v13 )
            result = KiRemoveSystemWorkPriorityKick(v11);
        }
      }
    }
    __writecr8(v3);
  }
  return result;
}
