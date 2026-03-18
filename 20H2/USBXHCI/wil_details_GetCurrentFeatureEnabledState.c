/*
 * XREFs of wil_details_GetCurrentFeatureEnabledState @ 0x1C001A8B0
 * Callers:
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1C001A7B0 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 * Callees:
 *     wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x1C001A77C (wil_details_FeatureStateCache_GetCachedFeatureEnabledState.c)
 *     wil_RtlStagingConfig_QueryFeatureState @ 0x1C006B384 (wil_RtlStagingConfig_QueryFeatureState.c)
 *     wil_StagingConfig_QueryFeatureState @ 0x1C006B448 (wil_StagingConfig_QueryFeatureState.c)
 */

__int64 __fastcall wil_details_GetCurrentFeatureEnabledState(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // esi
  bool v3; // cf
  unsigned int v5; // ebx
  __int64 v6; // rcx
  int v7; // r10d
  int v8; // r10d
  int v9; // ecx
  unsigned int v10; // r8d
  unsigned int v11; // ebx
  __int64 *v12; // rdi
  __int64 v13; // rax
  char CachedFeatureEnabledState; // al
  bool v15; // zf
  int v16; // eax
  __int128 v18; // [rsp+30h] [rbp-28h] BYREF
  __int64 v19; // [rsp+40h] [rbp-18h]
  __int64 v20; // [rsp+60h] [rbp+8h]

  v2 = *(_DWORD *)(a1 + 16);
  v3 = *(_BYTE *)(a1 + 20) == 2;
  v15 = *(_BYTE *)(a1 + 20) == 3;
  *a2 = 1;
  v5 = v3 || v15;
  v18 = 0LL;
  v19 = 0LL;
  v7 = wil_RtlStagingConfig_QueryFeatureState(&v18, v2, v3 | (unsigned __int8)v15);
  if ( !v7 )
    v7 = wil_StagingConfig_QueryFeatureState(v6, &v18, v2, v5);
  HIDWORD(v20) = 0;
  v8 = -v7;
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
            goto LABEL_18;
          v15 = *(_BYTE *)(v13 + 23) == 0;
        }
        else
        {
          CachedFeatureEnabledState = wil_details_FeatureStateCache_GetCachedFeatureEnabledState(
                                        *(unsigned int **)v13,
                                        *v12);
          if ( (v11 & 8) == 0 )
            goto LABEL_18;
          v15 = (CachedFeatureEnabledState & 8) == 0;
        }
        if ( v15 )
        {
LABEL_18:
          v16 = 0;
          goto LABEL_19;
        }
        v16 = 8;
LABEL_19:
        ++v12;
        v11 = v16 | v11 & 0xFFFFFFF7;
        LODWORD(v20) = v11;
      }
      while ( (v11 & 8) != 0 );
    }
  }
  return v20;
}
