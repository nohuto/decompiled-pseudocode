/*
 * XREFs of ?wil_details_GetCurrentFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEBUwil_details_FeatureDescriptor@@PEAH@Z @ 0x1C0009390
 * Callers:
 *     ?wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@T1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C00095A4 (-wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState@@YA-ATwil_details_FeatureStat.c)
 * Callees:
 *     ?wil_details_StagingConfig_QueryFeatureState@@YAHPEAUwil_details_StagingConfig@@PEAUwil_FeatureState@@IH@Z @ 0x1C00026F8 (-wil_details_StagingConfig_QueryFeatureState@@YAHPEAUwil_details_StagingConfig@@PEAUwil_FeatureS.c)
 *     ?wil_details_FeatureStateCache_GetCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C00096A4 (-wil_details_FeatureStateCache_GetCachedFeatureEnabledState@@YA-ATwil_details_FeatureStateCache@.c)
 *     ?wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z @ 0x1C00096D8 (-wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z.c)
 *     __security_check_cookie @ 0x1C0012700 (__security_check_cookie.c)
 *     memset @ 0x1C00142C0 (memset.c)
 */

__int64 __fastcall wil_details_GetCurrentFeatureEnabledState(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // r14d
  unsigned __int8 v3; // al
  int FeatureState; // ebx
  BOOL v6; // esi
  int v7; // eax
  int v8; // r8d
  int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // ecx
  int v13; // ebx
  unsigned int v14; // ebx
  _QWORD *v15; // rdi
  __int64 v16; // rax
  char CachedFeatureEnabledState; // al
  bool v18; // zf
  int v19; // eax
  __int64 v21; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v22; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v23; // [rsp+48h] [rbp-B8h]
  PVOID v24[12]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+B0h] [rbp-50h] BYREF
  int v26; // [rsp+B8h] [rbp-48h]
  _BYTE v27[208]; // [rsp+C0h] [rbp-40h] BYREF

  v2 = *(_DWORD *)(a1 + 8);
  v3 = *(_BYTE *)(a1 + 12) - 2;
  v22 = 0LL;
  FeatureState = 1;
  *a2 = 1;
  v6 = v3 <= 1u;
  v21 = 0LL;
  v23 = 0LL;
  v25 = 0LL;
  v26 = 0;
  v7 = RtlQueryFeatureConfiguration(v2, v3 > 1u, &v21, &v25);
  if ( v7 )
  {
    if ( v7 == 279 )
      LODWORD(v23) = (HIDWORD(v25) >> 7) & 1;
    FeatureState = 0;
    memset(v24, 0, 0x58uLL);
    if ( !(unsigned int)wil_details_StagingConfig_Load(v24, v10, v11, v27) )
    {
      FeatureState = wil_details_StagingConfig_QueryFeatureState(
                       (struct wil_details_StagingConfig *)v24,
                       (struct wil_FeatureState *)&v22,
                       v2,
                       v6);
      if ( LODWORD(v24[10]) )
        ExFreePoolWithTag(v24[7], 0x4C4957u);
    }
    v9 = HIDWORD(v23);
    v8 = v22;
  }
  else
  {
    v8 = (HIDWORD(v25) >> 4) & 3;
    v9 = (HIDWORD(v25) >> 6) & 1;
    LODWORD(v23) = (HIDWORD(v25) >> 7) & 1;
  }
  v21 = 0LL;
  v12 = 32
      * (((_DWORD)v23 != 0 ? 8 : 0) | (v9 != 0 ? 0x10 : 0) | (unsigned __int8)v8 & (unsigned __int8)-(FeatureState != 0) & 3);
  if ( (v12 & 0x60) != 0 )
  {
    v13 = 0;
    if ( v8 == 2 )
      v13 = 16;
  }
  else
  {
    v13 = *(_BYTE *)(a1 + 15) != 0 ? 0x10 : 0;
  }
  v14 = ((v12 | v13) ^ ((v12 | (unsigned int)v13) >> 1)) & 8 ^ (v12 | v13);
  LODWORD(v21) = v14;
  if ( (v14 & 8) != 0 )
  {
    v15 = *(_QWORD **)(a1 + 16);
    if ( v15 )
    {
      do
      {
        v16 = *v15;
        if ( !*v15 )
          return v21;
        if ( *(_BYTE *)(v16 + 14) || *(_BYTE *)(v16 + 13) )
        {
          if ( (v14 & 8) == 0 )
            goto LABEL_24;
          v18 = *(_BYTE *)(v16 + 15) == 0;
        }
        else
        {
          CachedFeatureEnabledState = wil_details_FeatureStateCache_GetCachedFeatureEnabledState(*(_QWORD *)v16, *v15);
          if ( (v14 & 8) == 0 )
            goto LABEL_24;
          v18 = (CachedFeatureEnabledState & 8) == 0;
        }
        if ( v18 )
        {
LABEL_24:
          v19 = 0;
          goto LABEL_25;
        }
        v19 = 8;
LABEL_25:
        ++v15;
        v14 = v19 | v14 & 0xFFFFFFF7;
        LODWORD(v21) = v14;
      }
      while ( (v14 & 8) != 0 );
    }
  }
  return v21;
}
