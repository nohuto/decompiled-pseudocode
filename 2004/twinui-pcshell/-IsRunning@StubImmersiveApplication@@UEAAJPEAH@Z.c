/*
 * XREFs of ?IsRunning@StubImmersiveApplication@@UEAAJPEAH@Z @ 0x18008A430
 * Callers:
 *     ?GetTrustLevel@CortanaSharedExperienceManager@@WBA@EAAJPEAW4TrustLevel@@@Z @ 0x1800F2410 (-GetTrustLevel@CortanaSharedExperienceManager@@WBA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@ShellFeedsExperienceManagerImpl@@WBI@EAAJPEAW4TrustLevel@@@Z @ 0x1800F33E0 (-GetTrustLevel@ShellFeedsExperienceManagerImpl@@WBI@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?wil_details_StagingConfig_EnumerateFeatures@@YAXPEAUwil_details_StagingConfig@@P6AHPEAUwil_details_StagingConfigFeature@@PEAX@Z2@Z @ 0x18013D1E4 (-wil_details_StagingConfig_EnumerateFeatures@@YAXPEAUwil_details_StagingConfig@@P6AHPEAUwil_deta.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StubImmersiveApplication::IsRunning(StubImmersiveApplication *this, int *a2)
{
  *a2 = 1;
  return 0LL;
}
