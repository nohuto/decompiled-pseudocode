/*
 * XREFs of _wil_StagingConfig_QueryFeatureState@20 @ 0x4B3A1088
 * Callers:
 *     _wil_details_GetCurrentFeatureEnabledState@8 @ 0x4B306714 (_wil_details_GetCurrentFeatureEnabledState@8.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _wil_details_StagingConfig_Free@4 @ 0x4B306902 (_wil_details_StagingConfig_Free@4.c)
 *     _wil_details_StagingConfig_Load@20 @ 0x4B30692A (_wil_details_StagingConfig_Load@20.c)
 *     _wil_details_StagingConfig_QueryFeatureState@16 @ 0x4B306B98 (_wil_details_StagingConfig_QueryFeatureState@16.c)
 */

int __fastcall wil_StagingConfig_QueryFeatureState(int a1, int a2, int a3, int a4, int a5)
{
  int FeatureState; // esi
  ULONG v8[13]; // [esp+Ch] [ebp-108h] BYREF
  int v9[51]; // [esp+40h] [ebp-D4h] BYREF

  FeatureState = 0;
  if ( !wil_details_StagingConfig_Load(v8, a1, v9, a1) )
  {
    FeatureState = wil_details_StagingConfig_QueryFeatureState(v8, a2, a3, a4);
    wil_details_StagingConfig_Free((int)v8);
  }
  return FeatureState;
}
