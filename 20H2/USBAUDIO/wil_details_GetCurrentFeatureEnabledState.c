/*
 * XREFs of wil_details_GetCurrentFeatureEnabledState @ 0x1C000291C
 * Callers:
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1C0002B24 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 * Callees:
 *     wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x1C0002C24 (wil_details_FeatureStateCache_GetCachedFeatureEnabledState.c)
 *     wil_details_StagingConfig_Load @ 0x1C0002C58 (wil_details_StagingConfig_Load.c)
 *     wil_details_StagingConfig_QueryFeatureState @ 0x1C0002F50 (wil_details_StagingConfig_QueryFeatureState.c)
 *     __security_check_cookie @ 0x1C0011C50 (__security_check_cookie.c)
 *     memset @ 0x1C0013800 (memset.c)
 */

__int64 __fastcall wil_details_GetCurrentFeatureEnabledState(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // r14d
  unsigned __int8 v3; // al
  int v5; // ebx
  BOOL v6; // esi
  int v7; // eax
  int v8; // r8d
  int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // r9d
  int v13; // ecx
  unsigned int v14; // r9d
  unsigned int v15; // ebx
  _QWORD *v16; // rdi
  __int64 v17; // rax
  char CachedFeatureEnabledState; // al
  bool v19; // zf
  int v20; // eax
  __int64 v22; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v23; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+48h] [rbp-B8h]
  PVOID v25[12]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+B0h] [rbp-50h] BYREF
  int v27; // [rsp+B8h] [rbp-48h]
  _BYTE v28[208]; // [rsp+C0h] [rbp-40h] BYREF

  v2 = *(_DWORD *)(a1 + 16);
  v3 = *(_BYTE *)(a1 + 20) - 2;
  v23 = 0LL;
  v5 = 1;
  *a2 = 1;
  v6 = v3 <= 1u;
  v22 = 0LL;
  v24 = 0LL;
  v26 = 0LL;
  v27 = 0;
  v7 = RtlQueryFeatureConfiguration(v2, v3 > 1u, &v22, &v26);
  if ( v7 )
  {
    if ( v7 == 279 )
      LODWORD(v24) = (HIDWORD(v26) >> 7) & 1;
    v5 = 0;
    memset(v25, 0, 0x58uLL);
    if ( !(unsigned int)wil_details_StagingConfig_Load(v25, v10, v11, v28) )
    {
      v5 = wil_details_StagingConfig_QueryFeatureState(v25, &v23, v2, v6);
      if ( LODWORD(v25[10]) )
        ExFreePoolWithTag(v25[7], 0x4C4957u);
    }
    v9 = HIDWORD(v24);
    v8 = v23;
  }
  else
  {
    v8 = (HIDWORD(v26) >> 4) & 3;
    v9 = (HIDWORD(v26) >> 6) & 1;
    LODWORD(v24) = (HIDWORD(v26) >> 7) & 1;
  }
  v22 = 0LL;
  v12 = 32 * (((_DWORD)v24 != 0 ? 8 : 0) | (v9 != 0 ? 0x10 : 0) | (unsigned __int8)v8 & (unsigned __int8)-(v5 != 0) & 3);
  if ( ((unsigned __int8)v8 & (unsigned __int8)-(v5 != 0) & 3) != 0 )
  {
    v13 = 0;
    if ( v8 == 2 )
      v13 = 16;
  }
  else
  {
    v13 = *(_BYTE *)(a1 + 23) != 0 ? 0x10 : 0;
  }
  v14 = v13 | v12;
  v15 = v14 | (v14 >> 1) & 8;
  LODWORD(v22) = v15;
  if ( v14 & 8 | (v14 >> 1) & 8 )
  {
    v16 = *(_QWORD **)(a1 + 24);
    if ( v16 )
    {
      do
      {
        v17 = *v16;
        if ( !*v16 )
          return v22;
        if ( *(_BYTE *)(v17 + 22) || *(_BYTE *)(v17 + 21) )
        {
          if ( (v15 & 8) == 0 )
            goto LABEL_24;
          v19 = *(_BYTE *)(v17 + 23) == 0;
        }
        else
        {
          CachedFeatureEnabledState = wil_details_FeatureStateCache_GetCachedFeatureEnabledState(*(_QWORD *)v17, *v16);
          if ( (v15 & 8) == 0 )
            goto LABEL_24;
          v19 = (CachedFeatureEnabledState & 8) == 0;
        }
        if ( v19 )
        {
LABEL_24:
          v20 = 0;
          goto LABEL_25;
        }
        v20 = 8;
LABEL_25:
        ++v16;
        v15 = v20 | v15 & 0xFFFFFFF7;
        LODWORD(v22) = v15;
      }
      while ( (v15 & 8) != 0 );
    }
  }
  return v22;
}
