/*
 * XREFs of ??1OnRequestConsolidateView@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x18029B0C8
 * Callers:
 *     _ViewManagerBridge::OnRequestConsolidateView_::_1_::dtor$0 @ 0x18029F51C (_ViewManagerBridge--OnRequestConsolidateView_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18005E8F4 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 */

void __fastcall ViewManagerInteropTraceLogging::OnRequestConsolidateView::~OnRequestConsolidateView(
        ViewManagerInteropTraceLogging::OnRequestConsolidateView *this)
{
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::OnRequestConsolidateView::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
