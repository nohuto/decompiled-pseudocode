/*
 * XREFs of ?BmlCompareModeResolution@@YA?AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z @ 0x1C02EB608
 * Callers:
 *     BmlCompareSourceModesWithContentRes @ 0x1C02EB6EC (BmlCompareSourceModesWithContentRes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BmlCompareModeResolution(int *a1, _DWORD *a2)
{
  int v2; // r8d
  unsigned int v3; // eax
  unsigned int v4; // ecx

  v2 = *a1;
  if ( (unsigned int)*a1 < *a2 )
    return 0xFFFFFFFFLL;
  v3 = a1[1];
  v4 = a2[1];
  if ( v3 < v4 )
    return 0xFFFFFFFFLL;
  return v2 != *a2 || v3 != v4;
}
