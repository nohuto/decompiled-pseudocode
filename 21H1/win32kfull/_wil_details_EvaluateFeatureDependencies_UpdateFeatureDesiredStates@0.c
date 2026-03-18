/*
 * XREFs of _wil_details_EvaluateFeatureDependencies_UpdateFeatureDesiredStates@0 @ 0x27A168
 * Callers:
 *     _wil_details_EvaluateFeatureDependencies@0 @ 0x27A084 (_wil_details_EvaluateFeatureDependencies@0.c)
 * Callees:
 *     _wil_details_FeatureDescriptors_SkipPadding@4 @ 0xF01D8 (_wil_details_FeatureDescriptors_SkipPadding@4.c)
 */

volatile signed __int32 **__stdcall wil_details_EvaluateFeatureDependencies_UpdateFeatureDesiredStates()
{
  int **i; // ecx
  volatile signed __int32 v1; // ecx
  BOOL v2; // eax
  volatile signed __int32 **result; // eax
  volatile signed __int32 **v4; // edx
  unsigned int v5; // [esp+4h] [ebp-8h]

  v5 = 0;
  for ( i = &wil_details_featureDescriptors_a; ; i = (int **)(v4 + 4) )
  {
    result = (volatile signed __int32 **)wil_details_FeatureDescriptors_SkipPadding(i);
    v4 = result;
    if ( !result )
      break;
    v1 = **result;
    if ( (v1 & 0x80u) != 0 )
    {
      if ( (v1 & 0x60) != 0 )
        v2 = (**result & 0x60) == 64;
      else
        v2 = *((_BYTE *)result + 11) != 0;
      v5 = v5 & 0xFFFFFFEF | (16 * v2) ^ v1 & 0x10;
      _InterlockedXor(*v4, v5);
    }
  }
  return result;
}
