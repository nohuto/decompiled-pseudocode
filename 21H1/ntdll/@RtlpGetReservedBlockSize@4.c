/*
 * XREFs of @RtlpGetReservedBlockSize@4 @ 0x4B370C7D
 * Callers:
 *     _RtlpFreeHeapInternal@20 @ 0x4B30705A (_RtlpFreeHeapInternal@20.c)
 *     _RtlpLowFragHeapFlushCaches@4 @ 0x4B37172A (_RtlpLowFragHeapFlushCaches@4.c)
 *     _RtlpWalkLFHBlock@12 @ 0x4B371E16 (_RtlpWalkLFHBlock@12.c)
 * Callees:
 *     <none>
 */

unsigned int __thiscall RtlpGetReservedBlockSize(int this)
{
  unsigned int result; // eax

  result = *(unsigned __int16 *)(this + 20);
  if ( (*(_BYTE *)(this + 22) & 3) != 0 )
    return (((8 * result + 4088) & 0xFFFFF000) + 4096) >> 3;
  return result;
}
