/*
 * XREFs of ?AppViewActivationShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180078FE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B910 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsComponentAppViewAndGetKindAndModel@@YAEPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAW4AppModelKind@2345@PEAPEAUIAppModel@2345@@Z @ 0x180024F30 (-IsComponentAppViewAndGetKindAndModel@@YAEPEAUIAppView@WindowManagement@ApplicationModel@Interna.c)
 *     ?TryShowAsStandaloneAsync@WindowEventDispatcher@@AEAAXIIW4ViewSizePreference@ViewManagement@UI@Windows@@0_KPEAUIAsyncCallback@@@Z @ 0x18004B3F8 (-TryShowAsStandaloneAsync@WindowEventDispatcher@@AEAAXIIW4ViewSizePreference@ViewManagement@UI@W.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180064FD8 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?StartActivity@WindowEventDispatcher_AppViewActivationRequested@ViewManagerInteropTraceLogging@@QEAAXXZ @ 0x180079304 (-StartActivity@WindowEventDispatcher_AppViewActivationRequested@ViewManagerInteropTraceLogging@@.c)
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800794E4 (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ??1WindowEventDispatcher_AppViewActivationRequested@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x18007958C (--1WindowEventDispatcher_AppViewActivationRequested@ViewManagerInteropTraceLogging@@QEAA@XZ.c)
 *     ??$WindowEventDispatcher_OnAppViewActivationShowRequested@H@ViewManagerInteropTraceLogging@@SAX$$QEAH@Z @ 0x180079684 (--$WindowEventDispatcher_OnAppViewActivationShowRequested@H@ViewManagerInteropTraceLogging@@SAX$.c)
 *     ??0?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x180087F58 (--0-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Microsoft::WRL::Callback_IAsyncCallback__lambda_98c03cf4790466fbeaa25fa144d3af41___ @ 0x1800AD3A0 (Microsoft--WRL--Callback_IAsyncCallback__lambda_98c03cf4790466fbeaa25fa144d3af41___.c)
 *     _lambda_d6a11cf3d104b1bd776ba795ae5a1087_::__lambda_d6a11cf3d104b1bd776ba795ae5a1087_ @ 0x1800ADD30 (_lambda_d6a11cf3d104b1bd776ba795ae5a1087_--__lambda_d6a11cf3d104b1bd776ba795ae5a1087_.c)
 *     wil::details::ScopeExitFn__lambda_776855ce8202221ed65b567d0e1f539e___::_ScopeExitFn__lambda_776855ce8202221ed65b567d0e1f539e___ @ 0x1800ADDA8 (wil--details--ScopeExitFn__lambda_776855ce8202221ed65b567d0e1f539e___--_ScopeExitFn__lambda_7768.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6 #try_helpers=1
__int64 __fastcall WindowEventDispatcher::AppViewActivationShowRequested(
        RTL_SRWLOCK *this,
        __int64 (__fastcall ***a2)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationShowRequestedEventArgs *, GUID *, __int64 *))
{
  __int64 (__fastcall **v4)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationShowRequestedEventArgs *, GUID *, __int64 *); // rax
  int v5; // eax
  __int64 v6; // rax
  int v7; // eax
  wil::details::in1diag3 *v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  int v12; // eax
  wil::details::in1diag3 *v13; // rcx
  int v14; // eax
  wil::details::in1diag3 *v15; // rcx
  int v16; // eax
  wil::details::in1diag3 *v17; // rcx
  int v19; // [rsp+20h] [rbp-1C8h]
  int v20; // [rsp+20h] [rbp-1C8h]
  int v21; // [rsp+40h] [rbp-1A8h] BYREF
  __int64 *v22; // [rsp+48h] [rbp-1A0h] BYREF
  int v23; // [rsp+50h] [rbp-198h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *v24; // [rsp+58h] [rbp-190h] BYREF
  __int64 v25; // [rsp+60h] [rbp-188h] BYREF
  int v26; // [rsp+68h] [rbp-180h] BYREF
  __int64 v27; // [rsp+70h] [rbp-178h] BYREF
  __int64 *v28; // [rsp+78h] [rbp-170h] BYREF
  char v29[8]; // [rsp+80h] [rbp-168h] BYREF
  __int64 v30; // [rsp+88h] [rbp-160h] BYREF
  _QWORD v31[40]; // [rsp+90h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+0h]

  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v31);
  v31[0] = &ViewManagerInteropTraceLogging::WindowEventDispatcher_AppViewActivationRequested::`vftable';
  ViewManagerInteropTraceLogging::WindowEventDispatcher_AppViewActivationRequested::StartActivity((ViewManagerInteropTraceLogging::WindowEventDispatcher_AppViewActivationRequested *)v31);
  v4 = *a2;
  v22 = 0LL;
  v5 = (*v4)(
         (struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationShowRequestedEventArgs *)a2,
         &GUID_5c19477e_81ef_4d21_baa4_c3040ad2ea6b,
         (__int64 *)&v22);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x39C,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v5,
      v19);
    goto LABEL_11;
  }
  v24 = 0LL;
  v6 = *v22;
  v24 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64 *, struct Windows::Internal::ApplicationModel::WindowManagement::IAppView **))(v6 + 48))(
         v22,
         &v24);
  v8 = retaddr;
  if ( v7 < 0 )
  {
LABEL_11:
    wil::details::in1diag3::Throw_Hr(
      v8,
      (void *)0x39F,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v7,
      v19);
    goto LABEL_12;
  }
  if ( !IsComponentAppViewAndGetKindAndModel(v24, 0LL, 0LL) )
  {
    v25 = 0LL;
    v9 = *v22;
    v25 = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v9 + 80))(v22, &v25);
    v11 = retaddr;
    if ( v10 >= 0 )
    {
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(
        &v28,
        &v22);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(v29, &v25);
      Microsoft::WRL::Callback_IAsyncCallback__lambda_98c03cf4790466fbeaa25fa144d3af41___(&v27, &v28);
      lambda_d6a11cf3d104b1bd776ba795ae5a1087_::__lambda_d6a11cf3d104b1bd776ba795ae5a1087_(&v28);
      v28 = &v27;
      v29[0] = 1;
      v12 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *, int *))(*(_QWORD *)v24 + 48LL))(
              v24,
              &v23);
      v13 = retaddr;
      if ( v12 >= 0 )
      {
        v14 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationShowRequestedEventArgs *, GUID *, __int64 *), int *))(*a2)[6])(
                a2,
                &v26);
        v15 = retaddr;
        if ( v14 >= 0 )
        {
          v16 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(*v22 + 56))(v22, &v30);
          v17 = retaddr;
          if ( v16 >= 0 )
          {
            v20 = v26;
            WindowEventDispatcher::TryShowAsStandaloneAsync(this - 2, v23, v23, v26, v20, v30, v27);
            v29[0] = 0;
            v21 = v23;
            ViewManagerInteropTraceLogging::WindowEventDispatcher_OnAppViewActivationShowRequested<int>(&v21);
            wil::details::ScopeExitFn__lambda_776855ce8202221ed65b567d0e1f539e___::_ScopeExitFn__lambda_776855ce8202221ed65b567d0e1f539e___(&v28);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v25);
            goto LABEL_9;
          }
LABEL_15:
          wil::details::in1diag3::Throw_Hr(
            v17,
            (void *)0x3BD,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            (const char *)(unsigned int)v16,
            v19);
          __debugbreak();
          JUMPOUT(0x1800792FELL);
        }
LABEL_14:
        wil::details::in1diag3::Throw_Hr(
          v15,
          (void *)0x3B9,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v14,
          v19);
        goto LABEL_15;
      }
LABEL_13:
      wil::details::in1diag3::Throw_Hr(
        v13,
        (void *)0x3B6,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v12,
        v19);
      goto LABEL_14;
    }
LABEL_12:
    wil::details::in1diag3::Throw_Hr(
      v11,
      (void *)0x3A4,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v10,
      v19);
    goto LABEL_13;
  }
LABEL_9:
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v31, 0);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v24);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v22);
  ViewManagerInteropTraceLogging::WindowEventDispatcher_AppViewActivationRequested::~WindowEventDispatcher_AppViewActivationRequested((ViewManagerInteropTraceLogging::WindowEventDispatcher_AppViewActivationRequested *)v31);
  return 0LL;
}
