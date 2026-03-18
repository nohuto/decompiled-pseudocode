/*
 * XREFs of IopLiveDumpIsTracingEnabled @ 0x1405034E0
 * Callers:
 *     IopLiveDumpTrace @ 0x140503548 (IopLiveDumpTrace.c)
 *     IopLiveDumpTraceAllocationFromVMMemoryPartitionFailure @ 0x14050358C (IopLiveDumpTraceAllocationFromVMMemoryPartitionFailure.c)
 *     IopLiveDumpTraceBufferAllocation @ 0x140503628 (IopLiveDumpTraceBufferAllocation.c)
 *     IopLiveDumpTraceBufferEstimation @ 0x140503754 (IopLiveDumpTraceBufferEstimation.c)
 *     IopLiveDumpTraceCaptureDumpDataBufferingDuration @ 0x1405038E0 (IopLiveDumpTraceCaptureDumpDataBufferingDuration.c)
 *     IopLiveDumpTraceCaptureGenerateIptSecondaryDataDuration @ 0x140503A20 (IopLiveDumpTraceCaptureGenerateIptSecondaryDataDuration.c)
 *     IopLiveDumpTraceCaptureHvlCollectLiveDumpDuration @ 0x140503B50 (IopLiveDumpTraceCaptureHvlCollectLiveDumpDuration.c)
 *     IopLiveDumpTraceCaptureMemoryPages @ 0x140503C90 (IopLiveDumpTraceCaptureMemoryPages.c)
 *     IopLiveDumpTraceCaptureProcessorContextDuration @ 0x140503D90 (IopLiveDumpTraceCaptureProcessorContextDuration.c)
 *     IopLiveDumpTraceCorralProcessorsDuration @ 0x140503ED0 (IopLiveDumpTraceCorralProcessorsDuration.c)
 *     IopLiveDumpTraceDumpFileWriteEnd @ 0x140504094 (IopLiveDumpTraceDumpFileWriteEnd.c)
 *     IopLiveDumpTraceEstimatedAndAllocatedPageCount @ 0x1405041C0 (IopLiveDumpTraceEstimatedAndAllocatedPageCount.c)
 *     IopLiveDumpTraceInterfaceEnd @ 0x1405042AC (IopLiveDumpTraceInterfaceEnd.c)
 *     IopLiveDumpTraceInterfaceStart @ 0x140504354 (IopLiveDumpTraceInterfaceStart.c)
 *     IopLiveDumpTraceMarkImportantDumpDataDuration @ 0x1405043B8 (IopLiveDumpTraceMarkImportantDumpDataDuration.c)
 *     IopLiveDumpTraceMarkRequiredDumpDataDuration @ 0x1405044F8 (IopLiveDumpTraceMarkRequiredDumpDataDuration.c)
 *     IopLiveDumpTraceMirroringPhase0End @ 0x140504638 (IopLiveDumpTraceMirroringPhase0End.c)
 *     IopLiveDumpTraceMirroringPhase1End @ 0x140504690 (IopLiveDumpTraceMirroringPhase1End.c)
 *     IopLiveDumpTraceMirroringStart @ 0x1405046E8 (IopLiveDumpTraceMirroringStart.c)
 *     IopLiveDumpTraceMmDuplicateMemoryFailure @ 0x140504748 (IopLiveDumpTraceMmDuplicateMemoryFailure.c)
 *     IopLiveDumpTraceOpenVMMemoryPartitionFailure @ 0x140504800 (IopLiveDumpTraceOpenVMMemoryPartitionFailure.c)
 *     IopLiveDumpTracePopulateBitmapForDumpDuration @ 0x14050489C (IopLiveDumpTracePopulateBitmapForDumpDuration.c)
 *     IopLiveDumpTraceQueryHvlDumpSizeFailure @ 0x140504A10 (IopLiveDumpTraceQueryHvlDumpSizeFailure.c)
 *     IopLiveDumpTraceRemovePagesCallbackFailure @ 0x140504A94 (IopLiveDumpTraceRemovePagesCallbackFailure.c)
 *     IopLiveDumpTraceSystemQuiesceEnd @ 0x140504B28 (IopLiveDumpTraceSystemQuiesceEnd.c)
 *     IopLiveDumpTraceSystemQuiesceStart @ 0x140504B80 (IopLiveDumpTraceSystemQuiesceStart.c)
 *     IopLiveDumpTraceUncorralProcessorsDuration @ 0x140504BD8 (IopLiveDumpTraceUncorralProcessorsDuration.c)
 *     IoCaptureLiveDump @ 0x140893018 (IoCaptureLiveDump.c)
 *     IopLiveDumpCallRemovePagesCallbacks @ 0x1409A8750 (IopLiveDumpCallRemovePagesCallbacks.c)
 * Callees:
 *     <none>
 */

bool IopLiveDumpIsTracingEnabled()
{
  return IopLiveDumpEtwRegHandle && IopLiveDumpEtwEnabled;
}
