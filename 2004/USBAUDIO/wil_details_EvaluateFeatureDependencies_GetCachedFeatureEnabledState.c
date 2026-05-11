/*
 * XREFs of wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState @ 0x1C002247C
 * Callers:
 *     wil_details_EvaluateFeatureDependencies @ 0x1C0022398 (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState @ 0x1C002247C (wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState.c)
 * Callees:
 *     wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState @ 0x1C002247C (wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState.c)
 */

__int64 __fastcall wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState(
        volatile signed __int32 *a1,
        __int64 a2)
{
  unsigned int v2; // esi
  volatile unsigned __int32 v3; // ebp
  int v5; // ebx
  _QWORD *v6; // rdi
  __int64 v7; // rax
  char CachedFeatureEnabledState; // al
  bool v9; // zf
  __int64 v11; // [rsp+40h] [rbp+8h]

  v2 = 128;
  v3 = *a1;
  v11 = *(unsigned int *)a1;
  if ( (*a1 & 0x80u) != 0 )
  {
    HIDWORD(v11) = 0;
    v5 = (v3 >> 4) & 1;
    if ( v5 )
    {
      v6 = *(_QWORD **)(a2 + 16);
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
              goto LABEL_13;
            v9 = *(_BYTE *)(v7 + 15) == 0;
          }
          else
          {
            CachedFeatureEnabledState = wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState(
                                          *(_QWORD *)v7,
                                          *v6);
            if ( !v5 )
              goto LABEL_13;
            v9 = (CachedFeatureEnabledState & 8) == 0;
          }
          if ( v9 )
          {
LABEL_13:
            v5 = 0;
            goto LABEL_14;
          }
          v5 = 1;
LABEL_14:
          ++v6;
        }
        while ( v5 );
      }
    }
    if ( ((v3 >> 3) & 1) != v5 )
      v2 = 136;
    _InterlockedXor(a1, v2);
    LODWORD(v11) = v3 ^ v2;
  }
  return v11;
}
