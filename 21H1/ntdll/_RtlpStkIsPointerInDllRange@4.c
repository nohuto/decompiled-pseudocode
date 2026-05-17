/*
 * XREFs of _RtlpStkIsPointerInDllRange@4 @ 0x4B307021
 * Callers:
 *     _RtlWalkFrameChain@12 @ 0x4B2DC050 (_RtlWalkFrameChain@12.c)
 *     _RtlCaptureStackContext@12 @ 0x4B308B20 (_RtlCaptureStackContext@12.c)
 *     _RtlpWalkFrameChainFuzzy@12 @ 0x4B350436 (_RtlpWalkFrameChainFuzzy@12.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpStkIsPointerInDllRange(unsigned int a1)
{
  return ((1 << ((a1 >> 20) & 0x1F)) & RtlpStkDllRanges[((a1 >> 20) & 0x7FF) >> 5]) != 0;
}
