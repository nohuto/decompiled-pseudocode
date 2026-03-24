/*
 * XREFs of MiUnmapPageInHyperSpaceWorker @ 0x140348910
 * Callers:
 *     MiCompletePrivateZeroFault @ 0x140210850 (MiCompletePrivateZeroFault.c)
 *     MiDeletePteRun @ 0x140236C60 (MiDeletePteRun.c)
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
 *     MiPfnShareCountIsZero @ 0x140326190 (MiPfnShareCountIsZero.c)
 *     MiWsleFree @ 0x140327ED0 (MiWsleFree.c)
 *     MiDecrementAndInsertStandbyPages @ 0x14032C3E0 (MiDecrementAndInsertStandbyPages.c)
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
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiFlushHyperSpace @ 0x1402D2C80 (MiFlushHyperSpace.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MiUnmapPageInHyperSpaceWorker(unsigned __int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rbp
  struct _KPRCB *CurrentPrcb; // r14
  unsigned __int64 *v5; // rdi
  unsigned int v6; // r15d
  unsigned __int64 v7; // r12
  _QWORD *MmInternal; // rsi
  unsigned __int64 v9; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // r8
  struct _KPRCB *v12; // r10
  _DWORD *SchedulerAssist; // r9
  bool v14; // zf

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
    LOBYTE(CurrentThread) = ZeroPte;
    *v5 = ZeroPte;
  }
  else
  {
    v9 = ZeroPte;
    LODWORD(CurrentThread) = MiPteInShadowRange(v5, a2);
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
    if ( !HIBYTE(word_140C4E008) && (ZeroPte & 1) != 0 )
      v9 = ZeroPte | 0x8000000000000000uLL;
    *v5 = v9;
    LOBYTE(CurrentThread) = MiWritePteShadow((__int64)v5, v9, v11);
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
          v12 = KeGetCurrentPrcb();
          SchedulerAssist = v12->SchedulerAssist;
          LODWORD(CurrentThread) = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
          v14 = ((unsigned int)CurrentThread & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= (unsigned int)CurrentThread;
          if ( v14 )
            LOBYTE(CurrentThread) = KiRemoveSystemWorkPriorityKick(v12);
        }
      }
    }
    __writecr8(v3);
  }
  return (char)CurrentThread;
}
