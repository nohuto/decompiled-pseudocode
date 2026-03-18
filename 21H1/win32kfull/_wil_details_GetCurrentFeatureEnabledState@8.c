/*
 * XREFs of _wil_details_GetCurrentFeatureEnabledState@8 @ 0xF2DB6
 * Callers:
 *     _wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState@16 @ 0xF2CE4 (_wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState@16.c)
 * Callees:
 *     _wil_details_FeatureStateCache_GetCachedFeatureEnabledState@8 @ 0xF2CC0 (_wil_details_FeatureStateCache_GetCachedFeatureEnabledState@8.c)
 *     _wil_RtlStagingConfig_QueryFeatureState@16 @ 0x27A2C8 (_wil_RtlStagingConfig_QueryFeatureState@16.c)
 *     _wil_StagingConfig_QueryFeatureState@20 @ 0x27A36C (_wil_StagingConfig_QueryFeatureState@20.c)
 */

__int64 __fastcall wil_details_GetCurrentFeatureEnabledState(int a1, _DWORD *a2)
{
  char v3; // al
  BOOL v4; // ebx
  int v5; // edi
  int FeatureState; // edx
  int v7; // ecx
  int v8; // edx
  unsigned int v9; // ebx
  int v10; // eax
  unsigned int v11; // ebx
  int *v12; // esi
  int v13; // eax
  char CachedFeatureEnabledState; // al
  bool v15; // zf
  int v16; // eax
  _DWORD v18[6]; // [esp+10h] [ebp-20h] BYREF

  v3 = *(_BYTE *)(a1 + 8);
  v4 = v3 == 3 || v3 == 2;
  *a2 = 1;
  memset(v18, 0, sizeof(v18));
  v5 = *(_DWORD *)(a1 + 4);
  FeatureState = wil_RtlStagingConfig_QueryFeatureState(v4, 0);
  if ( !FeatureState )
    FeatureState = wil_StagingConfig_QueryFeatureState(v5, v4, v7);
  v8 = ((v18[5] != 0 ? 0x200 : 0) | (v18[4] != 0 ? 0x100 : 0)) ^ (32 * (v18[0] & (unsigned __int8)-(FeatureState != 0))) & 0x60;
  if ( (v8 & 0x60) != 0 )
  {
    if ( v18[0] == 2 )
      v10 = 16;
    else
      v10 = 0;
    v9 = v10 | v8 & 0xFFFFFFEF;
  }
  else
  {
    v9 = v8 & 0xFFFFFFEF | (*(_BYTE *)(a1 + 11) != 0 ? 0x10 : 0);
  }
  v11 = (v9 ^ (v9 >> 1)) & 8 ^ v9;
  if ( (v11 & 8) != 0 )
  {
    v12 = *(int **)(a1 + 12);
    if ( v12 )
    {
      do
      {
        v13 = *v12;
        if ( !*v12 )
          return v11;
        if ( *(_BYTE *)(v13 + 10) || *(_BYTE *)(v13 + 9) )
        {
          if ( (v11 & 8) == 0 )
            goto LABEL_23;
          v15 = *(_BYTE *)(v13 + 11) == 0;
        }
        else
        {
          CachedFeatureEnabledState = wil_details_FeatureStateCache_GetCachedFeatureEnabledState(*(int **)v13);
          if ( (v11 & 8) == 0 )
            goto LABEL_23;
          v15 = (CachedFeatureEnabledState & 8) == 0;
        }
        v16 = 8;
        if ( v15 )
LABEL_23:
          v16 = 0;
        ++v12;
        v11 = v16 | v11 & 0xFFFFFFF7;
      }
      while ( (v11 & 8) != 0 );
    }
  }
  return v11;
}
