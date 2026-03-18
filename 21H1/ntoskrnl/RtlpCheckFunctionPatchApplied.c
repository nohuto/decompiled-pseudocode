/*
 * XREFs of RtlpCheckFunctionPatchApplied @ 0x1409AEE28
 * Callers:
 *     RtlCheckCurrentPatchesApplied @ 0x1409165C0 (RtlCheckCurrentPatchesApplied.c)
 * Callees:
 *     RtlpCheckFunctionPatchAppliedInOriginalImage @ 0x1409AEE40 (RtlpCheckFunctionPatchAppliedInOriginalImage.c)
 */

__int64 __fastcall RtlpCheckFunctionPatchApplied(__int64 a1, __int64 a2, __int64 a3)
{
  return RtlpCheckFunctionPatchAppliedInOriginalImage(a1, 0LL, a3);
}
