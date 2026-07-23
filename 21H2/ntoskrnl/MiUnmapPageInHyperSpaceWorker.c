/*
 * XREFs of MiUnmapPageInHyperSpaceWorker @ 0x140353660
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
 *     MiDeletePteRun @ 0x1402DB4B0 (MiDeletePteRun.c)
 *     MmOutSwapProcess @ 0x1402EECE4 (MmOutSwapProcess.c)
 *     KiInSwapProcesses @ 0x1402EED88 (KiInSwapProcesses.c)
 *     MiFreePagesFromMdl @ 0x14030A23C (MiFreePagesFromMdl.c)
 *     MiFlushCacheForAttributeChange @ 0x14030E598 (MiFlushCacheForAttributeChange.c)
 *     MiCopyToUserVa @ 0x140319288 (MiCopyToUserVa.c)
 *     MiWaitForInPageComplete @ 0x140325F40 (MiWaitForInPageComplete.c)
 *     MiPfnShareCountIsZero @ 0x140330EE0 (MiPfnShareCountIsZero.c)
 *     MiWsleFree @ 0x140332C20 (MiWsleFree.c)
 *     MiDecrementAndInsertStandbyPages @ 0x140337130 (MiDecrementAndInsertStandbyPages.c)
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
 *     MiFlushHyperSpace @ 0x140251200 (MiFlushHyperSpace.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MiUnmapPageInHyperSpaceWorker(unsigned __int64 a1, unsigned __int8 a2, int a3)
{
  unsigned __int64 v3; // rbp
  struct _KPRCB *CurrentPrcb; // r14
  unsigned __int64 *v5; // rdi
  unsigned int v6; // r15d
  unsigned __int64 v7; // r12
  _QWORD *MmInternal; // rsi
  unsigned __int64 v9; // rbx
  struct _KTHREAD *CurrentThread; // rax
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
    LOBYTE(CurrentThread) = ZeroPte;
    *v5 = ZeroPte;
  }
  else
  {
    v9 = ZeroPte;
    LODWORD(CurrentThread) = MiPteInShadowRange(v5);
    if ( !(_DWORD)CurrentThread )
    {
LABEL_5:
      *v5 = v9;
      goto LABEL_6;
    }
    if ( !(unsigned int)MiPteHasShadow() )
    {
      CurrentThread = KeGetCurrentThread();
      if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (ZeroPte & 1) != 0 )
      {
        LOBYTE(CurrentThread) = 0;
        v9 = ZeroPte | 0x8000000000000000uLL;
      }
      goto LABEL_5;
    }
    if ( !HIBYTE(word_140C4E048) && (ZeroPte & 1) != 0 )
      v9 = ZeroPte | 0x8000000000000000uLL;
    *v5 = v9;
    LOBYTE(CurrentThread) = MiWritePteShadow((__int64)v5, v9);
  }
LABEL_6:
  if ( !MmInternal )
  {
    if ( v6 == 64 )
    {
      MiFlushHyperSpace();
      v6 = 0;
    }
    CurrentThread = (struct _KTHREAD *)(v7 | v6);
    CurrentPrcb->HyperPte = CurrentThread;
  }
  if ( (_BYTE)v3 != 17 )
  {
    LOBYTE(CurrentThread) = KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        LOBYTE(CurrentThread) = KeGetCurrentIrql();
        if ( (unsigned __int8)CurrentThread <= 0xFu
          && (unsigned __int8)v3 <= 0xFu
          && (unsigned __int8)CurrentThread >= 2u )
        {
          v11 = KeGetCurrentPrcb();
          SchedulerAssist = v11->SchedulerAssist;
          LODWORD(CurrentThread) = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
          v13 = ((unsigned int)CurrentThread & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= (unsigned int)CurrentThread;
          if ( v13 )
            LOBYTE(CurrentThread) = KiRemoveSystemWorkPriorityKick(v11);
        }
      }
    }
    __writecr8(v3);
  }
  return (char)CurrentThread;
}
