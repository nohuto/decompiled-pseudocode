/*
 * XREFs of wil_details_StagingConfig_AreAnyFeaturesConfigured_Callback @ 0x180002C84
 * Callers:
 *     wil_StagingConfig_QueryFeatureState @ 0x180002E40 (wil_StagingConfig_QueryFeatureState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_StagingConfig_AreAnyFeaturesConfigured_Callback(__int64 a1, _DWORD *a2)
{
  *a2 = 1;
  return 0LL;
}
