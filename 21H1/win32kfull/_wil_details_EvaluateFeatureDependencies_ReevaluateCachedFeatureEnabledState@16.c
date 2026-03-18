/*
 * XREFs of _wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState@16 @ 0x27A0DA
 * Callers:
 *     _wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState@8 @ 0x27A0B6 (_wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState@8.c)
 * Callees:
 *     _wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState@8 @ 0x27A0B6 (_wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState@8.c)
 */

unsigned __int64 __fastcall wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState(
        volatile signed __int32 *a1,
        int a2,
        unsigned int a3,
        int a4)
{
  int v5; // esi
  int *v6; // edi
  int v7; // eax
  char CachedFeatureEnabledState; // al
  unsigned int v9; // eax

  v5 = (a3 >> 4) & 1;
  if ( v5 )
  {
    v6 = *(int **)(a2 + 12);
    if ( v6 )
    {
      while ( 1 )
      {
        v7 = *v6;
        if ( !*v6 )
          goto LABEL_11;
        if ( *(_BYTE *)(v7 + 10) || *(_BYTE *)(v7 + 9) )
          break;
        CachedFeatureEnabledState = wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState(*(int **)v7);
        if ( !v5 || (CachedFeatureEnabledState & 8) == 0 )
          goto LABEL_9;
        v5 = 1;
LABEL_10:
        ++v6;
        if ( !v5 )
          goto LABEL_11;
      }
      if ( v5 && *(_BYTE *)(v7 + 11) )
      {
        v5 = 1;
        goto LABEL_10;
      }
LABEL_9:
      v5 = 0;
      goto LABEL_10;
    }
  }
LABEL_11:
  v9 = v5 != ((a3 >> 3) & 1) ? 136 : 128;
  _InterlockedXor(a1, v9);
  return a3 ^ (unsigned __int64)v9;
}
