/*
 * XREFs of DbgPrint @ 0x140361340
 * Callers:
 *     SepCreateTokenEx @ 0x14026E3A0 (SepCreateTokenEx.c)
 *     CcInitializeCacheMapEx @ 0x1402C05C0 (CcInitializeCacheMapEx.c)
 *     CcInsertIntoCleanSharedCacheMapList @ 0x14033BD8C (CcInsertIntoCleanSharedCacheMapList.c)
 *     x86BiosExecuteInterruptShadowed @ 0x140393AB0 (x86BiosExecuteInterruptShadowed.c)
 *     HalpAcpiGetFacsMapping @ 0x1403B7328 (HalpAcpiGetFacsMapping.c)
 *     HalReturnToFirmware @ 0x1404B92C0 (HalReturnToFirmware.c)
 *     RtlpAllocateHeap @ 0x1405837C0 (RtlpAllocateHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x140584120 (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x140584510 (RtlpCreateSplitBlock.c)
 *     RtlpCreateUCREntry @ 0x140584C34 (RtlpCreateUCREntry.c)
 *     RtlpDeCommitFreeBlock @ 0x140584D74 (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x1405855C8 (RtlpFindAndCommitPages.c)
 *     RtlpInsertFreeBlock @ 0x14058603C (RtlpInsertFreeBlock.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x140589868 (RtlpTraceDatabaseInternalAdd.c)
 *     RtlpFindUCREntry @ 0x14058E824 (RtlpFindUCREntry.c)
 *     RtlpPopulateListIndex @ 0x14058EC90 (RtlpPopulateListIndex.c)
 *     RtlpQueryRegistryValues @ 0x1405DFA64 (RtlpQueryRegistryValues.c)
 *     SepFilterToken @ 0x140632E90 (SepFilterToken.c)
 *     SepDuplicateToken @ 0x1406795C0 (SepDuplicateToken.c)
 *     CmNotifyRunDown @ 0x1406B0DF0 (CmNotifyRunDown.c)
 *     CmpPostApc @ 0x1406ED5F0 (CmpPostApc.c)
 *     IopLoadDriver @ 0x140729340 (IopLoadDriver.c)
 *     RtlCreateHeap @ 0x140756C80 (RtlCreateHeap.c)
 *     IopUnloadDriver @ 0x1407573D8 (IopUnloadDriver.c)
 *     IopQueryLegacyBusInformation @ 0x14075D1CC (IopQueryLegacyBusInformation.c)
 *     RtlDestroyHeap @ 0x1407603A0 (RtlDestroyHeap.c)
 *     ExpSetPendingUILanguage @ 0x140779C90 (ExpSetPendingUILanguage.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x140789AE4 (RtlpMuiRegLoadRegistryInfo.c)
 *     HalpTimerWatchdogLogReset @ 0x1407C24E4 (HalpTimerWatchdogLogReset.c)
 *     CmpPostApcRunDown @ 0x140866B40 (CmpPostApcRunDown.c)
 *     KeSetTracepoint @ 0x1408B8E70 (KeSetTracepoint.c)
 *     ObpShutdownCloseHandleProcedure @ 0x1408D92B0 (ObpShutdownCloseHandleProcedure.c)
 *     RtlLCIDToCultureName @ 0x140912D30 (RtlLCIDToCultureName.c)
 *     PopWriteHeaderPages @ 0x14098DCA4 (PopWriteHeaderPages.c)
 *     PoBroadcastSystemState @ 0x14098F324 (PoBroadcastSystemState.c)
 *     HalpMapNvsArea @ 0x140995AD8 (HalpMapNvsArea.c)
 *     PopWriteImageHeader @ 0x1409AEEB0 (PopWriteImageHeader.c)
 *     ViIsBTSSupported @ 0x1409D5618 (ViIsBTSSupported.c)
 *     HalpAcpiFindRsdp @ 0x140A5B910 (HalpAcpiFindRsdp.c)
 *     HalpAcpiTableCacheInit @ 0x140A5BD10 (HalpAcpiTableCacheInit.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x1403613C0 (vDbgPrintExWithPrefixInternal.c)
 */

ULONG DbgPrint(PCSTR Format, ...)
{
  va_list va; // [rsp+58h] [rbp+10h] BYREF

  va_start(va, Format);
  return vDbgPrintExWithPrefixInternal((void *)&Src, 0x65u, 3u, va, 1);
}
