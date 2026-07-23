/*
 * XREFs of RtlpInterlockedPopEntrySList @ 0x1403FEFF0
 * Callers:
 *     CcSetDirtyInMask @ 0x140222250 (CcSetDirtyInMask.c)
 *     PfFileInfoNotify @ 0x14025C410 (PfFileInfoNotify.c)
 *     IoAllocateMdl @ 0x1402656A0 (IoAllocateMdl.c)
 *     PfFbLogEntryReserve @ 0x14026C2A8 (PfFbLogEntryReserve.c)
 *     ExAllocateFromNPagedLookasideList @ 0x14026E044 (ExAllocateFromNPagedLookasideList.c)
 *     EtwpAdjustTraceBuffers @ 0x14027AF00 (EtwpAdjustTraceBuffers.c)
 *     ExAllocateHeapPool @ 0x14028C7B0 (ExAllocateHeapPool.c)
 *     IopAllocateIrpPrivate @ 0x14028F830 (IopAllocateIrpPrivate.c)
 *     EtwpEventWriteFull @ 0x140293740 (EtwpEventWriteFull.c)
 *     MiGetPage @ 0x1402A5AB0 (MiGetPage.c)
 *     MiGetInPageSupportBlock @ 0x1402B7934 (MiGetInPageSupportBlock.c)
 *     CcAllocateWorkQueueEntry @ 0x1402C5B84 (CcAllocateWorkQueueEntry.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x1402CDD78 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     MiStoreWriteModifiedPages @ 0x1402D3334 (MiStoreWriteModifiedPages.c)
 *     MiReclaimUnusedUltraMdlMaps @ 0x1402F3070 (MiReclaimUnusedUltraMdlMaps.c)
 *     MiAdjustCachedStacks @ 0x1402F3230 (MiAdjustCachedStacks.c)
 *     MmCreateKernelStack @ 0x1402F8A30 (MmCreateKernelStack.c)
 *     ?StAcquireReadContext@?$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z @ 0x1403030A0 (-StAcquireReadContext@-$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z.c)
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x140303940 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 *     MiSlistGetFreePage @ 0x140320DC0 (MiSlistGetFreePage.c)
 *     IoMakeAssociatedIrpPriv @ 0x1403266B8 (IoMakeAssociatedIrpPriv.c)
 *     MiCreateDecayPfn @ 0x14033BC68 (MiCreateDecayPfn.c)
 *     PfTFullEventListAdd @ 0x14034361C (PfTFullEventListAdd.c)
 *     KeAllocateInterrupt @ 0x1403752FC (KeAllocateInterrupt.c)
 *     MiEmptyKernelStackCache @ 0x1403CCCA4 (MiEmptyKernelStackCache.c)
 *     sub_1403DA850 @ 0x1403DA850 (sub_1403DA850.c)
 *     HalpDmaAcquireBufferMappings @ 0x1404C16B8 (HalpDmaAcquireBufferMappings.c)
 *     HalpMemoryErrorDeferredRecovery @ 0x1404CB000 (HalpMemoryErrorDeferredRecovery.c)
 *     HalpPmemErrorDeferredRecovery @ 0x1404CB218 (HalpPmemErrorDeferredRecovery.c)
 *     HvlpAcquireHypercallPage @ 0x1404ED430 (HvlpAcquireHypercallPage.c)
 *     MiFreeClonePool @ 0x140555420 (MiFreeClonePool.c)
 *     MiInsertPteTracker @ 0x140559940 (MiInsertPteTracker.c)
 *     MiGetUltraMdlContext @ 0x140559EC8 (MiGetUltraMdlContext.c)
 *     MiGetTransitionPageHeatList @ 0x14055A188 (MiGetTransitionPageHeatList.c)
 *     ObpDeferPushRefDerefInfo @ 0x14055F788 (ObpDeferPushRefDerefInfo.c)
 *     RtlpStdGetSpaceForTrace @ 0x140580F60 (RtlpStdGetSpaceForTrace.c)
 *     EtwpGetStackLookasideListEntry @ 0x1405A1740 (EtwpGetStackLookasideListEntry.c)
 *     EtwpQueueStackWalkApc @ 0x1405A1770 (EtwpQueueStackWalkApc.c)
 *     EtwpTraceStackKey @ 0x1405A884C (EtwpTraceStackKey.c)
 *     EtwpCovSampLookasidePop @ 0x1405A9FAC (EtwpCovSampLookasidePop.c)
 *     EtwpTraceLastBranchRecord @ 0x1405AAD54 (EtwpTraceLastBranchRecord.c)
 *     RtlpGetRegistryHandle @ 0x1405E1A94 (RtlpGetRegistryHandle.c)
 *     CmpAllocateKeyControlBlock @ 0x1405E816C (CmpAllocateKeyControlBlock.c)
 *     CmpBounceContextStart @ 0x1405E8CC0 (CmpBounceContextStart.c)
 *     CmpCreateKeyBody @ 0x1405ED820 (CmpCreateKeyBody.c)
 *     CmpCallCallBacksEx @ 0x1405F1510 (CmpCallCallBacksEx.c)
 *     IopAllocateMiniCompletionPacket @ 0x14060EE3C (IopAllocateMiniCompletionPacket.c)
 *     IopCreateFile @ 0x140615C80 (IopCreateFile.c)
 *     FsRtlAllocateExtraCreateParameterList @ 0x140617270 (FsRtlAllocateExtraCreateParameterList.c)
 *     ObReferenceObjectByNameEx @ 0x14062DD40 (ObReferenceObjectByNameEx.c)
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x14062F3D0 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 *     IopAllocRealFileObject @ 0x140678970 (IopAllocRealFileObject.c)
 *     ObCreateObjectEx @ 0x140679FF0 (ObCreateObjectEx.c)
 *     AlpcpSendMessage @ 0x1406851E0 (AlpcpSendMessage.c)
 *     ObOpenObjectByNameEx @ 0x140694650 (ObOpenObjectByNameEx.c)
 *     ObpCaptureObjectName @ 0x140695030 (ObpCaptureObjectName.c)
 *     NtQueryValueKey @ 0x140695B10 (NtQueryValueKey.c)
 *     CmpExpandPathInfo @ 0x1406E52EC (CmpExpandPathInfo.c)
 *     WdipSemFastAllocate @ 0x1407765E0 (WdipSemFastAllocate.c)
 *     PfFbBufferListCleanup @ 0x1408DD7FC (PfFbBufferListCleanup.c)
 *     VmAccessFault @ 0x14092B360 (VmAccessFault.c)
 *     VeAllocatePoolWithTagPriority @ 0x1409D15C0 (VeAllocatePoolWithTagPriority.c)
 *     ViGrowPoolAllocation @ 0x1409D2474 (ViGrowPoolAllocation.c)
 *     VfPoolCheckForLeaks @ 0x1409DD110 (VfPoolCheckForLeaks.c)
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
