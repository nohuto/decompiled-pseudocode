/*
 * XREFs of RtlSizeHeap @ 0x140584BF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSizeHeapInternal @ 0x14058A048 (RtlpSizeHeapInternal.c)
 *     RtlpLogHeapFailure @ 0x140591B24 (RtlpLogHeapFailure.c)
 */

// local variable allocation has failed, the output may be wrong!
SIZE_T __cdecl RtlSizeHeap(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress)
{
  if ( !HeapHandle )
    RtlpLogHeapFailure(19, 0, (_DWORD)BaseAddress, 0, 0LL, 0LL);
  return RtlpSizeHeapInternal(HeapHandle, *(_QWORD *)&Flags, BaseAddress);
}
