/*
 * XREFs of _RtlpHpTagFreeHeap@12 @ 0x4B3701A4
 * Callers:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlpHpFreeWithExceptionProtection@12 @ 0x4B34D3E6 (_RtlpHpFreeWithExceptionProtection@12.c)
 * Callees:
 *     _RtlpFreeHeapInternal@20 @ 0x4B30705A (_RtlpFreeHeapInternal@20.c)
 */

unsigned int __fastcall RtlpHpTagFreeHeap(_DWORD *a1, unsigned int a2, int a3)
{
  unsigned int v3; // esi
  int v5; // [esp+4h] [ebp-8h] BYREF
  int v6; // [esp+8h] [ebp-4h] BYREF

  v3 = RtlpFreeHeapInternal(a1, a2, a3, &v5, &v6);
  if ( v3 && (_WORD)v6 )
    _InterlockedExchangeAdd(
      (volatile signed __int32 *)(*(_DWORD *)(dword_4B3A46B0 + 4 * (unsigned __int16)v6 - 4) + 24),
      -v5);
  return v3;
}
