/*
 * XREFs of _RtlpHpStackDbAllocRoutine@8 @ 0x4B36DC40
 * Callers:
 *     _RtlpHpStackTraceAllocAdd@12 @ 0x4B36DEC6 (_RtlpHpStackTraceAllocAdd@12.c)
 * Callees:
 *     _RtlpHpMetadataAlloc@20 @ 0x4B379349 (_RtlpHpMetadataAlloc@20.c)
 */

int __stdcall RtlpHpStackDbAllocRoutine(int a1, int a2)
{
  return RtlpHpMetadataAlloc(0, RtlpHpEnvHandle, dword_4B3A446C);
}
