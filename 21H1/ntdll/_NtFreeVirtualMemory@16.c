/*
 * XREFs of _NtFreeVirtualMemory@16 @ 0x4B2F2B60
 * Callers:
 *     _RtlDestroyHandleTable@4 @ 0x4B2ABF30 (_RtlDestroyHandleTable@4.c)
 *     _RtlpSecMemFreeVirtualMemory@16 @ 0x4B2AFA7A (_RtlpSecMemFreeVirtualMemory@16.c)
 *     _LdrEnsureMrdataHeapExists@0 @ 0x4B2E1C77 (_LdrEnsureMrdataHeapExists@0.c)
 *     _RtlpInitParameterBlock@0 @ 0x4B2EA5B7 (_RtlpInitParameterBlock@0.c)
 *     _RtlpAllocDeallocQueryBuffer@16 @ 0x4B2EB25A (_RtlpAllocDeallocQueryBuffer@16.c)
 *     _EtwpFreeLoggerContext@4 @ 0x4B2EE335 (_EtwpFreeLoggerContext@4.c)
 *     _EtwpAllocateTraceBufferPool@4 @ 0x4B2F0625 (_EtwpAllocateTraceBufferPool@4.c)
 *     _LdrDeleteEnclave@4 @ 0x4B32DD00 (_LdrDeleteEnclave@4.c)
 *     _RtlCreateProcessReflection@24 @ 0x4B335060 (_RtlCreateProcessReflection@24.c)
 *     _RtlpProcessReflectionStartup@4 @ 0x4B3354D0 (_RtlpProcessReflectionStartup@4.c)
 *     _RtlCreateQueryDebugBuffer@8 @ 0x4B336810 (_RtlCreateQueryDebugBuffer@8.c)
 *     _WerReportExceptionWorker@4 @ 0x4B33AE10 (_WerReportExceptionWorker@4.c)
 *     _WerpFreeSid@8 @ 0x4B33B0D2 (_WerpFreeSid@8.c)
 *     _GetShipAssertBuffer@0 @ 0x4B33B3F0 (_GetShipAssertBuffer@0.c)
 *     _WerEscalationLazyInit@0 @ 0x4B33B780 (_WerEscalationLazyInit@0.c)
 *     _RtlDestroyMemoryZone@4 @ 0x4B34D720 (_RtlDestroyMemoryZone@4.c)
 *     _RtlExtendMemoryZone@8 @ 0x4B34D780 (_RtlExtendMemoryZone@8.c)
 *     _RtlpHeapPerformCrossProcessQuery@8 @ 0x4B358165 (_RtlpHeapPerformCrossProcessQuery@8.c)
 *     _RtlStdDeleteStackDatabase@4 @ 0x4B368E70 (_RtlStdDeleteStackDatabase@4.c)
 *     _RtlStdInitializeStackDatabase@16 @ 0x4B368EA0 (_RtlStdInitializeStackDatabase@16.c)
 *     _RtlpTraceDatabaseFree@8 @ 0x4B36A49D (_RtlpTraceDatabaseFree@8.c)
 *     _RtlpHpFreeVA@20 @ 0x4B378695 (_RtlpHpFreeVA@20.c)
 *     _RtlpHpVaMgrAlloc@12 @ 0x4B37A845 (_RtlpHpVaMgrAlloc@12.c)
 *     _RtlpHpVaMgrCtxFree@12 @ 0x4B37AC12 (_RtlpHpVaMgrCtxFree@12.c)
 *     _RtlpHpVaMgrRangeFree@8 @ 0x4B37B24F (_RtlpHpVaMgrRangeFree@8.c)
 *     _RtlpHpVaMgrRegionAllocate@4 @ 0x4B37B334 (_RtlpHpVaMgrRegionAllocate@4.c)
 *     _RtlpCSparseBitmapPageDecommit@12 @ 0x4B37E559 (_RtlpCSparseBitmapPageDecommit@12.c)
 *     _EtwpShutdownCompression@4 @ 0x4B383186 (_EtwpShutdownCompression@4.c)
 *     _PssNtFreeRemoteSnapshot@8 @ 0x4B386950 (_PssNtFreeRemoteSnapshot@8.c)
 *     _PssNtFreeSnapshot@4 @ 0x4B386AF0 (_PssNtFreeSnapshot@4.c)
 *     _PsspCaptureAuxiliaryPages@20 @ 0x4B38738C (_PsspCaptureAuxiliaryPages@20.c)
 *     _PsspCaptureVaSpaceInformation@12 @ 0x4B387B12 (_PsspCaptureVaSpaceInformation@12.c)
 *     _PsspCaptureHandleInformation@12 @ 0x4B387CF4 (_PsspCaptureHandleInformation@12.c)
 *     PsspFreeLinkedHandleList @ 0x4B388A00 (PsspFreeLinkedHandleList.c)
 *     _PsspDuplicateSnapshotLocalToRemote@16 @ 0x4B388F93 (_PsspDuplicateSnapshotLocalToRemote@16.c)
 *     _PsspDuplicateSnapshotRemoteToRemote@20 @ 0x4B389365 (_PsspDuplicateSnapshotRemoteToRemote@20.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl NtFreeVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG FreeType)
{
  return Wow64SystemServiceCall();
}
