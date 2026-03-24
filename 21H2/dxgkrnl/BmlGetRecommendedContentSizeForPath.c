/*
 * XREFs of BmlGetRecommendedContentSizeForPath @ 0x1C02EBD88
 * Callers:
 *     ?BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z @ 0x1C013E374 (-BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C00055D4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetNextMode@DMMVIDPNSOURCEMODESET@@QEBAPEBVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C005C17C (-GetNextMode@DMMVIDPNSOURCEMODESET@@QEBAPEBVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 *     BmlGetModeCategoryForRegion @ 0x1C01392C4 (BmlGetModeCategoryForRegion.c)
 *     BmlCompareRegionsWithPivot @ 0x1C0139968 (BmlCompareRegionsWithPivot.c)
 *     BmlAreRawModesEnabled @ 0x1C013B4A8 (BmlAreRawModesEnabled.c)
 *     BmlIsSupportedSourceMode @ 0x1C02EC01C (BmlIsSupportedSourceMode.c)
 */

__int64 __fastcall BmlGetRecommendedContentSizeForPath(unsigned __int8 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r13
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  _QWORD *v12; // rbx
  unsigned int v13; // edi
  _QWORD *v14; // rbp
  UINT v15; // r14d
  UINT v16; // eax
  UINT v17; // r15d
  const struct DMMVIDPNSOURCEMODE *v18; // rdi
  const struct DMMVIDPNSOURCEMODE *NextMode; // rbp
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // eax
  _QWORD *v24; // rax
  struct _D3DKMDT_2DREGION v26; // [rsp+20h] [rbp-58h] BYREF
  char v27; // [rsp+80h] [rbp+8h]
  unsigned __int16 v28; // [rsp+88h] [rbp+10h]

  v28 = a2;
  v5 = a3;
  if ( !a1 || (unsigned __int16)a2 >= *a1 || !a3 || !a4 )
  {
    v7 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = 0x20000000020000LL;
  if ( (*(_QWORD *)a4 & 0x20000000020000LL) != 0x20000000020000LL )
  {
    v9 = WdLogNewEntry5_WdAssertion(0x20000000020000LL, a2);
    WdLogEvent5_WdAssertion(v9);
  }
  v10 = *(_QWORD *)(v5 + 88);
  v11 = *(_QWORD *)(v10 + 104);
  if ( !v11 )
  {
    v12 = 0LL;
LABEL_11:
    v13 = -1071774968;
    goto LABEL_34;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v11 + 96));
  v12 = *(_QWORD **)(v10 + 104);
  if ( !v12 )
    goto LABEL_11;
  v14 = (_QWORD *)v12[6];
  if ( v14 == v12 + 6 )
  {
    v13 = -1071774970;
    goto LABEL_34;
  }
  v15 = *(_DWORD *)(a4 + 152);
  v16 = *(_DWORD *)(a4 + 156);
  LOBYTE(v8) = ((*(_DWORD *)(a4 + 132) - 2) & 0xFFFFFFFD) == 0;
  v27 = v8;
  if ( ((*(_DWORD *)(a4 + 132) - 2) & 0xFFFFFFFD) != 0 )
  {
    v17 = *(_DWORD *)(a4 + 152);
    v26.cx = v17;
    v15 = v16;
    v26.cy = v16;
  }
  else
  {
    v17 = *(_DWORD *)(a4 + 156);
    v26.cx = v17;
    v26.cy = v15;
  }
  v18 = 0LL;
  NextMode = (const struct DMMVIDPNSOURCEMODE *)(v14 - 1);
  if ( !NextMode )
    goto LABEL_33;
  do
  {
    LOBYTE(a2) = 1;
    if ( (unsigned __int8)BmlIsSupportedSourceMode(NextMode, a2)
      && (BmlAreRawModesEnabled((__int64)a1, v28) || (unsigned int)BmlGetModeCategoryForRegion() != 1) )
    {
      if ( v18 )
      {
        if ( (unsigned int)BmlCompareRegionsWithPivot(
                             (struct _D3DKMDT_2DREGION *)((char *)NextMode + 76),
                             (struct _D3DKMDT_2DREGION *)((char *)v18 + 76),
                             &v26) != 1 )
          goto LABEL_27;
        if ( *((_DWORD *)v18 + 19) == v17 && *((_DWORD *)v18 + 20) == v15 )
        {
          v22 = WdLogNewEntry5_WdAssertion(v21, v20);
          WdLogEvent5_WdAssertion(v22);
        }
      }
      v18 = NextMode;
    }
LABEL_27:
    NextMode = DMMVIDPNSOURCEMODESET::GetNextMode((DMMVIDPNSOURCEMODESET *)v12, NextMode);
  }
  while ( NextMode );
  v5 = a3;
  if ( v18 )
  {
    if ( v27 )
    {
      *(_DWORD *)(a4 + 160) = *((_DWORD *)v18 + 20);
      v23 = *((_DWORD *)v18 + 19);
    }
    else
    {
      *(_DWORD *)(a4 + 160) = *((_DWORD *)v18 + 19);
      v23 = *((_DWORD *)v18 + 20);
    }
    *(_DWORD *)(a4 + 164) = v23;
    v13 = 0;
    goto LABEL_34;
  }
LABEL_33:
  v24 = (_QWORD *)WdLogNewEntry5_WdError(v8, a2);
  v13 = -1071774970;
  v24[3] = v17;
  v24[4] = v15;
  v24[5] = v5;
  v24[6] = -1071774970LL;
  WdLogEvent5_WdError(v24);
LABEL_34:
  if ( v12 )
    ReferenceCounted::Release((ReferenceCounted *)(v12 + 11), a2);
  return v13;
}
