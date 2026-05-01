/*
 * XREFs of ?RuntimeClassInitialize@AccessibilityExperienceManager@@QEAAJXZ @ 0x180370484
 * Callers:
 *     ??$MakeAndInitialize@VAccessibilityExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAccessibilityExperienceManager@@@Z @ 0x18036DEA8 (--$MakeAndInitialize@VAccessibilityExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAc.c)
 * Callees:
 *     ??1?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@@Z@wistd@@QEAA@XZ @ 0x180041EE4 (--1-$function@$$A6AJPEAU-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Window.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18004D370 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18008D5BC (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x18008DA68 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ @ 0x1801420E0 (-_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x18014231C (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x18014F4C4 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ??$make_wnf_subscription_nothrow@K@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBK@Z@wistd@@K@Z @ 0x1801E1C38 (--$make_wnf_subscription_nothrow@K@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy.c)
 *     ??$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreationThreadDispatcher@@@Z @ 0x1801E6A38 (--$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreation.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x1801E87F0 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopGazeXAMLKeyboard@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18034F7CC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopGazeXAMLKeyboard@@@details@wil@@QE.c)
 *     wistd::function_void___cdecl(unsigned_long_const_&)_::function_void___cdecl(unsigned_long_const_&)___lambda_a4c446dfbe63852ef8502038325ba970__void_ @ 0x18036D8EC (wistd--function_void___cdecl(unsigned_long_const_-)_--function_void___cdecl(unsigne_ea_18036D8EC.c)
 *     ?EnsureInputDeviceWatcher@AccessibilityExperienceManager@@AEAAJXZ @ 0x18036F4A4 (-EnsureInputDeviceWatcher@AccessibilityExperienceManager@@AEAAJXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_UseStoreECApp@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803702F8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_UseStoreECApp@@@details@wil@@QEAAX_NW4Rep.c)
 *     ?Subscribe@WnfHelper@@QEAAJPEAUIWnfCallback@@@Z @ 0x180371E80 (-Subscribe@WnfHelper@@QEAAJPEAUIWnfCallback@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall AccessibilityExperienceManager::RuntimeClassInitialize(AccessibilityExperienceManager *this)
{
  HWND Window; // rax
  __int64 v3; // r8
  __int64 v4; // r14
  int AgileReference; // edi
  __int64 v6; // rdx
  int v7; // eax
  unsigned __int64 v8; // r9
  int v9; // eax
  char *v10; // rax
  __int64 v11; // r8
  void (__fastcall ***v12)(_QWORD, __int64); // rcx
  char *v13; // rax
  WnfHelper *v14; // rcx
  std::_Ref_count_base *v15; // rdx
  Concurrency::details::_RefCounter **wnf_subscription; // rax
  Concurrency::details::_RefCounter **v17; // rdi
  __int64 v19; // [rsp+60h] [rbp-A0h] BYREF
  Concurrency::details::_RefCounter *v20; // [rsp+68h] [rbp-98h] BYREF
  __int64 v21; // [rsp+70h] [rbp-90h] BYREF
  __int64 v22; // [rsp+78h] [rbp-88h] BYREF
  WNDCLASSEXW v23; // [rsp+80h] [rbp-80h] BYREF
  _OWORD v24[2]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v25[128]; // [rsp+F0h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]

  memset_0(&v23, 0, sizeof(v23));
  v23.cbSize = 80;
  v23.lpfnWndProc = (WNDPROC)_AccessibilityEMWndProc;
  v23.lpszClassName = L"AccessibilityEMWndClass";
  RegisterClassExW(&v23);
  Window = CreateWindowExW(
             0,
             L"AccessibilityEMWndClass",
             L"AccessibilityEMWnd",
             0,
             0,
             0,
             0,
             0,
             HWND_MESSAGE,
             0LL,
             0LL,
             0LL);
  *((_QWORD *)this + 54) = Window;
  SetWindowLongPtrW(Window, -21, (LONG_PTR)this);
  qword_1805CE3F8 = (__int64)L"Microsoft.ECApp_8wekyb3d8bbwe!App";
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_UseStoreECApp>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_UseStoreECApp>::GetImpl'::`2'::impl,
    0,
    v3);
  v22 = (__int64)this + 152;
  if ( this != (AccessibilityExperienceManager *)-152LL )
    (*(void (__fastcall **)(char *))(*((_QWORD *)this + 19) + 8LL))((char *)this + 152);
  v4 = 0LL;
  v19 = 0LL;
  AgileReference = 0;
  if ( this != (AccessibilityExperienceManager *)-152LL )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    AgileReference = RoGetAgileReference(0LL, &GUID_5e575f11_41b8_4e5f_a100_ceaab370f70c, (char *)this + 152, &v19);
    v4 = v19;
  }
  v19 = 0LL;
  v20 = 0LL;
  v21 = v4;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  if ( AgileReference < 0 )
  {
    v6 = 103LL;
LABEL_30:
    v8 = (unsigned int)AgileReference;
    goto LABEL_31;
  }
  v24[0] = *(_OWORD *)&SID_AccessibilityExperienceManager.Revision;
  v24[1] = 0LL;
  v7 = CImmersiveShellComponent::RegisterServiceInformation(
         (AccessibilityExperienceManager *)((char *)this + 48),
         (const struct CImmersiveShellComponent::ISC_SERVICE *)v24,
         1LL);
  AgileReference = v7;
  if ( v7 >= 0 )
  {
    Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease((__int64 *)this + 37);
    v9 = Microsoft::WRL::Details::MakeAndInitialize<CreationThreadDispatcher,CreationThreadDispatcher,>((CreationThreadDispatcher **)this + 37);
    AgileReference = v9;
    if ( v9 >= 0 )
    {
      v10 = (char *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v10 )
      {
        *(_DWORD *)(v10 + 65) = 0;
        *(_WORD *)(v10 + 69) = 0;
        v10[71] = 0;
        *(_QWORD *)v10 = &EyeControlApp::`vftable';
        *((_QWORD *)v10 + 1) = 0LL;
        *((_QWORD *)v10 + 2) = 0LL;
        *((_QWORD *)v10 + 3) = 0LL;
        *((_QWORD *)v10 + 4) = 0LL;
        *((_QWORD *)v10 + 5) = 0LL;
        *((_QWORD *)v10 + 6) = 0LL;
        *((_QWORD *)v10 + 7) = 0LL;
        v10[64] = 0;
      }
      else
      {
        v10 = 0LL;
      }
      v12 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 52);
      *((_QWORD *)this + 52) = v10;
      if ( v12 )
      {
        (**v12)(v12, 1LL);
        v10 = (char *)*((_QWORD *)this + 52);
      }
      if ( v10 )
      {
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopGazeXAMLKeyboard>::ReportUsage(
          `wil::Feature<__WilFeatureTraits_Feature_DesktopGazeXAMLKeyboard>::GetImpl'::`2'::impl,
          0,
          v11);
        v13 = (char *)operator new(0x20uLL);
        v20 = (Concurrency::details::_RefCounter *)v13;
        *((_DWORD *)v13 + 2) = 1;
        *((_DWORD *)v13 + 3) = 1;
        *(_QWORD *)v13 = &std::_Ref_count_obj<WnfHelper>::`vftable';
        v14 = (WnfHelper *)(v13 + 16);
        *((_QWORD *)v13 + 2) = 0LL;
        *((_QWORD *)v13 + 3) = 0LL;
        *((_QWORD *)this + 38) = v13 + 16;
        v15 = (std::_Ref_count_base *)*((_QWORD *)this + 39);
        *((_QWORD *)this + 39) = v13;
        if ( v15 )
        {
          std::_Ref_count_base::_Decref(v15);
          v14 = (WnfHelper *)*((_QWORD *)this + 38);
        }
        if ( v14 )
          WnfHelper::Subscribe(v14, (AccessibilityExperienceManager *)((char *)this + 136));
        v19 = v4;
        if ( v4 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
        wistd::function_void___cdecl_unsigned_long_const____::function_void___cdecl_unsigned_long_const______lambda_a4c446dfbe63852ef8502038325ba970__void_(
          (__int64)v25,
          &v19);
        wnf_subscription = (Concurrency::details::_RefCounter **)wil::make_wnf_subscription_nothrow<unsigned long>(
                                                                   &v20,
                                                                   (__int64)&WNF_SHEL_LOCKSCREEN_ACTIVE,
                                                                   (__int64)v25);
        v17 = wnf_subscription;
        if ( (Concurrency::details::_RefCounter **)((char *)this + 320) != wnf_subscription )
        {
          wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
            (Concurrency::details::_RefCounter **)this + 40,
            *wnf_subscription);
          *v17 = 0LL;
        }
        if ( v20 )
          Concurrency::details::_RefCounter::_Destroy(v20);
        wistd::function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>::~function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>((__int64)v25);
        if ( *((_QWORD *)this + 40) )
        {
          AccessibilityExperienceManager::EnsureInputDeviceWatcher(this);
          AgileReference = 0;
          goto LABEL_33;
        }
        AgileReference = -2147467259;
        v6 = 134LL;
      }
      else
      {
        AgileReference = -2147024882;
        v6 = 110LL;
      }
      goto LABEL_30;
    }
    v8 = (unsigned int)v9;
    v6 = 107LL;
  }
  else
  {
    v8 = (unsigned int)v7;
    v6 = 105LL;
  }
LABEL_31:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
    (const char *)v8);
LABEL_33:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
  return (unsigned int)AgileReference;
}
