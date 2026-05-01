/*
 * XREFs of ?CreateDwmSharedThumbnailVisual@TabViewManager@@AEAA?AU?$pair@V?$com_ptr_t@UIVisual@Composition@UI@Windows@@Uerr_exception_policy@wil@@@wil@@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@2@@std@@PEAUICompositor@Composition@UI@Windows@@PEAUIShellTab@Tabs@ComposableShell@Internal@7@PEAUHWND__@@AEBUSize@Foundation@7@@Z @ 0x18026CB70
 * Callers:
 *     ?OnThumbnailRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabControllerThumbnailEventArgs@3456@@Z @ 0x180273DC0 (-OnThumbnailRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Wind.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B910 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800303B0 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$com_query@UIDCompositionDevice2@@AEAPEAUICompositor@Composition@UI@Windows@@@wil@@YA?AV?$com_ptr_t@UIDCompositionDevice2@@Uerr_exception_policy@wil@@@0@AEAPEAUICompositor@Composition@UI@Windows@@@Z @ 0x1800ACDDC (--$com_query@UIDCompositionDevice2@@AEAPEAUICompositor@Composition@UI@Windows@@@wil@@YA-AV-$com_.c)
 *     ??$com_query@UIVisual@Composition@UI@Windows@@AEAV?$com_ptr_t@UIDCompositionVisual2@@Uerr_exception_policy@wil@@@wil@@@wil@@YA?AV?$com_ptr_t@UIVisual@Composition@UI@Windows@@Uerr_exception_policy@wil@@@0@AEAV?$com_ptr_t@UIDCompositionVisual2@@Uerr_exception_policy@wil@@@0@@Z @ 0x1800ACE7C (--$com_query@UIVisual@Composition@UI@Windows@@AEAV-$com_ptr_t@UIDCompositionVisual2@@Uerr_except.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180139588 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180159B90 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?TryGetViewForTab@TabViewManager@@AEAA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18027E878 (-TryGetViewForTab@TabViewManager@@AEAA-AV-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wi.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall TabViewManager::CreateDwmSharedThumbnailVisual(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        float *a6)
{
  struct IApplicationView *v7; // rdx
  const char *v8; // r9
  __int64 WindowForView; // rsi
  __int64 v10; // rcx
  _QWORD *v11; // rax
  int v12; // eax
  __int64 *v13; // rax
  __int64 v14; // rcx
  HANDLE hObject; // [rsp+40h] [rbp-39h] BYREF
  __int64 v17; // [rsp+48h] [rbp-31h] BYREF
  _QWORD *v18; // [rsp+50h] [rbp-29h] BYREF
  ApplicationViewHelpers *v19; // [rsp+58h] [rbp-21h] BYREF
  __int64 v20; // [rsp+60h] [rbp-19h] BYREF
  _DWORD v21[5]; // [rsp+68h] [rbp-11h] BYREF
  __int128 v22; // [rsp+7Ch] [rbp+3h]
  char v23; // [rsp+8Ch] [rbp+13h]
  int v24; // [rsp+8Dh] [rbp+14h]
  int v25; // [rsp+91h] [rbp+18h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+4Fh]

  v18 = a2;
  v20 = a3;
  TabViewManager::TryGetViewForTab(a1, &v19, a4);
  if ( !v19 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      2781LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      v8);
    __debugbreak();
  }
  WindowForView = ApplicationViewHelpers::GetWindowForView(
                    (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v19,
                    v7);
  v22 = 0LL;
  v23 = 0;
  v25 = 0;
  v21[0] = 9;
  v24 = 1;
  v21[1] = 0;
  v21[2] = 0;
  v21[3] = (int)*a6;
  v21[4] = (int)a6[1];
  v17 = 0LL;
  hObject = 0LL;
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    &hObject,
    0LL);
  v10 = v17;
  v17 = 0LL;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  v11 = (_QWORD *)wil::com_query<IDCompositionDevice2,Windows::UI::Composition::ICompositor * &>((__int64)&v18, &v20);
  v12 = DwmpCreateSharedThumbnailVisual(a5, WindowForView, 2LL, v21, *v11, &v17, &hObject);
  if ( v12 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      2793LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v12);
  if ( v18 )
    (*(void (__fastcall **)(_QWORD *))(*v18 + 16LL))(v18);
  v13 = (__int64 *)wil::com_query<Windows::UI::Composition::IVisual,wil::com_ptr_t<IDCompositionVisual2,wil::err_exception_policy> &>(
                     (__int64)&v18,
                     &v17);
  v14 = *v13;
  *v13 = 0LL;
  *a2 = v14;
  a2[1] = hObject;
  hObject = 0LL;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v18);
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v19);
  return a2;
}
