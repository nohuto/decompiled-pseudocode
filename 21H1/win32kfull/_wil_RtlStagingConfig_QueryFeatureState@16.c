/*
 * XREFs of _wil_RtlStagingConfig_QueryFeatureState@16 @ 0x27A2C8
 * Callers:
 *     _wil_details_GetCurrentFeatureEnabledState@8 @ 0xF2DB6 (_wil_details_GetCurrentFeatureEnabledState@8.c)
 *     ?wil_details_GetCurrentFeatureEnabledState@@YG?ATwil_details_FeatureStateCache@@PBUwil_details_FeatureDescriptor@@PAH@Z @ 0xF6868 (-wil_details_GetCurrentFeatureEnabledState@@YG-ATwil_details_FeatureStateCache@@PBUwil_details_F.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __fastcall wil_RtlStagingConfig_QueryFeatureState(int a1, int a2, int a3, int a4)
{
  int v4; // ebx
  int v6; // eax
  unsigned int v7; // ecx
  int v8; // ecx
  _DWORD v10[2]; // [esp+Ch] [ebp-18h] BYREF
  int v11; // [esp+14h] [ebp-10h] BYREF
  unsigned int v12; // [esp+18h] [ebp-Ch]
  int v13; // [esp+1Ch] [ebp-8h]

  v11 = 0;
  v4 = 0;
  v10[0] = 0;
  v10[1] = 0;
  v12 = 0;
  v13 = 0;
  v6 = RtlQueryFeatureConfiguration(a2, a3 == 0, v10, &v11);
  if ( !v6 )
  {
    v7 = v12;
    v4 = 1;
    *(_DWORD *)a1 = (v12 >> 4) & 3;
    *(_BYTE *)(a1 + 4) = BYTE1(v7) & 0x3F;
    *(_DWORD *)(a1 + 12) = v13;
    *(_DWORD *)(a1 + 8) = (unsigned __int16)v7 >> 14;
    *(_DWORD *)(a1 + 20) = (v7 >> 6) & 1;
    v8 = (v7 >> 7) & 1;
LABEL_5:
    *(_DWORD *)(a1 + 16) = v8;
    return v4;
  }
  if ( v6 == 279 )
  {
    v8 = (v12 >> 7) & 1;
    goto LABEL_5;
  }
  return v4;
}
