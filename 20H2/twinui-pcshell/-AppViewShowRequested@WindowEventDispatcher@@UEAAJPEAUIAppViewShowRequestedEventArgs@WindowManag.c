/*
 * XREFs of ?AppViewShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1802B2BB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B910 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsComponentAppViewAndGetKindAndModel@@YAEPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAW4AppModelKind@2345@PEAPEAUIAppModel@2345@@Z @ 0x180024F30 (-IsComponentAppViewAndGetKindAndModel@@YAEPEAUIAppView@WindowManagement@ApplicationModel@Interna.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x180087F58 (--0-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Microsoft::WRL::Callback_IAsyncCallback__lambda_10464faa3f64faa5f099ee54bf18b2f1___ @ 0x1800AD31C (Microsoft--WRL--Callback_IAsyncCallback__lambda_10464faa3f64faa5f099ee54bf18b2f1___.c)
 *     ??$query@UIUniversalAppModelPreview@WindowManagement@ApplicationModel@Internal@Windows@@@?$com_ptr_t@UIAppModel@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIUniversalAppModelPreview@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800ADC64 (--$query@UIUniversalAppModelPreview@WindowManagement@ApplicationModel@Internal@Windows@@@-$com_p.c)
 *     _lambda_d6a11cf3d104b1bd776ba795ae5a1087_::__lambda_d6a11cf3d104b1bd776ba795ae5a1087_ @ 0x1800ADD30 (_lambda_d6a11cf3d104b1bd776ba795ae5a1087_--__lambda_d6a11cf3d104b1bd776ba795ae5a1087_.c)
 *     wil::details::ScopeExitFn__lambda_a98fac8bdfe3ef23c4958cf0fda53700___::_ScopeExitFn__lambda_a98fac8bdfe3ef23c4958cf0fda53700___ @ 0x1800ADDF8 (wil--details--ScopeExitFn__lambda_a98fac8bdfe3ef23c4958cf0fda53700___--_ScopeExitFn__lambda_a98f.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_LightweightWindows@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18016BF24 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_LightweightWindows@@@details@wil@@QEAAX_N.c)
 *     ??$WindowEventDispatcher_OnAppViewShowRequested@AEAIAEAI@ViewManagerInteropTraceLogging@@SAXAEAI0@Z @ 0x1802AF788 (--$WindowEventDispatcher_OnAppViewShowRequested@AEAIAEAI@ViewManagerInteropTraceLogging@@SAXAEAI.c)
 *     ?TryShowAsViewModeAsync@WindowEventDispatcher@@AEAAXIIW4ApplicationViewMode@ViewManagement@UI@Windows@@W4ExperienceKind@WindowManagement@ApplicationModel@Internal@5@W4ViewSizePreference@345@2USize@Foundation@5@W4ViewGroupingPreference@7895@PEAUIAsyncCallback@@@Z @ 0x1802B9240 (-TryShowAsViewModeAsync@WindowEventDispatcher@@AEAAXIIW4ApplicationViewMode@ViewManagement@UI@Wi.c)
 */

