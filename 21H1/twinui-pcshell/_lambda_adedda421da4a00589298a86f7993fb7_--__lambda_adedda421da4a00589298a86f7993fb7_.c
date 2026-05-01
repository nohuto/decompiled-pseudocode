/*
 * XREFs of _lambda_adedda421da4a00589298a86f7993fb7_::__lambda_adedda421da4a00589298a86f7993fb7_ @ 0x1802EE388
 * Callers:
 *     _Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_adedda421da4a00589298a86f7993fb7____::_1_::dtor$0 @ 0x1802ED2F6 (_Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_adedda421da4a00589298a86f7993fb.c)
 *     _XamlAltTabViewHost::Navigate_::_1_::dtor$3 @ 0x1802F06B7 (_XamlAltTabViewHost--Navigate_--_1_--dtor$3.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??1NavigateAltTab@XamlSwitcherTelemetry@@QEAA@XZ @ 0x1802EE4D8 (--1NavigateAltTab@XamlSwitcherTelemetry@@QEAA@XZ.c)
 */

void __fastcall lambda_adedda421da4a00589298a86f7993fb7_::__lambda_adedda421da4a00589298a86f7993fb7_(__int64 a1)
{
  __int64 v2; // rcx

  XamlSwitcherTelemetry::NavigateAltTab::~NavigateAltTab((XamlSwitcherTelemetry::NavigateAltTab *)(a1 + 16));
  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
}
