/*
 * XREFs of ZwFreeVirtualMemory @ 0x18009D470
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
 *     RtlpAllocDeallocQueryBuffer @ 0x180045F6C (RtlpAllocDeallocQueryBuffer.c)
 *     EtwpAllocateTraceBufferPool @ 0x180056294 (EtwpAllocateTraceBufferPool.c)
 *     EtwpFreeLoggerContext @ 0x180058314 (EtwpFreeLoggerContext.c)
 *     RtlpInitParameterBlock @ 0x18007D288 (RtlpInitParameterBlock.c)
 *     RtlFreeUserStack @ 0x18007F6F0 (RtlFreeUserStack.c)
 *     RtlDestroyMemoryZone @ 0x1800850B0 (RtlDestroyMemoryZone.c)
 *     RtlDestroyHandleTable @ 0x1800855D0 (RtlDestroyHandleTable.c)
 *     EtwpShutdownCompression @ 0x180087D70 (EtwpShutdownCompression.c)
 *     LdrCreateEnclave @ 0x1800CCCC0 (LdrCreateEnclave.c)
 *     LdrDeleteEnclave @ 0x1800CCDD0 (LdrDeleteEnclave.c)
 *     RtlCreateProcessReflection @ 0x1800D5E00 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1800D6390 (RtlpProcessReflectionStartup.c)
 *     RtlCreateQueryDebugBuffer @ 0x1800D7680 (RtlCreateQueryDebugBuffer.c)
 *     WerReportExceptionWorker @ 0x1800DDA80 (WerReportExceptionWorker.c)
 *     WerpFreeSid @ 0x1800DDE3C (WerpFreeSid.c)
 *     GetShipAssertBuffer @ 0x1800DE024 (GetShipAssertBuffer.c)
 *     WerEscalationLazyInit @ 0x1800DE408 (WerEscalationLazyInit.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800F42E4 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlStdDeleteStackDatabase @ 0x1801012F0 (RtlStdDeleteStackDatabase.c)
 *     RtlStdInitializeStackDatabase @ 0x180101330 (RtlStdInitializeStackDatabase.c)
 *     RtlpTraceDatabaseFree @ 0x180102E2C (RtlpTraceDatabaseFree.c)
 *     PssNtFreeRemoteSnapshot @ 0x1801143A0 (PssNtFreeRemoteSnapshot.c)
 *     PssNtFreeSnapshot @ 0x1801145B0 (PssNtFreeSnapshot.c)
 *     PsspCaptureAuxiliaryPages @ 0x1801151EC (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureVaSpaceInformation @ 0x18011557C (PsspCaptureVaSpaceInformation.c)
 *     PsspCaptureHandleInformation @ 0x180115D14 (PsspCaptureHandleInformation.c)
 *     PsspFreeLinkedHandleList @ 0x180116CFC (PsspFreeLinkedHandleList.c)
 *     PsspDuplicateSnapshotLocalToRemote @ 0x180117418 (PsspDuplicateSnapshotLocalToRemote.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x180117980 (PsspDuplicateSnapshotRemoteToRemote.c)
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
