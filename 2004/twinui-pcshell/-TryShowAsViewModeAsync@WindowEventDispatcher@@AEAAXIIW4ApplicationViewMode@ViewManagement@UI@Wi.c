/*
 * XREFs of ?TryShowAsViewModeAsync@WindowEventDispatcher@@AEAAXIIW4ApplicationViewMode@ViewManagement@UI@Windows@@W4ExperienceKind@WindowManagement@ApplicationModel@Internal@5@W4ViewSizePreference@345@2USize@Foundation@5@W4ViewGroupingPreference@7895@PEAUIAsyncCallback@@@Z @ 0x1802B9B30
 * Callers:
 *     ?AppViewShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1802B34A0 (-AppViewShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewShowRequestedEventArgs@WindowManag.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016FE4 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x18003FEBC (-InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     ?GetSharedListener@WindowEventDispatcher@@AEAA?AV?$shared_ptr@UViewEventRegistration@@@std@@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@0@Z @ 0x1800589D4 (-GetSharedListener@WindowEventDispatcher@@AEAA-AV-$shared_ptr@UViewEventRegistration@@@std@@V-$c.c)
 *     ?GetCachedView@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@I@Z @ 0x180058F28 (-GetCachedView@WindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception.c)
 *     ??1?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800595A8 (--1-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18005B120 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180083EA4 (--4-$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800AC164 (--$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@-$com_ptr_t@UIWindowWrapperIn.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VViewEventArgsForShowAsViewMode@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewWrapper@3456@PEAU73456@AEAW4ApplicationViewMode@ViewManagement@UI@6@AEAW4ExperienceKind@WindowManagement@ApplicationModel@56@AEAW4ViewSizePreference@9UI@6@AEAW4ViewSizePreference@9UI@6@AEAUSize@Foundation@6@W4ViewGrouping@9UI@6@AEAPEAUIAsyncCallback@@PEAUIWindowingEnvironmentSettings@3456@@Details@WRL@Microsoft@@YAJPEAPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIViewWrapper@4567@1AEAW4ApplicationViewMode@ViewManagement@UI@7@AEAW4ExperienceKind@WindowManagement@ApplicationModel@67@AEAW4ViewSizePreference@ViewManagement@UI@7@4AEAUSize@Foundation@7@$$QEAW4ViewGrouping@ViewManagement@UI@7@AEAPEAUIAsyncCallback@@$$QEAPEAUIWindowingEnvironmentSettings@4567@@Z @ 0x1802AF7B4 (--$MakeAndInitialize@VViewEventArgsForShowAsViewMode@@UIViewEventArgs@ViewManagerIn_ea_1802AF7B4.c)
 *     ??$WindowEventDispatcher_TryShowAsViewModeAsync@AEAIAEAI@ViewManagerInteropTraceLogging@@SAXAEAI0@Z @ 0x1802B0378 (--$WindowEventDispatcher_TryShowAsViewModeAsync@AEAIAEAI@ViewManagerInteropTraceLogging@@SAXAEAI.c)
 */

