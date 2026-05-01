/*
 * XREFs of ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1801EFB94
 * Callers:
 *     ??1TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1800BD298 (--1TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     _lambda_78c4d568eef31da123ac7a5ea8376aa4_::operator() @ 0x1800BD344 (_lambda_78c4d568eef31da123ac7a5ea8376aa4_--operator().c)
 *     ?Invoke@?$CAsyncCallbackWithLambda@V_lambda_70db04ee97ce611edc9e35899f670330_@@@@UEAAJJ@Z @ 0x1801F3D50 (-Invoke@-$CAsyncCallbackWithLambda@V_lambda_70db04ee97ce611edc9e35899f670330_@@@@UEAAJJ@Z.c)
 *     ?ShutdownServices@PenWorkspaceDiscoverBroker@@UEAAJPEAUIProfferService@@@Z @ 0x1801F9240 (-ShutdownServices@PenWorkspaceDiscoverBroker@@UEAAJPEAUIProfferService@@@Z.c)
 *     _wil::details::WaitForCompletion_Windows::Foundation::IAsyncOperation_Windows::Devices::Lights::LampArray_______::_2_::CompletionDelegate::Invoke @ 0x180210CB0 (_wil--details--WaitForCompletion_Windows--Foundation--IAsyncOperation_Windows--Devi_ea_180210CB0.c)
 *     ?Shutdown@WindowGroupManager@@UEAAXXZ @ 0x180273820 (-Shutdown@WindowGroupManager@@UEAAXXZ.c)
 *     ?UnsubscribeFromServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x180287540 (-UnsubscribeFromServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     _ViewManagerBridge::InitializeAndRunCoreUiMessageLoop_::_1_::catch$3 @ 0x18029DA0C (_ViewManagerBridge--InitializeAndRunCoreUiMessageLoop_--_1_--catch$3.c)
 *     ?OnConnected@ViewManagerBridge@@UEAAJPEAUIMessageProxy@@@Z @ 0x18029E200 (-OnConnected@ViewManagerBridge@@UEAAJPEAUIMessageProxy@@@Z.c)
 *     _WindowManagerBridge::RuntimeClassInitialize_::_1_::catch$0 @ 0x1802B73D1 (_WindowManagerBridge--RuntimeClassInitialize_--_1_--catch$0.c)
 *     ?Uninitialize@WindowManagerBridge@@UEAAXXZ @ 0x1802B79F0 (-Uninitialize@WindowManagerBridge@@UEAAXXZ.c)
 *     ?WindowManagerWatcherConnected@WindowManagerBridge@@AEAAJXZ @ 0x1802B81BC (-WindowManagerWatcherConnected@WindowManagerBridge@@AEAAJXZ.c)
 *     ??1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ @ 0x18042AABC (--1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ.c)
 *     ?HandleState@AssistantLightManager@Lighting@TwinUI@@QEAAXW4AssistantState@2Cortana@@@Z @ 0x18042B34C (-HandleState@AssistantLightManager@Lighting@TwinUI@@QEAAXW4AssistantState@2Cortana@@@Z.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801181E4 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::details::SetEvent(wil::details *this, void *a2)
{
  const char *v2; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !SetEvent(this) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x91C,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/resource.h",
      v2);
    __debugbreak();
  }
}
