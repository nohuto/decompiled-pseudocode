/*
 * XREFs of BmlGetRecommendedContentSizeForPath @ 0x1C03AB2AC
 * Callers:
 *     ?BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z @ 0x1C01BD718 (-BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000D514 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetNextMode@DMMVIDPNSOURCEMODESET@@QEBAPEBVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C00690EC (-GetNextMode@DMMVIDPNSOURCEMODESET@@QEBAPEBVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 *     BmlGetModeCategoryForRegion @ 0x1C01B2204 (BmlGetModeCategoryForRegion.c)
 *     BmlCompareRegionsWithPivot @ 0x1C01B2A10 (BmlCompareRegionsWithPivot.c)
 *     BmlAreRawModesEnabled @ 0x1C01B59E8 (BmlAreRawModesEnabled.c)
 *     BmlIsSupportedSourceMode @ 0x1C03AB4F0 (BmlIsSupportedSourceMode.c)
 */

__int64 __fastcall BmlGetRecommendedContentSizeForPath(unsigned __int8 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v6; // r13
  __int64 v8; // rbx
  __int64 v9; // rax
  _QWORD *v10; // rbx
  unsigned int v11; // edi
  _QWORD *v12; // rbp
  UINT v13; // r14d
  UINT v14; // eax
  bool v15; // cl
  UINT v16; // r15d
  __int64 v17; // rcx
  const struct DMMVIDPNSOURCEMODE *v18; // rdi
  const struct DMMVIDPNSOURCEMODE *NextMode; // rbp
  __int64 v20; // rsi
  int v21; // eax
  struct _D3DKMDT_2DREGION v23; // [rsp+30h] [rbp-58h] BYREF
  bool v24; // [rsp+90h] [rbp+8h]
  unsigned __int16 v25; // [rsp+98h] [rbp+10h]

  v25 = a2;
  v4 = (unsigned __int16)a2;
  v6 = a3;
  if ( !a1 || (unsigned __int16)a2 >= *a1 || !a3 || !a4 )
    WdLogSingleEntry0(1LL);
  if ( (*(_QWORD *)a4 & 0x20000000020000LL) != 0x20000000020000LL )
    WdLogSingleEntry0(1LL);
  v8 = *(_QWORD *)(v6 + 88);
  v9 = *(_QWORD *)(v8 + 104);
  if ( !v9 )
  {
    v10 = 0LL;
LABEL_11:
    v11 = -1071774968;
    goto LABEL_35;
  }
  _InterlockedAdd((volatile signed __int32 *)(v9 + 96), 1u);
  v10 = *(_QWORD **)(v8 + 104);
  if ( !v10 )
    goto LABEL_11;
  v12 = (_QWORD *)v10[6];
  if ( v12 == v10 + 6 )
  {
    v11 = -1071774970;
    goto LABEL_35;
  }
  v13 = *(_DWORD *)(a4 + 152);
  v14 = *(_DWORD *)(a4 + 156);
  v15 = ((*(_DWORD *)(a4 + 132) - 2) & 0xFFFFFFFD) == 0;
  v23 = 0LL;
  v24 = v15;
  if ( v15 )
  {
    v16 = v14;
    v23.cx = v14;
    v23.cy = v13;
  }
  else
  {
    v16 = v13;
    v23.cx = v13;
    v13 = v14;
    v23.cy = v14;
  }
  v17 = 120 * v4;
  v18 = 0LL;
  NextMode = (const struct DMMVIDPNSOURCEMODE *)(v12 - 1);
  if ( !NextMode )
  {
LABEL_34:
    v11 = -1071774970;
    WdLogSingleEntry4(2LL, v16, v13, v6, -1071774970LL);
LABEL_35:
    if ( v10 )
      goto LABEL_36;
    return v11;
  }
  v20 = v17;
  do
  {
    LOBYTE(a2) = 1;
    if ( (unsigned __int8)BmlIsSupportedSourceMode(NextMode, a2, *(unsigned int *)&a1[v20 + 120])
      && (BmlAreRawModesEnabled((__int64)a1, v25) || (unsigned int)BmlGetModeCategoryForRegion() != 1) )
    {
      if ( v18 )
      {
        if ( (unsigned int)BmlCompareRegionsWithPivot(
                             (struct _D3DKMDT_2DREGION *)((char *)NextMode + 76),
                             (struct _D3DKMDT_2DREGION *)((char *)v18 + 76),
                             &v23) != 1 )
          goto LABEL_28;
        if ( *((_DWORD *)v18 + 19) == v16 && *((_DWORD *)v18 + 20) == v13 )
          WdLogSingleEntry0(1LL);
      }
      v18 = NextMode;
    }
LABEL_28:
    NextMode = DMMVIDPNSOURCEMODESET::GetNextMode((DMMVIDPNSOURCEMODESET *)v10, NextMode);
  }
  while ( NextMode );
  v6 = a3;
  if ( !v18 )
    goto LABEL_34;
  if ( v24 )
  {
    *(_DWORD *)(a4 + 160) = *((_DWORD *)v18 + 20);
    v21 = *((_DWORD *)v18 + 19);
  }
  else
  {
    *(_DWORD *)(a4 + 160) = *((_DWORD *)v18 + 19);
    v21 = *((_DWORD *)v18 + 20);
  }
  *(_DWORD *)(a4 + 164) = v21;
  v11 = 0;
LABEL_36:
  ReferenceCounted::Release((ReferenceCounted *)(v10 + 11));
  return v11;
}
