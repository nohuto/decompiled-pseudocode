/*
 * XREFs of _SkipDIB_CY @ 0x1CC159
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _MappingBGRF @ 0xFAEEE (_MappingBGRF.c)
 *     _GetFixupScan @ 0x1C5128 (_GetFixupScan.c)
 *     _AlphaBlendBGRF @ 0x1C60DE (_AlphaBlendBGRF.c)
 */

int __cdecl SkipDIB_CY(_DWORD *a1)
{
  unsigned __int16 *v1; // edi
  int v2; // esi
  void *FixupScan; // eax
  __int16 v4; // ax
  int v6; // [esp-Ch] [ebp-180h]
  int v7; // [esp-8h] [ebp-17Ch]
  int v8; // [esp-4h] [ebp-178h]
  _DWORD v9[89]; // [esp+Ch] [ebp-168h] BYREF

  qmemcpy(v9, a1, sizeof(v9));
  v1 = *(unsigned __int16 **)(v9[48] + 72);
  while ( v9[23] )
  {
    --v9[23];
    v2 = *v1++;
    while ( --v2 > 0 )
      GetFixupScan((int)v9, 0);
    v8 = v9[88];
    v7 = v9[87];
    v6 = v9[86];
    FixupScan = GetFixupScan((int)v9, (void *)v9[81]);
    ((void (__cdecl *)(_DWORD, void *, int, int, int))v9[45])(v9[47], FixupScan, v6, v7, v8);
    v4 = v9[0];
    if ( SLOBYTE(v9[0]) < 0 )
    {
      ((void (__cdecl *)(_DWORD *))v9[31])(v9);
      v4 = v9[0];
    }
    if ( (v4 & 0x800) != 0 )
    {
      AlphaBlendBGRF(v9);
      LOBYTE(v4) = v9[0];
    }
    if ( (v4 & 0x10) != 0 )
    {
      MappingBGRF((unsigned __int8 *)v9[82], v9[83], v9[59], (unsigned __int8 *)v9[68]);
      v9[68] += v9[71];
      if ( v9[68] == v9[69] )
        v9[68] = v9[70];
    }
    ((void (__cdecl *)(_DWORD *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD))v9[43])(
      v9,
      v9[84],
      v9[85],
      v9[21],
      v9[58],
      v9[61],
      v9[61] + v9[65],
      v9[66],
      v9[44]);
    v9[61] += v9[64];
    if ( v9[61] == v9[62] )
      v9[61] = v9[63];
    v9[21] += v9[25];
  }
  return a1[23];
}
