/*
 * XREFs of RtlFreeHeap @ 0x1402DB370
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x1402DB4B8 (RtlpAllocateHeapInternal.c)
 * Callees:
 *     RtlpFreeHeapInternal @ 0x1402DB3D4 (RtlpFreeHeapInternal.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x140581350 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpLogHeapFailure @ 0x14058E080 (RtlpLogHeapFailure.c)
 */

BOOLEAN __stdcall RtlFreeHeap(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress)
{
  if ( !BaseAddress )
    return 1;
  if ( !HeapHandle )
    RtlpLogHeapFailure(19, 0, (_DWORD)BaseAddress, 0, 0LL, 0LL);
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
    return RtlpHpFreeWithExceptionProtection(HeapHandle, BaseAddress, Flags);
  else
    return RtlpFreeHeapInternal(HeapHandle, BaseAddress, Flags);
}
