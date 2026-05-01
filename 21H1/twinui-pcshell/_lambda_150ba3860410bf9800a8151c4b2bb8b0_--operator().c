/*
 * XREFs of _lambda_150ba3860410bf9800a8151c4b2bb8b0_::operator() @ 0x180396994
 * Callers:
 *     GridLayoutFactory::_ForEachGridItem__lambda_150ba3860410bf9800a8151c4b2bb8b0___ @ 0x18039679C (GridLayoutFactory--_ForEachGridItem__lambda_150ba3860410bf9800a8151c4b2bb8b0___.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x180130CE4 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ?AddRow@GridLayout@@QEAAJPEA_K@Z @ 0x180396B78 (-AddRow@GridLayout@@QEAAJPEA_K@Z.c)
 */

__int64 __fastcall lambda_150ba3860410bf9800a8151c4b2bb8b0_::operator()(__int64 a1, __int64 a2)
{
  int v4; // eax
  int *v5; // r9
  int v6; // r8d
  int v7; // edx
  int v8; // edi
  __int64 v9; // rdx
  int v10; // eax
  void *v11; // r8
  _QWORD *v12; // rbx
  __int64 v13; // rdx
  __int64 *v14; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v17; // [rsp+30h] [rbp+8h] BYREF

  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 72LL))(a2, *(unsigned int *)(*(_QWORD *)a1 + 4LL));
  v5 = *(int **)(a1 + 8);
  v6 = v4;
  v7 = *v5;
  if ( *v5 )
  {
    v6 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 48LL) + v4;
    if ( *v5 + v6 > **(_DWORD **)a1 )
    {
      v8 = GridLayout::AddRow(*(GridLayout **)(a1 + 24), *(unsigned __int64 **)(a1 + 32));
      if ( v8 < 0 )
      {
        v9 = 670LL;
LABEL_12:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v9,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\gridlayout.cpp",
          (const char *)(unsigned int)v8);
        return (unsigned int)v8;
      }
      **(_DWORD **)(a1 + 8) = 0;
      v10 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 72LL))(
              a2,
              *(unsigned int *)(*(_QWORD *)a1 + 4LL));
      v5 = *(int **)(a1 + 8);
      v6 = v10;
      v7 = *v5;
    }
  }
  v17 = a2;
  *v5 = v7 + v6;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v17);
  v8 = 0;
  v12 = (_QWORD *)(56LL * **(_QWORD **)(a1 + 32) + *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL));
  v13 = v12[4];
  if ( v13 != v12[6]
    || (v8 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
               (__int64)(v12 + 3),
               v13 + 1,
               v11),
        v8 >= 0) )
  {
    ++v12[4];
    v14 = (__int64 *)(v12[3] + 8LL * v12[4] - 8);
    if ( v12[3] + 8LL * v12[4] != 8 )
    {
      *v14 = a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v14);
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  if ( v8 < 0 )
  {
    v9 = 680LL;
    goto LABEL_12;
  }
  return (unsigned int)v8;
}
