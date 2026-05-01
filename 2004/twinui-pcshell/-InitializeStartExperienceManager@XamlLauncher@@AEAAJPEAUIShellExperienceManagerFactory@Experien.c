/*
 * XREFs of ?InitializeStartExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@@Z @ 0x18032CA00
 * Callers:
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x18032DC90 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 * Callees:
 *     ??$As@UIStartExperienceManager@Experience@Shell@Internal@Windows@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIStartExperienceManager@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18001B91C (--$As@UIStartExperienceManager@Experience@Shell@Internal@Windows@@@-$ComPtr@UIInspectable@@@WRL@.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002FE10 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_StartInWin32Host@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18022BCC8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_StartInWin32Host@@@details@wil@@QEAAX_NW4.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18032B278 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAVStartExperie.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall XamlLauncher::InitializeStartExperienceManager(
        IUnknown **this,
        struct Windows::Internal::Shell::Experience::IShellExperienceManagerFactory *a2,
        __int64 a3)
{
  __int64 (__fastcall *v5)(struct Windows::Internal::Shell::Experience::IShellExperienceManagerFactory *, __int64, _QWORD); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  IUnknown **v9; // r13
  __int64 (__fastcall ***v10)(_QWORD, GUID *, __int64); // rdi
  _QWORD *v11; // rax
  _QWORD *v12; // rbx
  _QWORD *v13; // r12
  int v14; // eax
  __int64 (__fastcall ***v15)(_QWORD, GUID *, __int64); // rdi
  _QWORD *v16; // rax
  _QWORD *v17; // rbx
  _QWORD *v18; // r15
  int v19; // eax
  __int64 (__fastcall ***v20)(_QWORD, GUID *, __int64); // rdi
  _QWORD *v21; // rax
  _QWORD *v22; // rbx
  _QWORD *v23; // r14
  int v24; // eax
  __int64 (__fastcall ***v26[3])(_QWORD, GUID *, __int64); // [rsp+20h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-28h] BYREF
  __int64 v28; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_StartInWin32Host>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_StartInWin32Host>::GetImpl'::`2'::impl,
    0,
    a3);
  v26[0] = 0LL;
  v5 = *(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceManagerFactory *, __int64, _QWORD))(*(_QWORD *)a2 + 48LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v26);
  v28 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.ShellExperience.StartMenu",
    0x2Bu,
    0x2Au);
  v6 = v5(a2, v28, v26);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 455LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v6);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v26);
    return v7;
  }
  v9 = this + 15;
  v6 = Microsoft::WRL::ComPtr<IInspectable>::As<Windows::Internal::Shell::Experience::IStartExperienceManager>(
         v26,
         (__int64)(this + 15));
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 456LL;
    goto LABEL_5;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v26);
  IUnknown_SetSite(*v9, this[2]);
  v10 = 0LL;
  v11 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v11;
  v13 = 0LL;
  if ( v11 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>>((__int64)v11);
    v12[2] = this;
    *v12 = off_1804B7670;
    v10 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64))v12;
    v13 = v12;
  }
  v26[0] = v10;
  v14 = ((__int64 (__fastcall *)(IUnknown *, _QWORD *, char *))(*v9)->lpVtbl[8].AddRef)(*v9, v13, (char *)this + 184);
  v7 = v14;
  if ( v14 >= 0 )
  {
    v15 = 0LL;
    v16 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v17 = v16;
    v18 = 0LL;
    if ( v16 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>>((__int64)v16);
      v17[2] = this;
      *v17 = off_1804B7698;
      v15 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64))v17;
      v18 = v17;
    }
    v26[1] = v15;
    v19 = ((__int64 (__fastcall *)(IUnknown *, _QWORD *, char *))(*v9)->lpVtbl[9].QueryInterface)(
            *v9,
            v18,
            (char *)this + 192);
    v7 = v19;
    if ( v19 >= 0 )
    {
      v20 = 0LL;
      v21 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
      v22 = v21;
      v23 = 0LL;
      if ( v21 )
      {
        Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>>((__int64)v21);
        v22[2] = this;
        *v22 = off_1804B75D0;
        v20 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64))v22;
        v23 = v22;
      }
      v26[2] = v20;
      v24 = ((__int64 (__fastcall *)(IUnknown *, _QWORD *, char *))(*v9)->lpVtbl[7].Release)(
              *v9,
              v23,
              (char *)this + 200);
      v7 = v24;
      if ( v24 >= 0 )
        v7 = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1F5,
          (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
          (const char *)(unsigned int)v24);
      if ( v23 )
        (*(void (__fastcall **)(_QWORD *))(*v23 + 16LL))(v23);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1DF,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)(unsigned int)v19);
    }
    if ( v18 )
      (*(void (__fastcall **)(_QWORD *))(*v18 + 16LL))(v18);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D4,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v14);
  }
  if ( v13 )
    (*(void (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
  return v7;
}
