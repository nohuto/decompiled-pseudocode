/*
 * XREFs of Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_7e6d277de2b049706e6768307ccc7deb___ @ 0x18030E318
 * Callers:
 *     ?SwitchToSelectedItemAndDismiss@XamlAltTabViewHost@@UEAAJXZ @ 0x1803130F0 (-SwitchToSelectedItemAndDismiss@XamlAltTabViewHost@@UEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z @ 0x1802EC718 (--0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z.c)
 *     _lambda_7e6d277de2b049706e6768307ccc7deb_::_lambda_7e6d277de2b049706e6768307ccc7deb_ @ 0x18030EC94 (_lambda_7e6d277de2b049706e6768307ccc7deb_--_lambda_7e6d277de2b049706e6768307ccc7deb_.c)
 *     ??1SwitchToSelectedItemAndDismiss@XamlSwitcherTelemetry@@QEAA@XZ @ 0x18030F7E0 (--1SwitchToSelectedItemAndDismiss@XamlSwitcherTelemetry@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_7e6d277de2b049706e6768307ccc7deb___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rsi
  _QWORD *v5; // rbx
  _BYTE v7[320]; // [rsp+30h] [rbp-168h] BYREF
  _QWORD *v8; // [rsp+170h] [rbp-28h]

  v8 = a2;
  Platform::Delegate::Delegate(a1 + 2);
  *a1 = &Windows::UI::Core::DispatchedHandler::`vftable'{for `__abi_IUnknown'};
  a1[1] = &Windows::UI::Core::DispatchedHandler::`vftable'{for `Platform::Object'};
  a1[2] = &Windows::UI::Core::DispatchedHandler::`vftable';
  __abi_FTMWeakRefData::__abi_FTMWeakRefData((__int64)(a1 + 3));
  a1[37] = a1 + 5;
  v4 = Platform::Details::Heap::Allocate(0x148uLL);
  if ( v4 )
  {
    v5 = (_QWORD *)lambda_7e6d277de2b049706e6768307ccc7deb_::_lambda_7e6d277de2b049706e6768307ccc7deb_(v7, a2);
    *v4 = &off_1805C7B78;
    lambda_7e6d277de2b049706e6768307ccc7deb_::_lambda_7e6d277de2b049706e6768307ccc7deb_(v4 + 1, v5);
    XamlSwitcherTelemetry::SwitchToSelectedItemAndDismiss::~SwitchToSelectedItemAndDismiss((XamlSwitcherTelemetry::SwitchToSelectedItemAndDismiss *)(v5 + 1));
    if ( *v5 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 16LL))(*v5);
  }
  else
  {
    v4 = 0LL;
  }
  a1[37] = v4;
  XamlSwitcherTelemetry::SwitchToSelectedItemAndDismiss::~SwitchToSelectedItemAndDismiss((XamlSwitcherTelemetry::SwitchToSelectedItemAndDismiss *)(a2 + 1));
  if ( *a2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
  return a1;
}
