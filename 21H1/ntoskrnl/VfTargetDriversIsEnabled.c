/*
 * XREFs of VfTargetDriversIsEnabled @ 0x1409D3EC0
 * Callers:
 *     PipDmgGetDriverDmarCompatLevel @ 0x140759C2C (PipDmgGetDriverDmarCompatLevel.c)
 *     ViIrpCheckKernelAddressForIrp @ 0x1409CE868 (ViIrpCheckKernelAddressForIrp.c)
 *     VfPendingShouldForce @ 0x1409D294C (VfPendingShouldForce.c)
 *     VfCheckUserHandle @ 0x1409D7114 (VfCheckUserHandle.c)
 *     ViWdBeforeCallDriver @ 0x1409DDCD8 (ViWdBeforeCallDriver.c)
 *     VerifierExInitializeLookasideListEx @ 0x1409DE130 (VerifierExInitializeLookasideListEx.c)
 *     VerifierExInitializeNPagedLookasideList @ 0x1409DE280 (VerifierExInitializeNPagedLookasideList.c)
 *     VerifierExInitializePagedLookasideList @ 0x1409DE3A0 (VerifierExInitializePagedLookasideList.c)
 * Callees:
 *     VfTargetDriversGetVerifierData @ 0x1409D3DD0 (VfTargetDriversGetVerifierData.c)
 */

__int64 __fastcall VfTargetDriversIsEnabled(unsigned __int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !VfSafeMode && ViTargetInitialized )
    LOBYTE(v1) = VfTargetDriversGetVerifierData(a1) != 0;
  return v1;
}
