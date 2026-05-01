/*
 * XREFs of ??1OnRequestEndPresentView@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x18029B0F4
 * Callers:
 *     _ViewManagerBridge::OnRequestEndPresentView_::_1_::dtor$0 @ 0x18029F600 (_ViewManagerBridge--OnRequestEndPresentView_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18005E8F4 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 */

void __fastcall ViewManagerInteropTraceLogging::OnRequestEndPresentView::~OnRequestEndPresentView(
        ViewManagerInteropTraceLogging::OnRequestEndPresentView *this)
{
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::OnRequestEndPresentView::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
