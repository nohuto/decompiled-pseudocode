/*
 * XREFs of _RtlpHpSizeHeap@12 @ 0x4B37999D
 * Callers:
 *     _RtlValidateHeap@12 @ 0x4B2A7420 (_RtlValidateHeap@12.c)
 *     _RtlSizeHeap@12 @ 0x4B2DB840 (_RtlSizeHeap@12.c)
 *     _RtlpHpFreeHeap@20 @ 0x4B3784F8 (_RtlpHpFreeHeap@20.c)
 * Callees:
 *     _RtlCompareMemory@12 @ 0x4B307F30 (_RtlCompareMemory@12.c)
 *     _RtlpHpSizeHeapInternal@16 @ 0x4B379A08 (_RtlpHpSizeHeapInternal@16.c)
 */

int __fastcall RtlpHpSizeHeap(int a1, int a2, int a3)
{
  int v4; // edi
  void *v5; // edx
  int v6; // esi
  SIZE_T v8; // [esp-4h] [ebp-10h]

  v4 = *(_DWORD *)(a1 + 12) | a3;
  v5 = *(void **)(a1 + 176);
  if ( v5 && v5 == NtCurrentTeb()->ClientId.UniqueThread )
    v4 |= 1u;
  if ( !a2 )
    return -1;
  if ( (a2 & 7) != 0 )
    return -1;
  v6 = RtlpHpSizeHeapInternal(v4, 0);
  if ( v6 != -1 && (v4 & 0x10000000) != 0 )
  {
    LODWORD(v8) = 8;
    if ( (unsigned int)RtlCompareMemory((const void *)(v6 + a2), CheckHeapFillPattern, v8) != 8 )
      return -1;
  }
  return v6;
}
