/*
 * XREFs of ??1NavigateAltTab@XamlSwitcherTelemetry@@QEAA@XZ @ 0x18030F788
 * Callers:
 *     Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_adedda421da4a00589298a86f7993fb7___ @ 0x18030E478 (Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_adedda421da4a00589298a86f7993fb7.c)
 *     _lambda_adedda421da4a00589298a86f7993fb7_::__lambda_adedda421da4a00589298a86f7993fb7_ @ 0x18030F638 (_lambda_adedda421da4a00589298a86f7993fb7_--__lambda_adedda421da4a00589298a86f7993fb7_.c)
 *     Platform::Details::__abi_FunctorCapture__lambda_adedda421da4a00589298a86f7993fb7__void_::_scalar_deleting_destructor_ @ 0x180310300 (Platform--Details--__abi_FunctorCapture__lambda_adedda421da4a00589298a86f7993fb7__void_--_scalar.c)
 *     ?Navigate@XamlAltTabViewHost@@UEAAJI@Z @ 0x180311700 (-Navigate@XamlAltTabViewHost@@UEAAJI@Z.c)
 *     _XamlAltTabViewHost::Navigate_::_1_::dtor$1 @ 0x18031194F (_XamlAltTabViewHost--Navigate_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1802E9214 (-Destroy@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 */

void __fastcall XamlSwitcherTelemetry::NavigateAltTab::~NavigateAltTab(XamlSwitcherTelemetry::NavigateAltTab *this)
{
  *(_QWORD *)this = &XamlSwitcherTelemetry::NavigateAltTab::`vftable';
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
