/*
 * XREFs of RtlSizeHeap @ 0x140581290
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSizeHeapInternal @ 0x1405866E8 (RtlpSizeHeapInternal.c)
 *     RtlpLogHeapFailure @ 0x14058E080 (RtlpLogHeapFailure.c)
 */

// local variable allocation has failed, the output may be wrong!
SIZE_T __cdecl RtlSizeHeap(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress)
{
  if ( !HeapHandle )
    RtlpLogHeapFailure(19, 0, (_DWORD)BaseAddress, 0, 0LL, 0LL);
  return RtlpSizeHeapInternal(HeapHandle, *(_QWORD *)&Flags, BaseAddress);
}
