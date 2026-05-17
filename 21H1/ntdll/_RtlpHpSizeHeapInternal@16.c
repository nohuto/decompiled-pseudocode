/*
 * XREFs of _RtlpHpSizeHeapInternal@16 @ 0x4B379A08
 * Callers:
 *     _RtlpHpExtrasGet@16 @ 0x4B3783B5 (_RtlpHpExtrasGet@16.c)
 *     _RtlpHpFreeHeap@20 @ 0x4B3784F8 (_RtlpHpFreeHeap@20.c)
 *     _RtlpHpReallocComputeSizes@20 @ 0x4B3797A5 (_RtlpHpReallocComputeSizes@20.c)
 *     _RtlpHpSizeHeap@12 @ 0x4B37999D (_RtlpHpSizeHeap@12.c)
 * Callees:
 *     _RtlpHpLargeAllocSize@16 @ 0x4B37A1ED (_RtlpHpLargeAllocSize@16.c)
 *     _RtlpHpSegSize@16 @ 0x4B37D931 (_RtlpHpSegSize@16.c)
 *     _RtlCSparseBitmapBitmaskRead@12 @ 0x4B37DCEF (_RtlCSparseBitmapBitmaskRead@12.c)
 */

int __fastcall RtlpHpSizeHeapInternal(int a1, __int16 a2, int a3, int a4)
{
  int v4; // eax
  int v5; // ecx

  if ( a2 )
  {
    v5 = 0;
  }
  else
  {
    v4 = RtlCSparseBitmapBitmaskRead(a1);
    if ( !v4 )
      return RtlpHpLargeAllocSize(a3, a4);
    v5 = v4 - 1;
  }
  if ( v5 == 2 )
    return RtlpHpLargeAllocSize(a3, a4);
  return RtlpHpSegSize(v5, a4);
}
