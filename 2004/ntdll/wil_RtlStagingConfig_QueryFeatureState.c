/*
 * XREFs of wil_RtlStagingConfig_QueryFeatureState @ 0x18011A008
 * Callers:
 *     wil_details_GetCurrentFeatureEnabledState @ 0x18009BBC0 (wil_details_GetCurrentFeatureEnabledState.c)
 * Callees:
 *     RtlQueryFeatureConfiguration @ 0x18005CB70 (RtlQueryFeatureConfiguration.c)
 */

__int64 wil_RtlStagingConfig_QueryFeatureState(__int64 a1, unsigned int a2, int a3, ...)
{
  unsigned int v4; // edi
  int FeatureConfiguration; // eax
  unsigned int v6; // ecx
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+28h] [rbp-10h]
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, a3);
  v4 = 0;
  v8 = 0LL;
  v9 = 0;
  FeatureConfiguration = RtlQueryFeatureConfiguration(a2, a3 == 0, (__int64 *)va, (__int64)&v8);
  if ( !FeatureConfiguration )
  {
    v6 = HIDWORD(v8);
    v4 = 1;
    *(_DWORD *)a1 = (HIDWORD(v8) >> 4) & 3;
    *(_BYTE *)(a1 + 4) = BYTE1(v6) & 0x3F;
    *(_DWORD *)(a1 + 12) = v9;
    *(_DWORD *)(a1 + 8) = (unsigned __int16)v6 >> 14;
    *(_DWORD *)(a1 + 20) = (v6 >> 6) & 1;
LABEL_5:
    *(_DWORD *)(a1 + 16) = (v6 >> 7) & 1;
    return v4;
  }
  if ( FeatureConfiguration == 279 )
  {
    v6 = HIDWORD(v8);
    goto LABEL_5;
  }
  return v4;
}
