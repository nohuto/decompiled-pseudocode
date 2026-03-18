/*
 * XREFs of RtlpHpAllocWithExceptionProtection @ 0x140580B5C
 * Callers:
 *     RtlAllocateHeap @ 0x14035EEB0 (RtlAllocateHeap.c)
 * Callees:
 *     RtlpAllocateHeapInternal @ 0x14035EF08 (RtlpAllocateHeapInternal.c)
 *     RtlpHeapExceptionFilter @ 0x14058D878 (RtlpHeapExceptionFilter.c)
 */

void *__fastcall RtlpHpAllocWithExceptionProtection(_DWORD *a1, unsigned __int64 a2, unsigned int a3, __int16 a4)
{
  return RtlpAllocateHeapInternal(a1, a2, a3, a4);
}
