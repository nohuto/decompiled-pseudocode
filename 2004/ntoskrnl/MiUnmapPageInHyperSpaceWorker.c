/*
 * XREFs of MiUnmapPageInHyperSpaceWorker @ 0x1402385A0
 * Callers:
 *     MiPfnShareCountIsZero @ 0x140235440 (MiPfnShareCountIsZero.c)
 *     MiDecrementAndInsertStandbyPages @ 0x140236A50 (MiDecrementAndInsertStandbyPages.c)
 *     MiDeletePteRun @ 0x14023FDD0 (MiDeletePteRun.c)
 *     MiCopyToUserVa @ 0x1402548D0 (MiCopyToUserVa.c)
 *     MiWaitForInPageComplete @ 0x14025D620 (MiWaitForInPageComplete.c)
 *     MiClearContainingMapping @ 0x14026B83C (MiClearContainingMapping.c)
 *     KiInSwapProcesses @ 0x140280CC8 (KiInSwapProcesses.c)
 *     MmOutSwapProcess @ 0x140280DDC (MmOutSwapProcess.c)
 *     MiCompletePrivateZeroFault @ 0x1402A2830 (MiCompletePrivateZeroFault.c)
 *     MiGetPageChain @ 0x1402A4CF0 (MiGetPageChain.c)
 *     MiWsleFree @ 0x1402B3AB0 (MiWsleFree.c)
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
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiFlushHyperSpace @ 0x14035FD80 (MiFlushHyperSpace.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
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
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct _KPRCB *v15; // r10
  _DWORD *SchedulerAssist; // r9
  bool v17; // zf

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
    if ( !(unsigned int)MiPteHasShadow(v12, v11, v13, v14) )
    {
      result = (__int64)KeGetCurrentThread();
      if ( (*(_DWORD *)(*(_QWORD *)(result + 184) + 2172LL) & 0x1000) != 0 && (ZeroPte & 1) != 0 )
      {
        result = 0x8000000000000000uLL;
        v9 = ZeroPte | 0x8000000000000000uLL;
      }
      goto LABEL_5;
    }
    if ( !HIBYTE(word_140C4DE08) && (ZeroPte & 1) != 0 )
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
          v15 = KeGetCurrentPrcb();
          SchedulerAssist = v15->SchedulerAssist;
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
          v17 = ((unsigned int)result & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= result;
          if ( v17 )
            result = KiRemoveSystemWorkPriorityKick(v15);
        }
      }
    }
    __writecr8(v3);
  }
  return result;
}
