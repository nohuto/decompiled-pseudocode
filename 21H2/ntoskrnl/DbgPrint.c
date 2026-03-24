/*
 * XREFs of DbgPrint @ 0x140284160
 * Callers:
 *     SepCreateTokenEx @ 0x140201AA0 (SepCreateTokenEx.c)
 *     CcInitializeCacheMapEx @ 0x14022E5C0 (CcInitializeCacheMapEx.c)
 *     CcInsertIntoCleanSharedCacheMapList @ 0x1402F2878 (CcInsertIntoCleanSharedCacheMapList.c)
 *     x86BiosExecuteInterruptShadowed @ 0x1403963E0 (x86BiosExecuteInterruptShadowed.c)
 *     HalpAcpiGetFacsMapping @ 0x1403BA7C8 (HalpAcpiGetFacsMapping.c)
 *     HalReturnToFirmware @ 0x1404BE1A0 (HalReturnToFirmware.c)
 *     RtlpAllocateHeap @ 0x140588B30 (RtlpAllocateHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x140589490 (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x140589880 (RtlpCreateSplitBlock.c)
 *     RtlpCreateUCREntry @ 0x140589FA4 (RtlpCreateUCREntry.c)
 *     RtlpDeCommitFreeBlock @ 0x14058A0E4 (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x14058A938 (RtlpFindAndCommitPages.c)
 *     RtlpInsertFreeBlock @ 0x14058B3AC (RtlpInsertFreeBlock.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x14058ECA8 (RtlpTraceDatabaseInternalAdd.c)
 *     RtlpFindUCREntry @ 0x140593D10 (RtlpFindUCREntry.c)
 *     RtlpPopulateListIndex @ 0x14059417C (RtlpPopulateListIndex.c)
 *     SepFilterToken @ 0x1405DB0FC (SepFilterToken.c)
 *     RtlpQueryRegistryValues @ 0x140640A68 (RtlpQueryRegistryValues.c)
 *     CmNotifyRunDown @ 0x14064C750 (CmNotifyRunDown.c)
 *     CmpPostApc @ 0x14069CB80 (CmpPostApc.c)
 *     SepDuplicateToken @ 0x140703E00 (SepDuplicateToken.c)
 *     IopQueryLegacyBusInformation @ 0x14073E4E8 (IopQueryLegacyBusInformation.c)
 *     IopLoadDriver @ 0x140740868 (IopLoadDriver.c)
 *     RtlCreateHeap @ 0x140768B60 (RtlCreateHeap.c)
 *     IopUnloadDriver @ 0x140769798 (IopUnloadDriver.c)
 *     RtlDestroyHeap @ 0x140772B30 (RtlDestroyHeap.c)
 *     ExpSetPendingUILanguage @ 0x14078C070 (ExpSetPendingUILanguage.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x140794628 (RtlpMuiRegLoadRegistryInfo.c)
 *     HalpTimerWatchdogLogReset @ 0x1407D5114 (HalpTimerWatchdogLogReset.c)
 *     CmpPostApcRunDown @ 0x14086A190 (CmpPostApcRunDown.c)
 *     KeSetTracepoint @ 0x1408BC370 (KeSetTracepoint.c)
 *     ObpShutdownCloseHandleProcedure @ 0x1408DC8B0 (ObpShutdownCloseHandleProcedure.c)
 *     RtlLCIDToCultureName @ 0x140916020 (RtlLCIDToCultureName.c)
 *     PopWriteHeaderPages @ 0x140990C94 (PopWriteHeaderPages.c)
 *     PoBroadcastSystemState @ 0x1409922E0 (PoBroadcastSystemState.c)
 *     HalpMapNvsArea @ 0x140998E28 (HalpMapNvsArea.c)
 *     PopWriteImageHeader @ 0x1409B1D20 (PopWriteImageHeader.c)
 *     ViIsBTSSupported @ 0x1409D8628 (ViIsBTSSupported.c)
 *     HalpAcpiFindRsdp @ 0x140A64290 (HalpAcpiFindRsdp.c)
 *     HalpAcpiTableCacheInit @ 0x140A64690 (HalpAcpiTableCacheInit.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x1402841E0 (vDbgPrintExWithPrefixInternal.c)
 */

ULONG DbgPrint(PCSTR Format, ...)
{
  va_list va; // [rsp+58h] [rbp+10h] BYREF

  va_start(va, Format);
  return vDbgPrintExWithPrefixInternal((void *)&Src, va, 1);
}
