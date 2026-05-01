/*
 * XREFs of ??0XamlAltTabViewController@@QE$AAA@PEAUIAltTabViewHost@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewManager@@PEAUIInspectable@@PEAUITabViewManager@@@Z @ 0x18031EBD4
 * Callers:
 *     ?Initialize@XamlAltTabViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z @ 0x180310C70 (-Initialize@XamlAltTabViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIPrivilegedForegroundOperations@@@Z @ 0x18015A7B8 (--4-$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEA.c)
 *     ??0?$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1802F9CB8 (--0-$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag__ea_1802F9CB8.c)
 *     ??0XamlBaseViewController@@IE$AAA@XZ @ 0x180323F34 (--0XamlBaseViewController@@IE$AAA@XZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall XamlAltTabViewController::XamlAltTabViewController(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 (__fastcall ***a5)(_QWORD, GUID *, __int64),
        __int64 a6,
        __int64 a7)
{
  __int64 (__fastcall *v11)(_QWORD, GUID *, __int64); // rsi
  __int64 v12; // rcx
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  XamlBaseViewController::XamlBaseViewController(a1 + 8);
  *(_QWORD *)a1 = &XamlAltTabViewController::`vftable';
  *(_QWORD *)(a1 + 8) = &XamlAltTabViewController::`vftable'{for `__IXamlBaseViewControllerPublicNonVirtuals'};
  *(_QWORD *)(a1 + 16) = &XamlAltTabViewController::`vftable'{for `IXamlMultitaskingViewController'};
  *(_QWORD *)(a1 + 24) = &XamlAltTabViewController::`vftable'{for `IXamlSwitcherWindowInteractionEvents'};
  *(_QWORD *)(a1 + 32) = &XamlAltTabViewController::`vftable'{for `Platform::Object's `XamlBaseViewController'};
  *(_QWORD *)(a1 + 40) = &XamlAltTabViewController::`vftable'{for `__abi_IUnknown's `XamlBaseViewController'};
  *(_QWORD *)(a1 + 48) = &XamlAltTabViewController::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource's `XamlBaseViewController'};
  *(_QWORD *)(a1 + 144) = &XamlAltTabViewController::`vftable'{for `__abi_IUnknown's `Platform::Details::IWeakReferenceSource'};
  *(_QWORD *)(a1 + 152) = &XamlAltTabViewController::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource'};
  *(_OWORD *)(a1 + 168) = 0LL;
  *(_OWORD *)(a1 + 184) = 0LL;
  *(_OWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 216) = 0LL;
  *(_QWORD *)(a1 + 224) = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  wil::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)(a1 + 256),
    (__int64)"ShowAltTab");
  *(_QWORD *)(a1 + 256) = &XamlSwitcherTelemetry::ShowAltTab::`vftable';
  wil::com_ptr_t<IPrivilegedForegroundOperations,wil::err_exception_policy>::operator=((__int64 *)(a1 + 64), a3);
  wil::com_ptr_t<IPrivilegedForegroundOperations,wil::err_exception_policy>::operator=((__int64 *)(a1 + 72), a4);
  wil::com_ptr_t<IPrivilegedForegroundOperations,wil::err_exception_policy>::operator=((__int64 *)(a1 + 56), a2);
  v11 = **a5;
  v12 = *(_QWORD *)(a1 + 80);
  *(_QWORD *)(a1 + 80) = 0LL;
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  v13 = v11(a5, &GUID_9290b92b_b0cf_4e86_b3bc_98d456e2f29f, a1 + 80);
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      27LL,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlalttabviewcontroller.cpp",
      (const char *)(unsigned int)v13);
    __debugbreak();
  }
  wil::com_ptr_t<IPrivilegedForegroundOperations,wil::err_exception_policy>::operator=((__int64 *)(a1 + 104), a6);
  wil::com_ptr_t<IPrivilegedForegroundOperations,wil::err_exception_policy>::operator=((__int64 *)(a1 + 96), a7);
  return a1;
}
