/*
 * XREFs of _RepDIB_CY @ 0x1CACEC
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _MappingBGRF @ 0xFAEEE (_MappingBGRF.c)
 *     _GetFixupScan @ 0x1C5128 (_GetFixupScan.c)
 *     _AlphaBlendBGRF @ 0x1C60DE (_AlphaBlendBGRF.c)
 *     _CopyDIB_CX @ 0x1C6901 (_CopyDIB_CX.c)
 */

int __cdecl RepDIB_CY(_DWORD *a1)
{
  unsigned __int16 *v1; // edi
  int v2; // ecx
  _WORD *v3; // esi
  int v4; // edx
  char *v5; // ebx
  void *FixupScan; // eax
  int v8; // [esp-4h] [ebp-188h]
  unsigned int v9; // [esp+10h] [ebp-174h]
  int v10; // [esp+14h] [ebp-170h]
  int v11; // [esp+18h] [ebp-16Ch]
  _DWORD v12[89]; // [esp+1Ch] [ebp-168h] BYREF

  qmemcpy(v12, a1, sizeof(v12));
  v1 = *(unsigned __int16 **)(v12[48] + 72);
  v9 = *(_DWORD *)(v12[48] + 76);
  v2 = 1;
  if ( (v12[0] & 0x800) != 0 )
  {
    v3 = *(_WORD **)(v12[48] + 28);
    v4 = 3;
    v5 = (char *)v3 + 3 * v12[22];
  }
  else
  {
    v3 = (_WORD *)v12[86];
    v5 = (char *)v12[87];
    v4 = v12[88];
  }
  v10 = v4;
  while ( v12[23] )
  {
    --v12[23];
    v11 = v2 - 1;
    if ( v2 == 1 )
    {
      v11 = *v1;
      if ( (unsigned int)v1 < v9 )
      {
        v8 = v4;
        FixupScan = GetFixupScan((int)v12, (void *)v12[81]);
        ((void (__cdecl *)(_DWORD, void *, _WORD *, char *, int))v12[45])(v12[47], FixupScan, v3, v5, v8);
        ++v1;
      }
    }
    if ( (v12[0] & 0x800) != 0 )
      CopyDIB_CX(0, v3, v12[86], v12[87], v12[88]);
    if ( SLOBYTE(v12[0]) < 0 )
      ((void (__cdecl *)(_DWORD *))v12[31])(v12);
    if ( (v12[0] & 0x800) != 0 )
      AlphaBlendBGRF(v12);
    if ( (v12[0] & 0x10) != 0 )
    {
      MappingBGRF((unsigned __int8 *)v12[82], v12[83], v12[59], (unsigned __int8 *)v12[68]);
      v12[68] += v12[71];
      if ( v12[68] == v12[69] )
        v12[68] = v12[70];
    }
    ((void (__cdecl *)(_DWORD *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD))v12[43])(
      v12,
      v12[84],
      v12[85],
      v12[21],
      v12[58],
      v12[61],
      v12[61] + v12[65],
      v12[66],
      v12[44]);
    v12[61] += v12[64];
    if ( v12[61] == v12[62] )
      v12[61] = v12[63];
    v12[21] += v12[25];
    v2 = v11;
    v4 = v10;
  }
  return a1[23];
}
