/*
 * XREFs of ?_CalculateNumberOfRows@GridLayoutFactory@@AEAAJAEBV?$CCoSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@@@AEAV?$CCoSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutRow@GridLayoutFactory@@@@@@PEA_KPEAH@Z @ 0x1803B8570
 * Callers:
 *     ?_CalculateRowSize@GridLayoutFactory@@AEAA?AUCSize@Geometry@@XZ @ 0x1803B87EC (-_CalculateRowSize@GridLayoutFactory@@AEAA-AUCSize@Geometry@@XZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     sqrt @ 0x18008DECC (sqrt.c)
 *     ?GetForScreenHeight@ThumbnailHeight@@QEBAHH@Z @ 0x18039A300 (-GetForScreenHeight@ThumbnailHeight@@QEBAHH@Z.c)
 *     ?_SkipRowCountByContentWidth@GridLayoutFactory@@AEAA_KAEBV?$CCoSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@@@@Z @ 0x1803B8FB8 (-_SkipRowCountByContentWidth@GridLayoutFactory@@AEAA_KAEBV-$CCoSimpleArray@VLayoutItem@GridLayou.c)
 *     ?_SplitIntoRows@GridLayoutFactory@@AEAAJAEBV?$CCoSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@@@_KAEAV?$CCoSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutRow@GridLayoutFactory@@@@@@PEAH@Z @ 0x1803B9080 (-_SplitIntoRows@GridLayoutFactory@@AEAAJAEBV-$CCoSimpleArray@VLayoutItem@GridLayoutFactory@@$0PP.c)
 *     ?s_GetTotalWidthForHeight@GridLayoutFactory@@CAHAEBV?$CCoSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@@@HHH@Z @ 0x1803B9328 (-s_GetTotalWidthForHeight@GridLayoutFactory@@CAHAEBV-$CCoSimpleArray@VLayoutItem@GridLayoutFacto.c)
 */

__int64 __fastcall GridLayoutFactory::_CalculateNumberOfRows(
        GridLayoutFactory *this,
        __int64 a2,
        __int64 a3,
        unsigned __int64 *a4,
        _DWORD *a5)
{
  _DWORD *v5; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // r12
  int v10; // esi
  bool v11; // zf
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rbx
  double v14; // xmm6_8
  int TotalWidthForHeight; // eax
  double v16; // xmm0_8
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rbp
  unsigned __int64 v19; // rcx
  int v20; // esi
  __int64 v21; // rdx
  int v23; // eax
  unsigned int v24; // edi
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v26; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 *v27; // [rsp+98h] [rbp+20h]

  v27 = a4;
  v5 = a5;
  *a4 = 0LL;
  *v5 = 0;
  v8 = GridLayoutFactory::_SkipRowCountByContentWidth();
  v9 = *(_QWORD *)(a2 + 8);
  v10 = 0;
  v11 = *((_DWORD *)this + 14) == 1;
  v12 = v8;
  v13 = v8;
  LODWORD(v26) = 0;
  if ( v11 )
  {
    v14 = (double)(int)(*((_DWORD *)this + 29)
                      + *((_DWORD *)this + 38)
                      + *((_DWORD *)this + 39)
                      + *((_DWORD *)this + 42)
                      + *((_DWORD *)this + 43)
                      + ThumbnailHeight::GetForScreenHeight(
                          (GridLayoutFactory *)((char *)this + 72),
                          *((_DWORD *)this + 129)));
    TotalWidthForHeight = GridLayoutFactory::s_GetTotalWidthForHeight(
                            a2,
                            *((unsigned int *)this + 12),
                            (unsigned int)(int)v14,
                            0LL);
    v16 = sqrt(
            (double)TotalWidthForHeight
          / v14
          / ((double)(*((_DWORD *)this + 132) - *((_DWORD *)this + 130))
           / (double)(*((_DWORD *)this + 133) - *((_DWORD *)this + 131))))
        + 0.5;
    v17 = 0LL;
    if ( v16 >= 9.223372036854776e18 )
    {
      v16 = v16 - 9.223372036854776e18;
      if ( v16 < 9.223372036854776e18 )
        v17 = 0x8000000000000000uLL;
    }
    v18 = v9;
    v19 = v17 + (unsigned int)(int)v16;
    if ( v19 <= v12 + 1 )
      v19 = v12 + 1;
    if ( v19 < v9 )
      v18 = v19;
    v13 = v18;
    if ( v18 > v12 )
    {
      while ( 1 )
      {
        v20 = GridLayoutFactory::_SplitIntoRows(this, (__int64)&v26);
        if ( v20 < 0 )
          break;
        v10 = v26;
        if ( (int)v26 > *((_DWORD *)this + 132) - *((_DWORD *)this + 130) && --v13 > v12 )
          continue;
        goto LABEL_13;
      }
      v21 = 376LL;
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v21,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\gridlayout.cpp",
        (const char *)(unsigned int)v20);
      return (unsigned int)v20;
    }
LABEL_13:
    if ( v13 == v12 )
    {
      if ( v18 < v9 )
      {
        v13 = v18;
        goto LABEL_23;
      }
      v23 = GridLayoutFactory::_SplitIntoRows(this, (__int64)&v26);
      v24 = v23;
      if ( v23 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x192,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\gridlayout.cpp",
          (const char *)(unsigned int)v23);
        return v24;
      }
      v10 = v26;
    }
  }
  else if ( !*((_DWORD *)this + 14) )
  {
LABEL_23:
    while ( 1 )
    {
      ++v13;
      v20 = GridLayoutFactory::_SplitIntoRows(this, (__int64)&v26);
      if ( v20 < 0 )
        break;
      v10 = v26;
      if ( v13 >= v9 || (int)v26 <= *((_DWORD *)this + 132) - *((_DWORD *)this + 130) )
        goto LABEL_21;
    }
    v21 = 416LL;
    goto LABEL_17;
  }
LABEL_21:
  *a5 = v10;
  *v27 = v13;
  return 0LL;
}
