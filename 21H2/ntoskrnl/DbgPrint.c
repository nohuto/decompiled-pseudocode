/*
 * XREFs of DbgPrint @ 0x140272780
 * Callers:
 *     SepCreateTokenEx @ 0x1402A6428 (SepCreateTokenEx.c)
 *     CcInitializeCacheMapEx @ 0x1402D2E10 (CcInitializeCacheMapEx.c)
 *     CcInsertIntoCleanSharedCacheMapList @ 0x1402FD5C8 (CcInsertIntoCleanSharedCacheMapList.c)
 *     x86BiosExecuteInterruptShadowed @ 0x140396530 (x86BiosExecuteInterruptShadowed.c)
 *     HalpAcpiGetFacsMapping @ 0x1403BA938 (HalpAcpiGetFacsMapping.c)
 *     HalReturnToFirmware @ 0x1404BE3E0 (HalReturnToFirmware.c)
 *     RtlpAllocateHeap @ 0x140588D60 (RtlpAllocateHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x1405896C0 (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x140589AB0 (RtlpCreateSplitBlock.c)
 *     RtlpCreateUCREntry @ 0x14058A1D4 (RtlpCreateUCREntry.c)
 *     RtlpDeCommitFreeBlock @ 0x14058A314 (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x14058AB68 (RtlpFindAndCommitPages.c)
 *     RtlpInsertFreeBlock @ 0x14058B5DC (RtlpInsertFreeBlock.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x14058EED8 (RtlpTraceDatabaseInternalAdd.c)
 *     RtlpFindUCREntry @ 0x140593F40 (RtlpFindUCREntry.c)
 *     RtlpPopulateListIndex @ 0x1405943AC (RtlpPopulateListIndex.c)
 *     CmpPostApc @ 0x1405FBC50 (CmpPostApc.c)
 *     RtlpQueryRegistryValues @ 0x140635878 (RtlpQueryRegistryValues.c)
 *     CmNotifyRunDown @ 0x140641570 (CmNotifyRunDown.c)
 *     SepFilterToken @ 0x1406CA87C (SepFilterToken.c)
 *     SepDuplicateToken @ 0x14071B1E0 (SepDuplicateToken.c)
 *     IopQueryLegacyBusInformation @ 0x14073E6A8 (IopQueryLegacyBusInformation.c)
 *     IopLoadDriver @ 0x140740A28 (IopLoadDriver.c)
 *     RtlCreateHeap @ 0x140768D20 (RtlCreateHeap.c)
 *     IopUnloadDriver @ 0x140769958 (IopUnloadDriver.c)
 *     RtlDestroyHeap @ 0x140772CF0 (RtlDestroyHeap.c)
 *     ExpSetPendingUILanguage @ 0x14078C230 (ExpSetPendingUILanguage.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x1407903C8 (RtlpMuiRegLoadRegistryInfo.c)
 *     HalpTimerWatchdogLogReset @ 0x1407D5284 (HalpTimerWatchdogLogReset.c)
 *     CmpPostApcRunDown @ 0x14086A2F0 (CmpPostApcRunDown.c)
 *     KeSetTracepoint @ 0x1408BC4D0 (KeSetTracepoint.c)
 *     ObpShutdownCloseHandleProcedure @ 0x1408DCA10 (ObpShutdownCloseHandleProcedure.c)
 *     RtlLCIDToCultureName @ 0x140916180 (RtlLCIDToCultureName.c)
 *     PopWriteHeaderPages @ 0x140991C94 (PopWriteHeaderPages.c)
 *     PoBroadcastSystemState @ 0x1409932E0 (PoBroadcastSystemState.c)
 *     HalpMapNvsArea @ 0x140999E28 (HalpMapNvsArea.c)
 *     PopWriteImageHeader @ 0x1409B2C50 (PopWriteImageHeader.c)
 *     ViIsBTSSupported @ 0x1409D9628 (ViIsBTSSupported.c)
 *     HalpAcpiFindRsdp @ 0x140A65290 (HalpAcpiFindRsdp.c)
 *     HalpAcpiTableCacheInit @ 0x140A65690 (HalpAcpiTableCacheInit.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x140272800 (vDbgPrintExWithPrefixInternal.c)
 */

ULONG DbgPrint(PCSTR Format, ...)
{
  va_list va; // [rsp+58h] [rbp+10h] BYREF

  va_start(va, Format);
  return vDbgPrintExWithPrefixInternal((void *)&Src, 0x65u, 3u, va, 1);
}
