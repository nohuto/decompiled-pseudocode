/*
 * XREFs of RtlpCheckFunctionPatchApplied @ 0x1409AFC88
 * Callers:
 *     RtlCheckCurrentPatchesApplied @ 0x140917830 (RtlCheckCurrentPatchesApplied.c)
 * Callees:
 *     RtlpCheckFunctionPatchAppliedInOriginalImage @ 0x1409AFCA0 (RtlpCheckFunctionPatchAppliedInOriginalImage.c)
 */

__int64 __fastcall RtlpCheckFunctionPatchApplied(__int64 a1, __int64 a2, __int64 a3)
{
  return RtlpCheckFunctionPatchAppliedInOriginalImage(a1, 0LL, a3);
}
