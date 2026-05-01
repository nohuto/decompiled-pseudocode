/*
 * XREFs of ?CloseSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@@Z @ 0x180384010
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180038D30 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TabShell@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800431B8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TabShell@@@details@wil@@QEAAX_NW4Reportin.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowTabHost@@@details@wil@@QEAA_NXZ @ 0x18009BB44 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowTabHost@@@details@wil@@QEAA.c)
 *     ?WindowTabHostTabClosedViaAltTab@WindowTabHostTelemetry@@SAXXZ @ 0x1800A6CE8 (-WindowTabHostTabClosedViaAltTab@WindowTabHostTelemetry@@SAXXZ.c)
 *     ?WindowTabHostWindowClosedViaAltTab@WindowTabHostTelemetry@@SAXXZ @ 0x1800A6D90 (-WindowTabHostWindowClosedViaAltTab@WindowTabHostTelemetry@@SAXXZ.c)
 *     ??$?9UIApplicationViewCollection@@@WRL@Microsoft@@YA_NAEBV?$ComPtr@UIApplicationViewCollection@@@01@$$T@Z @ 0x1800C0B14 (--$-9UIApplicationViewCollection@@@WRL@Microsoft@@YA_NAEBV-$ComPtr@UIApplicationViewCollection@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@U?$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1801128D0 (--1-$ComPtr@U-$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collectio.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UISwitchItemInternal@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UISwitchItemInternal@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18036B1EC (--$IID_PPV_ARGS_Helper@V-$ComPtr@UISwitchItemInternal@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V.c)
 *     ?CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSHER_INPUT@@W4APPCRUSHER_SOURCE@@W4APPCRUSHER_CLOSE_OPTIONS@@@Z @ 0x18044DDF0 (-CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSH.c)
 */

void __fastcall CMultitaskingViewControllerBase::CloseSwitchItem(
        CMultitaskingViewControllerBase *this,
        void (__fastcall ***a2)(struct ISwitchItem *, GUID *, __int64 *))
{
  void (__fastcall **v3)(struct ISwitchItem *, GUID *, __int64 *); // rbx
  __int64 *v5; // rax
  int v6; // eax
  void (__fastcall **v7)(struct ISwitchItem *, GUID *, __int64 *); // rbx
  __int64 *v8; // rax
  struct IApplicationView *v9; // rdx
  HWND WindowForView; // rax
  __int64 v11; // rbx
  _QWORD *v12; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v14; // [rsp+58h] [rbp+28h] BYREF
  __int64 v15; // [rsp+60h] [rbp+30h] BYREF
  ApplicationViewHelpers *v16; // [rsp+68h] [rbp+38h] BYREF

  v15 = 0LL;
  v3 = *a2;
  v5 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<ISwitchItemInternal>>(&v15);
  v6 = ((__int64 (__fastcall *)(struct ISwitchItem *, GUID *, __int64 *))*v3)(
         (struct ISwitchItem *)a2,
         &GUID_de9754c3_efc7_4024_99ca_fbded7bee7cb,
         v5);
  if ( v6 >= 0 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabShell>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetImpl'::`2'::impl,
      0,
      3u);
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowTabHost>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_WindowTabHost>::GetImpl'::`2'::impl)
      && Microsoft::WRL::operator!=<IApplicationViewCollection>((_QWORD *)this + 10) )
    {
      v14 = 0LL;
      v7 = *a2;
      v8 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<ISwitchItemInternal>>(&v14);
      (*v7)((struct ISwitchItem *)a2, &GUID_de9754c3_efc7_4024_99ca_fbded7bee7cb, v8);
      (*(void (__fastcall **)(__int64, ApplicationViewHelpers **))(*(_QWORD *)v14 + 24LL))(v14, &v16);
      WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(
                              (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v16,
                              v9);
      if ( GetPropW(WindowForView, (LPCWSTR)0xA920) )
        WindowTabHostTelemetry::WindowTabHostTabClosedViaAltTab();
      else
        WindowTabHostTelemetry::WindowTabHostWindowClosedViaAltTab();
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>((__int64 *)&v16);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>(&v14);
    }
    v11 = *((_QWORD *)this + 5);
    v12 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v15 + 24LL))(v15, &v14);
    ApplicationViewHelpers::CloseView(*v12, v11, 7LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>(&v14);
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x97,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\baseviewcontroller.cpp",
      (const char *)(unsigned int)v6);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>(&v15);
}
