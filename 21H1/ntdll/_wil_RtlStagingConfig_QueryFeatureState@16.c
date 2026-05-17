/*
 * XREFs of _wil_RtlStagingConfig_QueryFeatureState@16 @ 0x4B3A1000
 * Callers:
 *     _wil_details_GetCurrentFeatureEnabledState@8 @ 0x4B306714 (_wil_details_GetCurrentFeatureEnabledState@8.c)
 * Callees:
 *     _RtlQueryFeatureConfiguration@16 @ 0x4B2E51D0 (_RtlQueryFeatureConfiguration@16.c)
 */

int __fastcall wil_RtlStagingConfig_QueryFeatureState(int a1, int a2, int a3, int a4)
{
  int v4; // ebx
  int v6; // eax
  unsigned int v7; // ecx
  int v8; // ecx
  int v10; // [esp+Ch] [ebp-14h] BYREF
  unsigned int v11; // [esp+10h] [ebp-10h]
  int v12; // [esp+14h] [ebp-Ch]
  int v13; // [esp+18h] [ebp-8h] BYREF

  v4 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v6 = RtlQueryFeatureConfiguration(a2, a3 == 0, &v13, (int)&v10);
  if ( !v6 )
  {
    v7 = v11;
    v4 = 1;
    *(_DWORD *)a1 = (v11 >> 4) & 3;
    *(_BYTE *)(a1 + 4) = BYTE1(v7) & 0x3F;
    *(_DWORD *)(a1 + 12) = v12;
    *(_DWORD *)(a1 + 8) = (unsigned __int16)v7 >> 14;
    *(_DWORD *)(a1 + 20) = (v7 >> 6) & 1;
    v8 = (v7 >> 7) & 1;
LABEL_5:
    *(_DWORD *)(a1 + 16) = v8;
    return v4;
  }
  if ( v6 == 279 )
  {
    v8 = (v11 >> 7) & 1;
    goto LABEL_5;
  }
  return v4;
}
