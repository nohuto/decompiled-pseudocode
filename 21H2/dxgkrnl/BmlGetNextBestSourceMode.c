/*
 * XREFs of BmlGetNextBestSourceMode @ 0x1C01B2338
 * Callers:
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C01B1560 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     BmlFunctionalizePath @ 0x1C01BD8FC (BmlFunctionalizePath.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCEMODE@@@@QEBAPEAVDMMVIDPNSOURCEMODE@@I@Z @ 0x1C0010430 (-FindById@-$IndexedSet@VDMMVIDPNSOURCEMODE@@@@QEBAPEAVDMMVIDPNSOURCEMODE@@I@Z.c)
 *     ?GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z @ 0x1C0011EE8 (-GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C00123E4 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?BmlPixelFormatMatchHdrPixelFormat@@YA_NW4_D3DDDIFORMAT@@W4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@_N@Z @ 0x1C015761C (-BmlPixelFormatMatchHdrPixelFormat@@YA_NW4_D3DDDIFORMAT@@W4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@_N@Z.c)
 *     ?BmlCompareModeExtents@@YA?AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z @ 0x1C01B26AC (-BmlCompareModeExtents@@YA-AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z.c)
 *     BmlCompareSourceModes @ 0x1C01B26E0 (BmlCompareSourceModes.c)
 *     BmlDoesSourceModeObeyConstraint @ 0x1C01B28C0 (BmlDoesSourceModeObeyConstraint.c)
 */

