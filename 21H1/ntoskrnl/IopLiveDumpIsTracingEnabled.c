/*
 * XREFs of IopLiveDumpIsTracingEnabled @ 0x140502E90
 * Callers:
 *     IopLiveDumpTrace @ 0x140502EF8 (IopLiveDumpTrace.c)
 *     IopLiveDumpTraceAllocationFromVMMemoryPartitionFailure @ 0x140502F3C (IopLiveDumpTraceAllocationFromVMMemoryPartitionFailure.c)
 *     IopLiveDumpTraceBufferAllocation @ 0x140502FD8 (IopLiveDumpTraceBufferAllocation.c)
 *     IopLiveDumpTraceBufferEstimation @ 0x140503104 (IopLiveDumpTraceBufferEstimation.c)
 *     IopLiveDumpTraceCaptureDumpDataBufferingDuration @ 0x140503290 (IopLiveDumpTraceCaptureDumpDataBufferingDuration.c)
 *     IopLiveDumpTraceCaptureGenerateIptSecondaryDataDuration @ 0x1405033D0 (IopLiveDumpTraceCaptureGenerateIptSecondaryDataDuration.c)
 *     IopLiveDumpTraceCaptureHvlCollectLiveDumpDuration @ 0x140503500 (IopLiveDumpTraceCaptureHvlCollectLiveDumpDuration.c)
 *     IopLiveDumpTraceCaptureMemoryPages @ 0x140503640 (IopLiveDumpTraceCaptureMemoryPages.c)
 *     IopLiveDumpTraceCaptureProcessorContextDuration @ 0x140503740 (IopLiveDumpTraceCaptureProcessorContextDuration.c)
 *     IopLiveDumpTraceCorralProcessorsDuration @ 0x140503880 (IopLiveDumpTraceCorralProcessorsDuration.c)
 *     IopLiveDumpTraceDumpFileWriteEnd @ 0x140503A44 (IopLiveDumpTraceDumpFileWriteEnd.c)
 *     IopLiveDumpTraceEstimatedAndAllocatedPageCount @ 0x140503B70 (IopLiveDumpTraceEstimatedAndAllocatedPageCount.c)
 *     IopLiveDumpTraceInterfaceEnd @ 0x140503C5C (IopLiveDumpTraceInterfaceEnd.c)
 *     IopLiveDumpTraceInterfaceStart @ 0x140503D04 (IopLiveDumpTraceInterfaceStart.c)
 *     IopLiveDumpTraceMarkImportantDumpDataDuration @ 0x140503D68 (IopLiveDumpTraceMarkImportantDumpDataDuration.c)
 *     IopLiveDumpTraceMarkRequiredDumpDataDuration @ 0x140503EA8 (IopLiveDumpTraceMarkRequiredDumpDataDuration.c)
 *     IopLiveDumpTraceMirroringPhase0End @ 0x140503FE8 (IopLiveDumpTraceMirroringPhase0End.c)
 *     IopLiveDumpTraceMirroringPhase1End @ 0x140504040 (IopLiveDumpTraceMirroringPhase1End.c)
 *     IopLiveDumpTraceMirroringStart @ 0x140504098 (IopLiveDumpTraceMirroringStart.c)
 *     IopLiveDumpTraceMmDuplicateMemoryFailure @ 0x1405040F8 (IopLiveDumpTraceMmDuplicateMemoryFailure.c)
 *     IopLiveDumpTraceOpenVMMemoryPartitionFailure @ 0x1405041B0 (IopLiveDumpTraceOpenVMMemoryPartitionFailure.c)
 *     IopLiveDumpTracePopulateBitmapForDumpDuration @ 0x14050424C (IopLiveDumpTracePopulateBitmapForDumpDuration.c)
 *     IopLiveDumpTraceQueryHvlDumpSizeFailure @ 0x1405043C0 (IopLiveDumpTraceQueryHvlDumpSizeFailure.c)
 *     IopLiveDumpTraceRemovePagesCallbackFailure @ 0x140504444 (IopLiveDumpTraceRemovePagesCallbackFailure.c)
 *     IopLiveDumpTraceSystemQuiesceEnd @ 0x1405044D8 (IopLiveDumpTraceSystemQuiesceEnd.c)
 *     IopLiveDumpTraceSystemQuiesceStart @ 0x140504530 (IopLiveDumpTraceSystemQuiesceStart.c)
 *     IopLiveDumpTraceUncorralProcessorsDuration @ 0x140504588 (IopLiveDumpTraceUncorralProcessorsDuration.c)
 *     IoCaptureLiveDump @ 0x140891CF8 (IoCaptureLiveDump.c)
 *     IopLiveDumpCallRemovePagesCallbacks @ 0x1409A78F0 (IopLiveDumpCallRemovePagesCallbacks.c)
 * Callees:
 *     <none>
 */

bool IopLiveDumpIsTracingEnabled()
{
  return IopLiveDumpEtwRegHandle && IopLiveDumpEtwEnabled;
}
