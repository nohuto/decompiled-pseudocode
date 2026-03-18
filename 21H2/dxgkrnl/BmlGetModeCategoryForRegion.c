/*
 * XREFs of BmlGetModeCategoryForRegion @ 0x1C01B2204
 * Callers:
 *     BmlCompareSourceModesWithMonitors @ 0x1C01B2074 (BmlCompareSourceModesWithMonitors.c)
 *     BmlGetRecommendedContentSizeForPath @ 0x1C03AB2AC (BmlGetRecommendedContentSizeForPath.c)
 *     _BmlGetPathModeListForPath @ 0x1C03ABDDC (_BmlGetPathModeListForPath.c)
 * Callees:
 *     ?BmlCompareModeExtents@@YA?AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z @ 0x1C01B26AC (-BmlCompareModeExtents@@YA-AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z.c)
 */

__int64 BmlGetModeCategoryForRegion()
{
  _DWORD *v0; // r10
  char v1; // r11
  bool v2; // cf

  if ( (unsigned int)BmlCompareModeExtents() != 1 )
  {
    if ( !v1 )
    {
      if ( *v0 < 0x400u )
        return 2LL;
      if ( *v0 != 1024 )
      {
        v2 = v0[1] < 0x300u;
        goto LABEL_6;
      }
      v2 = v0[1] < 0x300u;
      if ( v0[1] != 768 )
      {
LABEL_6:
        if ( v2 )
          return 2LL;
      }
    }
    return 3LL;
  }
  return 1LL;
}
