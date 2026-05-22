/*
 * XREFs of ?wil_details_StagingConfig_AreAnyFeaturesConfigured@@YAHPEAUwil_details_StagingConfig@@@Z @ 0x180011FB8
 * Callers:
 *     ?wil_StagingConfig_QueryFeatureState@@YAHW4wil_FeatureStore@@PEAUwil_FeatureState@@IHPEAH@Z @ 0x180011ED8 (-wil_StagingConfig_QueryFeatureState@@YAHW4wil_FeatureStore@@PEAUwil_FeatureState@@IHPEAH@Z.c)
 * Callees:
 *     ?wil_details_StagingConfig_AreAnyFeaturesConfigured_Callback@@YAHPEAUwil_details_StagingConfigFeature@@PEAX@Z @ 0x18001BA24 (-wil_details_StagingConfig_AreAnyFeaturesConfigured_Callback@@YAHPEAUwil_details_StagingConfigFe.c)
 *     ?wil_details_StagingConfigFeature_HasUniqueState@@YAHPEBUwil_details_StagingConfigFeature@@@Z @ 0x180068288 (-wil_details_StagingConfigFeature_HasUniqueState@@YAHPEBUwil_details_StagingConfigFeature@@@Z.c)
 */

__int64 __fastcall wil_details_StagingConfig_AreAnyFeaturesConfigured(struct wil_details_StagingConfig *a1)
{
  __int64 v1; // rbp
  unsigned int v2; // ebx
  __int64 v3; // r14
  unsigned int v5; // edi
  __int64 v7; // r8
  unsigned __int16 v8; // r9
  unsigned int v9; // edx
  int v10; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 3);
  v2 = 0;
  v3 = *((_QWORD *)a1 + 4);
  v10 = 0;
  v5 = 0;
  if ( *(_WORD *)(v1 + 4) )
  {
    do
    {
      if ( (unsigned int)wil_details_StagingConfigFeature_HasUniqueState((const struct wil_details_StagingConfigFeature *)(v3 + 12LL * v5)) )
      {
        if ( (*(_BYTE *)(v7 + 4) & 1) != 0 || (v9 = 0, !v8) )
        {
LABEL_11:
          if ( !(unsigned int)wil_details_StagingConfig_AreAnyFeaturesConfigured_Callback(
                                (struct wil_details_StagingConfigFeature *)v7,
                                &v10) )
            break;
        }
        else
        {
          while ( v9 == v5 || *(_DWORD *)v7 != *(_DWORD *)(v3 + 12LL * v9) )
          {
            if ( ++v9 >= v8 )
              goto LABEL_11;
          }
        }
      }
      ++v5;
    }
    while ( v5 < *(unsigned __int16 *)(v1 + 4) );
    if ( v10 )
      return 1;
  }
  if ( *(_WORD *)(*((_QWORD *)a1 + 3) + 6LL) )
    return 1;
  return v2;
}
