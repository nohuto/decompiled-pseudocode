/*
 * XREFs of ??1OnRequestBeginPresentView@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x18029B09C
 * Callers:
 *     _ViewManagerBridge::OnRequestBeginPresentView_::_1_::dtor$0 @ 0x18029F45D (_ViewManagerBridge--OnRequestBeginPresentView_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18005E8F4 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 */

void __fastcall ViewManagerInteropTraceLogging::OnRequestBeginPresentView::~OnRequestBeginPresentView(
        ViewManagerInteropTraceLogging::OnRequestBeginPresentView *this)
{
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::OnRequestBeginPresentView::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
