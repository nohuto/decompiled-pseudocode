/*
 * XREFs of RtlpHpAllocWithExceptionProtection @ 0x140584C3C
 * Callers:
 *     RtlAllocateHeap @ 0x140309770 (RtlAllocateHeap.c)
 * Callees:
 *     RtlpAllocateHeapInternal @ 0x1403097C8 (RtlpAllocateHeapInternal.c)
 *     RtlpHeapExceptionFilter @ 0x140591A0C (RtlpHeapExceptionFilter.c)
 */

void *__fastcall RtlpHpAllocWithExceptionProtection(_DWORD *a1, unsigned __int64 a2, unsigned int a3, __int16 a4)
{
  return RtlpAllocateHeapInternal(a1, a2, a3, a4);
}
