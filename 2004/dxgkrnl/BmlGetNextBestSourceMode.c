/*
 * XREFs of BmlGetNextBestSourceMode @ 0x1C0135D40
 * Callers:
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C0135160 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     BmlFunctionalizePath @ 0x1C013AF1C (BmlFunctionalizePath.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCEMODE@@@@QEBAPEAVDMMVIDPNSOURCEMODE@@I@Z @ 0x1C0009058 (-FindById@-$IndexedSet@VDMMVIDPNSOURCEMODE@@@@QEBAPEAVDMMVIDPNSOURCEMODE@@I@Z.c)
 *     ?GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z @ 0x1C000A584 (-GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C000A6AC (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     BmlDoesSourceModeObeyConstraint @ 0x1C0135FC8 (BmlDoesSourceModeObeyConstraint.c)
 *     ?BmlCompareModeExtents@@YA?AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z @ 0x1C0136124 (-BmlCompareModeExtents@@YA-AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z.c)
 *     BmlCompareSourceModes @ 0x1C0136158 (BmlCompareSourceModes.c)
 */

__int64 __fastcall BmlGetNextBestSourceMode(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        _DWORD *a6)
{
  __int64 v6; // r15
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r14
  __int64 v16; // rbp
  __int64 v17; // rax
  __int64 v18; // rbx
  _DWORD *v19; // rsi
  __int64 v20; // rbx
  __int64 v21; // rdx
  _QWORD *v22; // r13
  int v23; // eax
  __int64 v24; // rcx
  unsigned int BitsPerPixel; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r12
  __int64 v31; // rax
  __int64 v32; // r12
  __int64 v33; // rax
  __int64 v34; // rbx
  __int64 v35; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // [rsp+70h] [rbp+8h]

  v6 = (unsigned __int16)a3;
  if ( !a4 )
  {
    v38 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v38);
  }
  if ( !a6 )
  {
    v39 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v39);
  }
  if ( !a2 )
  {
    v40 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v40);
  }
  v10 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v14 = a5;
  v15 = 0LL;
  v16 = 104 * v6;
  *(_QWORD *)(v10 + 24) = a4;
  *(_QWORD *)(v10 + 32) = a5;
  *a6 = -1;
  if ( a5 == -1
    || (v15 = IndexedSet<DMMVIDPNSOURCEMODE>::FindById(a4 + 24, a5)) != 0
    && (unsigned __int8)BmlDoesSourceModeObeyConstraint(a1, (unsigned __int16)v6) )
  {
    v17 = a4 + 48;
    *(_QWORD *)(a1 + v16 + 92) = 0LL;
    v18 = *(_QWORD *)(a4 + 48);
    v19 = 0LL;
    v43 = v17;
    if ( v18 == v17 )
      return 3223192326LL;
    v20 = v18 - 8;
    if ( !v20 )
      return 3223192326LL;
    do
    {
      v22 = (_QWORD *)WdLogNewEntry5_WdTrace(v11, v14, v12, v13);
      v22[3] = *(unsigned int *)(v20 + 24);
      v22[4] = *(unsigned int *)(v20 + 76);
      v22[5] = *(unsigned int *)(v20 + 80);
      v23 = *(_DWORD *)(v20 + 72);
      v24 = (unsigned int)(v23 - 1);
      if ( (v24 & 0xFFFFFFFC) != 0 || v23 == 2 )
      {
        v41 = WdLogNewEntry5_WdAssertion(v24, v21);
        WdLogEvent5_WdAssertion(v41);
      }
      BitsPerPixel = GetBitsPerPixel(*(_DWORD *)(v20 + 96));
      v30 = BitsPerPixel;
      if ( !BitsPerPixel )
      {
        v31 = WdLogNewEntry5_WdTrace(v27, v26, v28, v29);
        v27 = *(int *)(v20 + 96);
        *(_QWORD *)(v31 + 24) = v27;
      }
      v22[6] = v30;
      v22[7] = *(int *)(v20 + 96);
      ++*(_DWORD *)(a1 + v16 + 92);
      if ( v15 != v20
        && ((*(_DWORD *)(a1 + 4) & 0x20000) != 0
         || (*(_DWORD *)(a1 + 8) & 4) != 0
         || (**(_QWORD **)(a1 + v16 + 16) & 0x80000000000000LL) != 0
         || (unsigned int)BmlCompareModeExtents(v20 + 76, v16 + a1 + 36) != 1)
        && (unsigned __int8)BmlDoesSourceModeObeyConstraint(a1, (unsigned __int16)v6)
        && ((v37 = *(_QWORD *)(a1 + v16 + 16), !*(_BYTE *)(v37 + 129))
         || (*(_DWORD *)v37 & 0x20008) != 0x20000LL
         || *(_DWORD *)(v20 + 96) == 21) )
      {
        v32 = a2;
        ++*(_DWORD *)(a1 + v16 + 96);
        if ( (unsigned int)BmlCompareSourceModes(a1, a2, (unsigned __int16)v6, v20, (__int64)v19) == 1
          && (!v15 || (unsigned int)BmlCompareSourceModes(a1, a2, (unsigned __int16)v6, v20, v15) == -1) )
        {
          WdLogNewEntry5_WdTrace(v11, v14, v12, v13);
          v19 = (_DWORD *)v20;
        }
      }
      else
      {
        WdLogNewEntry5_WdTrace(v27, v26, v28, v29);
        v32 = a2;
      }
      v33 = *(_QWORD *)(v20 + 8);
      v20 = v33 - 8;
      if ( v33 == v43 )
        v20 = 0LL;
    }
    while ( v20 );
    if ( v19 )
    {
      v34 = *(_QWORD *)(v32 + 48);
      *a6 = v19[6];
      v35 = *(_QWORD *)(v34 + 8);
      if ( !v35 )
      {
        v42 = WdLogNewEntry5_WdAssertion(a6, v14);
        WdLogEvent5_WdAssertion(v42);
        v35 = *(_QWORD *)(v34 + 8);
      }
      DxgkLogCodePointPacket(0x20u, v6, v19[19], v19[20], *(_QWORD *)(*(_QWORD *)(v35 + 16) + 316LL));
      return 0LL;
    }
    else
    {
      return 3223192326LL;
    }
  }
  else
  {
    WdLogNewEntry5_WdTrace(v11, v14, v12, v13);
    return 3223192336LL;
  }
}
