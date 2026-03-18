/*
 * XREFs of VfDriverIsKernelImageAddress @ 0x1409C58A0
 * Callers:
 *     VfPendingShouldForce @ 0x1409D294C (VfPendingShouldForce.c)
 *     VfTargetDriversGetVerifierData @ 0x1409D3DD0 (VfTargetDriversGetVerifierData.c)
 *     ViTargetIncrementCounter @ 0x1409D449C (ViTargetIncrementCounter.c)
 *     VfCheckUserHandle @ 0x1409D7114 (VfCheckUserHandle.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall VfDriverIsKernelImageAddress(unsigned __int64 a1)
{
  return ViDriverKernelBase && a1 >= ViDriverKernelBase && a1 < ViDriverKernelEnd;
}
