/*
 * XREFs of MiUnmapPageInHyperSpaceWorker @ 0x1402BEDD0
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
 *     MiMakePageAvoidRead @ 0x1402BBEE0 (MiMakePageAvoidRead.c)
 *     MiPfnShareCountIsZero @ 0x1402BF640 (MiPfnShareCountIsZero.c)
 *     MiWsleFlush @ 0x1402C1F50 (MiWsleFlush.c)
 *     MiWsleFree @ 0x1402C2AD0 (MiWsleFree.c)
 *     MiMakeProtoTransition @ 0x1402CBAF0 (MiMakeProtoTransition.c)
 *     MiInitializeImageProtos @ 0x1402E4474 (MiInitializeImageProtos.c)
 *     MiReplaceTransitionPage @ 0x1402E7704 (MiReplaceTransitionPage.c)
 *     MiCompletePrivateZeroFault @ 0x140321F70 (MiCompletePrivateZeroFault.c)
 *     MiGetPageChain @ 0x140323D70 (MiGetPageChain.c)
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
 *     MiFlushHyperSpace @ 0x1403D3284 (MiFlushHyperSpace.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiUnmapPageInHyperSpaceWorker(unsigned __int64 a1, unsigned __int8 a2)
{
  unsigned __int64 v2; // rbx
  struct _KPRCB *CurrentPrcb; // rdi
  _QWORD *v4; // rcx
  unsigned int v5; // r9d
  unsigned __int64 v6; // rsi
  _QWORD *MmInternal; // rdx
  __int64 result; // rax
  struct _KPRCB *v9; // r10
  _DWORD *SchedulerAssist; // r9
  bool v11; // zf

  v2 = a2;
  CurrentPrcb = KeGetCurrentPrcb();
  v4 = (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v5 = 0;
  v6 = 0LL;
  MmInternal = CurrentPrcb->MmInternal;
  if ( MmInternal )
  {
    MmInternal[1543] = 0LL;
  }
  else
  {
    v6 = (unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL;
    v5 = ((__int64)CurrentPrcb->HyperPte & 0xFFF) + 1;
  }
  result = ZeroPte;
  *v4 = ZeroPte;
  if ( !MmInternal )
  {
    if ( v5 == 64 )
    {
      MiFlushHyperSpace();
      v5 = 0;
    }
    result = v6 | v5;
    CurrentPrcb->HyperPte = (void *)result;
  }
  if ( (_BYTE)v2 != 17 )
  {
    result = (unsigned int)KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v2 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          v9 = KeGetCurrentPrcb();
          SchedulerAssist = v9->SchedulerAssist;
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
          v11 = ((unsigned int)result & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= result;
          if ( v11 )
            result = KiRemoveSystemWorkPriorityKick(v9);
        }
      }
    }
    __writecr8(v2);
  }
  return result;
}
