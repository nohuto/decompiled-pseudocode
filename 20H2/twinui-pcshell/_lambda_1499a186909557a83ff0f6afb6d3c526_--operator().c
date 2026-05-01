/*
 * XREFs of _lambda_1499a186909557a83ff0f6afb6d3c526_::operator() @ 0x18004107C
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_ff18a7cb999efe7aba419e7d47fa9918___1_long_::Invoke @ 0x180087570 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_180087570.c)
 * Callees:
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800139FC (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800275B0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?MoveTryPositionPropertiesToPropertySet@@YAJPEAUHWND__@@AEAVPropertySetHelper@ShellHelpers@Internal@Windows@@@Z @ 0x180040F5C (-MoveTryPositionPropertiesToPropertySet@@YAJPEAUHWND__@@AEAVPropertySetHelper@ShellHelpers@Inter.c)
 *     ?Remove@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEBG@Z @ 0x180040FC8 (-Remove@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEBG@Z.c)
 *     ?WindowFromViewWrapper@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAPEAUHWND__@@@Z @ 0x1800413B4 (-WindowFromViewWrapper@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAPEAUHW.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x1800425D0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@@WRL@Microsoft@@QEAA@.c)
 *     ?_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIAsyncCallback@@PEAUIPresentationRequestedArgs@@@Z @ 0x180042F90 (-_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropert.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJIPEAPEAUIInspectable@@@ZI@Z @ 0x180069D48 (--$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18007256C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
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
  unsigned int v18; // r8d
  CAppViewManager *v19; // rsi
  struct IAsyncCallback *v20; // rdi
  struct IAsyncCallback *v21; // rax
  struct IAsyncCallback *v22; // rbx
  struct IAsyncCallback *v23; // r15
  int v24; // eax
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // r9
  __int64 v30; // rdx
  int v31; // [rsp+20h] [rbp-79h]
  struct Windows::Foundation::Collections::IPropertySet *v32; // [rsp+40h] [rbp-59h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v33; // [rsp+48h] [rbp-51h] BYREF
  CAppViewManager *v34; // [rsp+50h] [rbp-49h] BYREF
  __int64 v35; // [rsp+58h] [rbp-41h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v36; // [rsp+60h] [rbp-39h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v37; // [rsp+68h] [rbp-31h] BYREF
  HWND v38; // [rsp+70h] [rbp-29h] BYREF
  HWND v39; // [rsp+78h] [rbp-21h] BYREF
  __int64 v40; // [rsp+80h] [rbp-19h] BYREF
  int v41; // [rsp+88h] [rbp-11h]
  __int64 v42; // [rsp+90h] [rbp-9h] BYREF
  struct IAsyncCallback *v43; // [rsp+98h] [rbp-1h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+A0h] [rbp+7h] BYREF
  HSTRING v45; // [rsp+B8h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v37 = 0LL;
  v38 = 0LL;
  v2 = **a1;
  v3 = *(__int64 (__fastcall **)(CAppViewManager *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **))(*(_QWORD *)v2 + 48LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v37);
  v4 = v3(v2, &v37);
  v5 = v4;
  if ( v4 < 0 )
  {
    v26 = 508LL;
LABEL_27:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v26,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v4,
      v31);
    goto LABEL_24;
  }
  v4 = WindowFromViewWrapper(v37, &v38);
  v5 = v4;
  if ( v4 < 0 )
  {
    v26 = 509LL;
    goto LABEL_27;
  }
  v36 = 0LL;
  v39 = 0LL;
  v6 = **a1;
  v7 = *(__int64 (__fastcall **)(CAppViewManager *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **))(*(_QWORD *)v6 + 56LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v36);
  v8 = v7(v6, &v36);
  v5 = v8;
  if ( v8 < 0 )
  {
    v27 = 513LL;
LABEL_33:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v27,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v8,
      v31);
    goto LABEL_23;
  }
  v8 = WindowFromViewWrapper(v36, &v39);
  v5 = v8;
  if ( v8 < 0 )
  {
    v27 = 514LL;
    goto LABEL_33;
  }
  v40 = 0LL;
  v41 = 0;
  v42 = 0LL;
  v8 = (*(__int64 (__fastcall **)(CAppViewManager *, __int64 *))(*(_QWORD *)**a1 + 64LL))(**a1, &v40);
  v5 = v8;
  if ( v8 < 0 )
  {
    v27 = 517LL;
    goto LABEL_33;
  }
  v8 = (*(__int64 (__fastcall **)(CAppViewManager *, char *))(*(_QWORD *)**a1 + 72LL))(**a1, (char *)&v40 + 4);
  v5 = v8;
  if ( v8 < 0 )
  {
    v27 = 518LL;
    goto LABEL_33;
  }
  v8 = (*(__int64 (__fastcall **)(CAppViewManager *, __int64 *))(*(_QWORD *)**a1 + 80LL))(**a1, &v42);
  v5 = v8;
  if ( v8 < 0 )
  {
    v27 = 519LL;
    goto LABEL_33;
  }
  v35 = 0LL;
  v9 = **a1;
  v10 = **(__int64 (__fastcall ***)(CAppViewManager *, GUID *, __int64 *))v9;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
  v11 = v10(v9, &GUID_96c11dea_68de_44ef_a7f7_3aa869663d57, &v35);
  v5 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20A,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v11,
      v31);
    goto LABEL_22;
  }
  v32 = 0LL;
  v12 = v35;
  v13 = *(__int64 (__fastcall **)(__int64, struct Windows::Foundation::Collections::IPropertySet **))(*(_QWORD *)v35 + 56LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v32);
  v14 = v13(v12, &v32);
  v5 = v14;
  if ( v14 < 0 )
  {
    v28 = 525LL;
LABEL_38:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v28,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v14,
      v31);
    goto LABEL_21;
  }
  v15 = v32;
  if ( v32 )
    goto LABEL_11;
  v45 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Foundation.Collections.ValueSet",
    0x28u,
    0x27u);
  v14 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
          (__int64)v45,
          &v32);
  v5 = v14;
  if ( v14 < 0 )
  {
    v28 = 528LL;
    goto LABEL_38;
  }
  v15 = v32;
LABEL_11:
  v33 = v15;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v33);
  v45 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"ClientRequestedNavigationType",
    0x1Eu,
    0x1Du);
  v16 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
          (Windows::Internal::ShellHelpers::PropertySetHelper *)&v33,
          v45);
  v5 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x216,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v16,
      v31);
    goto LABEL_20;
  }
  MoveTryPositionPropertiesToPropertySet(v38, (struct Windows::Internal::ShellHelpers::PropertySetHelper *)&v33);
  Windows::Internal::ShellHelpers::PropertySetHelper::Remove(
    (Windows::Internal::ShellHelpers::PropertySetHelper *)&v33,
    v17,
    v18);
  v19 = **a1;
  v34 = v19;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v34);
  v20 = 0LL;
  v21 = (struct IAsyncCallback *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v22 = v21;
  v23 = 0LL;
  if ( v21 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>(v21);
    *((_QWORD *)v22 + 2) = 0LL;
    if ( (CAppViewManager **)((char *)v22 + 16) != &v34 )
    {
      *((_QWORD *)v22 + 2) = v19;
      v34 = 0LL;
    }
    *(_QWORD *)v22 = off_18048B890;
    v20 = v22;
    v23 = v22;
  }
  v43 = v20;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v34);
  if ( !v23 )
  {
    v5 = -2147024882;
    v29 = 2147942414LL;
    v30 = 552LL;
LABEL_43:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v30,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)v29,
      v31);
    goto LABEL_19;
  }
  v24 = CAppViewManager::_ShowViewAsyncWorker(
          *a1[1],
          v38,
          v39,
          (const struct CAppViewManager::ShowViewAsyncOptions *)&v40,
          v32,
          v20,
          *a1[2]);
  v5 = v24;
  if ( v24 < 0 )
  {
    v29 = (unsigned int)v24;
    v30 = 554LL;
    goto LABEL_43;
  }
  v5 = 0;
LABEL_19:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v43);
LABEL_20:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
LABEL_21:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v32);
LABEL_22:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
LABEL_23:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v36);
LABEL_24:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v37);
  return v5;
}
