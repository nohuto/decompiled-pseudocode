/*
 * XREFs of _BltDIB_CY @ 0x1C67B5
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _MappingBGRF @ 0xFAEEE (_MappingBGRF.c)
 *     _GetFixupScan @ 0x1C5128 (_GetFixupScan.c)
 *     _AlphaBlendBGRF @ 0x1C60DE (_AlphaBlendBGRF.c)
 */

int __cdecl BltDIB_CY(const void *a1)
{
  int v1; // esi
  void *FixupScan; // eax
  _WORD *v3; // ecx
  __int16 v4; // ax
  int v6; // [esp-Ch] [ebp-17Ch]
  int v7; // [esp-8h] [ebp-178h]
  int v8; // [esp-4h] [ebp-174h]
  _DWORD v9[89]; // [esp+8h] [ebp-168h] BYREF

  qmemcpy(v9, a1, sizeof(v9));
  v1 = *(_DWORD *)(v9[48] + 4);
  while ( v1 )
  {
    v8 = v9[88];
    v7 = v9[87];
    --v1;
    v6 = v9[86];
    FixupScan = GetFixupScan((int)v9, (void *)v9[81]);
    ((void (__cdecl *)(_DWORD, void *, int, int, int))v9[45])(v9[47], FixupScan, v6, v7, v8);
    if ( (v9[2] & 4) != 0 )
    {
      v3 = (_WORD *)v9[82];
      do
      {
        *v3 = GrayIdxWORD[*(unsigned __int8 *)v3];
        v3 += 2;
      }
      while ( (unsigned int)v3 < v9[83] );
    }
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
  return v9[23];
}
