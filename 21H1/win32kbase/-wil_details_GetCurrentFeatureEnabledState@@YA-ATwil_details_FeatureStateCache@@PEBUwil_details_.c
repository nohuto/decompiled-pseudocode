/*
 * XREFs of ?wil_details_GetCurrentFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEBUwil_details_FeatureDescriptor@@PEAH@Z @ 0x1C00CEDF8
 * Callers:
 *     ?wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@T1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C00CECF8 (-wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState@@YA-ATwil_details_FeatureStat.c)
 * Callees:
 *     ?wil_details_FeatureStateCache_GetCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C00CECC4 (-wil_details_FeatureStateCache_GetCachedFeatureEnabledState@@YA-ATwil_details_FeatureStateCache@.c)
 *     ?wil_RtlStagingConfig_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHPEAH@Z @ 0x1C0280344 (-wil_RtlStagingConfig_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHPEAH@Z.c)
 */

__int64 __fastcall wil_details_GetCurrentFeatureEnabledState(__int64 a1, int *a2)
{
  unsigned int v3; // edx
  BOOL v5; // r8d
  int FeatureState; // eax
  int v7; // ecx
  unsigned int v8; // ebx
  int v9; // eax
  unsigned int v10; // ebx
  __int64 *v11; // rdi
  __int64 v12; // rax
  char CachedFeatureEnabledState; // al
  bool v14; // zf
  int v15; // eax
  __int64 v17; // [rsp+20h] [rbp-20h]
  __int128 v18; // [rsp+28h] [rbp-18h] BYREF
  __int64 v19; // [rsp+38h] [rbp-8h]

  v3 = *(_DWORD *)(a1 + 8);
  v5 = (unsigned __int8)(*(_BYTE *)(a1 + 12) - 2) <= 1u;
  *a2 = 1;
  v19 = 0LL;
  v18 = 0LL;
  FeatureState = wil_RtlStagingConfig_QueryFeatureState((struct wil_FeatureState *)&v18, v3, v5, a2);
  HIDWORD(v17) = 0;
  v7 = ((HIDWORD(v19) != 0 ? 0x200 : 0) | ((_DWORD)v19 != 0 ? 0x100 : 0)) ^ (32
                                                                           * ((unsigned __int8)v18 & (unsigned __int8)-(FeatureState != 0))) & 0x60;
  if ( ((32 * ((unsigned __int8)v18 & (unsigned __int8)-(FeatureState != 0))) & 0x60) != 0 )
  {
    v9 = 0;
    if ( (_DWORD)v18 == 2 )
      v9 = 16;
    v8 = v9 | v7 & 0xFFFFFFEF;
  }
  else
  {
    v8 = v7 & 0xFFFFFFEF | (*(_BYTE *)(a1 + 15) != 0 ? 0x10 : 0);
  }
  v10 = ((unsigned __int8)v8 ^ (unsigned __int8)(v8 >> 1)) & 8 ^ v8;
  LODWORD(v17) = v10;
  if ( (v10 & 8) != 0 )
  {
    v11 = *(__int64 **)(a1 + 16);
    if ( v11 )
    {
      do
      {
        v12 = *v11;
        if ( !*v11 )
          return v17;
        if ( *(_BYTE *)(v12 + 14) || *(_BYTE *)(v12 + 13) )
        {
          if ( (v10 & 8) == 0 )
            goto LABEL_17;
          v14 = *(_BYTE *)(v12 + 15) == 0;
        }
        else
        {
          CachedFeatureEnabledState = wil_details_FeatureStateCache_GetCachedFeatureEnabledState(
                                        *(unsigned int **)v12,
                                        *v11);
          if ( (v10 & 8) == 0 )
            goto LABEL_17;
          v14 = (CachedFeatureEnabledState & 8) == 0;
        }
        if ( v14 )
        {
LABEL_17:
          v15 = 0;
          goto LABEL_18;
        }
        v15 = 8;
LABEL_18:
        ++v11;
        v10 = v15 | v10 & 0xFFFFFFF7;
        LODWORD(v17) = v10;
      }
      while ( (v10 & 8) != 0 );
    }
  }
  return v17;
}
