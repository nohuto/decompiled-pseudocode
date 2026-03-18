/*
 * XREFs of ?wil_details_GetCurrentFeatureEnabledState@@YG?ATwil_details_FeatureStateCache@@PBUwil_details_FeatureDescriptor@@PAH@Z @ 0xF6868
 * Callers:
 *     ?wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState@@YG?ATwil_details_FeatureStateCache@@PAT1@T1@PBUwil_details_FeatureDescriptor@@@Z @ 0xF6796 (-wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState@@YG-ATwil_details_FeatureStat.c)
 * Callees:
 *     ?wil_details_FeatureStateCache_GetCachedFeatureEnabledState@@YG?ATwil_details_FeatureStateCache@@PAT1@PBUwil_details_FeatureDescriptor@@@Z @ 0xF6772 (-wil_details_FeatureStateCache_GetCachedFeatureEnabledState@@YG-ATwil_details_FeatureStateCache@.c)
 *     _wil_RtlStagingConfig_QueryFeatureState@16 @ 0x27A2C8 (_wil_RtlStagingConfig_QueryFeatureState@16.c)
 */

__int64 __fastcall wil_details_GetCurrentFeatureEnabledState(int a1, _DWORD *a2)
{
  char v3; // al
  BOOL v4; // ebx
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // ecx
  unsigned int v8; // ebx
  int *v9; // esi
  int v10; // eax
  char CachedFeatureEnabledState; // al
  bool v12; // zf
  int v13; // eax
  _DWORD v15[6]; // [esp+10h] [ebp-20h] BYREF
  _DWORD *FeatureState; // [esp+2Ch] [ebp-4h]

  FeatureState = a2;
  v3 = *(_BYTE *)(a1 + 8);
  v4 = v3 == 3 || v3 == 2;
  memset(v15, 0, sizeof(v15));
  *FeatureState = 1;
  FeatureState = (_DWORD *)wil_RtlStagingConfig_QueryFeatureState(v4, 0);
  v5 = ((v15[5] != 0 ? 0x200 : 0) | (v15[4] != 0 ? 0x100 : 0)) ^ (32 * (v15[0] & (unsigned __int8)-(FeatureState != 0))) & 0x60;
  if ( ((32 * (v15[0] & (unsigned __int8)-(FeatureState != 0))) & 0x60) != 0 )
  {
    if ( v15[0] == 2 )
      v7 = 16;
    else
      v7 = 0;
    v6 = v7 | v5 & 0xFFFFFFEF;
  }
  else
  {
    v6 = v5 & 0xFFFFFFEF | (*(_BYTE *)(a1 + 11) != 0 ? 0x10 : 0);
  }
  v8 = (v6 ^ (v6 >> 1)) & 8 ^ v6;
  if ( (v8 & 8) != 0 )
  {
    v9 = *(int **)(a1 + 12);
    if ( v9 )
    {
      do
      {
        v10 = *v9;
        if ( !*v9 )
          return v8;
        if ( *(_BYTE *)(v10 + 10) || *(_BYTE *)(v10 + 9) )
        {
          if ( (v8 & 8) == 0 )
            goto LABEL_21;
          v12 = *(_BYTE *)(v10 + 11) == 0;
        }
        else
        {
          CachedFeatureEnabledState = wil_details_FeatureStateCache_GetCachedFeatureEnabledState(*(int **)v10, *v9);
          if ( (v8 & 8) == 0 )
            goto LABEL_21;
          v12 = (CachedFeatureEnabledState & 8) == 0;
        }
        v13 = 8;
        if ( v12 )
LABEL_21:
          v13 = 0;
        ++v9;
        v8 = v13 | v8 & 0xFFFFFFF7;
      }
      while ( (v8 & 8) != 0 );
    }
  }
  return v8;
}
