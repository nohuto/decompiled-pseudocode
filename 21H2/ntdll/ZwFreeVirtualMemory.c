/*
 * XREFs of ZwFreeVirtualMemory @ 0x18009DA00
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
 *     LdrCreateEnclave @ 0x1800CCC80 (LdrCreateEnclave.c)
 *     LdrDeleteEnclave @ 0x1800CCD90 (LdrDeleteEnclave.c)
 *     RtlCreateProcessReflection @ 0x1800D5BB0 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1800D6140 (RtlpProcessReflectionStartup.c)
 *     RtlCreateQueryDebugBuffer @ 0x1800D7430 (RtlCreateQueryDebugBuffer.c)
 *     WerReportExceptionWorker @ 0x1800DD830 (WerReportExceptionWorker.c)
 *     WerpFreeSid @ 0x1800DDBEC (WerpFreeSid.c)
 *     GetShipAssertBuffer @ 0x1800DDDD4 (GetShipAssertBuffer.c)
 *     WerEscalationLazyInit @ 0x1800DE1B8 (WerEscalationLazyInit.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800F4174 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlStdDeleteStackDatabase @ 0x180101190 (RtlStdDeleteStackDatabase.c)
 *     RtlStdInitializeStackDatabase @ 0x1801011D0 (RtlStdInitializeStackDatabase.c)
 *     RtlpTraceDatabaseFree @ 0x180102CCC (RtlpTraceDatabaseFree.c)
 *     PssNtFreeRemoteSnapshot @ 0x180114240 (PssNtFreeRemoteSnapshot.c)
 *     PssNtFreeSnapshot @ 0x180114450 (PssNtFreeSnapshot.c)
 *     PsspCaptureAuxiliaryPages @ 0x18011508C (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureVaSpaceInformation @ 0x18011541C (PsspCaptureVaSpaceInformation.c)
 *     PsspCaptureHandleInformation @ 0x180115BB4 (PsspCaptureHandleInformation.c)
 *     PsspFreeLinkedHandleList @ 0x180116B9C (PsspFreeLinkedHandleList.c)
 *     PsspDuplicateSnapshotLocalToRemote @ 0x1801172B8 (PsspDuplicateSnapshotLocalToRemote.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x18011785C (PsspDuplicateSnapshotRemoteToRemote.c)
 * Callees:
 *     <none>
 */

__int64 ZwFreeVirtualMemory()
{
  __int64 result; // rax

  result = 30LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
