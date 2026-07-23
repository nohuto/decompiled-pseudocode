/*
 * XREFs of _RtlHpGlobalsInitialize@0 @ 0x4B375D0E
 * Callers:
 *     _RtlInitializeHeapManager@4 @ 0x4B356A3E (_RtlInitializeHeapManager@4.c)
 * Callees:
 *     _RtlpHeapGenerateRandomValue32@0 @ 0x4B2B22F0 (_RtlpHeapGenerateRandomValue32@0.c)
 */

ULONG __stdcall RtlHpGlobalsInitialize()
{
  ULONG result; // eax

  memset(&RtlpHpHeapGlobals, 0, 0x1Cu);
  RtlpHeapGenerateRandomValue32();
  RtlpHpHeapGlobals = RtlpHeapGenerateRandomValue32();
  RtlpHeapGenerateRandomValue32();
  result = RtlpHeapGenerateRandomValue32();
  dword_4B3A4324 = result;
  dword_4B3A4328 = (int)&RtlpHeapFailureInfo;
  return result;
}
