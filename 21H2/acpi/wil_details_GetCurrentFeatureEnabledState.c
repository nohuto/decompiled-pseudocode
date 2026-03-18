/*
 * XREFs of wil_details_GetCurrentFeatureEnabledState @ 0x1C002F900
 * Callers:
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1C002F808 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 * Callees:
 *     wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x1C002F7D4 (wil_details_FeatureStateCache_GetCachedFeatureEnabledState.c)
 *     wil_RtlStagingConfig_QueryFeatureState @ 0x1C008E384 (wil_RtlStagingConfig_QueryFeatureState.c)
 */

__int64 __fastcall wil_details_GetCurrentFeatureEnabledState(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rdx
  _BOOL8 v5; // r8
  int v6; // eax
  int v7; // ecx
  unsigned int v8; // edx
  unsigned int v9; // ebx
  __int64 *v10; // rdi
  __int64 v11; // rax
  char CachedFeatureEnabledState; // al
  bool v13; // zf
  int v14; // eax
  __int128 v16; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17; // [rsp+30h] [rbp-18h]
  __int64 v18; // [rsp+50h] [rbp+8h]

  v3 = *(unsigned int *)(a1 + 16);
  v5 = (unsigned __int8)(*(_BYTE *)(a1 + 20) - 2) <= 1u;
  *a2 = 1;
  v17 = 0LL;
  v16 = 0LL;
  HIDWORD(v18) = 0;
  v6 = -(int)wil_RtlStagingConfig_QueryFeatureState(&v16, v3, v5);
  if ( ((32 * ((unsigned __int8)v16 & (unsigned __int8)-(v6 != 0) & 3)) & 0x60) != 0 )
  {
    v7 = 0;
    if ( (_DWORD)v16 == 2 )
      v7 = 16;
  }
  else
  {
    v7 = *(_BYTE *)(a1 + 23) != 0 ? 0x10 : 0;
  }
  v8 = v7 | ((_DWORD)v17 != 0 ? 0x100 : 0) | (HIDWORD(v17) != 0 ? 0x200 : 0) | (32
                                                                              * ((unsigned __int8)v16 & (unsigned __int8)-(v6 != 0) & 3));
  v9 = v8 | (v8 >> 1) & 8;
  LODWORD(v18) = v9;
  if ( v8 & 8 | (v8 >> 1) & 8 )
  {
    v10 = *(__int64 **)(a1 + 24);
    if ( v10 )
    {
      do
      {
        v11 = *v10;
        if ( !*v10 )
          return v18;
        if ( *(_BYTE *)(v11 + 22) || *(_BYTE *)(v11 + 21) )
        {
          if ( (v9 & 8) == 0 )
            goto LABEL_16;
          v13 = *(_BYTE *)(v11 + 23) == 0;
        }
        else
        {
          CachedFeatureEnabledState = wil_details_FeatureStateCache_GetCachedFeatureEnabledState(
                                        *(unsigned int **)v11,
                                        *v10);
          if ( (v9 & 8) == 0 )
            goto LABEL_16;
          v13 = (CachedFeatureEnabledState & 8) == 0;
        }
        if ( v13 )
        {
LABEL_16:
          v14 = 0;
          goto LABEL_17;
        }
        v14 = 8;
LABEL_17:
        ++v10;
        v9 = v14 | v9 & 0xFFFFFFF7;
        LODWORD(v18) = v9;
      }
      while ( (v9 & 8) != 0 );
    }
  }
  return v18;
}
