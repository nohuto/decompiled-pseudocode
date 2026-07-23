/*
 * XREFs of ZwFreeVirtualMemory @ 0x18009D1D0
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
 *     RtlpAllocDeallocQueryBuffer @ 0x180045F1C (RtlpAllocDeallocQueryBuffer.c)
 *     EtwpAllocateTraceBufferPool @ 0x180056244 (EtwpAllocateTraceBufferPool.c)
 *     EtwpFreeLoggerContext @ 0x1800582C4 (EtwpFreeLoggerContext.c)
 *     RtlpInitParameterBlock @ 0x18007D188 (RtlpInitParameterBlock.c)
 *     RtlFreeUserStack @ 0x18007F5F0 (RtlFreeUserStack.c)
 *     RtlDestroyMemoryZone @ 0x180084FB0 (RtlDestroyMemoryZone.c)
 *     RtlDestroyHandleTable @ 0x1800854D0 (RtlDestroyHandleTable.c)
 *     EtwpShutdownCompression @ 0x180087C70 (EtwpShutdownCompression.c)
 *     LdrCreateEnclave @ 0x1800CCAE0 (LdrCreateEnclave.c)
 *     LdrDeleteEnclave @ 0x1800CCBF0 (LdrDeleteEnclave.c)
 *     RtlCreateProcessReflection @ 0x1800D5A60 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1800D5FF0 (RtlpProcessReflectionStartup.c)
 *     RtlCreateQueryDebugBuffer @ 0x1800D72E0 (RtlCreateQueryDebugBuffer.c)
 *     WerReportExceptionWorker @ 0x1800DD6E0 (WerReportExceptionWorker.c)
 *     WerpFreeSid @ 0x1800DDA9C (WerpFreeSid.c)
 *     GetShipAssertBuffer @ 0x1800DDC84 (GetShipAssertBuffer.c)
 *     WerEscalationLazyInit @ 0x1800DE068 (WerEscalationLazyInit.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800F3DD4 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlStdDeleteStackDatabase @ 0x180100DE0 (RtlStdDeleteStackDatabase.c)
 *     RtlStdInitializeStackDatabase @ 0x180100E20 (RtlStdInitializeStackDatabase.c)
 *     RtlpTraceDatabaseFree @ 0x18010291C (RtlpTraceDatabaseFree.c)
 *     PssNtFreeRemoteSnapshot @ 0x180113E90 (PssNtFreeRemoteSnapshot.c)
 *     PssNtFreeSnapshot @ 0x1801140A0 (PssNtFreeSnapshot.c)
 *     PsspCaptureAuxiliaryPages @ 0x180114CDC (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureVaSpaceInformation @ 0x18011506C (PsspCaptureVaSpaceInformation.c)
 *     PsspCaptureHandleInformation @ 0x180115804 (PsspCaptureHandleInformation.c)
 *     PsspFreeLinkedHandleList @ 0x1801167EC (PsspFreeLinkedHandleList.c)
 *     PsspDuplicateSnapshotLocalToRemote @ 0x180116F08 (PsspDuplicateSnapshotLocalToRemote.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x180117470 (PsspDuplicateSnapshotRemoteToRemote.c)
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
