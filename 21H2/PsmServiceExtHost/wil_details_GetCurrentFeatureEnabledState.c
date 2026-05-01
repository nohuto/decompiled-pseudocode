/*
 * XREFs of wil_details_GetCurrentFeatureEnabledState @ 0x1800478BC
 * Callers:
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x180047784 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 * Callees:
 *     wil_QueryFeatureState @ 0x180046064 (wil_QueryFeatureState.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x180047784 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 */

__int64 __fastcall wil_details_GetCurrentFeatureEnabledState(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rdx
  _BOOL8 v4; // r8
  int FeatureState; // eax
  int v6; // ecx
  unsigned int v7; // edx
  int v8; // ebx
  __int64 *v9; // rdi
  __int64 v10; // rcx
  unsigned __int8 v11; // al
  BOOL v12; // ecx
  unsigned int v13; // eax
  unsigned int v14; // ebx
  __int128 v17; // [rsp+30h] [rbp-28h] BYREF
  __int64 v18; // [rsp+40h] [rbp-18h]
  __int64 v19; // [rsp+60h] [rbp+8h]
  __int64 v20; // [rsp+70h] [rbp+18h]

  v2 = *(unsigned int *)(a1 + 24);
  v4 = (unsigned __int8)(*(_BYTE *)(a1 + 28) - 2) <= 1u;
  v17 = 0LL;
  v18 = 0LL;
  FeatureState = wil_QueryFeatureState((__int64)&v17, v2, v4, 0, 0LL, a2);
  HIDWORD(v19) = 0;
  if ( ((((unsigned __int8)v17 & (unsigned __int8)-(FeatureState != 0) & 3) << 7) & 0x180) != 0 )
  {
    v6 = 0;
    if ( (_DWORD)v17 == 2 )
      v6 = 64;
  }
  else
  {
    v6 = *(_BYTE *)(a1 + 31) != 0 ? 0x40 : 0;
  }
  v7 = v6 | ((_DWORD)v18 != 0 ? 0x400 : 0) | (HIDWORD(v18) != 0 ? 0x800 : 0) | (((unsigned __int8)v17 & (unsigned __int8)-(FeatureState != 0) & 3) << 7);
  v8 = v7 | (v7 >> 6) & 1;
  LODWORD(v19) = v8;
  if ( v7 & 1 | ((v7 & 0x40) != 0) )
  {
    v9 = *(__int64 **)(a1 + 32);
    if ( v9 )
    {
      while ( (v8 & 1) != 0 )
      {
        v10 = *v9;
        if ( !*v9 )
          break;
        if ( *(_BYTE *)(v10 + 30) || *(_BYTE *)(v10 + 29) )
        {
          v13 = (v8 & 1) != 0 && *(_BYTE *)(v10 + 31);
          v14 = v8 & 0xFFFFFFFE;
        }
        else
        {
          LODWORD(v20) = **(_DWORD **)v10;
          if ( (v20 & 2) != 0 )
            v11 = **(_DWORD **)v10;
          else
            v11 = wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(
                    *(volatile signed __int32 **)v10,
                    v20,
                    v10);
          v12 = ((unsigned __int8)v8 & v11 & 1) != 0;
          v13 = v8 & 0xFFFFFFFE;
          v14 = v12;
        }
        v8 = v13 | v14;
        LODWORD(v19) = v8;
        ++v9;
      }
    }
  }
  return v19;
}
