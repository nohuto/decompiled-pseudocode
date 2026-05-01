/*
 * XREFs of ?add_TabTransferCompleted@TabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@UShellTabId@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z @ 0x18028AE90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Add@?$AgileEventSource@U?$ITypedEventHandler@PEAVTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@UShellTabId@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAU?$ITypedEventHandler@PEAVTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@UShellTabId@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x18028A1BC (-Add@-$AgileEventSource@U-$ITypedEventHandler@PEAVTabTransferEventBroker@Tabs@ComposableShell@In.c)
 */

__int64 __fastcall Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker::add_TabTransferCompleted(
        __int64 a1,
        __int64 a2,
        struct IUnknown **a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = Microsoft::WRL::AgileEventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker *,Windows::Internal::ComposableShell::Tabs::ShellTabId>,Microsoft::WRL::InvokeModeOptions<-2>>::Add(
         a1 + 104,
         a2,
         a3);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA5,
    (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfereventbroker.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
