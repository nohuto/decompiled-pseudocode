/*
 * XREFs of _lambda_1499a186909557a83ff0f6afb6d3c526_::operator() @ 0x180015670
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_ff18a7cb999efe7aba419e7d47fa9918___1_long_::Invoke @ 0x180088F20 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_180088F20.c)
 * Callees:
 *     ?_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIAsyncCallback@@PEAUIPresentationRequestedArgs@@@Z @ 0x180014950 (-_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropert.c)
 *     ?WindowFromViewWrapper@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAPEAUHWND__@@@Z @ 0x1800159A8 (-WindowFromViewWrapper@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAPEAUHW.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x180016BC0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@@WRL@Microsoft@@QEAA@.c)
 *     ?Remove@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEBG@Z @ 0x180017140 (-Remove@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEBG@Z.c)
 *     ?MoveTryPositionPropertiesToPropertySet@@YAJPEAUHWND__@@AEAVPropertySetHelper@ShellHelpers@Internal@Windows@@@Z @ 0x1800171F4 (-MoveTryPositionPropertiesToPropertySet@@YAJPEAUHWND__@@AEAVPropertySetHelper@ShellHelpers@Inter.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019594 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002FE10 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJIPEAPEAUIInspectable@@@ZI@Z @ 0x18006EBA8 (--$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall lambda_1499a186909557a83ff0f6afb6d3c526_::operator()(CAppViewManager ***a1)
{
  CAppViewManager *v2; // rdi
  __int64 (__fastcall *v3)(CAppViewManager *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **); // rbx
  int v4; // eax
  unsigned int v5; // ebx
  CAppViewManager *v6; // rdi
  __int64 (__fastcall *v7)(CAppViewManager *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **); // rbx
  int v8; // eax
  CAppViewManager *v9; // rdi
  __int64 (__fastcall *v10)(CAppViewManager *, GUID *, __int64 *); // rbx
  int v11; // eax
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, struct Windows::Foundation::Collections::IPropertySet **); // rdi
  int v14; // eax
  struct Windows::Foundation::Collections::IPropertySet *v15; // rax
  int v16; // eax
  const unsigned __int16 *v17; // rdx
  CAppViewManager *v18; // rsi
  struct IAsyncCallback *v19; // rdi
  struct IAsyncCallback *v20; // rax
  struct IAsyncCallback *v21; // rbx
  struct IAsyncCallback *v22; // r15
  int v23; // eax
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // r9
  __int64 v29; // rdx
  int v30; // [rsp+20h] [rbp-79h]
  struct Windows::Foundation::Collections::IPropertySet *v31; // [rsp+40h] [rbp-59h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v32; // [rsp+48h] [rbp-51h] BYREF
  CAppViewManager *v33; // [rsp+50h] [rbp-49h] BYREF
  __int64 v34; // [rsp+58h] [rbp-41h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v35; // [rsp+60h] [rbp-39h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v36; // [rsp+68h] [rbp-31h] BYREF
  HWND v37; // [rsp+70h] [rbp-29h] BYREF
  HWND v38; // [rsp+78h] [rbp-21h] BYREF
  __int64 v39; // [rsp+80h] [rbp-19h] BYREF
  int v40; // [rsp+88h] [rbp-11h]
  __int64 v41; // [rsp+90h] [rbp-9h] BYREF
  struct IAsyncCallback *v42; // [rsp+98h] [rbp-1h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+A0h] [rbp+7h] BYREF
  HSTRING v44; // [rsp+B8h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v36 = 0LL;
  v37 = 0LL;
  v2 = **a1;
  v3 = *(__int64 (__fastcall **)(CAppViewManager *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **))(*(_QWORD *)v2 + 48LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v36);
  v4 = v3(v2, &v36);
  v5 = v4;
  if ( v4 < 0 )
  {
    v25 = 508LL;
LABEL_27:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v25,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v4,
      v30);
    goto LABEL_24;
  }
  v4 = WindowFromViewWrapper(v36, &v37);
  v5 = v4;
  if ( v4 < 0 )
  {
    v25 = 509LL;
    goto LABEL_27;
  }
  v35 = 0LL;
  v38 = 0LL;
  v6 = **a1;
  v7 = *(__int64 (__fastcall **)(CAppViewManager *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **))(*(_QWORD *)v6 + 56LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
  v8 = v7(v6, &v35);
  v5 = v8;
  if ( v8 < 0 )
  {
    v26 = 513LL;
LABEL_33:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v26,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v8,
      v30);
    goto LABEL_23;
  }
  v8 = WindowFromViewWrapper(v35, &v38);
  v5 = v8;
  if ( v8 < 0 )
  {
    v26 = 514LL;
    goto LABEL_33;
  }
  v39 = 0LL;
  v40 = 0;
  v41 = 0LL;
  v8 = (*(__int64 (__fastcall **)(CAppViewManager *, __int64 *))(*(_QWORD *)**a1 + 64LL))(**a1, &v39);
  v5 = v8;
  if ( v8 < 0 )
  {
    v26 = 517LL;
    goto LABEL_33;
  }
  v8 = (*(__int64 (__fastcall **)(CAppViewManager *, char *))(*(_QWORD *)**a1 + 72LL))(**a1, (char *)&v39 + 4);
  v5 = v8;
  if ( v8 < 0 )
  {
    v26 = 518LL;
    goto LABEL_33;
  }
  v8 = (*(__int64 (__fastcall **)(CAppViewManager *, __int64 *))(*(_QWORD *)**a1 + 80LL))(**a1, &v41);
  v5 = v8;
  if ( v8 < 0 )
  {
    v26 = 519LL;
    goto LABEL_33;
  }
  v34 = 0LL;
  v9 = **a1;
  v10 = **(__int64 (__fastcall ***)(CAppViewManager *, GUID *, __int64 *))v9;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v34);
  v11 = v10(v9, &GUID_96c11dea_68de_44ef_a7f7_3aa869663d57, &v34);
  v5 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20A,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v11,
      v30);
    goto LABEL_22;
  }
  v31 = 0LL;
  v12 = v34;
  v13 = *(__int64 (__fastcall **)(__int64, struct Windows::Foundation::Collections::IPropertySet **))(*(_QWORD *)v34 + 56LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
  v14 = v13(v12, &v31);
  v5 = v14;
  if ( v14 < 0 )
  {
    v27 = 525LL;
LABEL_38:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v27,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v14,
      v30);
    goto LABEL_21;
  }
  v15 = v31;
  if ( v31 )
    goto LABEL_11;
  v44 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Foundation.Collections.ValueSet",
    0x28u,
    0x27u);
  v14 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
          v44,
          &v31);
  v5 = v14;
  if ( v14 < 0 )
  {
    v27 = 528LL;
    goto LABEL_38;
  }
  v15 = v31;
LABEL_11:
  v32 = v15;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v32);
  v44 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"ClientRequestedNavigationType",
    0x1Eu,
    0x1Du);
  v16 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
          (Windows::Internal::ShellHelpers::PropertySetHelper *)&v32,
          v44);
  v5 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x216,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v16,
      v30);
    goto LABEL_20;
  }
  MoveTryPositionPropertiesToPropertySet(v37, (struct Windows::Internal::ShellHelpers::PropertySetHelper *)&v32);
  Windows::Internal::ShellHelpers::PropertySetHelper::Remove(
    (Windows::Internal::ShellHelpers::PropertySetHelper *)&v32,
    v17);
  v18 = **a1;
  v33 = v18;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v33);
  v19 = 0LL;
  v20 = (struct IAsyncCallback *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v21 = v20;
  v22 = 0LL;
  if ( v20 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>(v20);
    *((_QWORD *)v21 + 2) = 0LL;
    if ( (CAppViewManager **)((char *)v21 + 16) != &v33 )
    {
      *((_QWORD *)v21 + 2) = v18;
      v33 = 0LL;
    }
    *(_QWORD *)v21 = off_18048A580;
    v19 = v21;
    v22 = v21;
  }
  v42 = v19;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
  if ( !v22 )
  {
    v5 = -2147024882;
    v28 = 2147942414LL;
    v29 = 552LL;
LABEL_43:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v29,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)v28,
      v30);
    goto LABEL_19;
  }
  v23 = CAppViewManager::_ShowViewAsyncWorker(
          *a1[1],
          v37,
          v38,
          (const struct CAppViewManager::ShowViewAsyncOptions *)&v39,
          v31,
          v19,
          *a1[2]);
  v5 = v23;
  if ( v23 < 0 )
  {
    v28 = (unsigned int)v23;
    v29 = 554LL;
    goto LABEL_43;
  }
  v5 = 0;
LABEL_19:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v42);
LABEL_20:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v32);
LABEL_21:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
LABEL_22:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v34);
LABEL_23:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
LABEL_24:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v36);
  return v5;
}
