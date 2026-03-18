/*
 * XREFs of BmlCompareSourceModesWithContentRes @ 0x1C01B225C
 * Callers:
 *     BmlCompareSourceModes @ 0x1C01B26E0 (BmlCompareSourceModes.c)
 * Callees:
 *     ?BmlCompareModeResolution@@YA?AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z @ 0x1C01B2304 (-BmlCompareModeResolution@@YA-AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z.c)
 *     ?BmlCompareModeExtents@@YA?AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z @ 0x1C01B26AC (-BmlCompareModeExtents@@YA-AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z.c)
 *     BmlCompareModeRegions @ 0x1C01B2B94 (BmlCompareModeRegions.c)
 */

__int64 __fastcall BmlCompareSourceModesWithContentRes(__int64 a1, unsigned __int16 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r11
  __int64 v6; // r10
  __int64 v7; // rdx
  __int64 v8; // r10
  __int64 v9; // r11
  __int64 v10; // rdx
  __int64 v11; // r10
  __int64 v13; // r10

  v4 = a1;
  v6 = 120LL * a2;
  if ( (*(_DWORD *)(a1 + 8) & 3) == 0 && (unsigned int)BmlCompareModeExtents(v6 + a1 + 108, v6 + a1 + 52) != 1 )
    return 0LL;
  if ( (unsigned int)BmlCompareModeResolution(a4 + 76, v6 + v4 + 108) != -1
    && (unsigned int)BmlCompareModeResolution(v8, v7) != -1 )
  {
    return BmlCompareModeRegions(v9, v13);
  }
  if ( (unsigned int)BmlCompareModeResolution(v9, v7) != -1 )
    return 0xFFFFFFFFLL;
  return (unsigned int)BmlCompareModeResolution(v11, v10) != -1;
}
