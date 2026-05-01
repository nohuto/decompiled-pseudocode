/*
 * XREFs of ?IsRunning@StubImmersiveApplication@@UEAAJPEAH@Z @ 0x180089D40
 * Callers:
 *     ?GetTrustLevel@CortanaSharedExperienceManager@@WBA@EAAJPEAW4TrustLevel@@@Z @ 0x1800CD9E0 (-GetTrustLevel@CortanaSharedExperienceManager@@WBA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?wil_details_StagingConfig_EnumerateFeatures@@YAXPEAUwil_details_StagingConfig@@P6AHPEAUwil_details_StagingConfigFeature@@PEAX@Z2@Z @ 0x180118BC4 (-wil_details_StagingConfig_EnumerateFeatures@@YAXPEAUwil_details_StagingConfig@@P6AHPEAUwil_deta.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StubImmersiveApplication::IsRunning(StubImmersiveApplication *this, int *a2)
{
  *a2 = 1;
  return 0LL;
}
