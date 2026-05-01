/*
 * XREFs of ??1OnSystemKeyPressedComplete@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x18029B14C
 * Callers:
 *     _ViewManagerBridge::OnSystemKeyPressedComplete_::_1_::dtor$0 @ 0x18029F8C9 (_ViewManagerBridge--OnSystemKeyPressedComplete_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18005E8F4 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 */

void __fastcall ViewManagerInteropTraceLogging::OnSystemKeyPressedComplete::~OnSystemKeyPressedComplete(
        ViewManagerInteropTraceLogging::OnSystemKeyPressedComplete *this)
{
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::OnSystemKeyPressedComplete::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
