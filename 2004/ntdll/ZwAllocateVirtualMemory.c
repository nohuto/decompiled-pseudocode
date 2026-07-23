/*
 * XREFs of ZwAllocateVirtualMemory @ 0x18009D110
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
 *     RtlpCreateLowFragHeap @ 0x1800447D8 (RtlpCreateLowFragHeap.c)
 *     RtlpAllocDeallocQueryBuffer @ 0x180045F1C (RtlpAllocDeallocQueryBuffer.c)
 *     RtlAllocateHandle @ 0x18004CA60 (RtlAllocateHandle.c)
 *     EtwpAllocateTraceBufferPool @ 0x180056244 (EtwpAllocateTraceBufferPool.c)
 *     EtwpAllocateFreeBuffers @ 0x180056350 (EtwpAllocateFreeBuffers.c)
 *     RtlpExtendLowFragHeapSegment @ 0x180071808 (RtlpExtendLowFragHeapSegment.c)
 *     RtlCreateUserStack @ 0x180076210 (RtlCreateUserStack.c)
 *     RtlCreateMemoryZone @ 0x18007A660 (RtlCreateMemoryZone.c)
 *     EtwpInitializeCompression @ 0x180087968 (EtwpInitializeCompression.c)
 *     RtlpHpAllocVirtBlockCommitFirst @ 0x18009C5E8 (RtlpHpAllocVirtBlockCommitFirst.c)
 *     RtlCreateProcessReflection @ 0x1800D5A60 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1800D5FF0 (RtlpProcessReflectionStartup.c)
 *     RtlCreateQueryDebugBuffer @ 0x1800D72E0 (RtlCreateQueryDebugBuffer.c)
 *     RtlpCommitQueryDebugInfo @ 0x1800D88E8 (RtlpCommitQueryDebugInfo.c)
 *     RtlpCopyRemoteDebugInformation @ 0x1800D8980 (RtlpCopyRemoteDebugInformation.c)
 *     WerpAllocateAndInitializeSid @ 0x1800DD78C (WerpAllocateAndInitializeSid.c)
 *     GetShipAssertBuffer @ 0x1800DDC84 (GetShipAssertBuffer.c)
 *     WerEscalationLazyInit @ 0x1800DE068 (WerEscalationLazyInit.c)
 *     RtlResetStackOverflow @ 0x1800DE6B4 (RtlResetStackOverflow.c)
 *     RtlValidateProcessHeaps @ 0x1800F2FB0 (RtlValidateProcessHeaps.c)
 *     RtlpAllocateTags @ 0x1800F30F0 (RtlpAllocateTags.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800F3DD4 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlpValidateHeap @ 0x1800FA274 (RtlpValidateHeap.c)
 *     RtlpValidateHeapHeaders @ 0x1800FA854 (RtlpValidateHeapHeaders.c)
 *     RtlStdInitializeStackDatabase @ 0x180100E20 (RtlStdInitializeStackDatabase.c)
 *     RtlpStdExtendLowerWatermark @ 0x1801012C4 (RtlpStdExtendLowerWatermark.c)
 *     RtlpStdExtendUpperWatermark @ 0x1801013A4 (RtlpStdExtendUpperWatermark.c)
 *     RtlpTraceDatabaseAllocate @ 0x1801028D0 (RtlpTraceDatabaseAllocate.c)
 *     PssNtCaptureSnapshot @ 0x180113940 (PssNtCaptureSnapshot.c)
 *     PsspCaptureAuxiliaryPages @ 0x180114CDC (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureVaSpaceInformation @ 0x18011506C (PsspCaptureVaSpaceInformation.c)
 *     PsspCaptureHandleInformation @ 0x180115804 (PsspCaptureHandleInformation.c)
 *     PsspCaptureThreadInformation @ 0x18011626C (PsspCaptureThreadInformation.c)
 *     PsspDuplicateSnapshotLocalToRemote @ 0x180116F08 (PsspDuplicateSnapshotLocalToRemote.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x180117470 (PsspDuplicateSnapshotRemoteToRemote.c)
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
