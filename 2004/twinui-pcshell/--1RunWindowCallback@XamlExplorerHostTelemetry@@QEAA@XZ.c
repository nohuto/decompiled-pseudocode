/*
 * XREFs of ??1RunWindowCallback@XamlExplorerHostTelemetry@@QEAA@XZ @ 0x1802F4F04
 * Callers:
 *     __lambda_64960682c46b5a18a905cfbd0aa4a0cd_::operator()_::_1_::dtor$0 @ 0x1802F5174 (__lambda_64960682c46b5a18a905cfbd0aa4a0cd_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1802E9B04 (-Destroy@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 */

void __fastcall XamlExplorerHostTelemetry::RunWindowCallback::~RunWindowCallback(
        XamlExplorerHostTelemetry::RunWindowCallback *this)
{
  *(_QWORD *)this = &XamlExplorerHostTelemetry::RunWindowCallback::`vftable';
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
