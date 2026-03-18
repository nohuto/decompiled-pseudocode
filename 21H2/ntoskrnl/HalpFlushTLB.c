/*
 * XREFs of HalpFlushTLB @ 0x1403BF630
 * Callers:
 *     HalpMmZeroPageWithTemporaryMapping @ 0x1403BF274 (HalpMmZeroPageWithTemporaryMapping.c)
 *     HalpUnmapVirtualAddress @ 0x1403BF310 (HalpUnmapVirtualAddress.c)
 *     HalpMap @ 0x1403BF3B8 (HalpMap.c)
 * Callees:
 *     KeFlushCurrentTbImmediately @ 0x1403B1CF0 (KeFlushCurrentTbImmediately.c)
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
