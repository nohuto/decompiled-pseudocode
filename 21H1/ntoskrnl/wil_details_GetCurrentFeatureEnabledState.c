/*
 * XREFs of wil_details_GetCurrentFeatureEnabledState @ 0x140322B30
 * Callers:
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1403EBBF4 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 * Callees:
 *     wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x140389164 (wil_details_FeatureStateCache_GetCachedFeatureEnabledState.c)
 *     wil_StagingConfig_QueryFeatureState @ 0x1406ED608 (wil_StagingConfig_QueryFeatureState.c)
 *     RtlQueryFeatureConfiguration @ 0x140764540 (RtlQueryFeatureConfiguration.c)
 */

__int64 __fastcall wil_details_GetCurrentFeatureEnabledState(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // r14d
  unsigned __int8 v3; // al
  int v5; // ebx
  BOOL v6; // esi
  int v7; // eax
  int v8; // r9d
  int v9; // edx
  int v10; // eax
  int FeatureState; // eax
  int v12; // edx
  int v13; // ebx
  int v14; // ecx
  unsigned int v15; // r8d
  unsigned int v16; // ebx
  _QWORD *v17; // rdi
  __int64 v18; // rax
  char CachedFeatureEnabledState; // al
  bool v20; // zf
  int v21; // eax
  __int64 v23; // [rsp+30h] [rbp-30h] BYREF
  int v24; // [rsp+38h] [rbp-28h]
  __int128 v25; // [rsp+40h] [rbp-20h] BYREF
  __int64 v26; // [rsp+50h] [rbp-10h]
  __int64 v27; // [rsp+80h] [rbp+20h] BYREF

  v2 = *(_DWORD *)(a1 + 8);
  v3 = *(_BYTE *)(a1 + 12) - 2;
  v25 = 0LL;
  v5 = 1;
  *a2 = 1;
  v6 = v3 <= 1u;
  v26 = 0LL;
  v23 = 0LL;
  v24 = 0;
  v7 = RtlQueryFeatureConfiguration(v2, v3 > 1u, &v27, &v23);
  if ( v7 )
  {
    if ( v7 == 279 )
      LODWORD(v26) = (HIDWORD(v23) >> 7) & 1;
    FeatureState = wil_StagingConfig_QueryFeatureState(0, (unsigned int)&v25, v2, v6, 0LL);
    v9 = HIDWORD(v26);
    v5 = FeatureState;
    v10 = v26;
    v8 = v25;
  }
  else
  {
    v8 = (HIDWORD(v23) >> 4) & 3;
    v9 = (HIDWORD(v23) >> 6) & 1;
    v10 = (HIDWORD(v23) >> 7) & 1;
  }
  v27 = 0LL;
  v12 = (v10 != 0 ? 0x100 : 0) | (v9 != 0 ? 0x200 : 0);
  v13 = -v5;
  if ( (((unsigned __int8)v12 | (unsigned __int8)(32 * ((v13 != 0 ? v8 : 0) & 3))) & 0x60) != 0 )
  {
    v14 = 0;
    if ( v8 == 2 )
      v14 = 16;
  }
  else
  {
    v14 = *(_BYTE *)(a1 + 15) != 0 ? 0x10 : 0;
  }
  v15 = v14 | v12 | (32 * ((unsigned __int8)v8 & (unsigned __int8)-(v13 != 0) & 3));
  v16 = v15 | (v15 >> 1) & 8;
  LODWORD(v27) = v16;
  if ( v15 & 8 | (v15 >> 1) & 8 )
  {
    v17 = *(_QWORD **)(a1 + 16);
    if ( v17 )
    {
      do
      {
        v18 = *v17;
        if ( !*v17 )
          return v27;
        if ( *(_BYTE *)(v18 + 14) || *(_BYTE *)(v18 + 13) )
        {
          if ( (v16 & 8) == 0 )
            goto LABEL_21;
          v20 = *(_BYTE *)(v18 + 15) == 0;
        }
        else
        {
          CachedFeatureEnabledState = wil_details_FeatureStateCache_GetCachedFeatureEnabledState(*(_QWORD *)v18, *v17);
          if ( (v16 & 8) == 0 )
            goto LABEL_21;
          v20 = (CachedFeatureEnabledState & 8) == 0;
        }
        if ( v20 )
        {
LABEL_21:
          v21 = 0;
          goto LABEL_22;
        }
        v21 = 8;
LABEL_22:
        ++v17;
        v16 = v21 | v16 & 0xFFFFFFF7;
        LODWORD(v27) = v16;
      }
      while ( (v16 & 8) != 0 );
    }
  }
  return v27;
}
