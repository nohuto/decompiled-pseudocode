/*
 * XREFs of _RtlLogStackBackTraceEx@4 @ 0x4B2DFD89
 * Callers:
 *     @RtlpFreeHeap@16 @ 0x4B2C3C10 (@RtlpFreeHeap@16.c)
 *     @RtlpAllocateHeap@24 @ 0x4B2C6F90 (@RtlpAllocateHeap@24.c)
 *     _RtlpInitializeHeapSegment@32 @ 0x4B2E1EBD (_RtlpInitializeHeapSegment@32.c)
 *     _RtlpAllocateTags@8 @ 0x4B3575E6 (_RtlpAllocateTags@8.c)
 *     _RtlDebugAllocateHeap@12 @ 0x4B35EF05 (_RtlDebugAllocateHeap@12.c)
 *     _RtlDebugCreateHeap@24 @ 0x4B35F37B (_RtlDebugCreateHeap@24.c)
 *     _RtlDebugReAllocateHeap@16 @ 0x4B35FC56 (_RtlDebugReAllocateHeap@16.c)
 *     _RtlLogStackBackTrace@0 @ 0x4B368E20 (_RtlLogStackBackTrace@0.c)
 * Callees:
 *     _RtlStdLogStackTrace@8 @ 0x4B369040 (_RtlStdLogStackTrace@8.c)
 *     _RtlStdReleaseStackTrace@8 @ 0x4B369090 (_RtlStdReleaseStackTrace@8.c)
 *     _RtlpStdGetRecordedStackTraceIndex@8 @ 0x4B36936F (_RtlpStdGetRecordedStackTraceIndex@8.c)
 */

int __thiscall RtlLogStackBackTraceEx(void *this)
{
  _RTL_SRWLOCK *v1; // esi
  int v3; // ebx
  int RecordedStackTraceIndex; // edi

  v1 = RtlpStackTraceDatabase;
  if ( !RtlpStackTraceDatabase )
    return 0;
  v3 = RtlStdLogStackTrace(RtlpStackTraceDatabase, (int)this);
  if ( !v3 )
    return 0;
  RecordedStackTraceIndex = RtlpStdGetRecordedStackTraceIndex(v1);
  if ( !RecordedStackTraceIndex )
    RtlStdReleaseStackTrace(v1, v3);
  return RecordedStackTraceIndex;
}
