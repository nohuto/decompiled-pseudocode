/*
 * XREFs of RtlpHpFreeWithExceptionProtection @ 0x140580BD0
 * Callers:
 *     RtlFreeHeap @ 0x14035EDC0 (RtlFreeHeap.c)
 * Callees:
 *     RtlpFreeHeapInternal @ 0x14035EE24 (RtlpFreeHeapInternal.c)
 *     RtlpHeapExceptionFilter @ 0x14058D878 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlpHpFreeWithExceptionProtection(_DWORD *a1, unsigned __int64 a2, unsigned int a3)
{
  return RtlpFreeHeapInternal(a1, a2, a3);
}
