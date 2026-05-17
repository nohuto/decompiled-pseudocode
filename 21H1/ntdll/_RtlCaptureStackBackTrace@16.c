/*
 * XREFs of _RtlCaptureStackBackTrace@16 @ 0x4B2DBFD0
 * Callers:
 *     _RtlReleaseActivationContext@4 @ 0x4B2B2660 (_RtlReleaseActivationContext@4.c)
 *     _RtlInitializeResource@4 @ 0x4B2DFA70 (_RtlInitializeResource@4.c)
 *     _RtlpAddDebugInfoToCriticalSection@4 @ 0x4B2DFCB0 (_RtlpAddDebugInfoToCriticalSection@4.c)
 *     _RtlActivateActivationContextEx@16 @ 0x4B2E3500 (_RtlActivateActivationContextEx@16.c)
 *     _RtlGetCallersAddress@8 @ 0x4B3503F0 (_RtlGetCallersAddress@8.c)
 *     RtlpHeapTrkTrackStack @ 0x4B365034 (RtlpHeapTrkTrackStack.c)
 *     _RtlStdLogStackTrace@8 @ 0x4B369040 (_RtlStdLogStackTrace@8.c)
 *     _RtlpHpHeapHandleError@12 @ 0x4B36D980 (_RtlpHpHeapHandleError@12.c)
 *     _RtlpHpStackTraceAddStack@8 @ 0x4B36DDE3 (_RtlpHpStackTraceAddStack@8.c)
 *     _RtlpStackTraceDatabaseLogPrefix@16 @ 0x4B36FB50 (_RtlpStackTraceDatabaseLogPrefix@16.c)
 * Callees:
 *     _RtlWalkFrameChain@12 @ 0x4B2DC050 (_RtlWalkFrameChain@12.c)
 *     _RtlpWalkFrameChainFuzzy@12 @ 0x4B350436 (_RtlpWalkFrameChainFuzzy@12.c)
 */

USHORT __stdcall RtlCaptureStackBackTrace(
        ULONG FramesToSkip,
        ULONG FramesToCapture,
        PVOID *BackTrace,
        PULONG BackTraceHash)
{
  ULONG v4; // edi
  ULONG v5; // esi
  unsigned int v6; // eax
  ULONG v7; // edx
  unsigned int v8; // ecx

  v4 = FramesToCapture;
  if ( FramesToCapture > 0xFFFF )
    v4 = 0xFFFF;
  if ( FramesToSkip > 0xFE )
    return 0;
  v5 = FramesToSkip + 1;
  v6 = RtlpFuzzyStackTracesEnabled ? RtlpWalkFrameChainFuzzy(v5) : RtlWalkFrameChain(BackTrace, v5 + v4, v5 << 8);
  if ( v6 <= v5 )
    return 0;
  v7 = 0;
  if ( RtlpFuzzyStackTracesEnabled )
  {
    *BackTrace = (PVOID)-1;
    v8 = 1;
  }
  else
  {
    v8 = 0;
  }
  if ( BackTraceHash )
  {
    while ( v8 < v4 && v8 + v5 < v6 )
      v7 += (ULONG)BackTrace[v8++];
    *BackTraceHash = v7;
  }
  else
  {
    LOWORD(v8) = v6 - v5;
  }
  return v8;
}
