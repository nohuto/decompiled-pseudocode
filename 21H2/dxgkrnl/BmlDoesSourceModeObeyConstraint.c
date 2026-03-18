/*
 * XREFs of BmlDoesSourceModeObeyConstraint @ 0x1C01B28C0
 * Callers:
 *     BmlGetNextBestSourceMode @ 0x1C01B2338 (BmlGetNextBestSourceMode.c)
 *     BmlCompareSourceModesWithConstraint @ 0x1C01B281C (BmlCompareSourceModesWithConstraint.c)
 *     _BmlGetPathModeListForPath @ 0x1C03ABDDC (_BmlGetPathModeListForPath.c)
 * Callees:
 *     ?BmlPixelFormatMatchHdrPixelFormat@@YA_NW4_D3DDDIFORMAT@@W4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@_N@Z @ 0x1C015761C (-BmlPixelFormatMatchHdrPixelFormat@@YA_NW4_D3DDDIFORMAT@@W4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@_N@Z.c)
 *     ?BmlCompareModeExtents@@YA?AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z @ 0x1C01B26AC (-BmlCompareModeExtents@@YA-AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z.c)
 */

char __fastcall BmlDoesSourceModeObeyConstraint(__int64 a1, unsigned __int16 a2, _DWORD *a3)
{
  __int64 v4; // r14
  __int64 v6; // rdi
  bool v7; // bp
  unsigned int v8; // eax
  int v9; // r15d
  int v10; // ecx
  bool v11; // zf
  __int64 v12; // rcx
  int v13; // eax
  int v15; // ecx

  v4 = 120LL * a2;
  v6 = *(_QWORD *)(v4 + a1 + 16);
  v7 = (*(_QWORD *)v6 & 0x18000000100LL) == 0 && (*(_DWORD *)(a1 + 4) & 0x40000) == 0;
  if ( (*(_QWORD *)v6 & 0x10000000100LL) != 0 )
    v8 = (*(_BYTE *)(v6 + 128) != 0) + 1;
  else
    v8 = (*(_DWORD *)(a1 + 4) & 0x40000 | 0x20000u) >> 17;
  v9 = *(_DWORD *)(v4 + a1 + 120);
  if ( !a3 )
    return 0;
  v10 = a3[18];
  if ( v8 == 2 )
  {
    if ( (unsigned int)(v10 - 3) > 1 )
      return 0;
    if ( v10 != 1 && v10 != 3 && v10 != 4 )
      WdLogSingleEntry0(1LL);
  }
  else
  {
    if ( v8 == 1 )
    {
      v11 = v10 == 1;
      goto LABEL_9;
    }
    if ( v10 != 1 && v10 != 3 )
    {
      v11 = v10 == 4;
LABEL_9:
      if ( !v11 )
        return 0;
    }
  }
  if ( !v7
    || (v15 = a3[24], v15 >= 21)
    && (v15 <= 22 || v15 == 32 || (v15 == 31 || v15 == 113) && BmlPixelFormatMatchHdrPixelFormat(v15, v9, 0)) )
  {
    if ( !_bittest64((const signed __int64 *)v6, 0x26u)
      || !(unsigned int)BmlCompareModeExtents((int *)(v4 + a1 + 52), a3 + 19) )
    {
      v12 = *(_QWORD *)(v6 + 8);
      if ( ((v12 & 0x8000000100LL) == 0 || (v13 = *(_DWORD *)(v6 + 116)) == 0 || a3[24] == v13)
        && ((v12 & 0x100) == 0 || a3[19] == *(_DWORD *)(v6 + 96) && a3[20] == *(_DWORD *)(v6 + 100)) )
      {
        return 1;
      }
    }
  }
  return 0;
}
