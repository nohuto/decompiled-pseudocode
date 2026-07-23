/*
 * XREFs of ZwAllocateVirtualMemory @ 0x18009D3B0
 * Callers:
 *     RtlExtendMemoryZone @ 0x180001A70 (RtlExtendMemoryZone.c)
 *     LdrEnsureMrdataHeapExists @ 0x18000787C (LdrEnsureMrdataHeapExists.c)
 *     RtlCreateHeap @ 0x18000A8B0 (RtlCreateHeap.c)
 *     RtlpInitializeHeapSegment @ 0x18000BB54 (RtlpInitializeHeapSegment.c)
 *     RtlpExtendHeap @ 0x18000E348 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x18000E618 (RtlpFindAndCommitPages.c)
 *     RtlpCommitBlock @ 0x18000ED0C (RtlpCommitBlock.c)
 *     RtlInitializeResource @ 0x1800112E0 (RtlInitializeResource.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x180011840 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlpCreateLowFragHeap @ 0x180044828 (RtlpCreateLowFragHeap.c)
 *     RtlpAllocDeallocQueryBuffer @ 0x180045F6C (RtlpAllocDeallocQueryBuffer.c)
 *     RtlAllocateHandle @ 0x18004CAB0 (RtlAllocateHandle.c)
 *     EtwpAllocateTraceBufferPool @ 0x180056294 (EtwpAllocateTraceBufferPool.c)
 *     EtwpAllocateFreeBuffers @ 0x1800563A0 (EtwpAllocateFreeBuffers.c)
 *     RtlpExtendLowFragHeapSegment @ 0x180071908 (RtlpExtendLowFragHeapSegment.c)
 *     RtlCreateUserStack @ 0x180076310 (RtlCreateUserStack.c)
 *     RtlCreateMemoryZone @ 0x18007A760 (RtlCreateMemoryZone.c)
 *     EtwpInitializeCompression @ 0x180087A68 (EtwpInitializeCompression.c)
 *     RtlpHpAllocVirtBlockCommitFirst @ 0x18009C898 (RtlpHpAllocVirtBlockCommitFirst.c)
 *     RtlCreateProcessReflection @ 0x1800D5E00 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1800D6390 (RtlpProcessReflectionStartup.c)
 *     RtlCreateQueryDebugBuffer @ 0x1800D7680 (RtlCreateQueryDebugBuffer.c)
 *     RtlpCommitQueryDebugInfo @ 0x1800D8C88 (RtlpCommitQueryDebugInfo.c)
 *     RtlpCopyRemoteDebugInformation @ 0x1800D8D20 (RtlpCopyRemoteDebugInformation.c)
 *     WerpAllocateAndInitializeSid @ 0x1800DDB2C (WerpAllocateAndInitializeSid.c)
 *     GetShipAssertBuffer @ 0x1800DE024 (GetShipAssertBuffer.c)
 *     WerEscalationLazyInit @ 0x1800DE408 (WerEscalationLazyInit.c)
 *     RtlResetStackOverflow @ 0x1800DEA54 (RtlResetStackOverflow.c)
 *     RtlValidateProcessHeaps @ 0x1800F34C0 (RtlValidateProcessHeaps.c)
 *     RtlpAllocateTags @ 0x1800F3600 (RtlpAllocateTags.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800F42E4 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlpValidateHeap @ 0x1800FA784 (RtlpValidateHeap.c)
 *     RtlpValidateHeapHeaders @ 0x1800FAD64 (RtlpValidateHeapHeaders.c)
 *     RtlStdInitializeStackDatabase @ 0x180101330 (RtlStdInitializeStackDatabase.c)
 *     RtlpStdExtendLowerWatermark @ 0x1801017D4 (RtlpStdExtendLowerWatermark.c)
 *     RtlpStdExtendUpperWatermark @ 0x1801018B4 (RtlpStdExtendUpperWatermark.c)
 *     RtlpTraceDatabaseAllocate @ 0x180102DE0 (RtlpTraceDatabaseAllocate.c)
 *     PssNtCaptureSnapshot @ 0x180113E50 (PssNtCaptureSnapshot.c)
 *     PsspCaptureAuxiliaryPages @ 0x1801151EC (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureVaSpaceInformation @ 0x18011557C (PsspCaptureVaSpaceInformation.c)
 *     PsspCaptureHandleInformation @ 0x180115D14 (PsspCaptureHandleInformation.c)
 *     PsspCaptureThreadInformation @ 0x18011677C (PsspCaptureThreadInformation.c)
 *     PsspDuplicateSnapshotLocalToRemote @ 0x180117418 (PsspDuplicateSnapshotLocalToRemote.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x180117980 (PsspDuplicateSnapshotRemoteToRemote.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAllocateVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        ULONG_PTR ZeroBits,
        PSIZE_T RegionSize,
        ULONG AllocationType,
        ULONG Protect)
{
  NTSTATUS result; // eax

  result = 24;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
