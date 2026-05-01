/*
 * XREFs of ??1OnRequestApplicationViewSwitcherOperation@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x1802BC320
 * Callers:
 *     ?OnRequestApplicationViewSwitcherOperation@ViewManagerBridge@@AEAAJIIPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1802BFE68 (-OnRequestApplicationViewSwitcherOperation@ViewManagerBridge@@AEAAJIIPEAUIPropertySet@Collection.c)
 *     _ViewManagerBridge::OnRequestApplicationViewSwitcherOperation_::_1_::dtor$3 @ 0x1802C0562 (_ViewManagerBridge--OnRequestApplicationViewSwitcherOperation_--_1_--dtor$3.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18007963C (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 */

void __fastcall ViewManagerInteropTraceLogging::OnRequestApplicationViewSwitcherOperation::~OnRequestApplicationViewSwitcherOperation(
        ViewManagerInteropTraceLogging::OnRequestApplicationViewSwitcherOperation *this)
{
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::OnRequestApplicationViewSwitcherOperation::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
