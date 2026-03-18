/*
 * XREFs of RtlCaptureStackBackTrace @ 0x14032C8F0
 * Callers:
 *     PsBoostThreadIoEx @ 0x140263860 (PsBoostThreadIoEx.c)
 *     MiShowBadMapper @ 0x1405276CC (MiShowBadMapper.c)
 *     MiAddMdlTracker @ 0x14052AD34 (MiAddMdlTracker.c)
 *     MiInsertPteTracker @ 0x1405592F0 (MiInsertPteTracker.c)
 *     ObpPushStackInfo @ 0x14055F238 (ObpPushStackInfo.c)
 *     RtlStdLogStackTrace @ 0x140580220 (RtlStdLogStackTrace.c)
 *     RtlGetCallersAddress @ 0x140582EA0 (RtlGetCallersAddress.c)
 *     RtlpHpHeapHandleError @ 0x14058DD50 (RtlpHpHeapHandleError.c)
 *     SepGetStackTraceHash @ 0x140590550 (SepGetStackTraceHash.c)
 *     ViKeLogCriticalRegionStackTrace @ 0x14059C5C8 (ViKeLogCriticalRegionStackTrace.c)
 *     CmpLogDirtyVectorUse @ 0x1406F1374 (CmpLogDirtyVectorUse.c)
 *     ViPoolLogStackCallout @ 0x1409C2920 (ViPoolLogStackCallout.c)
 *     VfPendingFinishLogging @ 0x1409D26F4 (VfPendingFinishLogging.c)
 *     VfCheckUserHandle @ 0x1409D7114 (VfCheckUserHandle.c)
 *     ViKeIrqlLogCommon @ 0x1409D905C (ViKeIrqlLogCommon.c)
 *     ViFaultsInjectionNotification @ 0x1409DA10C (ViFaultsInjectionNotification.c)
 *     VfDeadlockAcquireResource @ 0x1409DA558 (VfDeadlockAcquireResource.c)
 *     VfDeadlockInitializeResource @ 0x1409DB144 (VfDeadlockInitializeResource.c)
 *     VfDeadlockReleaseResource @ 0x1409DB2C8 (VfDeadlockReleaseResource.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x14032C980 (RtlWalkFrameChain.c)
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
