/*
 * XREFs of RtlpInterlockedPopEntrySList @ 0x1403FDD60
 * Callers:
 *     MiGetPage @ 0x140212FA0 (MiGetPage.c)
 *     MiGetInPageSupportBlock @ 0x140224CB4 (MiGetInPageSupportBlock.c)
 *     CcAllocateWorkQueueEntry @ 0x140232D54 (CcAllocateWorkQueueEntry.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14023AF48 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     MiReclaimUnusedUltraMdlMaps @ 0x14023EFB4 (MiReclaimUnusedUltraMdlMaps.c)
 *     MiAdjustCachedStacks @ 0x14023FF30 (MiAdjustCachedStacks.c)
 *     ExAllocateHeapPool @ 0x14024FF10 (ExAllocateHeapPool.c)
 *     IopAllocateIrpPrivate @ 0x140252FB0 (IopAllocateIrpPrivate.c)
 *     EtwpEventWriteFull @ 0x140256EC0 (EtwpEventWriteFull.c)
 *     CcSetDirtyInMask @ 0x14027B2A0 (CcSetDirtyInMask.c)
 *     PfFileInfoNotify @ 0x1402B5440 (PfFileInfoNotify.c)
 *     IoAllocateMdl @ 0x1402BE6D0 (IoAllocateMdl.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1402C1284 (ExAllocateFromNPagedLookasideList.c)
 *     PfFbLogEntryReserve @ 0x1402D5C48 (PfFbLogEntryReserve.c)
 *     MiSlistGetFreePage @ 0x1402E9F80 (MiSlistGetFreePage.c)
 *     IoMakeAssociatedIrpPriv @ 0x1402ECD88 (IoMakeAssociatedIrpPriv.c)
 *     MiCreateDecayPfn @ 0x1402FF368 (MiCreateDecayPfn.c)
 *     PfTFullEventListAdd @ 0x140305B6C (PfTFullEventListAdd.c)
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x140309490 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 *     ?StAcquireReadContext@?$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z @ 0x14030A418 (-StAcquireReadContext@-$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z.c)
 *     EtwpAdjustTraceBuffers @ 0x140312AD0 (EtwpAdjustTraceBuffers.c)
 *     MiStoreWriteModifiedPages @ 0x14034DC5C (MiStoreWriteModifiedPages.c)
 *     MmCreateKernelStack @ 0x140354A10 (MmCreateKernelStack.c)
 *     KeAllocateInterrupt @ 0x1403744EC (KeAllocateInterrupt.c)
 *     MiEmptyKernelStackCache @ 0x1403CBE84 (MiEmptyKernelStackCache.c)
 *     sub_1403D9A10 @ 0x1403D9A10 (sub_1403D9A10.c)
 *     HalpDmaAcquireBufferMappings @ 0x1404C1248 (HalpDmaAcquireBufferMappings.c)
 *     HalpMemoryErrorDeferredRecovery @ 0x1404CAB50 (HalpMemoryErrorDeferredRecovery.c)
 *     HalpPmemErrorDeferredRecovery @ 0x1404CAD68 (HalpPmemErrorDeferredRecovery.c)
 *     HvlpAcquireHypercallPage @ 0x1404ECDE0 (HvlpAcquireHypercallPage.c)
 *     MiFreeClonePool @ 0x140554DD0 (MiFreeClonePool.c)
 *     MiInsertPteTracker @ 0x1405592F0 (MiInsertPteTracker.c)
 *     MiGetUltraMdlContext @ 0x140559878 (MiGetUltraMdlContext.c)
 *     MiGetTransitionPageHeatList @ 0x140559B38 (MiGetTransitionPageHeatList.c)
 *     ObpDeferPushRefDerefInfo @ 0x14055F138 (ObpDeferPushRefDerefInfo.c)
 *     RtlpStdGetSpaceForTrace @ 0x1405807E0 (RtlpStdGetSpaceForTrace.c)
 *     EtwpGetStackLookasideListEntry @ 0x1405A1050 (EtwpGetStackLookasideListEntry.c)
 *     EtwpQueueStackWalkApc @ 0x1405A1080 (EtwpQueueStackWalkApc.c)
 *     EtwpTraceStackKey @ 0x1405A815C (EtwpTraceStackKey.c)
 *     EtwpCovSampLookasidePop @ 0x1405A98BC (EtwpCovSampLookasidePop.c)
 *     EtwpTraceLastBranchRecord @ 0x1405AA664 (EtwpTraceLastBranchRecord.c)
 *     ObOpenObjectByNameEx @ 0x1405EB110 (ObOpenObjectByNameEx.c)
 *     ObpCaptureObjectName @ 0x1405EBAF0 (ObpCaptureObjectName.c)
 *     NtQueryValueKey @ 0x1405EC5D0 (NtQueryValueKey.c)
 *     IopAllocRealFileObject @ 0x140600890 (IopAllocRealFileObject.c)
 *     ObCreateObjectEx @ 0x140601F10 (ObCreateObjectEx.c)
 *     AlpcpSendMessage @ 0x14060D070 (AlpcpSendMessage.c)
 *     RtlpGetRegistryHandle @ 0x140617BCC (RtlpGetRegistryHandle.c)
 *     CmpAllocateKeyControlBlock @ 0x14061D78C (CmpAllocateKeyControlBlock.c)
 *     CmpBounceContextStart @ 0x14061E2E0 (CmpBounceContextStart.c)
 *     CmpCreateKeyBody @ 0x140622E40 (CmpCreateKeyBody.c)
 *     CmpCallCallBacksEx @ 0x140626B30 (CmpCallCallBacksEx.c)
 *     IopAllocateMiniCompletionPacket @ 0x14064406C (IopAllocateMiniCompletionPacket.c)
 *     ObReferenceObjectByNameEx @ 0x14064B8F0 (ObReferenceObjectByNameEx.c)
 *     IopCreateFile @ 0x14066D230 (IopCreateFile.c)
 *     FsRtlAllocateExtraCreateParameterList @ 0x14066E820 (FsRtlAllocateExtraCreateParameterList.c)
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x1406B7920 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 *     CmpExpandPathInfo @ 0x1406C58DC (CmpExpandPathInfo.c)
 *     WdipSemFastAllocate @ 0x1407741D0 (WdipSemFastAllocate.c)
 *     PfFbBufferListCleanup @ 0x1408DC48C (PfFbBufferListCleanup.c)
 *     VmAccessFault @ 0x14092A0B0 (VmAccessFault.c)
 *     VeAllocatePoolWithTagPriority @ 0x1409D15B0 (VeAllocatePoolWithTagPriority.c)
 *     ViGrowPoolAllocation @ 0x1409D2414 (ViGrowPoolAllocation.c)
 *     VfPoolCheckForLeaks @ 0x1409DD0B0 (VfPoolCheckForLeaks.c)
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
