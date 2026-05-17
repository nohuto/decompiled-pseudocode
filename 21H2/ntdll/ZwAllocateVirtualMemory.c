/*
 * XREFs of ZwAllocateVirtualMemory @ 0x18009D940
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
 *     RtlCreateProcessReflection @ 0x1800D5BB0 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1800D6140 (RtlpProcessReflectionStartup.c)
 *     RtlCreateQueryDebugBuffer @ 0x1800D7430 (RtlCreateQueryDebugBuffer.c)
 *     RtlpCommitQueryDebugInfo @ 0x1800D8A38 (RtlpCommitQueryDebugInfo.c)
 *     RtlpCopyRemoteDebugInformation @ 0x1800D8AD0 (RtlpCopyRemoteDebugInformation.c)
 *     WerpAllocateAndInitializeSid @ 0x1800DD8DC (WerpAllocateAndInitializeSid.c)
 *     GetShipAssertBuffer @ 0x1800DDDD4 (GetShipAssertBuffer.c)
 *     WerEscalationLazyInit @ 0x1800DE1B8 (WerEscalationLazyInit.c)
 *     RtlResetStackOverflow @ 0x1800DE804 (RtlResetStackOverflow.c)
 *     RtlValidateProcessHeaps @ 0x1800F3350 (RtlValidateProcessHeaps.c)
 *     RtlpAllocateTags @ 0x1800F3490 (RtlpAllocateTags.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800F4174 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlpValidateHeap @ 0x1800FA614 (RtlpValidateHeap.c)
 *     RtlpValidateHeapHeaders @ 0x1800FABF4 (RtlpValidateHeapHeaders.c)
 *     RtlStdInitializeStackDatabase @ 0x1801011D0 (RtlStdInitializeStackDatabase.c)
 *     RtlpStdExtendLowerWatermark @ 0x180101674 (RtlpStdExtendLowerWatermark.c)
 *     RtlpStdExtendUpperWatermark @ 0x180101754 (RtlpStdExtendUpperWatermark.c)
 *     RtlpTraceDatabaseAllocate @ 0x180102C80 (RtlpTraceDatabaseAllocate.c)
 *     PssNtCaptureSnapshot @ 0x180113CF0 (PssNtCaptureSnapshot.c)
 *     PsspCaptureAuxiliaryPages @ 0x18011508C (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureVaSpaceInformation @ 0x18011541C (PsspCaptureVaSpaceInformation.c)
 *     PsspCaptureHandleInformation @ 0x180115BB4 (PsspCaptureHandleInformation.c)
 *     PsspCaptureThreadInformation @ 0x18011661C (PsspCaptureThreadInformation.c)
 *     PsspDuplicateSnapshotLocalToRemote @ 0x1801172B8 (PsspDuplicateSnapshotLocalToRemote.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x18011785C (PsspDuplicateSnapshotRemoteToRemote.c)
 * Callees:
 *     <none>
 */

__int64 ZwAllocateVirtualMemory()
{
  __int64 result; // rax

  result = 24LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
