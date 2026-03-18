/*
 * XREFs of ?BmlCompareModeResolution@@YA?AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z @ 0x1C01B2304
 * Callers:
 *     BmlCompareSourceModesWithContentRes @ 0x1C01B225C (BmlCompareSourceModesWithContentRes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BmlCompareModeResolution(int *a1, _DWORD *a2)
{
  int v2; // r8d
  unsigned int v4; // eax
  unsigned int v5; // ecx

  v2 = *a1;
  if ( (unsigned int)*a1 < *a2 )
    return 0xFFFFFFFFLL;
  v4 = a1[1];
  v5 = a2[1];
  if ( v4 < v5 )
    return 0xFFFFFFFFLL;
  return v2 != *a2 || v4 != v5;
}
