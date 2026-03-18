/*
 * XREFs of RtlFreeHeap @ 0x140309680
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x1403097C8 (RtlpAllocateHeapInternal.c)
 * Callees:
 *     RtlpFreeHeapInternal @ 0x1403096E4 (RtlpFreeHeapInternal.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x140584CB0 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpLogHeapFailure @ 0x140591B24 (RtlpLogHeapFailure.c)
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
