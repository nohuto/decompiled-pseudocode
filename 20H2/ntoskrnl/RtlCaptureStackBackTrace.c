/*
 * XREFs of RtlCaptureStackBackTrace @ 0x140228FF0
 * Callers:
 *     PsBoostThreadIoEx @ 0x140223950 (PsBoostThreadIoEx.c)
 *     MiShowBadMapper @ 0x14052B6EC (MiShowBadMapper.c)
 *     MiAddMdlTracker @ 0x14052ED54 (MiAddMdlTracker.c)
 *     MiInsertPteTracker @ 0x14055D310 (MiInsertPteTracker.c)
 *     ObpPushStackInfo @ 0x140563258 (ObpPushStackInfo.c)
 *     RtlStdLogStackTrace @ 0x140584300 (RtlStdLogStackTrace.c)
 *     RtlGetCallersAddress @ 0x140586F30 (RtlGetCallersAddress.c)
 *     RtlpHpHeapHandleError @ 0x140591EE4 (RtlpHpHeapHandleError.c)
 *     SepGetStackTraceHash @ 0x1405946E0 (SepGetStackTraceHash.c)
 *     ViKeLogCriticalRegionStackTrace @ 0x1405A0758 (ViKeLogCriticalRegionStackTrace.c)
 *     CmpLogDirtyVectorUse @ 0x1405DF5DC (CmpLogDirtyVectorUse.c)
 *     ViPoolLogStackCallout @ 0x1409C8950 (ViPoolLogStackCallout.c)
 *     VfPendingFinishLogging @ 0x1409D8774 (VfPendingFinishLogging.c)
 *     VfCheckUserHandle @ 0x1409DD194 (VfCheckUserHandle.c)
 *     ViKeIrqlLogCommon @ 0x1409DF0DC (ViKeIrqlLogCommon.c)
 *     ViFaultsInjectionNotification @ 0x1409E018C (ViFaultsInjectionNotification.c)
 *     VfDeadlockAcquireResource @ 0x1409E05D8 (VfDeadlockAcquireResource.c)
 *     VfDeadlockInitializeResource @ 0x1409E11C4 (VfDeadlockInitializeResource.c)
 *     VfDeadlockReleaseResource @ 0x1409E1348 (VfDeadlockReleaseResource.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x140228EA0 (RtlWalkFrameChain.c)
 */

USHORT __stdcall RtlCaptureStackBackTrace(
        ULONG FramesToSkip,
        ULONG FramesToCapture,
        PVOID *BackTrace,
        PULONG BackTraceHash)
{
  ULONG v6; // edi
  ULONG v7; // ebx
  ULONG v8; // eax
  unsigned int v9; // edx
  unsigned int i; // ecx
  ULONG v12; // r8d
  __int64 v13; // rax

  v6 = FramesToCapture;
  if ( FramesToCapture > 0xFFFF )
    v6 = 0xFFFF;
  if ( FramesToSkip > 0xFE )
    return 0;
  v7 = FramesToSkip + 1;
  v8 = RtlWalkFrameChain(BackTrace, v7 + v6, v7 << 8);
  v9 = v8;
  if ( v8 <= v7 )
    return 0;
  if ( BackTraceHash )
  {
    v12 = 0;
    for ( i = 0; i < v6; v12 += LODWORD(BackTrace[v13]) )
    {
      if ( i + v7 >= v9 )
        break;
      v13 = i++;
    }
    *BackTraceHash = v12;
  }
  else
  {
    LOWORD(i) = v8 - v7;
  }
  return i;
}
