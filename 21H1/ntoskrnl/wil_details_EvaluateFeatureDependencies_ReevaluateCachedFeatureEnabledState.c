/*
 * XREFs of wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState @ 0x1405C6718
 * Callers:
 *     wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState @ 0x1405C66E4 (wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState.c)
 * Callees:
 *     wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState @ 0x1405C66E4 (wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState.c)
 */

__int64 __fastcall wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState(
        volatile signed __int32 *a1,
        unsigned int a2,
        __int64 a3)
{
  int v5; // edi
  __int64 *v6; // rsi
  __int64 v7; // rax
  char CachedFeatureEnabledState; // al
  bool v9; // zf
  unsigned int v10; // ecx
  __int64 v12; // [rsp+30h] [rbp+8h]

  HIDWORD(v12) = 0;
  v5 = (a2 >> 4) & 1;
  if ( v5 )
  {
    v6 = *(__int64 **)(a3 + 16);
    if ( v6 )
    {
      do
      {
        v7 = *v6;
        if ( !*v6 )
          break;
        if ( *(_BYTE *)(v7 + 14) || *(_BYTE *)(v7 + 13) )
        {
          if ( !v5 )
            goto LABEL_12;
          v9 = *(_BYTE *)(v7 + 15) == 0;
        }
        else
        {
          CachedFeatureEnabledState = wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState(
                                        *(unsigned int **)v7,
                                        *v6);
          if ( !v5 )
            goto LABEL_12;
          v9 = (CachedFeatureEnabledState & 8) == 0;
        }
        if ( v9 )
        {
LABEL_12:
          v5 = 0;
          goto LABEL_13;
        }
        v5 = 1;
LABEL_13:
        ++v6;
      }
      while ( v5 );
    }
  }
  v10 = 128;
  if ( ((a2 >> 3) & 1) != v5 )
    v10 = 136;
  _InterlockedXor(a1, v10);
  LODWORD(v12) = a2 ^ v10;
  return v12;
}
