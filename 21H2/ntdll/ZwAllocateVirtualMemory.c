/*
 * XREFs of ZwAllocateVirtualMemory @ 0x18009D900
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
 *     RtlpCreateLowFragHeap @ 0x1800447E8 (RtlpCreateLowFragHeap.c)
 *     RtlpAllocDeallocQueryBuffer @ 0x180045F2C (RtlpAllocDeallocQueryBuffer.c)
 *     EtwpAllocateTraceBufferPool @ 0x180048984 (EtwpAllocateTraceBufferPool.c)
 *     EtwpAllocateFreeBuffers @ 0x180048A90 (EtwpAllocateFreeBuffers.c)
 *     RtlAllocateHandle @ 0x180059AC0 (RtlAllocateHandle.c)
 *     RtlpExtendLowFragHeapSegment @ 0x180072938 (RtlpExtendLowFragHeapSegment.c)
 *     RtlCreateUserStack @ 0x180077340 (RtlCreateUserStack.c)
 *     RtlCreateMemoryZone @ 0x18007B790 (RtlCreateMemoryZone.c)
 *     EtwpInitializeCompression @ 0x180088068 (EtwpInitializeCompression.c)
 *     RtlpHpAllocVirtBlockCommitFirst @ 0x18009CDC8 (RtlpHpAllocVirtBlockCommitFirst.c)
 *     RtlCreateProcessReflection @ 0x1800D5B70 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1800D6100 (RtlpProcessReflectionStartup.c)
 *     RtlCreateQueryDebugBuffer @ 0x1800D73F0 (RtlCreateQueryDebugBuffer.c)
 *     RtlpCommitQueryDebugInfo @ 0x1800D89F8 (RtlpCommitQueryDebugInfo.c)
 *     RtlpCopyRemoteDebugInformation @ 0x1800D8A90 (RtlpCopyRemoteDebugInformation.c)
 *     WerpAllocateAndInitializeSid @ 0x1800DD89C (WerpAllocateAndInitializeSid.c)
 *     GetShipAssertBuffer @ 0x1800DDD94 (GetShipAssertBuffer.c)
 *     WerEscalationLazyInit @ 0x1800DE178 (WerEscalationLazyInit.c)
 *     RtlResetStackOverflow @ 0x1800DE7C4 (RtlResetStackOverflow.c)
 *     RtlValidateProcessHeaps @ 0x1800F3310 (RtlValidateProcessHeaps.c)
 *     RtlpAllocateTags @ 0x1800F3450 (RtlpAllocateTags.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800F4134 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlpValidateHeap @ 0x1800FA5D4 (RtlpValidateHeap.c)
 *     RtlpValidateHeapHeaders @ 0x1800FABB4 (RtlpValidateHeapHeaders.c)
 *     RtlStdInitializeStackDatabase @ 0x180101190 (RtlStdInitializeStackDatabase.c)
 *     RtlpStdExtendLowerWatermark @ 0x180101634 (RtlpStdExtendLowerWatermark.c)
 *     RtlpStdExtendUpperWatermark @ 0x180101714 (RtlpStdExtendUpperWatermark.c)
 *     RtlpTraceDatabaseAllocate @ 0x180102C40 (RtlpTraceDatabaseAllocate.c)
 *     PssNtCaptureSnapshot @ 0x180113CB0 (PssNtCaptureSnapshot.c)
 *     PsspCaptureAuxiliaryPages @ 0x18011504C (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureVaSpaceInformation @ 0x1801153DC (PsspCaptureVaSpaceInformation.c)
 *     PsspCaptureHandleInformation @ 0x180115B74 (PsspCaptureHandleInformation.c)
 *     PsspCaptureThreadInformation @ 0x1801165DC (PsspCaptureThreadInformation.c)
 *     PsspDuplicateSnapshotLocalToRemote @ 0x180117278 (PsspDuplicateSnapshotLocalToRemote.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x1801177E4 (PsspDuplicateSnapshotRemoteToRemote.c)
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
