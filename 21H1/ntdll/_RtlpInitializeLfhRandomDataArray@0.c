/*
 * XREFs of _RtlpInitializeLfhRandomDataArray@0 @ 0x4B2B2266
 * Callers:
 *     @RtlpCreateLowFragHeap@4 @ 0x4B2AEF38 (@RtlpCreateLowFragHeap@4.c)
 *     _RtlpHpLfhContextInitialize@28 @ 0x4B3765A7 (_RtlpHpLfhContextInitialize@28.c)
 * Callees:
 *     _RtlpHeapGenerateRandomValue32@0 @ 0x4B2B22F0 (_RtlpHeapGenerateRandomValue32@0.c)
 */

int __stdcall RtlpInitializeLfhRandomDataArray()
{
  unsigned int i; // edi
  int RandomValue32; // esi
  int result; // eax

  for ( i = 0; i < 64; i += 2 )
  {
    RandomValue32 = RtlpHeapGenerateRandomValue32();
    result = RtlpHeapGenerateRandomValue32() & 0x7F7F7F7F;
    RtlpLowFragHeapRandomData[i] = result;
    dword_4B3A4204[i] = RandomValue32 & 0x7F7F7F7F;
  }
  return result;
}
