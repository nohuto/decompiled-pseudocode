/*
 * XREFs of ?wil_details_GetCurrentFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEBUwil_details_FeatureDescriptor@@PEAH@Z @ 0x1C0024F20
 * Callers:
 *     ?wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@T1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C0024E20 (-wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState@@YA-ATwil_details_FeatureStat.c)
 * Callees:
 *     ?wil_details_FeatureStateCache_GetCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C0024DEC (-wil_details_FeatureStateCache_GetCachedFeatureEnabledState@@YA-ATwil_details_FeatureStateCache@.c)
 *     ?wil_RtlStagingConfig_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHPEAH@Z @ 0x1C00D59C4 (-wil_RtlStagingConfig_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHPEAH@Z.c)
 *     ?wil_StagingConfig_QueryFeatureState@@YAHW4wil_FeatureStore@@PEAUwil_FeatureState@@IHPEAH@Z @ 0x1C00D5A88 (-wil_StagingConfig_QueryFeatureState@@YAHW4wil_FeatureStore@@PEAUwil_FeatureState@@IHPEAH@Z.c)
 */

__int64 __fastcall wil_details_GetCurrentFeatureEnabledState(__int64 a1, _DWORD *a2, __int64 a3, int *a4)
{
  unsigned int v4; // esi
  bool v5; // cf
  unsigned int v7; // ebx
  __int64 v8; // rcx
  int FeatureState; // r9d
  int v10; // r9d
  int v11; // ecx
  unsigned int v12; // ebx
  int v13; // eax
  unsigned int v14; // ebx
  __int64 *v15; // rdi
  __int64 v16; // rax
  char CachedFeatureEnabledState; // al
  bool v18; // zf
  int v19; // eax
  __int128 v21; // [rsp+30h] [rbp-20h] BYREF
  __int64 v22; // [rsp+40h] [rbp-10h]
  __int64 v23; // [rsp+60h] [rbp+10h]

  v4 = *(_DWORD *)(a1 + 16);
  v5 = *(_BYTE *)(a1 + 20) == 2;
  v18 = *(_BYTE *)(a1 + 20) == 3;
  *a2 = 1;
  v7 = v5 || v18;
  v22 = 0LL;
  v21 = 0LL;
  FeatureState = wil_RtlStagingConfig_QueryFeatureState((struct wil_FeatureState *)&v21, v4, v7, a4);
  if ( !FeatureState )
    FeatureState = wil_StagingConfig_QueryFeatureState(v8, &v21, v4, v7);
  HIDWORD(v23) = 0;
  v10 = -FeatureState;
  v11 = ((HIDWORD(v22) != 0 ? 0x200 : 0) | ((_DWORD)v22 != 0 ? 0x100 : 0)) ^ (32
                                                                            * ((unsigned __int8)v21 & (unsigned __int8)-(v10 != 0))) & 0x60;
  if ( ((32 * ((unsigned __int8)v21 & (unsigned __int8)-(v10 != 0))) & 0x60) != 0 )
  {
    v13 = 0;
    if ( (_DWORD)v21 == 2 )
      v13 = 16;
    v12 = v13 | v11 & 0xFFFFFFEF;
  }
  else
  {
    v12 = v11 & 0xFFFFFFEF | (*(_BYTE *)(a1 + 23) != 0 ? 0x10 : 0);
  }
  v14 = (v12 ^ (v12 >> 1)) & 8 ^ v12;
  LODWORD(v23) = v14;
  if ( (v14 & 8) != 0 )
  {
    v15 = *(__int64 **)(a1 + 24);
    if ( v15 )
    {
      do
      {
        v16 = *v15;
        if ( !*v15 )
          return v23;
        if ( *(_BYTE *)(v16 + 22) || *(_BYTE *)(v16 + 21) )
        {
          if ( (v14 & 8) == 0 )
            goto LABEL_19;
          v18 = *(_BYTE *)(v16 + 23) == 0;
        }
        else
        {
          CachedFeatureEnabledState = wil_details_FeatureStateCache_GetCachedFeatureEnabledState(
                                        *(unsigned int **)v16,
                                        *v15);
          if ( (v14 & 8) == 0 )
            goto LABEL_19;
          v18 = (CachedFeatureEnabledState & 8) == 0;
        }
        if ( v18 )
        {
LABEL_19:
          v19 = 0;
          goto LABEL_20;
        }
        v19 = 8;
LABEL_20:
        ++v15;
        v14 = v19 | v14 & 0xFFFFFFF7;
        LODWORD(v23) = v14;
      }
      while ( (v14 & 8) != 0 );
    }
  }
  return v23;
}
