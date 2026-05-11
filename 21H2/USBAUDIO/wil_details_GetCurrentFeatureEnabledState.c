/*
 * XREFs of wil_details_GetCurrentFeatureEnabledState @ 0x1C0002958
 * Callers:
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1C0002BA0 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 * Callees:
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1C0002BA0 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 *     wil_details_StagingConfig_Load @ 0x1C0002D88 (wil_details_StagingConfig_Load.c)
 *     wil_details_StagingConfig_QueryFeatureState @ 0x1C0003080 (wil_details_StagingConfig_QueryFeatureState.c)
 *     __security_check_cookie @ 0x1C00121B0 (__security_check_cookie.c)
 *     memset @ 0x1C0013D80 (memset.c)
 */

__int64 __fastcall wil_details_GetCurrentFeatureEnabledState(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // r14d
  unsigned __int8 v3; // al
  BOOL v5; // esi
  int v6; // eax
  int v7; // ebx
  int v8; // r8d
  int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // r9d
  int v13; // ecx
  unsigned int v14; // r9d
  int v15; // ebx
  unsigned int ***v16; // rdi
  int i; // eax
  unsigned int **v18; // rcx
  unsigned __int8 v19; // al
  BOOL v20; // ecx
  unsigned int v21; // eax
  unsigned int v22; // ebx
  __int64 v24; // [rsp+30h] [rbp-D0h]
  __int64 v25; // [rsp+38h] [rbp-C8h]
  __int128 v26; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v27; // [rsp+50h] [rbp-B0h]
  __int64 v28; // [rsp+58h] [rbp-A8h] BYREF
  PVOID v29[12]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v30; // [rsp+C0h] [rbp-40h] BYREF
  int v31; // [rsp+C8h] [rbp-38h]
  _BYTE v32[208]; // [rsp+D0h] [rbp-30h] BYREF

  v2 = *(_DWORD *)(a1 + 24);
  v3 = *(_BYTE *)(a1 + 28) - 2;
  v26 = 0LL;
  *a2 = 1;
  v5 = v3 <= 1u;
  v28 = 0LL;
  v27 = 0LL;
  v30 = 0LL;
  v31 = 0;
  v6 = RtlQueryFeatureConfiguration(v2, v3 > 1u, &v28, &v30);
  if ( v6 )
  {
    if ( v6 == 279 )
      LODWORD(v27) = (HIDWORD(v30) >> 7) & 1;
    v7 = 0;
    memset(v29, 0, 0x58uLL);
    if ( !(unsigned int)wil_details_StagingConfig_Load(v29, v10, v11, v32) )
    {
      v7 = wil_details_StagingConfig_QueryFeatureState(v29, &v26, v2, v5);
      if ( LODWORD(v29[10]) )
        ExFreePoolWithTag(v29[7], 0x4C4957u);
    }
    v9 = HIDWORD(v27);
    v8 = v26;
  }
  else
  {
    v7 = 1;
    v8 = (HIDWORD(v30) >> 4) & 3;
    v9 = (HIDWORD(v30) >> 6) & 1;
    LODWORD(v27) = (HIDWORD(v30) >> 7) & 1;
  }
  HIDWORD(v24) = 0;
  v12 = (((_DWORD)v27 != 0 ? 8 : 0) | (v9 != 0 ? 0x10 : 0) | (unsigned __int8)v8 & (unsigned __int8)-(v7 != 0) & 3) << 7;
  if ( ((unsigned __int8)v8 & (unsigned __int8)-(v7 != 0) & 3) != 0 )
  {
    v13 = 0;
    if ( v8 == 2 )
      v13 = 64;
  }
  else
  {
    v13 = *(_BYTE *)(a1 + 31) != 0 ? 0x40 : 0;
  }
  v14 = v13 | v12;
  v15 = v14 | (v14 >> 6) & 1;
  LODWORD(v24) = v15;
  if ( v14 & 1 | ((v14 & 0x40) != 0) )
  {
    v16 = *(unsigned int ****)(a1 + 32);
    if ( v16 )
    {
      for ( i = v15 & 1; (v15 & 1) != 0; i = v15 & 1 )
      {
        v18 = *v16;
        if ( !*v16 )
          break;
        if ( *((_BYTE *)v18 + 30) || *((_BYTE *)v18 + 29) )
        {
          v21 = i && *((_BYTE *)v18 + 31);
          v22 = v15 & 0xFFFFFFFE;
        }
        else
        {
          v25 = **v18;
          v19 = (v25 & 2) != 0
              ? **v18
              : wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(*v18, v25, v18);
          v20 = ((unsigned __int8)v15 & v19 & 1) != 0;
          v21 = v15 & 0xFFFFFFFE;
          v22 = v20;
        }
        v15 = v21 | v22;
        ++v16;
        LODWORD(v24) = v15;
      }
    }
  }
  return v24;
}
