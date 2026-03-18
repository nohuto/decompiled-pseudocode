/*
 * XREFs of RtlAllocateHeap @ 0x14035EEB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAllocateHeapInternal @ 0x14035EF08 (RtlpAllocateHeapInternal.c)
 *     RtlpHpAllocWithExceptionProtection @ 0x140580B5C (RtlpHpAllocWithExceptionProtection.c)
 *     RtlpLogHeapFailure @ 0x14058D990 (RtlpLogHeapFailure.c)
 */

PVOID __stdcall RtlAllocateHeap(PVOID HeapHandle, ULONG Flags, SIZE_T Size)
{
  if ( !HeapHandle )
    RtlpLogHeapFailure(19, 0, 0, 0, 0LL, 0LL);
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
    return (PVOID)RtlpHpAllocWithExceptionProtection(HeapHandle, Size, Flags);
  else
    return (PVOID)RtlpAllocateHeapInternal(HeapHandle);
}
