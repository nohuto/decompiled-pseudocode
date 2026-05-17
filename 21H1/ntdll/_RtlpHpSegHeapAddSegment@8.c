/*
 * XREFs of _RtlpHpSegHeapAddSegment@8 @ 0x4B37BB8C
 * Callers:
 *     _RtlpHpSegContextReserve@12 @ 0x4B37B777 (_RtlpHpSegContextReserve@12.c)
 *     _RtlpHpSegPageRangeAllocate@12 @ 0x4B37C863 (_RtlpHpSegPageRangeAllocate@12.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlpHpSegHeapAddSegment(int a1, unsigned int a2)
{
  int result; // eax
  unsigned int *v3; // esi

  *(_DWORD *)(a2 + 8) = a2 ^ a1 ^ RtlpHpHeapGlobals ^ 0xA2E64EAD;
  result = a1 + 68;
  v3 = *(unsigned int **)(a1 + 72);
  if ( *v3 != a1 + 68 )
    __fastfail(3u);
  *(_DWORD *)(a2 + 4) = v3;
  *(_DWORD *)a2 = result;
  *v3 = a2;
  *(_DWORD *)(a1 + 72) = a2;
  ++*(_DWORD *)(a1 + 76);
  return result;
}
