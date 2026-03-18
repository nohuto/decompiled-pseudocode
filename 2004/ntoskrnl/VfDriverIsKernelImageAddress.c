/*
 * XREFs of VfDriverIsKernelImageAddress @ 0x1409C58B0
 * Callers:
 *     VfPendingShouldForce @ 0x1409D29AC (VfPendingShouldForce.c)
 *     VfTargetDriversGetVerifierData @ 0x1409D3E30 (VfTargetDriversGetVerifierData.c)
 *     ViTargetIncrementCounter @ 0x1409D44FC (ViTargetIncrementCounter.c)
 *     VfCheckUserHandle @ 0x1409D7174 (VfCheckUserHandle.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall VfDriverIsKernelImageAddress(unsigned __int64 a1)
{
  return ViDriverKernelBase && a1 >= ViDriverKernelBase && a1 < ViDriverKernelEnd;
}
