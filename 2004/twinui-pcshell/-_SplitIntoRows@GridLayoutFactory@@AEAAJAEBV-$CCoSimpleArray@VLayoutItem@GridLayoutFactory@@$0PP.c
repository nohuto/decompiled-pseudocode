/*
 * XREFs of ?_SplitIntoRows@GridLayoutFactory@@AEAAJAEBV?$CCoSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@@@_KAEAV?$CCoSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutRow@GridLayoutFactory@@@@@@PEAH@Z @ 0x1803B9080
 * Callers:
 *     ?_CalculateNumberOfRows@GridLayoutFactory@@AEAAJAEBV?$CCoSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@@@AEAV?$CCoSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutRow@GridLayoutFactory@@@@@@PEA_KPEAH@Z @ 0x1803B8570 (-_CalculateNumberOfRows@GridLayoutFactory@@AEAAJAEBV-$CCoSimpleArray@VLayoutItem@GridLayoutFacto.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutItem@GridLayoutFactory@@@@@@QEAAJ_K0@Z @ 0x18015BD78 (-_EnsureCapacity@-$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 *     ??1?$CCoSimpleArray@URecoveredViewInfo@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@URecoveredViewInfo@@@@@@QEAA@XZ @ 0x1802A0778 (--1-$CCoSimpleArray@URecoveredViewInfo@@$0PPPPPPPO@V-$CSimpleArrayStandardCompareHelper@URecover.c)
 *     ?GetForScreenHeight@ThumbnailHeight@@QEBAHH@Z @ 0x18039A300 (-GetForScreenHeight@ThumbnailHeight@@QEBAHH@Z.c)
 *     ??$_Add@$$QEAVLayoutRow@GridLayoutFactory@@@?$CTSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutRow@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutRow@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutRow@GridLayoutFactory@@@@@@QEAAJ$$QEAVLayoutRow@GridLayoutFactory@@PEA_K@Z @ 0x1803B7960 (--$_Add@$$QEAVLayoutRow@GridLayoutFactory@@@-$CTSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPP.c)
 *     ?RemoveAll@?$CTSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutRow@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutRow@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutRow@GridLayoutFactory@@@@@@QEAAXXZ @ 0x1803B82A0 (-RemoveAll@-$CTSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@VLayout.c)
 *     ?_GetMaximumRowHeight@GridLayoutFactory@@AEAAH_K@Z @ 0x1803B8E5C (-_GetMaximumRowHeight@GridLayoutFactory@@AEAAH_K@Z.c)
 *     ?s_GetTotalWidthForHeight@GridLayoutFactory@@CAHAEBV?$CCoSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@@@HHH@Z @ 0x1803B9328 (-s_GetTotalWidthForHeight@GridLayoutFactory@@CAHAEBV-$CCoSimpleArray@VLayoutItem@GridLayoutFacto.c)
 */

