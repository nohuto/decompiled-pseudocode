/*
 * XREFs of RtlLogStackBackTraceEx @ 0x180011AA0
 * Callers:
 *     RtlpInitializeHeapSegment @ 0x18000BB54 (RtlpInitializeHeapSegment.c)
 *     RtlpFreeHeap @ 0x180025C00 (RtlpFreeHeap.c)
 *     RtlpAllocateHeap @ 0x18002D160 (RtlpAllocateHeap.c)
 *     RtlpAllocateTags @ 0x1800F30F0 (RtlpAllocateTags.c)
 *     RtlDebugAllocateHeap @ 0x1800F8640 (RtlDebugAllocateHeap.c)
 *     RtlDebugCreateHeap @ 0x1800F8B50 (RtlDebugCreateHeap.c)
 *     RtlDebugReAllocateHeap @ 0x1800F9630 (RtlDebugReAllocateHeap.c)
 *     RtlLogStackBackTrace @ 0x180100D80 (RtlLogStackBackTrace.c)
 * Callees:
 *     RtlStdLogStackTrace @ 0x180101050 (RtlStdLogStackTrace.c)
 *     RtlStdReleaseStackTrace @ 0x1801010B0 (RtlStdReleaseStackTrace.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x180101480 (RtlpStdGetRecordedStackTraceIndex.c)
 */

__int64 __fastcall RtlLogStackBackTraceEx(unsigned int a1)
{
  PRTL_SRWLOCK v1; // rbx
  __int64 v3; // rax
  __int64 v4; // rsi
  unsigned int RecordedStackTraceIndex; // edi

  v1 = RtlpStackTraceDatabase;
  if ( !RtlpStackTraceDatabase )
    return 0LL;
  v3 = RtlStdLogStackTrace(RtlpStackTraceDatabase, a1);
  v4 = v3;
  if ( v3 )
  {
    RecordedStackTraceIndex = RtlpStdGetRecordedStackTraceIndex(v1, v3);
    if ( !RecordedStackTraceIndex )
      RtlStdReleaseStackTrace(v1, v4);
  }
  else
  {
    return 0;
  }
  return RecordedStackTraceIndex;
}
