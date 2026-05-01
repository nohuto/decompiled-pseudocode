/*
 * XREFs of _lambda_7e6d277de2b049706e6768307ccc7deb_::__lambda_7e6d277de2b049706e6768307ccc7deb_ @ 0x1802EE350
 * Callers:
 *     _Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_7e6d277de2b049706e6768307ccc7deb____::_1_::dtor$0 @ 0x1802ED196 (_Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_7e6d277de2b049706e6768307ccc7de.c)
 *     _XamlAltTabViewHost::SwitchToSelectedItemAndDismiss_::_1_::dtor$3 @ 0x1802F2092 (_XamlAltTabViewHost--SwitchToSelectedItemAndDismiss_--_1_--dtor$3.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??1SwitchToSelectedItemAndDismiss@XamlSwitcherTelemetry@@QEAA@XZ @ 0x1802EE530 (--1SwitchToSelectedItemAndDismiss@XamlSwitcherTelemetry@@QEAA@XZ.c)
 */

void __fastcall lambda_7e6d277de2b049706e6768307ccc7deb_::__lambda_7e6d277de2b049706e6768307ccc7deb_(_QWORD *a1)
{
  XamlSwitcherTelemetry::SwitchToSelectedItemAndDismiss::~SwitchToSelectedItemAndDismiss((XamlSwitcherTelemetry::SwitchToSelectedItemAndDismiss *)(a1 + 1));
  if ( *a1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
}
