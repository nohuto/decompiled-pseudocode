/*
 * XREFs of ??1RequestNavigateToView@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x18027EF40
 * Callers:
 *     _ViewEventDispatcher::ViewNavigationRequested_::_1_::dtor$0 @ 0x180288B81 (_ViewEventDispatcher--ViewNavigationRequested_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18005E8F4 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 */

void __fastcall ViewManagerInteropTraceLogging::RequestNavigateToView::~RequestNavigateToView(
        ViewManagerInteropTraceLogging::RequestNavigateToView *this)
{
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::RequestNavigateToView::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
