/*
 * XREFs of _RtlpHpFreeWithExceptionProtection@12 @ 0x4B34D3E6
 * Callers:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 * Callees:
 *     _RtlpFreeHeapInternal@20 @ 0x4B30705A (_RtlpFreeHeapInternal@20.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _RtlpHpTagFreeHeap@12 @ 0x4B3701A4 (_RtlpHpTagFreeHeap@12.c)
 *     _RtlpHeapExceptionFilter@8 @ 0x4B375DFF (_RtlpHeapExceptionFilter@8.c)
 */

unsigned int __fastcall RtlpHpFreeWithExceptionProtection(_DWORD *a1, unsigned int a2, int a3)
{
  if ( (RtlpHpHeapFeatures & 2) != 0 )
    return RtlpHpTagFreeHeap(a3);
  else
    return RtlpFreeHeapInternal(a1, a2, a3, 0, 0);
}
