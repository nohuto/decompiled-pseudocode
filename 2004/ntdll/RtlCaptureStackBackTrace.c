/*
 * XREFs of RtlCaptureStackBackTrace @ 0x1800515A0
 * Callers:
 *     RtlInitializeResource @ 0x1800112E0 (RtlInitializeResource.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x180011840 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlReleaseActivationContext @ 0x180013570 (RtlReleaseActivationContext.c)
 *     RtlActivateActivationContextEx @ 0x1800722B0 (RtlActivateActivationContextEx.c)
 *     RtlGetCallersAddress @ 0x1800ED720 (RtlGetCallersAddress.c)
 *     RtlpHeapTrkTrackStack @ 0x1800FE9A4 (RtlpHeapTrkTrackStack.c)
 *     RtlStdLogStackTrace @ 0x180101050 (RtlStdLogStackTrace.c)
 *     RtlpHpHeapHandleError @ 0x180108150 (RtlpHpHeapHandleError.c)
 *     RtlpHpStackTraceAddStack @ 0x180108610 (RtlpHpStackTraceAddStack.c)
 *     RtlpStackTraceDatabaseLogPrefix @ 0x18010ACB0 (RtlpStackTraceDatabaseLogPrefix.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x180051620 (RtlWalkFrameChain.c)
 */

USHORT __stdcall RtlCaptureStackBackTrace(
        ULONG FramesToSkip,
        ULONG FramesToCapture,
        PVOID *BackTrace,
        PULONG BackTraceHash)
{
  ULONG v4; // edi
  ULONG v7; // ebx
  ULONG v8; // eax
  unsigned int v9; // r8d
  ULONG v10; // edx
  unsigned int i; // ecx
  __int64 v13; // rax

  v4 = 0xFFFF;
  if ( FramesToCapture <= 0xFFFF )
    v4 = FramesToCapture;
  if ( FramesToSkip > 0xFE )
    return 0;
  v7 = FramesToSkip + 1;
  v8 = RtlWalkFrameChain(BackTrace, v4 + v7, v7 << 8);
  v9 = v8;
  if ( v8 <= v7 )
    return 0;
  v10 = 0;
  if ( BackTraceHash )
  {
    for ( i = 0; i < v4; v10 += LODWORD(BackTrace[v13]) )
    {
      if ( i + v7 >= v9 )
        break;
      v13 = i++;
    }
    *BackTraceHash = v10;
  }
  else
  {
    LOWORD(i) = v8 - v7;
  }
  return i;
}
