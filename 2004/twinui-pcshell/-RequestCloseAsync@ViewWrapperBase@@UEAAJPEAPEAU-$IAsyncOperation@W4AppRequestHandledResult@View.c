/*
 * XREFs of ?RequestCloseAsync@ViewWrapperBase@@UEAAJPEAPEAU?$IAsyncOperation@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Foundation@Windows@@@Z @ 0x1802D0A80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VAppRequestOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAppRequestOperation@@@Z @ 0x1802CC1C8 (--$MakeAndInitialize@VAppRequestOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAppRequestOpe.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ViewClosingAPIs_CloseRequested_Desktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802D09F4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ViewClosingAPIs_CloseRequested_Desktop@@@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewWrapperBase::RequestCloseAsync(__int64 a1, AppRequestOperation **a2, __int64 a3)
{
  RTL_SRWLOCK *v5; // rsi
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  AppRequestOperation *v9; // rbx
  AppRequestOperation *v10; // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  AppRequestOperation *v13; // [rsp+70h] [rbp+40h] BYREF
  AppRequestOperation *v14; // [rsp+78h] [rbp+48h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ViewClosingAPIs_CloseRequested_Desktop>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_ViewClosingAPIs_CloseRequested_Desktop>::GetImpl'::`2'::impl,
    1u,
    a3);
  v5 = (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 160) + 280LL);
  AcquireSRWLockExclusive(v5);
  v13 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  v6 = Microsoft::WRL::Details::MakeAndInitialize<AppRequestOperation,AppRequestOperation,>(&v13);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 1590LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_12;
  }
  if ( *(_QWORD *)(a1 + 472) )
  {
    v10 = v13;
    _InterlockedExchange((volatile __int32 *)v13 + 42, 1);
    (*(void (__fastcall **)(__int64))(*((_QWORD *)v10 + 2) + 128LL))((__int64)v10 + 16);
    goto LABEL_10;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 160) + 504LL) + 128LL))(
         *(_QWORD *)(*(_QWORD *)(a1 + 160) + 504LL),
         *(unsigned int *)(a1 + 140));
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 1596LL;
    goto LABEL_6;
  }
  v9 = v13;
  if ( *(AppRequestOperation **)(a1 + 472) != v13 )
  {
    v14 = v13;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v14);
    v14 = *(AppRequestOperation **)(a1 + 472);
    *(_QWORD *)(a1 + 472) = v9;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
LABEL_10:
    v9 = v13;
  }
  v13 = 0LL;
  *a2 = v9;
  v7 = 0;
LABEL_12:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
  return v7;
}
