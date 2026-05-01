/*
 * XREFs of ?InitializeCortanaExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@@Z @ 0x18032B9B4
 * Callers:
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x18032D320 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800275B0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180098CD0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps@@@details@wil@.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Internal::Shell::Experience::ICortanaExperienceManager____Windows::Internal::Shell::Experience::IFocusNavigateEventArgs___::_)(Windows::Internal::Shell::Experience::ICortanaExperienceManager___Windows::Internal::Shell::Experience::IFocusNavigateEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Internal::Shell::Experience::IFocusNavigateEventArgs_____lambda_4321e1d7b7a636f1ac7f992be3626682___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager___Windows::Internal::Shell::Experience::IFocusNavigateEventArgs___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Internal::Shell::Experience::IFocusNavigateEventArgs_____lambda_4321e1d7b7a636f1ac7f992be3626682___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager___Windows::Internal::Shell::Experience::IFocusNavigateEventArgs___ @ 0x18032A7FC (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_18032A7FC.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18032A868 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAVCortanaExper.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18032A8B8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEA_ea_18032A8B8.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall XamlLauncher::InitializeCortanaExperienceManager(
        XamlLauncher *this,
        struct Windows::Internal::Shell::Experience::IShellExperienceManagerFactory *a2,
        __int64 a3)
{
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(struct Windows::Internal::Shell::Experience::IShellExperienceManagerFactory *, __int64, _QWORD); // rbx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  _QWORD *v10; // rdi
  __int64 (__fastcall ***v11)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v12)(_QWORD, GUID *, char *); // rsi
  _QWORD *v13; // rsi
  _QWORD *v14; // rax
  _QWORD *v15; // rbx
  _QWORD *v16; // r15
  int v17; // eax
  _QWORD *v18; // rsi
  _QWORD *v19; // rax
  _QWORD *v20; // rbx
  _QWORD *v21; // r12
  int v22; // eax
  __int64 v23; // rbx
  void *v24; // rax
  __int64 v25; // r15
  int v26; // eax
  _QWORD *v27; // rsi
  _QWORD *v28; // rax
  _QWORD *v29; // rbx
  _QWORD *v30; // r13
  int v31; // eax
  _QWORD *v32; // rsi
  _QWORD *v33; // rax
  _QWORD *v34; // rbx
  _QWORD *v35; // r12
  int v36; // eax
  _QWORD *v37; // rsi
  _QWORD *v38; // rax
  _QWORD *v39; // rbx
  _QWORD *v40; // r15
  int v41; // eax
  __int64 (__fastcall ***v43)(_QWORD, GUID *, char *); // [rsp+20h] [rbp-59h] BYREF
  __int64 v44; // [rsp+28h] [rbp-51h]
  _QWORD *v45; // [rsp+30h] [rbp-49h]
  _QWORD *v46; // [rsp+38h] [rbp-41h]
  _QWORD v47[6]; // [rsp+40h] [rbp-39h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp-9h] BYREF
  __int64 v49; // [rsp+88h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v43 = 0LL;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps>::GetImpl'::`2'::impl,
    1u,
    a3);
  v49 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.ShellExperience.SearchApp",
    0x2Bu,
    0x2Au);
  v5 = v49;
  v49 = 0LL;
  v6 = *(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceManagerFactory *, __int64, _QWORD))(*(_QWORD *)a2 + 48LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v43);
  v7 = v6(a2, v5, &v43);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 795LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_46;
  }
  v10 = (_QWORD *)((char *)this + 128);
  v11 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v43;
  v12 = **v43;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 16);
  v7 = v12(v11, &GUID_3e90bc6d_f3d9_4e87_94ec_bb0819d7cdbf, (char *)this + 128);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 796LL;
    goto LABEL_5;
  }
  v13 = 0LL;
  v14 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v15 = v14;
  v16 = 0LL;
  v46 = 0LL;
  if ( v14 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>((__int64)v14);
    v15[2] = this;
    *v15 = off_1804B6728;
    v13 = v15;
    v16 = v15;
    v46 = v15;
  }
  v47[1] = v13;
  v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, char *))(*(_QWORD *)*v10 + 224LL))(*v10, v16, (char *)this + 208);
  v8 = v17;
  if ( v17 >= 0 )
  {
    v18 = 0LL;
    v19 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v20 = v19;
    v21 = 0LL;
    v45 = 0LL;
    if ( v19 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>((__int64)v19);
      v20[2] = this;
      *v20 = off_1804B66B0;
      v18 = v20;
      v21 = v20;
      v45 = v20;
    }
    v47[2] = v18;
    v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, char *))(*(_QWORD *)*v10 + 240LL))(*v10, v21, (char *)this + 216);
    v8 = v22;
    if ( v22 >= 0 )
    {
      v47[0] = this;
      v23 = 0LL;
      v24 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
      v25 = 0LL;
      v44 = 0LL;
      if ( v24 )
      {
        v23 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Internal::Shell::Experience::ICortanaExperienceManager____Windows::Internal::Shell::Experience::IFocusNavigateEventArgs___::___Windows::Internal::Shell::Experience::ICortanaExperienceManager___Windows::Internal::Shell::Experience::IFocusNavigateEventArgs____::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Internal::Shell::Experience::IFocusNavigateEventArgs_____lambda_4321e1d7b7a636f1ac7f992be3626682___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager___Windows::Internal::Shell::Experience::IFocusNavigateEventArgs___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Internal::Shell::Experience::IFocusNavigateEventArgs_____lambda_4321e1d7b7a636f1ac7f992be3626682___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager___Windows::Internal::Shell::Experience::IFocusNavigateEventArgs___(
                (__int64)v24,
                v47);
        v25 = v23;
        v44 = v23;
      }
      v47[0] = v23;
      v26 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(*(_QWORD *)*v10 + 272LL))(
              *v10,
              v25,
              (char *)this + 224);
      v8 = v26;
      if ( v26 >= 0 )
      {
        v27 = 0LL;
        v28 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
        v29 = v28;
        v30 = 0LL;
        if ( v28 )
        {
          Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>((__int64)v28);
          v29[2] = this;
          *v29 = off_1804B67A0;
          v27 = v29;
          v30 = v29;
        }
        v47[3] = v27;
        v31 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, char *))(*(_QWORD *)*v10 + 288LL))(
                *v10,
                v30,
                (char *)this + 232);
        v8 = v31;
        if ( v31 >= 0 )
        {
          v32 = 0LL;
          v33 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
          v34 = v33;
          v35 = 0LL;
          if ( v33 )
          {
            Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::ICortanaShownEventArgs *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::ICortanaShownEventArgs *>>((__int64)v33);
            v34[2] = this;
            *v34 = off_1804B6750;
            v32 = v34;
            v35 = v34;
          }
          v47[4] = v32;
          v36 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, char *))(*(_QWORD *)*v10 + 176LL))(
                  *v10,
                  v35,
                  (char *)this + 240);
          v8 = v36;
          if ( v36 >= 0 )
          {
            v37 = 0LL;
            v38 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
            v39 = v38;
            v40 = 0LL;
            if ( v38 )
            {
              Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>((__int64)v38);
              v39[2] = this;
              *v39 = off_1804B6778;
              v37 = v39;
              v40 = v39;
            }
            v47[5] = v37;
            v41 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, char *))(*(_QWORD *)*v10 + 208LL))(
                    *v10,
                    v40,
                    (char *)this + 248);
            v8 = v41;
            if ( v41 >= 0 )
              v8 = 0;
            else
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x359,
                (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
                (const char *)(unsigned int)v41);
            if ( v40 )
              (*(void (__fastcall **)(_QWORD *))(*v40 + 16LL))(v40);
            v25 = v44;
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x348,
              (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
              (const char *)(unsigned int)v36);
          }
          if ( v35 )
            (*(void (__fastcall **)(_QWORD *))(*v35 + 16LL))(v35);
          v21 = v45;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x340,
            (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
            (const char *)(unsigned int)v31);
        }
        if ( v30 )
          (*(void (__fastcall **)(_QWORD *))(*v30 + 16LL))(v30);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x336,
          (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
          (const char *)(unsigned int)v26);
      }
      if ( v25 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
      v16 = v46;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x32C,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)(unsigned int)v22);
    }
    if ( v21 )
      (*(void (__fastcall **)(_QWORD *))(*v21 + 16LL))(v21);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x324,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v17);
  }
  if ( v16 )
    (*(void (__fastcall **)(_QWORD *))(*v16 + 16LL))(v16);
LABEL_46:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v43);
  return v8;
}
