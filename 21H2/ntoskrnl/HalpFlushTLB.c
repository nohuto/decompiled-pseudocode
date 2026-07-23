/*
 * XREFs of HalpFlushTLB @ 0x1403BBD20
 * Callers:
 *     HalpMmZeroPageWithTemporaryMapping @ 0x1403BB598 (HalpMmZeroPageWithTemporaryMapping.c)
 *     HalpUnmapVirtualAddress @ 0x1403BBA00 (HalpUnmapVirtualAddress.c)
 *     HalpMap @ 0x1403BBAA8 (HalpMap.c)
 * Callees:
 *     KeFlushCurrentTbImmediately @ 0x1403A0BD0 (KeFlushCurrentTbImmediately.c)
 */

unsigned __int64 HalpFlushTLB()
{
  unsigned __int64 result; // rax
  __int16 v1; // [rsp+20h] [rbp-8h]

  _disable();
  result = KeFlushCurrentTbImmediately();
  if ( (v1 & 0x200) != 0 )
    _enable();
  return result;
}
