/*
 * XREFs of HalpFlushTLB @ 0x1403BBBB0
 * Callers:
 *     HalpMmZeroPageWithTemporaryMapping @ 0x1403BB428 (HalpMmZeroPageWithTemporaryMapping.c)
 *     HalpUnmapVirtualAddress @ 0x1403BB890 (HalpUnmapVirtualAddress.c)
 *     HalpMap @ 0x1403BB938 (HalpMap.c)
 * Callees:
 *     KeFlushCurrentTbImmediately @ 0x1403A0A80 (KeFlushCurrentTbImmediately.c)
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
