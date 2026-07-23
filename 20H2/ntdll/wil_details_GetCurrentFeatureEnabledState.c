/*
 * XREFs of wil_details_GetCurrentFeatureEnabledState @ 0x18009BBE4
 * Callers:
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x18009BAF0 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 * Callees:
 *     wil_RtlStagingConfig_QueryFeatureState @ 0x18009B4D8 (wil_RtlStagingConfig_QueryFeatureState.c)
 *     wil_StagingConfig_QueryFeatureState @ 0x18009B578 (wil_StagingConfig_QueryFeatureState.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x18009BAF0 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 */

__int64 __fastcall wil_details_GetCurrentFeatureEnabledState(__int64 a1, _DWORD *a2)
{
  RTL_FEATURE_ID v2; // esi
  bool v3; // cf
  int v5; // ebx
  __int64 v6; // rcx
  int FeatureState; // r10d
  int v8; // r10d
  int v9; // ecx
  unsigned int v10; // r8d
  unsigned int v11; // ebx
  __int64 *v12; // rdi
  __int64 v13; // rcx
  char v14; // al
  bool v15; // zf
  int v16; // eax
  __int128 v18; // [rsp+30h] [rbp-28h] BYREF
  __int64 v19; // [rsp+40h] [rbp-18h]
  __int64 v20; // [rsp+60h] [rbp+8h]
  __int64 v21; // [rsp+68h] [rbp+10h]

  v2 = *(_DWORD *)(a1 + 16);
  v3 = *(_BYTE *)(a1 + 20) == 2;
  v15 = *(_BYTE *)(a1 + 20) == 3;
  *a2 = 1;
  v5 = v3 || v15;
  v18 = 0LL;
  v19 = 0LL;
  FeatureState = wil_RtlStagingConfig_QueryFeatureState((__int64)&v18, v2, v5);
  if ( !FeatureState )
    FeatureState = wil_StagingConfig_QueryFeatureState(v6, (__int64)&v18, v2, v5);
  HIDWORD(v20) = 0;
  v8 = -FeatureState;
  if ( ((32 * ((unsigned __int8)v18 & (unsigned __int8)-(v8 != 0) & 3)) & 0x60) != 0 )
  {
    v9 = 0;
    if ( (_DWORD)v18 == 2 )
      v9 = 16;
  }
  else
  {
    v9 = *(_BYTE *)(a1 + 23) != 0 ? 0x10 : 0;
  }
  v10 = v9 | ((_DWORD)v19 != 0 ? 0x100 : 0) | (HIDWORD(v19) != 0 ? 0x200 : 0) | (32
                                                                               * ((unsigned __int8)v18 & (unsigned __int8)-(v8 != 0) & 3));
  v11 = v10 | (v10 >> 1) & 8;
  LODWORD(v20) = v11;
  if ( v10 & 8 | (v10 >> 1) & 8 )
  {
    v12 = *(__int64 **)(a1 + 24);
    if ( v12 )
    {
      do
      {
        v13 = *v12;
        if ( !*v12 )
          return v20;
        if ( *(_BYTE *)(v13 + 22) || *(_BYTE *)(v13 + 21) )
        {
          if ( (v11 & 8) == 0 )
            goto LABEL_21;
          v15 = *(_BYTE *)(v13 + 23) == 0;
        }
        else
        {
          LODWORD(v21) = **(_DWORD **)v13;
          if ( (v21 & 1) != 0 )
            v14 = **(_DWORD **)v13;
          else
            v14 = wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(
                    *(volatile signed __int32 **)v13,
                    v21,
                    v13);
          if ( (v11 & 8) == 0 )
          {
LABEL_21:
            v16 = 0;
            goto LABEL_22;
          }
          v15 = (v14 & 8) == 0;
        }
        if ( v15 )
          goto LABEL_21;
        v16 = 8;
LABEL_22:
        ++v12;
        v11 = v16 | v11 & 0xFFFFFFF7;
        LODWORD(v20) = v11;
      }
      while ( (v11 & 8) != 0 );
    }
  }
  return v20;
}
