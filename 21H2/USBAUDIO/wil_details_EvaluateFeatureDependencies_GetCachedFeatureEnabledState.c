/*
 * XREFs of wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState @ 0x1C0022484
 * Callers:
 *     wil_details_EvaluateFeatureDependencies @ 0x1C0022398 (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState @ 0x1C0022484 (wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState.c)
 * Callees:
 *     wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState @ 0x1C0022484 (wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState.c)
 */

__int64 __fastcall wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState(
        volatile signed __int32 *a1,
        __int64 a2)
{
  unsigned __int32 v3; // esi
  int v4; // ebx
  _QWORD *v5; // rdi
  __int64 v6; // rax
  char CachedFeatureEnabledState; // al
  bool v8; // zf
  unsigned __int32 v9; // eax
  unsigned int v10; // r8d
  __int64 v12; // [rsp+30h] [rbp+8h]

  v3 = *a1;
  v12 = *(unsigned int *)a1;
  if ( (*a1 & 0x200) != 0 )
  {
    HIDWORD(v12) = 0;
    v4 = (v3 >> 6) & 1;
    if ( v4 )
    {
      v5 = *(_QWORD **)(a2 + 32);
      if ( v5 )
      {
        while ( 1 )
        {
          v6 = *v5;
          if ( !*v5 )
            goto LABEL_15;
          if ( *(_BYTE *)(v6 + 30) || *(_BYTE *)(v6 + 29) )
          {
            if ( !v4 )
              goto LABEL_13;
            v8 = *(_BYTE *)(v6 + 31) == 0;
          }
          else
          {
            CachedFeatureEnabledState = wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState(
                                          *(_QWORD *)v6,
                                          *v5);
            if ( !v4 )
              goto LABEL_13;
            v8 = (CachedFeatureEnabledState & 1) == 0;
          }
          if ( v8 )
          {
LABEL_13:
            v4 = 0;
            goto LABEL_14;
          }
          v4 = 1;
LABEL_14:
          ++v5;
          if ( !v4 )
            goto LABEL_15;
        }
      }
    }
    do
    {
LABEL_15:
      v9 = v3;
      v10 = v4 & 0xFFFFFFCF | v3 & 0xFFFFFFCE;
      if ( (v3 & 1) == v4 )
        v10 = v4 | v3 & 0xFFFFFFFE;
      LODWORD(v12) = v10 & 0xFFFFFDFF;
      v3 = _InterlockedCompareExchange(a1, v10 & 0xFFFFFDFF, v3);
    }
    while ( v9 != v3 );
  }
  return v12;
}
