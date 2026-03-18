/*
 * XREFs of RtlpHpFreeWithExceptionProtection @ 0x140584CB0
 * Callers:
 *     RtlFreeHeap @ 0x140309680 (RtlFreeHeap.c)
 * Callees:
 *     RtlpFreeHeapInternal @ 0x1403096E4 (RtlpFreeHeapInternal.c)
 *     RtlpHeapExceptionFilter @ 0x140591A0C (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlpHpFreeWithExceptionProtection(_DWORD *a1, unsigned __int64 a2, unsigned int a3)
{
  return RtlpFreeHeapInternal(a1, a2, a3);
}
