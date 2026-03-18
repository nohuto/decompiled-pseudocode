/*
 * XREFs of RtlpHpFreeWithExceptionProtection @ 0x140581350
 * Callers:
 *     RtlFreeHeap @ 0x1402DB370 (RtlFreeHeap.c)
 * Callees:
 *     RtlpFreeHeapInternal @ 0x1402DB3D4 (RtlpFreeHeapInternal.c)
 *     RtlpHeapExceptionFilter @ 0x14058DF68 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlpHpFreeWithExceptionProtection(_DWORD *a1, unsigned __int64 a2, unsigned int a3)
{
  return RtlpFreeHeapInternal(a1, a2, a3);
}
