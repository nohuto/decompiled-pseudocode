/*
 * XREFs of VfTargetDriversIsEnabled @ 0x1409D9F40
 * Callers:
 *     PipDmgGetDriverDmarCompatLevel @ 0x140768E64 (PipDmgGetDriverDmarCompatLevel.c)
 *     ViIrpCheckKernelAddressForIrp @ 0x1409D4898 (ViIrpCheckKernelAddressForIrp.c)
 *     VfPendingShouldForce @ 0x1409D89CC (VfPendingShouldForce.c)
 *     VfCheckUserHandle @ 0x1409DD194 (VfCheckUserHandle.c)
 *     ViWdBeforeCallDriver @ 0x1409E3D58 (ViWdBeforeCallDriver.c)
 *     VerifierExInitializeLookasideListEx @ 0x1409E41B0 (VerifierExInitializeLookasideListEx.c)
 *     VerifierExInitializeNPagedLookasideList @ 0x1409E4300 (VerifierExInitializeNPagedLookasideList.c)
 *     VerifierExInitializePagedLookasideList @ 0x1409E4420 (VerifierExInitializePagedLookasideList.c)
 * Callees:
 *     VfTargetDriversGetVerifierData @ 0x1409D9E50 (VfTargetDriversGetVerifierData.c)
 */

__int64 __fastcall VfTargetDriversIsEnabled(unsigned __int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !VfSafeMode && ViTargetInitialized )
    LOBYTE(v1) = VfTargetDriversGetVerifierData(a1) != 0;
  return v1;
}
