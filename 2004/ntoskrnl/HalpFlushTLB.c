/*
 * XREFs of HalpFlushTLB @ 0x1403B8710
 * Callers:
 *     HalpMmZeroPageWithTemporaryMapping @ 0x1403B7F88 (HalpMmZeroPageWithTemporaryMapping.c)
 *     HalpUnmapVirtualAddress @ 0x1403B83F0 (HalpUnmapVirtualAddress.c)
 *     HalpMap @ 0x1403B8498 (HalpMap.c)
 * Callees:
 *     KeFlushCurrentTbImmediately @ 0x14039DCF0 (KeFlushCurrentTbImmediately.c)
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
