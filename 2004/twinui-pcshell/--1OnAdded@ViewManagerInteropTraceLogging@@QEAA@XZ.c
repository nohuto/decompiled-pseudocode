/*
 * XREFs of ??1OnAdded@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x1802BCB60
 * Callers:
 *     _ViewManagerBridge::OnAdded_::_1_::dtor$1 @ 0x1802BFC48 (_ViewManagerBridge--OnAdded_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18005F324 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 */

void __fastcall ViewManagerInteropTraceLogging::OnAdded::~OnAdded(ViewManagerInteropTraceLogging::OnAdded *this)
{
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::OnAdded::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
