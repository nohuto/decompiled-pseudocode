/*
 * XREFs of ?InvokeSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@@Z @ 0x1803842A0
 * Callers:
 *     ?InvokeSwitchItem@CAltTabViewController@@UEAAXPEAUISwitchItem@@@Z @ 0x180375A50 (-InvokeSwitchItem@CAltTabViewController@@UEAAXPEAUISwitchItem@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180014EB0 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180038D30 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowTabHost@@@details@wil@@QEAA_NXZ @ 0x18009BB44 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowTabHost@@@details@wil@@QEAA.c)
 *     ?WindowTabHostTabSwitchedToViaAltTab@WindowTabHostTelemetry@@SAXXZ @ 0x1800A6D3C (-WindowTabHostTabSwitchedToViaAltTab@WindowTabHostTelemetry@@SAXXZ.c)
 *     ?WindowTabHostWindowSwitchedToViaAltTab@WindowTabHostTelemetry@@SAXXZ @ 0x1800A6DE4 (-WindowTabHostWindowSwitchedToViaAltTab@WindowTabHostTelemetry@@SAXXZ.c)
 *     ??$?9UIApplicationViewCollection@@@WRL@Microsoft@@YA_NAEBV?$ComPtr@UIApplicationViewCollection@@@01@$$T@Z @ 0x1800C0B14 (--$-9UIApplicationViewCollection@@@WRL@Microsoft@@YA_NAEBV-$ComPtr@UIApplicationViewCollection@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@U?$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1801128D0 (--1-$ComPtr@U-$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collectio.c)
 *     ??B?$ComPtrRef@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x1801234E0 (--B-$ComPtrRef@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAUI.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180134468 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b42749407685350f498990f0e2f6d0f9___::CTaskWrapper__lambda_b42749407685350f498990f0e2f6d0f9_____lambda_b42749407685350f498990f0e2f6d0f9___ @ 0x180383EF4 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b42749407685350f498990f0e2f6d0f9___--CTaskW.c)
 */

void __fastcall CMultitaskingViewControllerBase::InvokeSwitchItem(
        CMultitaskingViewControllerBase *this,
        struct ISwitchItem *a2)
{
  struct IApplicationView *v4; // rdx
  HWND WindowForView; // rsi
  HANDLE PropW; // r14
  __int64 *v7; // rdi
  __int64 v8; // rbx
  __int64 *v9; // rax
  UINT v10; // eax
  const char *v11; // r9
  IUnknown *v12; // rbx
  _QWORD *v13; // rbx
  _QWORD *v14; // rax
  DWORD CurrentThreadId; // eax
  IUnknown *v16; // [rsp+30h] [rbp-18h] BYREF
  __int64 v17[2]; // [rsp+38h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+30h]
  ApplicationViewHelpers *v19; // [rsp+80h] [rbp+38h] BYREF
  __int64 v20; // [rsp+88h] [rbp+40h] BYREF
  IUnknown *v21; // [rsp+90h] [rbp+48h] BYREF
  IUnknown **v22; // [rsp+98h] [rbp+50h] BYREF

  v20 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
  (**(void (__fastcall ***)(struct ISwitchItem *, GUID *, __int64 *))a2)(
    a2,
    &GUID_de9754c3_efc7_4024_99ca_fbded7bee7cb,
    &v20);
  (*(void (__fastcall **)(__int64, ApplicationViewHelpers **))(*(_QWORD *)v20 + 24LL))(v20, &v19);
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowTabHost>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_WindowTabHost>::GetImpl'::`2'::impl)
    && Microsoft::WRL::operator!=<IApplicationViewCollection>((_QWORD *)this + 10) )
  {
    WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(
                            (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v19,
                            v4);
    PropW = GetPropW(WindowForView, (LPCWSTR)0xA920);
    if ( PropW )
    {
      v7 = (__int64 *)*((_QWORD *)this + 10);
      v21 = 0LL;
      v22 = &v21;
      v8 = *v7;
      v9 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IApplicationView>>::operator IApplicationView * *((__int64 **)&v22);
      if ( (*(int (__fastcall **)(__int64 *, HANDLE, __int64 *))(v8 + 48))(v7, PropW, v9) >= 0 )
        Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)&v19, (__int64 *)&v21);
      v10 = Msg;
      if ( Msg
        || (v10 = RegisterWindowMessageW(L"TabSwitch"), (Msg = v10) != 0)
        || (wil::details::in1diag3::_Log_GetLastError(
              retaddr,
              (void *)0x75,
              (__int64)"pcshell\\twinui\\multitaskingview\\lib\\baseviewcontroller.cpp",
              v11),
            (v10 = Msg) != 0) )
      {
        PostMessageW(WindowForView, v10, 0LL, 0LL);
        WindowTabHostTelemetry::WindowTabHostTabSwitchedToViaAltTab();
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>((__int64 *)&v21);
    }
    else
    {
      WindowTabHostTelemetry::WindowTabHostWindowSwitchedToViaAltTab();
    }
  }
  v21 = (IUnknown *)*((_QWORD *)this + 4);
  v12 = v21;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v21);
  CoAllowSetForegroundWindow(v12, 0LL);
  v16 = v12;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v16);
  v17[0] = (__int64)v19;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v17);
  v13 = 0LL;
  v14 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v14 )
    v13 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b42749407685350f498990f0e2f6d0f9___::CTaskWrapper__lambda_b42749407685350f498990f0e2f6d0f9_____lambda_b42749407685350f498990f0e2f6d0f9___(
            v14,
            &v16);
  CurrentThreadId = GetCurrentThreadId();
  SHTaskPoolQueueTask(1LL, 0LL, CurrentThreadId);
  if ( v13 )
    (*(void (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v17);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>((__int64 *)&v19);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
}
