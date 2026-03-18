/*
 * XREFs of _TileDIB_CY @ 0x1CC3FC
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _MappingBGRF @ 0xFAEEE (_MappingBGRF.c)
 *     _GetFixupScan @ 0x1C5128 (_GetFixupScan.c)
 *     _AlphaBlendBGRF @ 0x1C60DE (_AlphaBlendBGRF.c)
 */

int __cdecl TileDIB_CY(int a1)
{
  bool v1; // zf
  int v3; // ebx
  _WORD *v4; // edi
  int v5; // eax
  unsigned __int8 *FixupScan; // esi
  int v7; // ecx
  _WORD *i; // edx
  int v9; // eax
  unsigned __int8 *v10; // edx
  int v11; // edi
  int v12; // eax
  int v13; // ebx
  int v14; // ecx
  __int16 v15; // ax
  __int16 v16; // ax
  __int16 v17; // ax
  _WORD *v18; // [esp+4h] [ebp-17Ch]
  int v19; // [esp+8h] [ebp-178h]
  int v20; // [esp+Ch] [ebp-174h]
  unsigned int v21; // [esp+10h] [ebp-170h]
  int v22; // [esp+14h] [ebp-16Ch]
  _DWORD v23[89]; // [esp+18h] [ebp-168h] BYREF

  if ( (*(_BYTE *)(a1 + 8) & 4) != 0 )
    v1 = *(_DWORD *)(*(_DWORD *)(a1 + 192) + 28) == 0;
  else
    v1 = *(_DWORD *)(a1 + 324) == 0;
  if ( v1 )
    return *(_DWORD *)(a1 + 92);
  qmemcpy(v23, (const void *)a1, sizeof(v23));
  v3 = v23[23];
  v4 = *(_WORD **)(v23[48] + 28);
  v18 = v4;
  v5 = *(_DWORD *)(v23[47] + 24);
  v21 = v5 * ((~LOBYTE(v23[2]) & 4 | 8u) >> 2);
  v20 = v23[8] - v5;
  if ( !v23[23] )
    return v3;
  do
  {
    v19 = --v3;
    FixupScan = (unsigned __int8 *)GetFixupScan((int)v23, (void *)v23[81]);
    if ( (v23[2] & 4) != 0 )
    {
      v7 = v23[8];
      for ( i = v4; v7; --v7 )
      {
        v9 = *FixupScan++;
        *i++ = GrayIdxWORD[v9];
      }
      FixupScan = (unsigned __int8 *)v4;
    }
    v10 = &FixupScan[v21];
    v11 = v23[22];
    v12 = v20;
    if ( v23[22] )
    {
      v13 = v23[86];
      while ( 1 )
      {
        v14 = v12;
        if ( v12 > v11 )
          v14 = v11;
        v12 = v23[8];
        v11 -= v14;
        v22 = v23[8];
        if ( (v23[2] & 4) != 0 )
        {
          if ( v14 )
          {
            do
            {
              v15 = *(_WORD *)v10;
              v10 += 2;
              *(_WORD *)v13 = v15;
              v13 += v23[88];
              --v14;
            }
            while ( v14 );
LABEL_21:
            v12 = v22;
          }
        }
        else if ( v14 )
        {
          do
          {
            v16 = *(_WORD *)v10;
            v10 += 3;
            *(_WORD *)v13 = v16;
            *(_BYTE *)(v13 + 2) = *(v10 - 1);
            v13 += v23[88];
            --v14;
          }
          while ( v14 );
          goto LABEL_21;
        }
        v10 = FixupScan;
        if ( !v11 )
        {
          v3 = v19;
          break;
        }
      }
    }
    v17 = v23[0];
    if ( SLOBYTE(v23[0]) < 0 )
    {
      ((void (__cdecl *)(_DWORD *))v23[31])(v23);
      v17 = v23[0];
    }
    if ( (v17 & 0x800) != 0 )
    {
      AlphaBlendBGRF(v23);
      LOBYTE(v17) = v23[0];
    }
    if ( (v17 & 0x10) != 0 )
    {
      MappingBGRF((unsigned __int8 *)v23[82], v23[83], v23[59], (unsigned __int8 *)v23[68]);
      v23[68] += v23[71];
      if ( v23[68] == v23[69] )
        v23[68] = v23[70];
    }
    ((void (__cdecl *)(_DWORD *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD))v23[43])(
      v23,
      v23[84],
      v23[85],
      v23[21],
      v23[58],
      v23[61],
      v23[61] + v23[65],
      v23[66],
      v23[44]);
    v23[61] += v23[64];
    if ( v23[61] == v23[62] )
      v23[61] = v23[63];
    v23[21] += v23[25];
    v4 = v18;
  }
  while ( v3 );
  return v23[23];
}
