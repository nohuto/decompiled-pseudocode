/*
 * XREFs of wil_details_GetCurrentFeatureEnabledState @ 0x140331358
 * Callers:
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1403EFC44 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 * Callees:
 *     RtlQueryFeatureConfiguration @ 0x14038C0B0 (RtlQueryFeatureConfiguration.c)
 *     wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x14038C474 (wil_details_FeatureStateCache_GetCachedFeatureEnabledState.c)
 *     wil_StagingConfig_QueryFeatureState @ 0x1406E3768 (wil_StagingConfig_QueryFeatureState.c)
 */

ULONGLONG __fastcall wil_details_GetCurrentFeatureEnabledState(__int64 a1, _DWORD *a2)
{
  RTL_FEATURE_ID v2; // r14d
  unsigned __int8 v3; // al
  int v5; // ebx
  BOOL v6; // esi
  NTSTATUS v7; // eax
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
  _RTL_FEATURE_CONFIGURATION FeatureConfiguration; // [rsp+30h] [rbp-30h] BYREF
  __int128 v24; // [rsp+40h] [rbp-20h] BYREF
  __int64 v25; // [rsp+50h] [rbp-10h]
  ULONGLONG ChangeStamp; // [rsp+80h] [rbp+20h] BYREF

  v2 = *(_DWORD *)(a1 + 16);
  v3 = *(_BYTE *)(a1 + 20) - 2;
  v24 = 0LL;
  v5 = 1;
  *a2 = 1;
  v6 = v3 <= 1u;
  v25 = 0LL;
  *(_QWORD *)&FeatureConfiguration.FeatureId = 0LL;
  FeatureConfiguration.VariantPayload = 0;
  v7 = RtlQueryFeatureConfiguration(v2, (RTL_FEATURE_CONFIGURATION_TYPE)(v3 > 1u), &ChangeStamp, &FeatureConfiguration);
  if ( v7 )
  {
    if ( v7 == 279 )
      LODWORD(v25) = (*((_DWORD *)&FeatureConfiguration + 1) >> 7) & 1;
    FeatureState = wil_StagingConfig_QueryFeatureState(0, (unsigned int)&v24, v2, v6, 0LL);
    v9 = HIDWORD(v25);
    v5 = FeatureState;
    v10 = v25;
    v8 = v24;
  }
  else
  {
    v8 = (*((_DWORD *)&FeatureConfiguration + 1) >> 4) & 3;
    v9 = (*((_DWORD *)&FeatureConfiguration + 1) >> 6) & 1;
    v10 = (*((_DWORD *)&FeatureConfiguration + 1) >> 7) & 1;
  }
  ChangeStamp = 0LL;
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
    v14 = *(_BYTE *)(a1 + 23) != 0 ? 0x10 : 0;
  }
  v15 = v14 | v12 | (32 * ((unsigned __int8)v8 & (unsigned __int8)-(v13 != 0) & 3));
  v16 = v15 | (v15 >> 1) & 8;
  LODWORD(ChangeStamp) = v16;
  if ( v15 & 8 | (v15 >> 1) & 8 )
  {
    v17 = *(_QWORD **)(a1 + 24);
    if ( v17 )
    {
      do
      {
        v18 = *v17;
        if ( !*v17 )
          return ChangeStamp;
        if ( *(_BYTE *)(v18 + 22) || *(_BYTE *)(v18 + 21) )
        {
          if ( (v16 & 8) == 0 )
            goto LABEL_21;
          v20 = *(_BYTE *)(v18 + 23) == 0;
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
        LODWORD(ChangeStamp) = v16;
      }
      while ( (v16 & 8) != 0 );
    }
  }
  return ChangeStamp;
}
