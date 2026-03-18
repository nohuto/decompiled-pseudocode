/*
 * XREFs of RtlCaptureStackBackTrace @ 0x1402E77B0
 * Callers:
 *     PsBoostThreadIoEx @ 0x14020A940 (PsBoostThreadIoEx.c)
 *     MiShowBadMapper @ 0x140527D1C (MiShowBadMapper.c)
 *     MiAddMdlTracker @ 0x14052B384 (MiAddMdlTracker.c)
 *     MiInsertPteTracker @ 0x140559940 (MiInsertPteTracker.c)
 *     ObpPushStackInfo @ 0x14055F888 (ObpPushStackInfo.c)
 *     RtlStdLogStackTrace @ 0x1405809A0 (RtlStdLogStackTrace.c)
 *     RtlGetCallersAddress @ 0x1405835D0 (RtlGetCallersAddress.c)
 *     RtlpHpHeapHandleError @ 0x14058E440 (RtlpHpHeapHandleError.c)
 *     SepGetStackTraceHash @ 0x140590C40 (SepGetStackTraceHash.c)
 *     ViKeLogCriticalRegionStackTrace @ 0x14059CCB8 (ViKeLogCriticalRegionStackTrace.c)
 *     CmpLogDirtyVectorUse @ 0x1406AC4D4 (CmpLogDirtyVectorUse.c)
 *     ViPoolLogStackCallout @ 0x1409C2930 (ViPoolLogStackCallout.c)
 *     VfPendingFinishLogging @ 0x1409D2754 (VfPendingFinishLogging.c)
 *     VfCheckUserHandle @ 0x1409D7174 (VfCheckUserHandle.c)
 *     ViKeIrqlLogCommon @ 0x1409D90BC (ViKeIrqlLogCommon.c)
 *     ViFaultsInjectionNotification @ 0x1409DA16C (ViFaultsInjectionNotification.c)
 *     VfDeadlockAcquireResource @ 0x1409DA5B8 (VfDeadlockAcquireResource.c)
 *     VfDeadlockInitializeResource @ 0x1409DB1A4 (VfDeadlockInitializeResource.c)
 *     VfDeadlockReleaseResource @ 0x1409DB328 (VfDeadlockReleaseResource.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x1402E7840 (RtlWalkFrameChain.c)
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
