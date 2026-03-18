/*
 * XREFs of ?wil_details_EvaluateFeatureDependencies@@YAXXZ @ 0x1C037B0AC
 * Callers:
 *     ?wil_details_OnFeatureConfigurationChange@@YAXPEAX@Z @ 0x1C037B240 (-wil_details_OnFeatureConfigurationChange@@YAXPEAX@Z.c)
 *     ?wil_InitializeFeatureStaging@@YAJXZ @ 0x1C0393078 (-wil_InitializeFeatureStaging@@YAJXZ.c)
 * Callees:
 *     ?wil_details_FeatureDescriptors_SkipPadding@@YAPEBUwil_details_FeatureDescriptor@@_K@Z @ 0x1C015AF68 (-wil_details_FeatureDescriptors_SkipPadding@@YAPEBUwil_details_FeatureDescriptor@@_K@Z.c)
 *     ?wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C037B150 (-wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState@@YA-ATwil_details_FeatureS.c)
 */

void wil_details_EvaluateFeatureDependencies(void)
{
  unsigned __int64 *i; // rcx
  int v1; // r8d
  BOOL v2; // eax
  const struct wil_details_FeatureDescriptor *v3; // rax
  volatile signed __int32 **v4; // rdx
  unsigned __int64 *j; // rcx
  const struct wil_details_FeatureDescriptor *v6; // rax
  const struct wil_details_FeatureDescriptor *v7; // rbx
  unsigned int v8; // [rsp+30h] [rbp+8h]

  v8 = 0;
  for ( i = (unsigned __int64 *)&Feature_Servicing_MatchedFrameCookieWatson_35935814__private_descriptor;
        ;
        i = (unsigned __int64 *)(v4 + 4) )
  {
    v3 = wil_details_FeatureDescriptors_SkipPadding(i);
    v4 = (volatile signed __int32 **)v3;
    if ( !v3 )
      break;
    v1 = **(_DWORD **)v3;
    if ( (v1 & 0x80u) != 0 )
    {
      if ( (v1 & 0x60) != 0 )
        v2 = (**(_DWORD **)v3 & 0x60) == 64;
      else
        v2 = *((_BYTE *)v3 + 23) != 0;
      v8 = v8 & 0xFFFFFFEF | (16 * v2) ^ v1 & 0x10;
      _InterlockedXor(*v4, v8);
    }
  }
  for ( j = (unsigned __int64 *)&Feature_Servicing_MatchedFrameCookieWatson_35935814__private_descriptor;
        ;
        j = (unsigned __int64 *)((char *)v7 + 32) )
  {
    v6 = wil_details_FeatureDescriptors_SkipPadding(j);
    v7 = v6;
    if ( !v6 )
      break;
    wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState(*(_QWORD *)v6, v6);
  }
}
