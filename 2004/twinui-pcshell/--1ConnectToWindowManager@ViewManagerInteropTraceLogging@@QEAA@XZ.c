/*
 * XREFs of ??1ConnectToWindowManager@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x1802D67AC
 * Callers:
 *     ?WaitForWindowManagerConnection@WindowManagerBridge@@UEAAJXZ @ 0x1802D95B0 (-WaitForWindowManagerConnection@WindowManagerBridge@@UEAAJXZ.c)
 *     _WindowManagerBridge::WaitForWindowManagerConnection_::_1_::dtor$0 @ 0x1802D9680 (_WindowManagerBridge--WaitForWindowManagerConnection_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18005F324 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 */

void __fastcall ViewManagerInteropTraceLogging::ConnectToWindowManager::~ConnectToWindowManager(
        ViewManagerInteropTraceLogging::ConnectToWindowManager *this)
{
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::ConnectToWindowManager::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