// Hidden C++ exception states: #wind=8 #try_helpers=1
__int64 __fastcall WindowEventDispatcher::AppViewShowRequested(
        WindowEventDispatcher *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewShowRequestedEventArgs *a2)
{
  const char *v2; // rbx
  __int64 (__fastcall **v5)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewShowRequestedEventArgs *, GUID *, __int64 **); // rax
  int v6; // eax
  __int64 v7; // rax
  int v8; // eax
  wil::details::in1diag3 *v9; // rcx
  __int64 v10; // r8
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  wil::details::in1diag3 *v15; // rcx
  int v16; // eax
  wil::details::in1diag3 *v17; // rcx
  __int64 (__fastcall **v18)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewShowRequestedEventArgs *, GUID *, __int64 **); // rax
  int v19; // eax
  wil::details::in1diag3 *v20; // rcx
  int v21; // eax
  wil::details::in1diag3 *v22; // rcx
  int v23; // eax
  wil::details::in1diag3 *v24; // rcx
  int v25; // eax
  wil::details::in1diag3 *v26; // rcx
  int v27; // eax
  wil::details::in1diag3 *v28; // rcx
  int v29; // eax
  wil::details::in1diag3 *v30; // rcx
  BOOL v31; // esi
  int v32; // eax
  wil::details::in1diag3 *v33; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *v38; // [rsp+50h] [rbp-78h] BYREF
  __int64 *v39; // [rsp+58h] [rbp-70h] BYREF
  __int64 v40; // [rsp+60h] [rbp-68h] BYREF
  int v41; // [rsp+68h] [rbp-60h] BYREF
  int v42; // [rsp+6Ch] [rbp-5Ch] BYREF
  int v43; // [rsp+70h] [rbp-58h] BYREF
  int v44; // [rsp+74h] [rbp-54h] BYREF
  __int64 v45; // [rsp+78h] [rbp-50h] BYREF
  __int64 v46; // [rsp+80h] [rbp-48h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppModel *v47; // [rsp+88h] [rbp-40h] BYREF
  __int64 *v48; // [rsp+90h] [rbp-38h] BYREF
  __int64 v49; // [rsp+98h] [rbp-30h] BYREF
  __int64 v50; // [rsp+A0h] [rbp-28h] BYREF
  _QWORD v51[4]; // [rsp+A8h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]
  int v53; // [rsp+D8h] [rbp+10h] BYREF
  unsigned int v54; // [rsp+E0h] [rbp+18h] BYREF
  unsigned int v55; // [rsp+E8h] [rbp+20h] BYREF

  v5 = *(__int64 (__fastcall ***)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewShowRequestedEventArgs *, GUID *, __int64 **))a2;
  v39 = 0LL;
  v6 = (*v5)(a2, &GUID_5c19477e_81ef_4d21_baa4_c3040ad2ea6b, &v39);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      1018LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_17;
  }
  v2 = "pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp";
  v38 = 0LL;
  v7 = *v39;
  v38 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64 *, struct Windows::Internal::ApplicationModel::WindowManagement::IAppView **))(v7 + 48))(
         v39,
         &v38);
  v9 = retaddr;
  if ( v8 < 0 )
  {
LABEL_17:
    wil::details::in1diag3::Throw_Hr(v9, 1021LL, (__int64)v2, (const char *)(unsigned int)v8);
LABEL_18:
    wil::details::in1diag3::Throw_Hr(v12, 1032LL, (__int64)v2, (const char *)(unsigned int)v11);
    goto LABEL_19;
  }
  v47 = 0LL;
  if ( IsComponentAppViewAndGetKindAndModel(
         v38,
         (enum Windows::Internal::ApplicationModel::WindowManagement::AppModelKind *)&v53,
         &v47) )
  {
LABEL_15:
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v47);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v38);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v39);
    return 0LL;
  }
  wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IAppModel,wil::err_exception_policy>::query<Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelPreview>(
    &v47,
    (__int64)&v50);
  v53 = 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_LightweightWindows>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_LightweightWindows>::GetImpl'::`2'::impl,
    1u,
    v10);
  v11 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v50 + 48LL))(v50, &v53);
  v12 = retaddr;
  if ( v11 < 0 )
    goto LABEL_18;
  v40 = 0LL;
  v13 = *v39;
  v40 = 0LL;
  v14 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v13 + 80))(v39, &v40);
  v15 = retaddr;
  if ( v14 < 0 )
  {
LABEL_19:
    wil::details::in1diag3::Throw_Hr(v15, 1036LL, (__int64)v2, (const char *)(unsigned int)v14);
    goto LABEL_20;
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(
    (__int64 *)&v48,
    (__int64 *)&v39);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(&v49, &v40);
  Microsoft::WRL::Callback_IAsyncCallback__lambda_10464faa3f64faa5f099ee54bf18b2f1___(&v46, (__int64 *)&v48);
  lambda_d6a11cf3d104b1bd776ba795ae5a1087_::__lambda_d6a11cf3d104b1bd776ba795ae5a1087_((__int64 *)&v48);
  v48 = &v46;
  LOBYTE(v49) = 1;
  v16 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *, unsigned int *))(*(_QWORD *)v38 + 48LL))(
          v38,
          &v55);
  v17 = retaddr;
  if ( v16 < 0 )
  {
LABEL_20:
    wil::details::in1diag3::Throw_Hr(v17, 1054LL, (__int64)v2, (const char *)(unsigned int)v16);
    goto LABEL_21;
  }
  v18 = *(__int64 (__fastcall ***)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewShowRequestedEventArgs *, GUID *, __int64 **))a2;
  v45 = 0LL;
  v19 = ((__int64 (__fastcall *)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewShowRequestedEventArgs *, __int64 *))v18[8])(
          a2,
          &v45);
  v20 = retaddr;
  if ( v19 < 0 )
  {
LABEL_21:
    wil::details::in1diag3::Throw_Hr(v20, 1057LL, (__int64)v2, (const char *)(unsigned int)v19);
    goto LABEL_22;
  }
  v21 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v45 + 48LL))(v45, &v54);
  v22 = retaddr;
  if ( v21 < 0 )
  {
LABEL_22:
    wil::details::in1diag3::Throw_Hr(v22, 1059LL, (__int64)v2, (const char *)(unsigned int)v21);
    goto LABEL_23;
  }
  v23 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewShowRequestedEventArgs *, int *))(*(_QWORD *)a2 + 80LL))(
          a2,
          &v44);
  v24 = retaddr;
  if ( v23 < 0 )
  {
LABEL_23:
    wil::details::in1diag3::Throw_Hr(v24, 1062LL, (__int64)v2, (const char *)(unsigned int)v23);
    goto LABEL_24;
  }
  v25 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewShowRequestedEventArgs *, int *))(*(_QWORD *)a2 + 72LL))(
          a2,
          &v43);
  v26 = retaddr;
  if ( v25 < 0 )
  {
LABEL_24:
    wil::details::in1diag3::Throw_Hr(v26, 1066LL, (__int64)v2, (const char *)(unsigned int)v25);
    goto LABEL_25;
  }
  v27 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewShowRequestedEventArgs *, int *))(*(_QWORD *)a2 + 48LL))(
          a2,
          &v41);
  v28 = retaddr;
  if ( v27 < 0 )
  {
LABEL_25:
    wil::details::in1diag3::Throw_Hr(v28, 1070LL, (__int64)v2, (const char *)(unsigned int)v27);
    goto LABEL_26;
  }
  ViewManagerInteropTraceLogging::WindowEventDispatcher_OnAppViewShowRequested<unsigned int &,unsigned int &>(
    (int *)&v55,
    (int *)&v54);
  v29 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewShowRequestedEventArgs *, _QWORD *))(*(_QWORD *)a2 + 56LL))(
          a2,
          v51);
  v30 = retaddr;
  if ( v29 < 0 )
  {
LABEL_26:
    wil::details::in1diag3::Throw_Hr(v30, 1075LL, (__int64)v2, (const char *)(unsigned int)v29);
    goto LABEL_27;
  }
  v31 = v41 == 2;
  v32 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewShowRequestedEventArgs *, int *))(*(_QWORD *)a2 + 88LL))(
          a2,
          &v42);
  v33 = retaddr;
  if ( v32 >= 0 )
  {
    WindowEventDispatcher::TryShowAsViewModeAsync((char *)this - 16, v55, v54, v31, v53, v44, v43, v51[0], v42, v46);
    LOBYTE(v49) = 0;
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v45);
    wil::details::ScopeExitFn__lambda_a98fac8bdfe3ef23c4958cf0fda53700___::_ScopeExitFn__lambda_a98fac8bdfe3ef23c4958cf0fda53700___((__int64)&v48);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v46);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v40);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v50);
    goto LABEL_15;
  }
LABEL_27:
  wil::details::in1diag3::Throw_Hr(v33, 1089LL, (__int64)v2, (const char *)(unsigned int)v32);
  __debugbreak();
  return WindowEventDispatcher::AppViewShowRequested_::_1_::dtor_0(v36, v35, v37);
}
