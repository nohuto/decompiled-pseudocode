/*
 * XREFs of _NtAllocateVirtualMemory@24 @ 0x4B2F2AE0
 * Callers:
 *     _RtlCreateMemoryZone@12 @ 0x4B2AAAA0 (_RtlCreateMemoryZone@12.c)
 *     @RtlpExtendLowFragHeapSegment@12 @ 0x4B2AE2E8 (@RtlpExtendLowFragHeapSegment@12.c)
 *     @RtlpCreateLowFragHeap@4 @ 0x4B2AEF38 (@RtlpCreateLowFragHeap@4.c)
 *     @RtlpCommitBlock@8 @ 0x4B2AF586 (@RtlpCommitBlock@8.c)
 *     _RtlpExtendHeap@8 @ 0x4B2C0405 (_RtlpExtendHeap@8.c)
 *     _RtlpFindAndCommitPages@8 @ 0x4B2C0640 (_RtlpFindAndCommitPages@8.c)
 *     _RtlCreateHeap@24 @ 0x4B2C0F40 (_RtlCreateHeap@24.c)
 *     _RtlInitializeResource@4 @ 0x4B2DFA70 (_RtlInitializeResource@4.c)
 *     _RtlpAddDebugInfoToCriticalSection@4 @ 0x4B2DFCB0 (_RtlpAddDebugInfoToCriticalSection@4.c)
 *     _RtlAllocateHandle@8 @ 0x4B2E0600 (_RtlAllocateHandle@8.c)
 *     _LdrEnsureMrdataHeapExists@0 @ 0x4B2E1C77 (_LdrEnsureMrdataHeapExists@0.c)
 *     _RtlpInitializeHeapSegment@32 @ 0x4B2E1EBD (_RtlpInitializeHeapSegment@32.c)
 *     _RtlpAllocDeallocQueryBuffer@16 @ 0x4B2EB25A (_RtlpAllocDeallocQueryBuffer@16.c)
 *     _EtwpAllocateTraceBufferPool@4 @ 0x4B2F0625 (_EtwpAllocateTraceBufferPool@4.c)
 *     _EtwpAllocateFreeBuffers@8 @ 0x4B2F06F0 (_EtwpAllocateFreeBuffers@8.c)
 *     _RtlCreateUserStack@24 @ 0x4B2F2050 (_RtlCreateUserStack@24.c)
 *     _RtlpHpAllocVirtBlockCommitFirst@16 @ 0x4B307828 (_RtlpHpAllocVirtBlockCommitFirst@16.c)
 *     _RtlCreateProcessReflection@24 @ 0x4B335060 (_RtlCreateProcessReflection@24.c)
 *     _RtlpProcessReflectionStartup@4 @ 0x4B3354D0 (_RtlpProcessReflectionStartup@4.c)
 *     _RtlCreateQueryDebugBuffer@8 @ 0x4B336810 (_RtlCreateQueryDebugBuffer@8.c)
 *     _RtlpCommitQueryDebugInfo@8 @ 0x4B3378A8 (_RtlpCommitQueryDebugInfo@8.c)
 *     _RtlpCopyRemoteDebugInformation@4 @ 0x4B33790E (_RtlpCopyRemoteDebugInformation@4.c)
 *     _WerpAllocateAndInitializeSid@44 @ 0x4B33AE87 (_WerpAllocateAndInitializeSid@44.c)
 *     _GetShipAssertBuffer@0 @ 0x4B33B3F0 (_GetShipAssertBuffer@0.c)
 *     _WerEscalationLazyInit@0 @ 0x4B33B780 (_WerEscalationLazyInit@0.c)
 *     _RtlResetStackOverflow@0 @ 0x4B33BCA7 (_RtlResetStackOverflow@0.c)
 *     _RtlExtendMemoryZone@8 @ 0x4B34D780 (_RtlExtendMemoryZone@8.c)
 *     _RtlValidateProcessHeaps@0 @ 0x4B3574F0 (_RtlValidateProcessHeaps@0.c)
 *     _RtlpAllocateTags@8 @ 0x4B3575E6 (_RtlpAllocateTags@8.c)
 *     _RtlpHeapPerformCrossProcessQuery@8 @ 0x4B358165 (_RtlpHeapPerformCrossProcessQuery@8.c)
 *     _RtlpValidateHeap@8 @ 0x4B360697 (_RtlpValidateHeap@8.c)
 *     _RtlpValidateHeapHeaders@8 @ 0x4B360B86 (_RtlpValidateHeapHeaders@8.c)
 *     _RtlStdInitializeStackDatabase@16 @ 0x4B368EA0 (_RtlStdInitializeStackDatabase@16.c)
 *     _RtlpStdExtendLowerWatermark@8 @ 0x4B36923A (_RtlpStdExtendLowerWatermark@8.c)
 *     _RtlpStdExtendUpperWatermark@8 @ 0x4B3692D9 (_RtlpStdExtendUpperWatermark@8.c)
 *     _RtlpTraceDatabaseAllocate@12 @ 0x4B36A468 (_RtlpTraceDatabaseAllocate@12.c)
 *     _EtwpInitializeCompression@4 @ 0x4B383119 (_EtwpInitializeCompression@4.c)
 *     _PssNtCaptureSnapshot@16 @ 0x4B386310 (_PssNtCaptureSnapshot@16.c)
 *     _PsspCaptureAuxiliaryPages@20 @ 0x4B38738C (_PsspCaptureAuxiliaryPages@20.c)
 *     _PsspCaptureVaSpaceInformation@12 @ 0x4B387B12 (_PsspCaptureVaSpaceInformation@12.c)
 *     _PsspCaptureHandleInformation@12 @ 0x4B387CF4 (_PsspCaptureHandleInformation@12.c)
 *     _PsspCaptureThreadInformation@16 @ 0x4B388568 (_PsspCaptureThreadInformation@16.c)
 *     _PsspDuplicateSnapshotLocalToRemote@16 @ 0x4B388F93 (_PsspDuplicateSnapshotLocalToRemote@16.c)
 *     _PsspDuplicateSnapshotRemoteToRemote@20 @ 0x4B389365 (_PsspDuplicateSnapshotRemoteToRemote@20.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl NtAllocateVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        ULONG_PTR ZeroBits,
        PSIZE_T RegionSize,
        ULONG AllocationType,
        ULONG Protect)
{
  return Wow64SystemServiceCall();
}
