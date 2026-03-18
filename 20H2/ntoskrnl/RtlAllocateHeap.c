/*
 * XREFs of RtlAllocateHeap @ 0x140309770
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAllocateHeapInternal @ 0x1403097C8 (RtlpAllocateHeapInternal.c)
 *     RtlpHpAllocWithExceptionProtection @ 0x140584C3C (RtlpHpAllocWithExceptionProtection.c)
 *     RtlpLogHeapFailure @ 0x140591B24 (RtlpLogHeapFailure.c)
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
