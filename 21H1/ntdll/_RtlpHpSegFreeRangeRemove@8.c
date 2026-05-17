/*
 * XREFs of _RtlpHpSegFreeRangeRemove@8 @ 0x4B37BAC9
 * Callers:
 *     _RtlpHpSegContextCompact@8 @ 0x4B37B591 (_RtlpHpSegContextCompact@8.c)
 *     _RtlpHpSegLargeRangeAllocate@16 @ 0x4B37BBBC (_RtlpHpSegLargeRangeAllocate@16.c)
 *     _RtlpHpSegPageRangeAllocate@12 @ 0x4B37C863 (_RtlpHpSegPageRangeAllocate@12.c)
 *     _RtlpHpSegPageRangeCoalesce@20 @ 0x4B37CA1F (_RtlpHpSegPageRangeCoalesce@20.c)
 * Callees:
 *     _RtlRbRemoveNode@8 @ 0x4B2D9B10 (_RtlRbRemoveNode@8.c)
 */

volatile signed __int32 *__fastcall RtlpHpSegFreeRangeRemove(int a1, _DWORD *a2)
{
  unsigned __int16 v4; // ax
  int v5; // ecx
  volatile signed __int32 *result; // eax

  RtlRbRemoveNode(a1 + 80, (unsigned int)a2);
  a2[1] = 0;
  a2[2] = 0;
  v4 = ~(unsigned __int16)(a2[3] >> 8);
  *a2 = -857879331;
  v5 = v4;
  result = (volatile signed __int32 *)(a1 + *(__int16 *)(a1 + 18) + 8);
  _InterlockedExchangeAdd(result, -v5);
  if ( (RtlpHpHeapFeatures & 8) != 0 )
    return (volatile signed __int32 *)RtlpHpTlLogMemStats(*(_DWORD *)(a1 + 36), (int *)(a1 + *(__int16 *)(a1 + 18)));
  return result;
}
