/*
 * XREFs of DbgPrint @ 0x14033C6D0
 * Callers:
 *     CcInitializeCacheMapEx @ 0x14022D790 (CcInitializeCacheMapEx.c)
 *     SepCreateTokenEx @ 0x1402D874C (SepCreateTokenEx.c)
 *     CcInsertIntoCleanSharedCacheMapList @ 0x1402FF48C (CcInsertIntoCleanSharedCacheMapList.c)
 *     x86BiosExecuteInterruptShadowed @ 0x140392EE0 (x86BiosExecuteInterruptShadowed.c)
 *     HalpAcpiGetFacsMapping @ 0x1403B64F8 (HalpAcpiGetFacsMapping.c)
 *     HalReturnToFirmware @ 0x1404B8BE0 (HalReturnToFirmware.c)
 *     RtlpAllocateHeap @ 0x140583090 (RtlpAllocateHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x1405839F0 (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x140583DE0 (RtlpCreateSplitBlock.c)
 *     RtlpCreateUCREntry @ 0x140584504 (RtlpCreateUCREntry.c)
 *     RtlpDeCommitFreeBlock @ 0x140584644 (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x140584E98 (RtlpFindAndCommitPages.c)
 *     RtlpInsertFreeBlock @ 0x14058590C (RtlpInsertFreeBlock.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x140589178 (RtlpTraceDatabaseInternalAdd.c)
 *     RtlpFindUCREntry @ 0x14058E134 (RtlpFindUCREntry.c)
 *     RtlpPopulateListIndex @ 0x14058E5A0 (RtlpPopulateListIndex.c)
 *     SepDuplicateToken @ 0x1406014E0 (SepDuplicateToken.c)
 *     RtlpQueryRegistryValues @ 0x1406823A0 (RtlpQueryRegistryValues.c)
 *     CmpPostApc @ 0x1406CC2F0 (CmpPostApc.c)
 *     SepFilterToken @ 0x1407030D4 (SepFilterToken.c)
 *     CmNotifyRunDown @ 0x140706CB0 (CmNotifyRunDown.c)
 *     IopQueryLegacyBusInformation @ 0x140723B7C (IopQueryLegacyBusInformation.c)
 *     IopLoadDriver @ 0x140725EF8 (IopLoadDriver.c)
 *     RtlCreateHeap @ 0x140752DF0 (RtlCreateHeap.c)
 *     IopUnloadDriver @ 0x140754A50 (IopUnloadDriver.c)
 *     RtlDestroyHeap @ 0x14075E030 (RtlDestroyHeap.c)
 *     ExpSetPendingUILanguage @ 0x140777880 (ExpSetPendingUILanguage.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x140793D14 (RtlpMuiRegLoadRegistryInfo.c)
 *     HalpTimerWatchdogLogReset @ 0x1407BEFE4 (HalpTimerWatchdogLogReset.c)
 *     CmpPostApcRunDown @ 0x140865820 (CmpPostApcRunDown.c)
 *     KeSetTracepoint @ 0x1408B7B50 (KeSetTracepoint.c)
 *     ObpShutdownCloseHandleProcedure @ 0x1408D7F40 (ObpShutdownCloseHandleProcedure.c)
 *     RtlLCIDToCultureName @ 0x1409119B0 (RtlLCIDToCultureName.c)
 *     PopWriteHeaderPages @ 0x14098D48C (PopWriteHeaderPages.c)
 *     PoBroadcastSystemState @ 0x14098E5D0 (PoBroadcastSystemState.c)
 *     HalpMapNvsArea @ 0x140994498 (HalpMapNvsArea.c)
 *     PopWriteImageHeader @ 0x1409AE050 (PopWriteImageHeader.c)
 *     ViIsBTSSupported @ 0x1409D55B8 (ViIsBTSSupported.c)
 *     HalpAcpiFindRsdp @ 0x140A5C870 (HalpAcpiFindRsdp.c)
 *     HalpAcpiTableCacheInit @ 0x140A5CC70 (HalpAcpiTableCacheInit.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x14033C750 (vDbgPrintExWithPrefixInternal.c)
 */

ULONG DbgPrint(PCSTR Format, ...)
{
  va_list va; // [rsp+58h] [rbp+10h] BYREF

  va_start(va, Format);
  return vDbgPrintExWithPrefixInternal((void *)&Src, 0x65u, 3u, va, 1);
}
