/*
 * XREFs of VfDriverIsKernelImageAddress @ 0x1409CB8D0
 * Callers:
 *     VfPendingShouldForce @ 0x1409D89CC (VfPendingShouldForce.c)
 *     VfTargetDriversGetVerifierData @ 0x1409D9E50 (VfTargetDriversGetVerifierData.c)
 *     ViTargetIncrementCounter @ 0x1409DA51C (ViTargetIncrementCounter.c)
 *     VfCheckUserHandle @ 0x1409DD194 (VfCheckUserHandle.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall VfDriverIsKernelImageAddress(unsigned __int64 a1)
{
  return ViDriverKernelBase && a1 >= ViDriverKernelBase && a1 < ViDriverKernelEnd;
}
