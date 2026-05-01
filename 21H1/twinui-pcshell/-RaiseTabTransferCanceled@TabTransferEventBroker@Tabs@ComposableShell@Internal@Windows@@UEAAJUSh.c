/*
 * XREFs of ?RaiseTabTransferCanceled@TabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@UEAAJUShellTabId@2345@@Z @ 0x180268DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$DoInvoke@V_lambda_9e0ae8d731b4f3e7b636b1866b829d88_@@@?$EventSource@U?$ITypedEventHandler@PEAVTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@UShellTabId@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_9e0ae8d731b4f3e7b636b1866b829d88_@@@Z @ 0x1802678B4 (--$DoInvoke@V_lambda_9e0ae8d731b4f3e7b636b1866b829d88_@@@-$EventSource@U-$ITypedEventHandler@PEA.c)
 */

__int64 __fastcall Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker::RaiseTabTransferCanceled(
        RTL_SRWLOCK *a1,
        __int128 *a2)
{
  __int128 v2; // xmm0
  int v3; // eax
  unsigned int v4; // ebx
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int128 v7; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  v2 = *a2;
  v9 = 0LL;
  *(_QWORD *)&v6 = &v9;
  *((_QWORD *)&v6 + 1) = &v7;
  v7 = v2;
  v3 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker *,Windows::Internal::ComposableShell::Tabs::ShellTabId>,Microsoft::WRL::InvokeModeOptions<-2>>::DoInvoke<_lambda_9e0ae8d731b4f3e7b636b1866b829d88_>(
         a1 + 16,
         &v6);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x7B,
    (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfereventbroker.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
