/*
 * XREFs of ?wil_details_GetCurrentFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEBUwil_details_FeatureDescriptor@@PEAH@Z @ 0x1C00368E4
 * Callers:
 *     ?wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@T1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C00367EC (-wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState@@YA-ATwil_details_FeatureStat.c)
 * Callees:
 *     ?wil_details_FeatureStateCache_GetCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C00367B8 (-wil_details_FeatureStateCache_GetCachedFeatureEnabledState@@YA-ATwil_details_FeatureStateCache@.c)
 *     ?wil_RtlStagingConfig_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHPEAH@Z @ 0x1C00BD384 (-wil_RtlStagingConfig_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHPEAH@Z.c)
 */

wil_details_FeatureStateCache __fastcall wil_details_GetCurrentFeatureEnabledState(
        const wil_details_FeatureDescriptor *descriptor,
        int *cacheFeatureState)
{
  unsigned int featureId; // edx
  BOOL v5; // r8d
  int v6; // eax
  int v7; // ecx
  unsigned int v8; // ebx
  int v9; // eax
  unsigned int v10; // ebx
  const wil_details_FeatureDescriptor *const *requiresFeatures; // rdi
  const wil_details_FeatureDescriptor *v12; // rax
  char exchange64; // al
  bool v14; // zf
  int v15; // eax
  wil_FeatureState state; // [rsp+20h] [rbp-20h] BYREF
  wil_details_FeatureStateCache result; // [rsp+50h] [rbp+10h]

  featureId = descriptor->featureId;
  v5 = (unsigned __int8)(descriptor->changeTime - 2) <= 1u;
  *cacheFeatureState = 1;
  memset(&state, 0, sizeof(state));
  v6 = wil_RtlStagingConfig_QueryFeatureState(&state, featureId, v5, cacheFeatureState);
  result.payloadId = 0;
  v7 = ((state.isVariantConfiguration != 0 ? 0x200 : 0) | (state.hasNotification != 0 ? 0x100 : 0)) ^ (32 * (state.enabledState & (unsigned __int8)-(v6 != 0))) & 0x60;
  if ( ((32 * (state.enabledState & (unsigned __int8)-(v6 != 0))) & 0x60) != 0 )
  {
    v9 = 0;
    if ( state.enabledState == wil_FeatureEnabledState_Enabled )
      v9 = 16;
    v8 = v9 | v7 & 0xFFFFFFEF;
  }
  else
  {
    v8 = v7 & 0xFFFFFFEF | (descriptor->isEnabledByDefault != 0 ? 0x10 : 0);
  }
  v10 = ((unsigned __int8)v8 ^ (unsigned __int8)(v8 >> 1)) & 8 ^ v8;
  result.exchange = v10;
  if ( (v10 & 8) != 0 )
  {
    requiresFeatures = descriptor->requiresFeatures;
    if ( requiresFeatures )
    {
      do
      {
        v12 = *requiresFeatures;
        if ( !*requiresFeatures )
          break;
        if ( v12->isAlwaysEnabled || v12->isAlwaysDisabled )
        {
          if ( (v10 & 8) == 0 )
            goto LABEL_17;
          v14 = v12->isEnabledByDefault == 0;
        }
        else
        {
          exchange64 = wil_details_FeatureStateCache_GetCachedFeatureEnabledState(
                         v12->featureStateCache,
                         *requiresFeatures).exchange64;
          if ( (v10 & 8) == 0 )
            goto LABEL_17;
          v14 = (exchange64 & 8) == 0;
        }
        if ( v14 )
        {
LABEL_17:
          v15 = 0;
          goto LABEL_18;
        }
        v15 = 8;
LABEL_18:
        ++requiresFeatures;
        v10 = v15 | v10 & 0xFFFFFFF7;
        result.exchange = v10;
      }
      while ( (v10 & 8) != 0 );
    }
  }
  return result;
}
