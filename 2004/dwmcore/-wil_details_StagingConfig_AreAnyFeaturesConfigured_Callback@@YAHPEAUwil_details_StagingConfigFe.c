/*
 * XREFs of ?wil_details_StagingConfig_AreAnyFeaturesConfigured_Callback@@YAHPEAUwil_details_StagingConfigFeature@@PEAX@Z @ 0x1800DD6C4
 * Callers:
 *     ?wil_details_StagingConfig_AreAnyFeaturesConfigured@@YAHPEAUwil_details_StagingConfig@@@Z @ 0x18002F010 (-wil_details_StagingConfig_AreAnyFeaturesConfigured@@YAHPEAUwil_details_StagingConfig@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_StagingConfig_AreAnyFeaturesConfigured_Callback(
        struct wil_details_StagingConfigFeature *a1,
        _DWORD *a2)
{
  *a2 = 1;
  return 0LL;
}
