/*
 * XREFs of _RtlpHpStackDbFreeRoutine@8 @ 0x4B36DC70
 * Callers:
 *     _RtlpHpStackTraceAllocAdd@12 @ 0x4B36DEC6 (_RtlpHpStackTraceAllocAdd@12.c)
 * Callees:
 *     _RtlpHpMetadataFree@12 @ 0x4B379479 (_RtlpHpMetadataFree@12.c)
 */

int __stdcall RtlpHpStackDbFreeRoutine(int a1, int a2)
{
  return RtlpHpMetadataFree(RtlpHpEnvHandle, dword_4B3A446C);
}
