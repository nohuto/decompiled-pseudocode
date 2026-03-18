/*
 * XREFs of _wil_details_UpdateFeatureConfiguredStates@0 @ 0x27A21C
 * Callers:
 *     _wil_details_OnFeatureConfigurationChange@4 @ 0x27A1C6 (_wil_details_OnFeatureConfigurationChange@4.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _wil_details_FeatureDescriptors_SkipPadding@4 @ 0xF01D8 (_wil_details_FeatureDescriptors_SkipPadding@4.c)
 *     _wil_details_BuildFeatureStateCacheFromQueryResults@12 @ 0x27A018 (_wil_details_BuildFeatureStateCacheFromQueryResults@12.c)
 */

_DWORD *__stdcall wil_details_UpdateFeatureConfiguredStates()
{
  _DWORD *result; // eax
  _DWORD *i; // esi
  int FeatureConfiguration; // eax
  int v3[2]; // [esp+10h] [ebp-20h] BYREF
  _DWORD v4[2]; // [esp+18h] [ebp-18h] BYREF
  _BYTE v5[12]; // [esp+20h] [ebp-10h] BYREF

  result = wil_details_FeatureDescriptors_SkipPadding(&wil_details_featureDescriptors_a);
  for ( i = result; result; i = result )
  {
    if ( !*((_BYTE *)i + 9) && !*((_BYTE *)i + 10) && !*((_BYTE *)i + 8) )
    {
      v4[0] = 0;
      v4[1] = 0;
      memset(v5, 0, sizeof(v5));
      FeatureConfiguration = RtlQueryFeatureConfiguration(i[1], 1, v4, v5);
      v3[0] = 0;
      v3[1] = 0;
      wil_details_BuildFeatureStateCacheFromQueryResults(FeatureConfiguration, (int)v5, v3);
      _InterlockedXor((volatile signed __int32 *)*i, (LOWORD(v3[0]) ^ (unsigned __int16)*(_DWORD *)*i) & 0x3E0);
    }
    result = wil_details_FeatureDescriptors_SkipPadding(i + 4);
  }
  return result;
}
