/*
 * XREFs of DbgPrint @ 0x1403647B0
 * Callers:
 *     CcInitializeCacheMapEx @ 0x140291D10 (CcInitializeCacheMapEx.c)
 *     SepCreateTokenEx @ 0x1402FB674 (SepCreateTokenEx.c)
 *     CcInsertIntoCleanSharedCacheMapList @ 0x14030EA14 (CcInsertIntoCleanSharedCacheMapList.c)
 *     x86BiosExecuteInterruptShadowed @ 0x140395F70 (x86BiosExecuteInterruptShadowed.c)
 *     HalpAcpiGetFacsMapping @ 0x1403B9DC8 (HalpAcpiGetFacsMapping.c)
 *     HalReturnToFirmware @ 0x1404BC7E0 (HalReturnToFirmware.c)
 *     RtlpAllocateHeap @ 0x140587120 (RtlpAllocateHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x140587A80 (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x140587E70 (RtlpCreateSplitBlock.c)
 *     RtlpCreateUCREntry @ 0x140588594 (RtlpCreateUCREntry.c)
 *     RtlpDeCommitFreeBlock @ 0x1405886D4 (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x140588F28 (RtlpFindAndCommitPages.c)
 *     RtlpInsertFreeBlock @ 0x14058999C (RtlpInsertFreeBlock.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x14058D298 (RtlpTraceDatabaseInternalAdd.c)
 *     RtlpFindUCREntry @ 0x1405922C8 (RtlpFindUCREntry.c)
 *     RtlpPopulateListIndex @ 0x140592734 (RtlpPopulateListIndex.c)
 *     SepFilterToken @ 0x1405D7198 (SepFilterToken.c)
 *     SepDuplicateToken @ 0x140601150 (SepDuplicateToken.c)
 *     RtlpQueryRegistryValues @ 0x14066AD7C (RtlpQueryRegistryValues.c)
 *     CmNotifyRunDown @ 0x1406836AC (CmNotifyRunDown.c)
 *     CmpPostApc @ 0x1406BDA00 (CmpPostApc.c)
 *     IopLoadDriver @ 0x140737DD0 (IopLoadDriver.c)
 *     RtlCreateHeap @ 0x1407658C0 (RtlCreateHeap.c)
 *     IopUnloadDriver @ 0x140766018 (IopUnloadDriver.c)
 *     IopQueryLegacyBusInformation @ 0x14076B92C (IopQueryLegacyBusInformation.c)
 *     RtlDestroyHeap @ 0x14076E9B0 (RtlDestroyHeap.c)
 *     ExpSetPendingUILanguage @ 0x140788290 (ExpSetPendingUILanguage.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x1407A2DF4 (RtlpMuiRegLoadRegistryInfo.c)
 *     HalpTimerWatchdogLogReset @ 0x1407D0CE4 (HalpTimerWatchdogLogReset.c)
 *     CmpPostApcRunDown @ 0x14086C560 (CmpPostApcRunDown.c)
 *     KeSetTracepoint @ 0x1408BEBD0 (KeSetTracepoint.c)
 *     ObpShutdownCloseHandleProcedure @ 0x1408DF0F0 (ObpShutdownCloseHandleProcedure.c)
 *     RtlLCIDToCultureName @ 0x140918870 (RtlLCIDToCultureName.c)
 *     PopWriteHeaderPages @ 0x140993C94 (PopWriteHeaderPages.c)
 *     PoBroadcastSystemState @ 0x1409952E0 (PoBroadcastSystemState.c)
 *     HalpMapNvsArea @ 0x14099BC38 (HalpMapNvsArea.c)
 *     PopWriteImageHeader @ 0x1409B4E20 (PopWriteImageHeader.c)
 *     ViIsBTSSupported @ 0x1409DB638 (ViIsBTSSupported.c)
 *     HalpAcpiFindRsdp @ 0x140A62C70 (HalpAcpiFindRsdp.c)
 *     HalpAcpiTableCacheInit @ 0x140A63070 (HalpAcpiTableCacheInit.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x140364830 (vDbgPrintExWithPrefixInternal.c)
 */

ULONG DbgPrint(PCSTR Format, ...)
{
  va_list va; // [rsp+58h] [rbp+10h] BYREF

  va_start(va, Format);
  return vDbgPrintExWithPrefixInternal((void *)&Src, 0x65u, 3u, va, 1);
}
