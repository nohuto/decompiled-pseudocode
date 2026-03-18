/*
 * XREFs of wil_details_BuildFeatureStateCacheFromQueryResults @ 0x1C00BD038
 * Callers:
 *     wil_details_UpdateFeatureConfiguredStates @ 0x1C00BD2D0 (wil_details_UpdateFeatureConfiguredStates.c)
 *     wil_details_PopulateInitialConfiguredFeatureStates @ 0x1C00C90F0 (wil_details_PopulateInitialConfiguredFeatureStates.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_BuildFeatureStateCacheFromQueryResults(
        unsigned int queryStatus,
        const _RTL_FEATURE_CONFIGURATION *featureConfiguration,
        wil_details_FeatureStateCache *result)
{
  unsigned int v3; // r9d
  unsigned int v4; // edx

  v3 = 0;
  if ( queryStatus == -2147483614 || queryStatus == -1073741275 )
  {
    result->exchange64 = 0LL;
    goto LABEL_9;
  }
  result->exchange64 = 0LL;
  if ( queryStatus )
  {
    if ( queryStatus != 279 )
    {
      v3 = queryStatus;
LABEL_9:
      v4 = 131;
      goto LABEL_10;
    }
    v4 = (2 * (*((_DWORD *)featureConfiguration + 1) & 0x80)) | 0x83;
  }
  else
  {
    v4 = (2 * (*((_DWORD *)featureConfiguration + 1) & 0xB0 | (4 * (*((_DWORD *)featureConfiguration + 1) & 0x40)))) | 0x83;
  }
LABEL_10:
  result->exchange = v4;
  return v3;
}
