/*
 * XREFs of RtlpHpAllocWithExceptionProtection @ 0x18002C270
 * Callers:
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 * Callees:
 *     RtlpHpTagAllocateHeap @ 0x180007AB4 (RtlpHpTagAllocateHeap.c)
 *     RtlpAllocateHeapInternal @ 0x18002AA20 (RtlpAllocateHeapInternal.c)
 *     RtlpHeapExceptionFilter @ 0x18010DCF4 (RtlpHeapExceptionFilter.c)
 */

unsigned __int64 __fastcall RtlpHpAllocWithExceptionProtection(void *a1, unsigned __int64 a2, int a3)
{
  if ( (RtlpHpHeapFeatures & 2) != 0 )
    return RtlpHpTagAllocateHeap(a1, a2);
  else
    return RtlpAllocateHeapInternal((unsigned __int16 *)a1, a2, a3, 0);
}
