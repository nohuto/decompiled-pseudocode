/*
 * XREFs of _wil_details_GetCurrentFeatureEnabledState@8 @ 0x4B306714
 * Callers:
 *     _wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState@16 @ 0x4B306632 (_wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState@16.c)
 * Callees:
 *     _wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState@16 @ 0x4B306632 (_wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState@16.c)
 *     _wil_RtlStagingConfig_QueryFeatureState@16 @ 0x4B3A1000 (_wil_RtlStagingConfig_QueryFeatureState@16.c)
 *     _wil_StagingConfig_QueryFeatureState@20 @ 0x4B3A1088 (_wil_StagingConfig_QueryFeatureState@20.c)
 */

__int64 __fastcall wil_details_GetCurrentFeatureEnabledState(int a1, _DWORD *a2)
{
  char v3; // al
  BOOL v4; // ebx
  int v5; // edi
  int FeatureState; // edx
  int v7; // ecx
  int v8; // edx
  int v9; // eax
  unsigned int v10; // edx
  unsigned int v11; // ebx
  int *v12; // esi
  int v13; // eax
  signed __int32 v14; // ecx
  int v15; // edx
  int v16; // eax
  int v18; // [esp+14h] [ebp-1Ch]
  _DWORD v19[6]; // [esp+18h] [ebp-18h] BYREF

  v3 = *(_BYTE *)(a1 + 8);
  v4 = v3 == 3 || v3 == 2;
  *a2 = 1;
  memset(v19, 0, sizeof(v19));
  v5 = *(_DWORD *)(a1 + 4);
  FeatureState = wil_RtlStagingConfig_QueryFeatureState(v19, v5, v4, 0);
  if ( !FeatureState )
    FeatureState = wil_StagingConfig_QueryFeatureState(v7, v5, v4, v7);
  v8 = (v19[4] != 0 ? 0x100 : 0) | (v19[5] != 0 ? 0x200 : 0) | (32 * (v19[0] & (unsigned __int8)-(FeatureState != 0) & 3));
  if ( (v8 & 0x60) != 0 )
  {
    if ( v19[0] == 2 )
      v9 = 16;
    else
      v9 = 0;
  }
  else
  {
    v9 = *(_BYTE *)(a1 + 11) != 0 ? 0x10 : 0;
  }
  v10 = v9 | v8;
  v11 = v10 | (v10 >> 1) & 8;
  if ( v10 & 8 | (v10 >> 1) & 8 )
  {
    v12 = *(int **)(a1 + 12);
    if ( v12 )
    {
      while ( 1 )
      {
        v13 = *v12;
        if ( !*v12 )
          return v11;
        if ( *(_BYTE *)(v13 + 10) || *(_BYTE *)(v13 + 9) )
          break;
        v14 = **(_DWORD **)v13;
        if ( (v14 & 1) == 0 )
        {
          LOBYTE(v14) = wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(
                          *(volatile signed __int32 **)v13,
                          v13,
                          v14,
                          v18);
          v18 = v15;
        }
        if ( (v11 & 8) == 0 || (v14 & 8) == 0 )
          goto LABEL_22;
        v16 = 8;
LABEL_23:
        ++v12;
        v11 = v16 | v11 & 0xFFFFFFF7;
        if ( (v11 & 8) == 0 )
          return v11;
      }
      if ( (v11 & 8) != 0 && *(_BYTE *)(v13 + 11) )
      {
        v16 = 8;
        goto LABEL_23;
      }
LABEL_22:
      v16 = 0;
      goto LABEL_23;
    }
  }
  return v11;
}
