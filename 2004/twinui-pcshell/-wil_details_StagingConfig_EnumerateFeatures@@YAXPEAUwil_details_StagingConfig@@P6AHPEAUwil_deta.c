/*
 * XREFs of ?wil_details_StagingConfig_EnumerateFeatures@@YAXPEAUwil_details_StagingConfig@@P6AHPEAUwil_details_StagingConfigFeature@@PEAX@Z2@Z @ 0x18013D1E4
 * Callers:
 *     ?wil_StagingConfig_QueryFeatureState@@YAHW4wil_FeatureStore@@PEAUwil_FeatureState@@IHPEAH@Z @ 0x18013CDBC (-wil_StagingConfig_QueryFeatureState@@YAHW4wil_FeatureStore@@PEAUwil_FeatureState@@IHPEAH@Z.c)
 * Callees:
 *     ?IsRunning@StubImmersiveApplication@@UEAAJPEAH@Z @ 0x18008A430 (-IsRunning@StubImmersiveApplication@@UEAAJPEAH@Z.c)
 *     ?wil_details_StagingConfigFeature_HasUniqueState@@YAHPEBUwil_details_StagingConfigFeature@@@Z @ 0x18013D1A4 (-wil_details_StagingConfigFeature_HasUniqueState@@YAHPEBUwil_details_StagingConfigFeature@@@Z.c)
 */

void __fastcall wil_details_StagingConfig_EnumerateFeatures(
        struct wil_details_StagingConfig *a1,
        int (*a2)(struct wil_details_StagingConfigFeature *, void *),
        int *a3)
{
  __int64 v3; // rsi
  __int64 v4; // r14
  unsigned int i; // ebx
  StubImmersiveApplication *v7; // r8
  unsigned __int16 v8; // r9
  unsigned int v9; // edx

  v3 = *((_QWORD *)a1 + 3);
  v4 = *((_QWORD *)a1 + 4);
  for ( i = 0; i < *(unsigned __int16 *)(v3 + 4); ++i )
  {
    if ( wil_details_StagingConfigFeature_HasUniqueState((const struct wil_details_StagingConfigFeature *)(v4 + 12LL * i)) )
    {
      if ( (*((_BYTE *)v7 + 4) & 1) != 0 || (v9 = 0, !v8) )
      {
LABEL_8:
        if ( !(unsigned int)StubImmersiveApplication::IsRunning(v7, a3) )
          return;
      }
      else
      {
        while ( v9 == i || *(_DWORD *)v7 != *(_DWORD *)(v4 + 12LL * v9) )
        {
          if ( ++v9 >= v8 )
            goto LABEL_8;
        }
      }
    }
  }
}
