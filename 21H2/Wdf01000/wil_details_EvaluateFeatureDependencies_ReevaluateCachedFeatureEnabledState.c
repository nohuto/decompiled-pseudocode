/*
 * XREFs of wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState @ 0x1C00BD184
 * Callers:
 *     wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState @ 0x1C00BD150 (wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState.c)
 * Callees:
 *     wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState @ 0x1C00BD150 (wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState.c)
 */

wil_details_FeatureStateCache __fastcall wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState(
        wil_details_FeatureStateCache *featureState,
        wil_details_FeatureStateCache observedState,
        const wil_details_FeatureDescriptor *descriptor)
{
  unsigned int exchange; // ebx
  unsigned int v5; // esi
  const wil_details_FeatureDescriptor *const *requiresFeatures; // r14
  const wil_details_FeatureDescriptor *v7; // rax
  unsigned int v8; // ecx
  wil_details_FeatureStateCache result; // [rsp+40h] [rbp+8h]

  exchange = observedState.exchange;
  result.payloadId = 0;
  v5 = (observedState.exchange >> 4) & 1;
  if ( v5 )
  {
    requiresFeatures = descriptor->requiresFeatures;
    if ( requiresFeatures )
    {
      while ( 1 )
      {
        v7 = *requiresFeatures;
        if ( !*requiresFeatures )
          goto LABEL_13;
        if ( v7->isAlwaysEnabled || v7->isAlwaysDisabled )
          break;
        if ( (wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState(
                v7->featureStateCache,
                *requiresFeatures).exchange64 & 8) != 0 )
          goto LABEL_9;
        v5 = 0;
LABEL_10:
        ++requiresFeatures;
        if ( !v5 )
          goto LABEL_13;
      }
      if ( !v7->isEnabledByDefault )
      {
        v5 = 0;
        goto LABEL_13;
      }
LABEL_9:
      v5 = 1;
      goto LABEL_10;
    }
  }
LABEL_13:
  v8 = 128;
  if ( ((exchange >> 3) & 1) != v5 )
    v8 = 136;
  _InterlockedXor((volatile signed __int32 *)featureState, v8);
  result.exchange = exchange ^ v8;
  return result;
}
