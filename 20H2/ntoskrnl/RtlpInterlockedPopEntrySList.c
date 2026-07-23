/*
 * XREFs of RtlpInterlockedPopEntrySList @ 0x1404052C0
 * Callers:
 *     ExAllocateFromNPagedLookasideList @ 0x140205EF4 (ExAllocateFromNPagedLookasideList.c)
 *     EtwpEventWriteFull @ 0x14020E300 (EtwpEventWriteFull.c)
 *     IopAllocateIrpPrivate @ 0x1402113E0 (IopAllocateIrpPrivate.c)
 *     ExAllocateHeapPool @ 0x140212080 (ExAllocateHeapPool.c)
 *     MiGetInPageSupportBlock @ 0x1402320A0 (MiGetInPageSupportBlock.c)
 *     PfFbLogEntryReserve @ 0x14024496C (PfFbLogEntryReserve.c)
 *     IoAllocateMdl @ 0x140248500 (IoAllocateMdl.c)
 *     CcAllocateWorkQueueEntry @ 0x14024AF80 (CcAllocateWorkQueueEntry.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x1402553C4 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     ?StAcquireReadContext@?$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z @ 0x14025CBD8 (-StAcquireReadContext@-$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z.c)
 *     MiAdjustCachedStacks @ 0x140265838 (MiAdjustCachedStacks.c)
 *     MiGetPage @ 0x140274DF0 (MiGetPage.c)
 *     PfFileInfoNotify @ 0x1402A0D50 (PfFileInfoNotify.c)
 *     MmCreateKernelStack @ 0x1402AD970 (MmCreateKernelStack.c)
 *     CcSetDirtyInMask @ 0x1402B96C0 (CcSetDirtyInMask.c)
 *     IoMakeAssociatedIrpPriv @ 0x1402F3C98 (IoMakeAssociatedIrpPriv.c)
 *     MiSlistGetFreePage @ 0x140304260 (MiSlistGetFreePage.c)
 *     MiReclaimUnusedUltraMdlMaps @ 0x140313058 (MiReclaimUnusedUltraMdlMaps.c)
 *     PfTFullEventListAdd @ 0x140314A4C (PfTFullEventListAdd.c)
 *     EtwpAdjustTraceBuffers @ 0x1403212B0 (EtwpAdjustTraceBuffers.c)
 *     MiStoreWriteModifiedPages @ 0x140342AB0 (MiStoreWriteModifiedPages.c)
 *     MiCreateDecayPfn @ 0x140351B30 (MiCreateDecayPfn.c)
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1403585C0 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 *     KeAllocateInterrupt @ 0x14037728C (KeAllocateInterrupt.c)
 *     MiEmptyKernelStackCache @ 0x1403CF934 (MiEmptyKernelStackCache.c)
 *     sub_1403DD4E0 @ 0x1403DD4E0 (sub_1403DD4E0.c)
 *     HalpDmaAcquireBufferMappings @ 0x1404C4BD8 (HalpDmaAcquireBufferMappings.c)
 *     HalpMemoryErrorDeferredRecovery @ 0x1404CE560 (HalpMemoryErrorDeferredRecovery.c)
 *     HalpPmemErrorDeferredRecovery @ 0x1404CE778 (HalpPmemErrorDeferredRecovery.c)
 *     HvlpAcquireHypercallPage @ 0x1404F0CA0 (HvlpAcquireHypercallPage.c)
 *     MiFreeClonePool @ 0x140558DF0 (MiFreeClonePool.c)
 *     MiInsertPteTracker @ 0x14055D310 (MiInsertPteTracker.c)
 *     MiGetUltraMdlContext @ 0x14055D898 (MiGetUltraMdlContext.c)
 *     MiGetTransitionPageHeatList @ 0x14055DB58 (MiGetTransitionPageHeatList.c)
 *     ObpDeferPushRefDerefInfo @ 0x140563158 (ObpDeferPushRefDerefInfo.c)
 *     RtlpStdGetSpaceForTrace @ 0x1405848C0 (RtlpStdGetSpaceForTrace.c)
 *     EtwpGetStackLookasideListEntry @ 0x1405A51E0 (EtwpGetStackLookasideListEntry.c)
 *     EtwpQueueStackWalkApc @ 0x1405A5210 (EtwpQueueStackWalkApc.c)
 *     EtwpTraceStackKey @ 0x1405AC3AC (EtwpTraceStackKey.c)
 *     EtwpCovSampLookasidePop @ 0x1405ADB0C (EtwpCovSampLookasidePop.c)
 *     EtwpTraceLastBranchRecord @ 0x1405AE8B4 (EtwpTraceLastBranchRecord.c)
 *     ObReferenceObjectByNameEx @ 0x1405E566C (ObReferenceObjectByNameEx.c)
 *     AlpcpSendMessage @ 0x1405EBDA0 (AlpcpSendMessage.c)
 *     IopCreateFile @ 0x1405FBD80 (IopCreateFile.c)
 *     IopAllocRealFileObject @ 0x140600550 (IopAllocRealFileObject.c)
 *     ObCreateObjectEx @ 0x140601B80 (ObCreateObjectEx.c)
 *     ObOpenObjectByNameEx @ 0x14060CAF0 (ObOpenObjectByNameEx.c)
 *     ObpCaptureObjectName @ 0x14060D4D0 (ObpCaptureObjectName.c)
 *     CmpCreateKeyBody @ 0x14060E320 (CmpCreateKeyBody.c)
 *     CmpCallCallBacksEx @ 0x140614140 (CmpCallCallBacksEx.c)
 *     NtQueryValueKey @ 0x140618560 (NtQueryValueKey.c)
 *     RtlpGetRegistryHandle @ 0x14066D824 (RtlpGetRegistryHandle.c)
 *     CmpAllocateKeyControlBlock @ 0x140672D2C (CmpAllocateKeyControlBlock.c)
 *     CmpBounceContextStart @ 0x140677470 (CmpBounceContextStart.c)
 *     FsRtlAllocateExtraCreateParameterList @ 0x140690930 (FsRtlAllocateExtraCreateParameterList.c)
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x1406A8190 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 *     CmpExpandPathInfo @ 0x1406BC1AC (CmpExpandPathInfo.c)
 *     IopAllocateMiniCompletionPacket @ 0x14070AE4C (IopAllocateMiniCompletionPacket.c)
 *     WdipSemFastAllocate @ 0x140784BE0 (WdipSemFastAllocate.c)
 *     PfFbBufferListCleanup @ 0x1408E363C (PfFbBufferListCleanup.c)
 *     VmAccessFault @ 0x140931190 (VmAccessFault.c)
 *     VeAllocatePoolWithTagPriority @ 0x1409D75E0 (VeAllocatePoolWithTagPriority.c)
 *     ViGrowPoolAllocation @ 0x1409D8494 (ViGrowPoolAllocation.c)
 *     VfPoolCheckForLeaks @ 0x1409E3130 (VfPoolCheckForLeaks.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __stdcall RtlpInterlockedPopEntrySList(PSLIST_HEADER ListHead)
{
  _SLIST_ENTRY *v1; // r8
  unsigned __int64 Alignment; // rbx
  _SLIST_HEADER v3; // rt0

  _m_prefetchw(ListHead);
  while ( 1 )
  {
    v1 = (_SLIST_ENTRY *)(ListHead->Region & 0xFFFFFFFFFFFFFFF0uLL);
    if ( !v1 )
      break;
    Alignment = ListHead->Alignment;
    v3 = *ListHead;
    LOWORD(Alignment) = ListHead->Alignment - 1;
    if ( _InterlockedCompareExchange128(
           (volatile signed __int64 *)ListHead,
           (signed __int64)v1->Next,
           Alignment,
           (signed __int64 *)&v3) )
    {
      return v1;
    }
  }
  _InterlockedOr64((volatile signed __int64 *)ListHead, 0LL);
  return v1;
}