__int64 __fastcall GridLayoutFactory::_SplitIntoRows(
        GridLayoutFactory *this,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        int *a5)
{
  _QWORD *v6; // rsi
  __int64 v9; // rbx
  int v10; // edx
  int v11; // esi
  int v12; // eax
  int TotalWidthForHeight; // eax
  void *v14; // r8
  unsigned int *v15; // rbx
  unsigned __int64 v16; // r15
  int v17; // r14d
  unsigned __int64 v18; // r13
  __int64 v19; // r12
  _QWORD *v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rdi
  int v23; // eax
  __int64 v24; // rdx
  __int64 v26; // [rsp+20h] [rbp-78h]
  __int64 v27[4]; // [rsp+28h] [rbp-70h] BYREF
  int v28; // [rsp+48h] [rbp-50h]
  int MaximumRowHeight; // [rsp+4Ch] [rbp-4Ch]
  int v30; // [rsp+50h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  int v32; // [rsp+B0h] [rbp+18h]

  v6 = (_QWORD *)a4;
  *a5 = 0;
  CTSimpleArray<GridLayoutFactory::LayoutRow,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutRow>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutRow>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutRow>>::RemoveAll(a4);
  v9 = 0LL;
  if ( a3 )
  {
    while ( 1 )
    {
      v10 = *((_DWORD *)this + 129);
      memset(v27, 0, sizeof(v27));
      v28 = *((_DWORD *)this + 42)
          + *((_DWORD *)this + 39)
          + *((_DWORD *)this + 38)
          + *((_DWORD *)this + 29)
          + *((_DWORD *)this + 43)
          + ThumbnailHeight::GetForScreenHeight((GridLayoutFactory *)((char *)this + 72), v10);
      MaximumRowHeight = GridLayoutFactory::_GetMaximumRowHeight(this, a3);
      v30 = *((_DWORD *)this + 12);
      v11 = CTSimpleArray<GridLayoutFactory::LayoutRow,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutRow>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutRow>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutRow>>::_Add<GridLayoutFactory::LayoutRow &&>(
              v6,
              v27);
      CCoSimpleArray<RecoveredViewInfo,4294967294,CSimpleArrayStandardCompareHelper<RecoveredViewInfo>>::~CCoSimpleArray<RecoveredViewInfo,4294967294,CSimpleArrayStandardCompareHelper<RecoveredViewInfo>>((__int64)v27);
      if ( v11 < 0 )
        break;
      v6 = (_QWORD *)a4;
      if ( ++v9 >= a3 )
        goto LABEL_4;
    }
    v24 = 442LL;
    goto LABEL_19;
  }
LABEL_4:
  v12 = ThumbnailHeight::GetForScreenHeight((GridLayoutFactory *)((char *)this + 72), *((_DWORD *)this + 129));
  TotalWidthForHeight = GridLayoutFactory::s_GetTotalWidthForHeight(
                          a2,
                          *((unsigned int *)this + 12),
                          (unsigned int)(*((_DWORD *)this + 29)
                                       + *((_DWORD *)this + 38)
                                       + *((_DWORD *)this + 39)
                                       + *((_DWORD *)this + 42)
                                       + *((_DWORD *)this + 43)
                                       + v12),
                          0LL);
  v15 = *(unsigned int **)a2;
  v16 = 0LL;
  v17 = 0;
  v32 = TotalWidthForHeight / (int)a3;
  v26 = *(_QWORD *)a2 + 16LL * *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)a2 != v26 )
  {
    v18 = a3 - 1;
    v19 = 0LL;
    while ( 1 )
    {
      if ( v16 < v18
        && (v17 + (*(int (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v15 + 72LL))(*(_QWORD *)v15, v15[2]) / 2 > v32
         || (int)(v17 + (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v15 + 72LL))(*(_QWORD *)v15, v15[2])) > *((_DWORD *)this + 132) - *((_DWORD *)this + 130)) )
      {
        ++v16;
        v19 += 48LL;
        v17 = 0;
      }
      v20 = (_QWORD *)(v19 + *v6);
      v21 = v20[1];
      if ( v21 == v20[3] )
      {
        v11 = CTSimpleArray<GridLayoutFactory::LayoutItem,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutItem>>::_EnsureCapacity(
                (__int64)v20,
                v21 + 1,
                v14);
        if ( v11 < 0 )
          break;
      }
      ++v20[1];
      v22 = 16LL * v20[1] + *v20 - 16LL;
      if ( v22 )
      {
        *(_QWORD *)v22 = *(_QWORD *)v15;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v22);
        *(_DWORD *)(v22 + 8) = v15[2];
      }
      v17 += (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v15 + 72LL))(*(_QWORD *)v15, v15[2]);
      v23 = v17;
      if ( v17 <= *a5 )
        v23 = *a5;
      *a5 = v23;
      if ( v17 + *((_DWORD *)this + 12) >= v32 )
      {
        if ( v16 < v18 )
        {
          ++v16;
          v19 += 48LL;
          v17 = 0;
        }
      }
      else
      {
        v17 += *((_DWORD *)this + 12);
      }
      v6 = (_QWORD *)a4;
      v15 += 4;
      if ( v15 == (unsigned int *)v26 )
        return 0LL;
    }
    v24 = 474LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v24,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\gridlayout.cpp",
      (const char *)(unsigned int)v11);
    return (unsigned int)v11;
  }
  return 0LL;
}
