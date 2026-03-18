/*
 * XREFs of VfTargetDriversIsEnabled @ 0x1409D3F20
 * Callers:
 *     PipDmgGetDriverDmarCompatLevel @ 0x14075A6A4 (PipDmgGetDriverDmarCompatLevel.c)
 *     ViIrpCheckKernelAddressForIrp @ 0x1409CE878 (ViIrpCheckKernelAddressForIrp.c)
 *     VfPendingShouldForce @ 0x1409D29AC (VfPendingShouldForce.c)
 *     VfCheckUserHandle @ 0x1409D7174 (VfCheckUserHandle.c)
 *     ViWdBeforeCallDriver @ 0x1409DDD38 (ViWdBeforeCallDriver.c)
 *     VerifierExInitializeLookasideListEx @ 0x1409DE190 (VerifierExInitializeLookasideListEx.c)
 *     VerifierExInitializeNPagedLookasideList @ 0x1409DE2E0 (VerifierExInitializeNPagedLookasideList.c)
 *     VerifierExInitializePagedLookasideList @ 0x1409DE400 (VerifierExInitializePagedLookasideList.c)
 * Callees:
 *     VfTargetDriversGetVerifierData @ 0x1409D3E30 (VfTargetDriversGetVerifierData.c)
 */

__int64 __fastcall VfTargetDriversIsEnabled(unsigned __int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !VfSafeMode && ViTargetInitialized )
    LOBYTE(v1) = VfTargetDriversGetVerifierData(a1) != 0;
  return v1;
}
