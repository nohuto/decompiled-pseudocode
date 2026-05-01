/*
 * XREFs of ?UpdateViewAnimationStateForTab@TabViewManager@@AEAAXPEAUIApplicationView@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18027FCB8
 * Callers:
 *     ?TryRemoveViewFromTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@@Z @ 0x18027E8F0 (-TryRemoveViewFromTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?ViewPosChanged@TabViewManager@@AEAAJPEAUIApplicationView@@AEBUtagRECT@@W4TRACKED_WINDOW_STATE@@@Z @ 0x18027FE34 (-ViewPosChanged@TabViewManager@@AEAAJPEAUIApplicationView@@AEBUtagRECT@@W4TRACKED_WINDOW_STATE@@.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B910 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??Dvector_iterator@?$vector_range@U?$IVectorView@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEBV?$ComPtr@UIShellTab@Tabs@ComposableShell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x180147A8C (--Dvector_iterator@-$vector_range@U-$IVectorView@PEAVShellTab@Tabs@ComposableShell@Internal@Wind.c)
 *     ?end@?$vector_range@U?$IVectorView@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA?AVvector_iterator@12@XZ @ 0x180159668 (-end@-$vector_range@U-$IVectorView@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@@Collecti.c)
 *     ??0TabWrapper@@QEAA@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@W4TabWrapperOptions@@@Z @ 0x180269694 (--0TabWrapper@@QEAA@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@W4TabWrapperOptions@@@Z.c)
 *     ?SetViewTransitionsEnabled@TabViewManager@@CAXPEAUIApplicationView@@_N@Z @ 0x18027714C (-SetViewTransitionsEnabled@TabViewManager@@CAXPEAUIApplicationView@@_N@Z.c)
 *     ?TryGetViewForTab@TabViewManager@@AEAA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18027E878 (-TryGetViewForTab@TabViewManager@@AEAA-AV-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wi.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall TabViewManager::UpdateViewAnimationStateForTab(
        RTL_SRWLOCK *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *),
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a3)
{
  struct IApplicationView *v5; // rdx
  bool v6; // di
  __int64 v7; // rax
  int v8; // eax
  int i; // eax
  __int64 *v10; // rax
  struct IApplicationView *v11; // rdx
  __int64 *v12; // [rsp+20h] [rbp-29h] BYREF
  __int64 *v13; // [rsp+28h] [rbp-21h] BYREF
  __int64 *v14; // [rsp+30h] [rbp-19h] BYREF
  int v15; // [rsp+38h] [rbp-11h]
  __int64 v16; // [rsp+40h] [rbp-9h] BYREF
  _BYTE v17[8]; // [rsp+48h] [rbp-1h] BYREF
  int v18; // [rsp+50h] [rbp+7h]
  __int64 v19; // [rsp+58h] [rbp+Fh] BYREF
  __int64 *v20[3]; // [rsp+60h] [rbp+17h] BYREF
  unsigned int v21; // [rsp+78h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  TabWrapper::TabWrapper(v20, (__int64)a3, 5);
  if ( v20[0] )
  {
    v6 = v21 <= 1;
    v12 = 0LL;
    v7 = *v20[0];
    v12 = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64 *, __int64 **))(v7 + 56))(v20[0], &v12);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        2216LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v8);
      __debugbreak();
    }
    v13 = v12;
    v14 = v12;
    v15 = 0;
    v16 = 0LL;
    wil::vector_range<Windows::Foundation::Collections::IVectorView<Windows::Internal::ComposableShell::Tabs::ShellTab *>,wil::err_exception_policy>::end(
      &v13,
      (__int64)v17);
    for ( i = v15; i != v18; i = ++v15 )
    {
      v10 = wil::vector_range<Windows::Foundation::Collections::IVectorView<Windows::Internal::ComposableShell::Tabs::ShellTab *>,wil::err_exception_policy>::vector_iterator::operator*((__int64 *)&v14);
      TabViewManager::TryGetViewForTab(this, &v13, *v10);
      if ( v13 )
      {
        LOBYTE(v11) = v6;
        TabViewManager::SetViewTransitionsEnabled(a2, v11);
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v13);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v12);
  }
  else
  {
    LOBYTE(v5) = 1;
    TabViewManager::SetViewTransitionsEnabled(a2, v5);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v20);
}
