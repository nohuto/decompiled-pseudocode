/*
 * XREFs of ZwFreeVirtualMemory @ 0x18009D9C0
 * Callers:
 *     RtlExtendMemoryZone @ 0x180001A70 (RtlExtendMemoryZone.c)
 *     RtlpHpVaMgrRangeFree @ 0x1800047B4 (RtlpHpVaMgrRangeFree.c)
 *     RtlpCSparseBitmapPageDecommit @ 0x180004F78 (RtlpCSparseBitmapPageDecommit.c)
 *     RtlpHpVaMgrCtxFree @ 0x180005248 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrAlloc @ 0x180005BCC (RtlpHpVaMgrAlloc.c)
 *     RtlpHpVaMgrRegionAllocate @ 0x180006040 (RtlpHpVaMgrRegionAllocate.c)
 *     LdrEnsureMrdataHeapExists @ 0x18000787C (LdrEnsureMrdataHeapExists.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x180009AF4 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpHpFreeVA @ 0x180020824 (RtlpHpFreeVA.c)
 *     RtlpAllocDeallocQueryBuffer @ 0x180045F2C (RtlpAllocDeallocQueryBuffer.c)
 *     EtwpAllocateTraceBufferPool @ 0x180048984 (EtwpAllocateTraceBufferPool.c)
 *     EtwpFreeLoggerContext @ 0x18004F614 (EtwpFreeLoggerContext.c)
 *     RtlpInitParameterBlock @ 0x18007DC28 (RtlpInitParameterBlock.c)
 *     RtlFreeUserStack @ 0x180080010 (RtlFreeUserStack.c)
 *     RtlDestroyMemoryZone @ 0x180085580 (RtlDestroyMemoryZone.c)
 *     RtlDestroyHandleTable @ 0x180085AA0 (RtlDestroyHandleTable.c)
 *     EtwpShutdownCompression @ 0x180088370 (EtwpShutdownCompression.c)
 *     LdrCreateEnclave @ 0x1800CCC40 (LdrCreateEnclave.c)
 *     LdrDeleteEnclave @ 0x1800CCD50 (LdrDeleteEnclave.c)
 *     RtlCreateProcessReflection @ 0x1800D5B70 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1800D6100 (RtlpProcessReflectionStartup.c)
 *     RtlCreateQueryDebugBuffer @ 0x1800D73F0 (RtlCreateQueryDebugBuffer.c)
 *     WerReportExceptionWorker @ 0x1800DD7F0 (WerReportExceptionWorker.c)
 *     WerpFreeSid @ 0x1800DDBAC (WerpFreeSid.c)
 *     GetShipAssertBuffer @ 0x1800DDD94 (GetShipAssertBuffer.c)
 *     WerEscalationLazyInit @ 0x1800DE178 (WerEscalationLazyInit.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800F4134 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlStdDeleteStackDatabase @ 0x180101150 (RtlStdDeleteStackDatabase.c)
 *     RtlStdInitializeStackDatabase @ 0x180101190 (RtlStdInitializeStackDatabase.c)
 *     RtlpTraceDatabaseFree @ 0x180102C8C (RtlpTraceDatabaseFree.c)
 *     PssNtFreeRemoteSnapshot @ 0x180114200 (PssNtFreeRemoteSnapshot.c)
 *     PssNtFreeSnapshot @ 0x180114410 (PssNtFreeSnapshot.c)
 *     PsspCaptureAuxiliaryPages @ 0x18011504C (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureVaSpaceInformation @ 0x1801153DC (PsspCaptureVaSpaceInformation.c)
 *     PsspCaptureHandleInformation @ 0x180115B74 (PsspCaptureHandleInformation.c)
 *     PsspFreeLinkedHandleList @ 0x180116B5C (PsspFreeLinkedHandleList.c)
 *     PsspDuplicateSnapshotLocalToRemote @ 0x180117278 (PsspDuplicateSnapshotLocalToRemote.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x1801177E4 (PsspDuplicateSnapshotRemoteToRemote.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwFreeVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG FreeType)
{
  NTSTATUS result; // eax

  result = 30;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
