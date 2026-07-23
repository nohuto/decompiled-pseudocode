/*
 * XREFs of _RtlpHpSegSubAllocate@20 @ 0x4B37D9D6
 * Callers:
 *     _RtlpHpSegLfhAllocate@20 @ 0x4B37BCC0 (_RtlpHpSegLfhAllocate@20.c)
 *     _RtlpHpSegVsAllocate@20 @ 0x4B37DAB0 (_RtlpHpSegVsAllocate@20.c)
 * Callees:
 *     _RtlpHpSegAlloc@20 @ 0x4B37B40B (_RtlpHpSegAlloc@20.c)
 *     _RtlpHpSegPageRangeComputeLargePageCost@12 @ 0x4B37CE0A (_RtlpHpSegPageRangeComputeLargePageCost@12.c)
 */

void *__fastcall RtlpHpSegSubAllocate(int a1, unsigned int a2, unsigned int a3, _DWORD *a4, _DWORD *a5)
{
  unsigned int v5; // eax
  void *v8; // ebx
  int v10; // [esp-4h] [ebp-14h]
  void *v11; // [esp+Ch] [ebp-4h]

  v5 = a3;
  if ( a2 >= 0x10000 )
    v5 = a3 | 4;
  v11 = RtlpHpSegAlloc(a1, a2, a2, 0, v5);
  *a4 = 0;
  *a5 = 0;
  if ( !v11 )
    return v11;
  if ( (RtlpHpLfhPerfFlags & 0x80u) != 0 && BYTE1(*(_DWORD *)(a1 + 28)) >= 2u )
  {
    *a4 |= 1u;
    return v11;
  }
  if ( (RtlpHpLfhPerfFlags & 0x100) == 0 || (*(_BYTE *)(a1 + 9) & 7) == 0 )
    return v11;
  v10 = a2;
  v8 = v11;
  if ( RtlpHpSegPageRangeComputeLargePageCost((_DWORD *)a1, (int)v11, v10) <= 1 )
    *a4 |= 1u;
  return v8;
}