__int64 __fastcall BmlGetNextBestSourceMode(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        __int64 a4,
        unsigned int a5,
        _DWORD *a6)
{
  _DWORD *v6; // r15
  __int64 v7; // r13
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r12
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rbx
  _QWORD *v19; // rsi
  int v20; // eax
  unsigned int BitsPerPixel; // eax
  unsigned __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rbp
  __int64 v25; // rax
  unsigned int v26; // r11d
  int v27; // r10d
  int v28; // eax
  __int64 v29; // rsi
  bool v30; // bp
  unsigned int v31; // r10d
  __int64 v32; // rbp
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // rax
  __int64 v36; // rbx
  __int64 v37; // rax
  __int64 v39; // rax
  __int64 v40; // [rsp+70h] [rbp+8h]
  unsigned int v42; // [rsp+80h] [rbp+18h]

  v6 = 0LL;
  v7 = a3;
  if ( !a4 )
    WdLogSingleEntry0(1LL);
  if ( !a6 )
    WdLogSingleEntry0(1LL);
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  v11 = WdLogNewEntry5_WdTrace(a1, a2);
  v13 = a5;
  v14 = 0LL;
  v15 = 120 * v7;
  *(_QWORD *)(v11 + 24) = a4;
  *(_QWORD *)(v11 + 32) = a5;
  *a6 = -1;
  if ( a5 != -1 )
  {
    v39 = IndexedSet<DMMVIDPNSOURCEMODE>::FindById(a4 + 24, a5);
    v14 = v39;
    if ( !v39 || !(unsigned __int8)BmlDoesSourceModeObeyConstraint(a1, (unsigned __int16)v7, v39) )
    {
      WdLogNewEntry5_WdTrace(v12, v13);
      return 3223192336LL;
    }
  }
  *(_DWORD *)(v15 + a1 + 92) = 0;
  v16 = a4 + 48;
  *(_DWORD *)(v15 + a1 + 96) = 0;
  v17 = *(_QWORD *)(a4 + 48);
  v40 = v16;
  if ( v17 == v16 )
    return 3223192326LL;
  v18 = v17 - 8;
  if ( !v18 )
    return 3223192326LL;
  do
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdTrace(v12, v13);
    v19[3] = *(unsigned int *)(v18 + 24);
    v19[4] = *(unsigned int *)(v18 + 76);
    v19[5] = *(unsigned int *)(v18 + 80);
    v20 = *(_DWORD *)(v18 + 72);
    if ( ((v20 - 1) & 0xFFFFFFFC) != 0 || v20 == 2 )
      WdLogSingleEntry0(1LL);
    BitsPerPixel = GetBitsPerPixel(*(_DWORD *)(v18 + 96));
    v24 = BitsPerPixel;
    if ( !BitsPerPixel )
    {
      v25 = WdLogNewEntry5_WdTrace(v23, v22);
      v23 = *(int *)(v18 + 96);
      *(_QWORD *)(v25 + 24) = v23;
    }
    v19[6] = v24;
    v26 = 1;
    v19[7] = *(int *)(v18 + 96);
    ++*(_DWORD *)(v15 + a1 + 92);
    if ( v14 == v18
      || (v27 = *(_DWORD *)(a1 + 4), (v27 & 0x20000) == 0)
      && (*(_DWORD *)(a1 + 8) & 4) == 0
      && !_bittest64(*(const signed __int64 **)(v15 + a1 + 16), 0x37u)
      && (v28 = BmlCompareModeExtents(v18 + 76, v15 + a1 + 36), v28 == v26) )
    {
LABEL_33:
      WdLogNewEntry5_WdTrace(v23, v22);
      v32 = a2;
      goto LABEL_34;
    }
    v29 = *(_QWORD *)(v15 + a1 + 16);
    v30 = (v27 & 0x40000) == 0 && (*(_QWORD *)v29 & 0x18000000100LL) == 0;
    if ( (*(_QWORD *)v29 & 0x10000000100LL) != 0 )
      v31 = v26 + (*(_BYTE *)(v29 + 128) != 0);
    else
      v31 = (v27 & 0x40000 | 0x20000u) >> 17;
    v22 = *(unsigned int *)(v15 + a1 + 120);
    v23 = *(unsigned int *)(v18 + 72);
    v42 = *(_DWORD *)(v15 + a1 + 120);
    if ( v31 == 2 )
    {
      if ( (int)v23 - 3 > v26 )
        goto LABEL_33;
LABEL_58:
      if ( (_DWORD)v23 == v26 )
        goto LABEL_24;
      goto LABEL_59;
    }
    if ( v31 == v26 )
    {
      if ( (_DWORD)v23 != v26 )
        goto LABEL_33;
      goto LABEL_24;
    }
    if ( (_DWORD)v23 == v26 )
      goto LABEL_58;
    if ( (_DWORD)v23 != 3 )
    {
      if ( (_DWORD)v23 != 4 )
        goto LABEL_33;
LABEL_60:
      if ( (_DWORD)v23 != 4 )
      {
        WdLogSingleEntry0(v26);
        v22 = v42;
      }
      goto LABEL_24;
    }
LABEL_59:
    if ( (_DWORD)v23 != 3 )
      goto LABEL_60;
LABEL_24:
    if ( v30 )
    {
      v23 = *(unsigned int *)(v18 + 96);
      if ( (int)v23 < 21 )
        goto LABEL_33;
      if ( (int)v23 > 22 )
      {
        if ( (_DWORD)v23 != 31 )
        {
          if ( (_DWORD)v23 == 32 )
            goto LABEL_25;
          if ( (_DWORD)v23 != 113 )
            goto LABEL_33;
        }
        if ( !BmlPixelFormatMatchHdrPixelFormat(v23, v22, 0) )
          goto LABEL_33;
      }
    }
LABEL_25:
    v22 = v18 + 76;
    if ( _bittest64((const signed __int64 *)v29, 0x26u) && (unsigned int)BmlCompareModeExtents(v15 + a1 + 52, v22) )
      goto LABEL_33;
    v23 = *(_QWORD *)(v29 + 8);
    if ( (v23 & 0x8000000100LL) != 0 )
    {
      v34 = *(_DWORD *)(v29 + 116);
      if ( v34 )
      {
        if ( *(_DWORD *)(v18 + 96) != v34 )
          goto LABEL_33;
      }
    }
    if ( (v23 & 0x100) != 0
      && (*(_DWORD *)v22 != *(_DWORD *)(v29 + 96) || *(_DWORD *)(v18 + 80) != *(_DWORD *)(v29 + 100)) )
    {
      goto LABEL_33;
    }
    v32 = a2;
    ++*(_DWORD *)(v15 + a1 + 96);
    if ( (unsigned int)BmlCompareSourceModes(a1, a2, (unsigned __int16)v7, v18, (__int64)v6) == 1
      && (!v14 || (unsigned int)BmlCompareSourceModes(a1, a2, (unsigned __int16)v7, v18, v14) == -1) )
    {
      WdLogNewEntry5_WdTrace(v33, v13);
      v6 = (_DWORD *)v18;
    }
LABEL_34:
    v35 = *(_QWORD *)(v18 + 8);
    v12 = 0LL;
    v18 = v35 - 8;
    if ( v35 == v40 )
      v18 = 0LL;
  }
  while ( v18 );
  if ( !v6 )
    return 3223192326LL;
  v36 = *(_QWORD *)(v32 + 48);
  *a6 = v6[6];
  v37 = *(_QWORD *)(v36 + 8);
  if ( !v37 )
  {
    WdLogSingleEntry0(1LL);
    v37 = *(_QWORD *)(v36 + 8);
  }
  DxgkLogCodePointPacket(0x20u, v7, v6[19], v6[20], *(_QWORD *)(*(_QWORD *)(v37 + 16) + 404LL));
  return 0LL;
}
