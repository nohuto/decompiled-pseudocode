/*
 * XREFs of ?wil_InitializeFeatureStaging@@YAJXZ @ 0x1C03C7078
 * Callers:
 *     DriverEntry @ 0x1C03C7238 (DriverEntry.c)
 * Callees:
 *     ?wil_details_FeatureDescriptors_SkipPadding@@YAPEBUwil_details_FeatureDescriptor@@_K@Z @ 0x1C0025ED4 (-wil_details_FeatureDescriptors_SkipPadding@@YAPEBUwil_details_FeatureDescriptor@@_K@Z.c)
 *     ?wil_details_RegisterFeatureStagingChangeNotification@@YAJPEA_K@Z @ 0x1C01F47F0 (-wil_details_RegisterFeatureStagingChangeNotification@@YAJPEA_K@Z.c)
 *     ?wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C01F4854 (-wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState@@YA-ATwil_details_FeatureS.c)
 *     ?wil_details_PopulateInitialConfiguredFeatureStates@@YAJXZ @ 0x1C03C7148 (-wil_details_PopulateInitialConfiguredFeatureStates@@YAJXZ.c)
 */

__int64 wil_InitializeFeatureStaging(void)
{
  unsigned int v0; // eax
  const unsigned __int64 *v1; // rcx
  unsigned int v2; // edi
  const struct wil_details_FeatureDescriptor *v3; // rax
  volatile signed __int32 **v4; // rdx
  int v5; // r8d
  BOOL v6; // eax
  const unsigned __int64 *i; // rcx
  unsigned int **v8; // rax
  unsigned int **v9; // rbx
  unsigned int v11; // [rsp+30h] [rbp+8h]
  unsigned __int64 v12; // [rsp+38h] [rbp+10h] BYREF

  v12 = RtlQueryFeatureConfigurationChangeStamp();
  v0 = wil_details_PopulateInitialConfiguredFeatureStates();
  v11 = 0;
  v1 = &wil_details_featureDescriptors_a;
  v2 = v0;
  while ( 1 )
  {
    v3 = wil_details_FeatureDescriptors_SkipPadding(v1);
    v4 = (volatile signed __int32 **)v3;
    if ( !v3 )
      break;
    v5 = **(_DWORD **)v3;
    if ( (v5 & 0x80u) != 0 )
    {
      if ( (v5 & 0x60) != 0 )
        v6 = (**(_DWORD **)v3 & 0x60) == 64;
      else
        v6 = *((_BYTE *)v3 + 23) != 0;
      v11 = v11 & 0xFFFFFFEF | (16 * v6) ^ v5 & 0x10;
      _InterlockedXor(*v4, v11);
    }
    v1 = (const unsigned __int64 *)(v4 + 6);
  }
  for ( i = &wil_details_featureDescriptors_a; ; i = (const unsigned __int64 *)(v9 + 6) )
  {
    v8 = (unsigned int **)wil_details_FeatureDescriptors_SkipPadding(i);
    v9 = v8;
    if ( !v8 )
      break;
    wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState(*v8, (__int64)v8);
  }
  if ( !v2 )
    return (unsigned int)wil_details_RegisterFeatureStagingChangeNotification(&v12);
  return v2;
}
