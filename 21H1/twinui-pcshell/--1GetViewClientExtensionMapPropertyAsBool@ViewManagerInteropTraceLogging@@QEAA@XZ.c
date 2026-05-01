/*
 * XREFs of ??1GetViewClientExtensionMapPropertyAsBool@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x18029AF3C
 * Callers:
 *     ?GetViewClientExtensionMapPropertyAsBool@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAUHSTRING__@@PEAE@Z @ 0x18029CCA0 (-GetViewClientExtensionMapPropertyAsBool@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAUHSTRING__@@PE.c)
 *     _ViewManagerBridge::GetViewClientExtensionMapPropertyAsBool_::_1_::dtor$1 @ 0x18029CF78 (_ViewManagerBridge--GetViewClientExtensionMapPropertyAsBool_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18005E8F4 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 */

void __fastcall ViewManagerInteropTraceLogging::GetViewClientExtensionMapPropertyAsBool::~GetViewClientExtensionMapPropertyAsBool(
        ViewManagerInteropTraceLogging::GetViewClientExtensionMapPropertyAsBool *this)
{
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::GetViewClientExtensionMapPropertyAsBool::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