// Hidden C++ exception states: #wind=9
__int64 WindowEventDispatcher::TryShowAsViewModeAsync(RTL_SRWLOCK *a1, int a2, int a3, unsigned int a4, ...)
{
  __int64 *CachedView; // rax
  __int64 v8; // rdi
  __int64 *v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 *SharedListener; // rax
  __int64 v13; // rax
  int v14; // eax
  std::_Ref_count_base *v15; // rbx
  int v16; // eax
  struct IInspectable *v17; // rcx
  int v18; // eax
  __int64 v20; // [rsp+68h] [rbp-71h] BYREF
  struct IInspectable *v21; // [rsp+70h] [rbp-69h] BYREF
  __int64 v22; // [rsp+78h] [rbp-61h] BYREF
  __int64 v23; // [rsp+80h] [rbp-59h] BYREF
  __int64 v24; // [rsp+88h] [rbp-51h] BYREF
  __int64 v25; // [rsp+90h] [rbp-49h] BYREF
  __int64 v26; // [rsp+98h] [rbp-41h] BYREF
  __int64 v27; // [rsp+A0h] [rbp-39h] BYREF
  __int64 v28; // [rsp+A8h] [rbp-31h] BYREF
  __int64 v29; // [rsp+B0h] [rbp-29h] BYREF
  std::_Ref_count_base *v30; // [rsp+B8h] [rbp-21h]
  std::_Ref_count_base *v31[2]; // [rsp+C0h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+37h]
  __int64 v33; // [rsp+118h] [rbp+3Fh] BYREF
  int v34; // [rsp+120h] [rbp+47h] BYREF
  int v35; // [rsp+128h] [rbp+4Fh] BYREF
  unsigned int v36; // [rsp+130h] [rbp+57h] BYREF
  __int64 v37; // [rsp+138h] [rbp+5Fh] BYREF
  va_list va; // [rsp+138h] [rbp+5Fh]
  __int64 v39; // [rsp+140h] [rbp+67h] BYREF
  va_list va1; // [rsp+140h] [rbp+67h]
  __int64 v41; // [rsp+148h] [rbp+6Fh] BYREF
  va_list va2; // [rsp+148h] [rbp+6Fh]
  __int64 v43; // [rsp+150h] [rbp+77h] BYREF
  va_list va3; // [rsp+150h] [rbp+77h]
  __int64 v45; // [rsp+158h] [rbp+7Fh]
  va_list va4; // [rsp+160h] [rbp+87h] BYREF

  va_start(va4, a4);
  va_start(va3, a4);
  va_start(va2, a4);
  va_start(va1, a4);
  va_start(va, a4);
  v37 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v39 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v41 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v43 = va_arg(va4, _QWORD);
  v45 = va_arg(va4, _QWORD);
  v36 = a4;
  v35 = a3;
  v34 = a2;
  ViewManagerInteropTraceLogging::WindowEventDispatcher_TryShowAsViewModeAsync<unsigned int &,unsigned int &>(
    &v34,
    &v35);
  v25 = 0LL;
  v24 = 0LL;
  *(_OWORD *)v31 = 0LL;
  AcquireSRWLockShared(a1 + 59);
  v28 = (__int64)&a1[59];
  CachedView = WindowEventDispatcher::GetCachedView((__int64)a1, &v33, a2);
  v8 = *CachedView;
  *CachedView = 0LL;
  v25 = v8;
  wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>(&v33);
  if ( !v8 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      2548LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)0x80070490LL);
    __debugbreak();
  }
  v9 = WindowEventDispatcher::GetCachedView((__int64)a1, &v33, a3);
  v10 = *v9;
  *v9 = 0LL;
  v24 = v10;
  wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>(&v33);
  if ( !v10 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      2550LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)0x80070490LL);
    __debugbreak();
  }
  v33 = v8;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  v20 = v10;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  SharedListener = WindowEventDispatcher::GetSharedListener(v11, &v29, &v20, &v33);
  std::shared_ptr<ViewEventRegistration>::operator=(v31, SharedListener);
  if ( v30 )
    std::_Ref_count_base::_Decref(v30);
  if ( a1 != (RTL_SRWLOCK *)-472LL )
    ReleaseSRWLockShared(a1 + 59);
  wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
    &v25,
    (__int64)&v23);
  wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
    &v24,
    (__int64)&v26);
  v22 = 0LL;
  v13 = *(_QWORD *)v8;
  v22 = 0LL;
  (*(void (__fastcall **)(__int64, __int64 *))(v13 + 400))(v8, &v22);
  v29 = v22;
  LODWORD(v33) = v45;
  v27 = v26;
  v28 = v23;
  v20 = 0LL;
  v14 = Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgsForShowAsViewMode,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,enum Windows::UI::ViewManagement::ApplicationViewMode &,enum Windows::Internal::ApplicationModel::WindowManagement::ExperienceKind &,enum Windows::UI::ViewManagement::ViewSizePreference &,enum Windows::UI::ViewManagement::ViewSizePreference &,Windows::Foundation::Size &,enum Windows::UI::ViewManagement::ViewGrouping,IAsyncCallback * &,Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings *>(
          &v20,
          &v28,
          &v27,
          &v36,
          (__int64 *)va,
          (__int64 *)va1,
          (__int64 *)va2,
          (__int64 *)va3,
          &v33,
          (__int64 *)va4,
          &v29);
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      2573LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v14);
    __debugbreak();
  }
  v21 = 0LL;
  v15 = v31[0];
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
  if ( *((_QWORD *)v15 + 3) )
  {
    v16 = Microsoft::WRL::WeakRef::InternalResolve(
            (std::_Ref_count_base *)((char *)v15 + 24),
            &GUID_d599c413_e76f_5f6a_9087_21e6cb563ed9,
            &v21);
    v17 = v21;
  }
  else
  {
    v17 = 0LL;
    v21 = 0LL;
    v16 = -2147024809;
  }
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      2576LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v16);
    __debugbreak();
  }
  v18 = ((__int64 (__fastcall *)(struct IInspectable *, __int64, __int64))v17->lpVtbl->GetIids)(v17, v23, v20);
  if ( v18 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      2577LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v18);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v20);
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v26);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v23);
  if ( v31[1] )
    std::_Ref_count_base::_Decref(v31[1]);
  wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>(&v24);
  return wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>(&v25);
}
