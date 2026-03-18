/*
 * XREFs of HalpFlushTLB @ 0x1403B78E0
 * Callers:
 *     HalpMmZeroPageWithTemporaryMapping @ 0x1403B7158 (HalpMmZeroPageWithTemporaryMapping.c)
 *     HalpUnmapVirtualAddress @ 0x1403B75C0 (HalpUnmapVirtualAddress.c)
 *     HalpMap @ 0x1403B7668 (HalpMap.c)
 * Callees:
 *     KeFlushCurrentTbImmediately @ 0x14039D560 (KeFlushCurrentTbImmediately.c)
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
