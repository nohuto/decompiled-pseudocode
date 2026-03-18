/*
 * XREFs of ?wil_details_StagingConfig_QueryFeatureState@@YAHPEAUwil_details_StagingConfig@@PEAUwil_FeatureState@@IH@Z @ 0x1C001CFF8
 * Callers:
 *     ?wil_StagingConfig_QueryFeatureState@@YAHW4wil_FeatureStore@@PEAUwil_FeatureState@@IHPEAH@Z @ 0x1C00BC438 (-wil_StagingConfig_QueryFeatureState@@YAHW4wil_FeatureStore@@PEAUwil_FeatureState@@IHPEAH@Z.c)
 * Callees:
 *     ?wil_details_StagingConfigFeature_HasUniqueState@@YAHPEBUwil_details_StagingConfigFeature@@@Z @ 0x1C001CCC0 (-wil_details_StagingConfigFeature_HasUniqueState@@YAHPEBUwil_details_StagingConfigFeature@@@Z.c)
 */

__int64 __fastcall wil_details_StagingConfig_QueryFeatureState(
        wil_details_StagingConfig *config,
        wil_FeatureState *state,
        unsigned int featureId,
        int featureRequiresSessionChange)
{
  wil_details_StagingConfigHeader *header; // r12
  int v5; // r10d
  wil_details_StagingConfigFeature *features; // r11
  unsigned int payload; // ebx
  unsigned int v8; // eax
  unsigned int featureCount; // r15d
  int v12; // r14d
  int v13; // esi
  int v14; // eax
  __int64 v15; // xmm0_8
  unsigned int v16; // r8d
  __int64 v17; // rax
  int v18; // eax
  unsigned int v19; // edx
  unsigned int v20; // edx
  wil_FeatureEnabledState v21; // eax
  wil_FeatureEnabledState v22; // edx
  unsigned int v23; // ecx
  wil_details_StagingConfigUsageTrigger *triggers; // rax
  __int64 result; // rax
  wil_details_StagingConfigFeature feature; // [rsp+20h] [rbp-10h] BYREF

  header = config->header;
  v5 = 0;
  features = config->features;
  payload = 0;
  v8 = featureId;
  *(_QWORD *)&feature.featureId = 0LL;
  feature.payload = 0;
  featureCount = header->featureCount;
  v12 = 0;
  v13 = 0;
  if ( !header->featureCount )
  {
LABEL_10:
    v16 = 0;
    if ( v12 )
      goto LABEL_11;
    goto LABEL_30;
  }
  while ( features[v13].featureId != v8 )
  {
LABEL_9:
    if ( ++v13 >= featureCount )
      goto LABEL_10;
  }
  if ( !featureRequiresSessionChange || !config->changedInSession )
  {
    v14 = *((_DWORD *)&features[v13] + 1);
    v12 = 1;
    v15 = *(_QWORD *)&features[v13].featureId;
    payload = features[v13].payload;
    feature.payload = payload;
    *(_QWORD *)&feature.featureId = v15;
    if ( (v14 & 1) != 0 )
      goto LABEL_10;
    goto LABEL_8;
  }
  if ( (*((_DWORD *)&features[v13] + 1) & 1) != 0 )
  {
LABEL_8:
    v8 = featureId;
    goto LABEL_9;
  }
  payload = features[v13].payload;
  *(_QWORD *)&feature.featureId = *(_QWORD *)&features[v13].featureId;
  feature.payload = payload;
LABEL_11:
  if ( !featureRequiresSessionChange || (v17 = 12LL, !config->changedInSession) )
    v17 = 8LL;
  v18 = *(_DWORD *)(&header->version + v17);
  if ( (v18 & 4) != 0 )
  {
    v19 = *((_DWORD *)&feature + 1) & 0xFFFFCFFF;
    *((_DWORD *)&feature + 1) &= 0xFFFFCFFF;
  }
  else
  {
    v19 = *((_DWORD *)&feature + 1);
  }
  if ( (v18 & 2) != 0 )
  {
    v19 &= 0xFFFFF3FF;
    *((_DWORD *)&feature + 1) = v19;
  }
  if ( (v18 & 1) != 0 )
  {
    v19 &= 0xFFFFFCFF;
    *((_DWORD *)&feature + 1) = v19;
  }
  if ( (v18 & 8) != 0 )
  {
    payload = 0;
    *((_DWORD *)&feature + 1) = v19 & 0xC0FFFFFF;
    feature.payload = 0;
  }
  if ( wil_details_StagingConfigFeature_HasUniqueState(&feature) )
  {
    state->payload = payload;
    state->payloadKind = v20 >> 30;
    state->variant = HIBYTE(v20) & 0x3F;
    state->isVariantConfiguration = (v20 >> 1) & 1;
    v21 = (v20 >> 12) & 3;
    if ( v21 || (v21 = (v20 >> 10) & 3) != wil_FeatureEnabledState_Default )
    {
      state->enabledState = v21;
    }
    else
    {
      v22 = (v20 >> 8) & 3;
      if ( v22 )
        state->enabledState = v22;
    }
    v16 = 1;
  }
LABEL_30:
  v23 = v5;
  triggers = config->triggers;
  if ( header->featureUsageTriggerCount )
  {
    while ( triggers->featureId != featureId )
    {
      ++v23;
      ++triggers;
      if ( v23 >= header->featureUsageTriggerCount )
        goto LABEL_35;
    }
    v5 = 1;
  }
LABEL_35:
  result = v16;
  state->hasNotification = v5;
  return result;
}
