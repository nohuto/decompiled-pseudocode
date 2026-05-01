/*
 * XREFs of ??1?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18026A23C
 * Callers:
 *     ??1TabViewManager_CloseView@TabViewManagerTraceLogging@@QEAA@XZ @ 0x18026AA6C (--1TabViewManager_CloseView@TabViewManagerTraceLogging@@QEAA@XZ.c)
 *     ??1TabViewManager_EnterFullScreen@TabViewManagerTraceLogging@@QEAA@XZ @ 0x18026AA98 (--1TabViewManager_EnterFullScreen@TabViewManagerTraceLogging@@QEAA@XZ.c)
 *     ??1TabViewManager_ExitFullScreen@TabViewManagerTraceLogging@@QEAA@XZ @ 0x18026AAC4 (--1TabViewManager_ExitFullScreen@TabViewManagerTraceLogging@@QEAA@XZ.c)
 *     ??1TabViewManager_ReplacementTabSelection@TabViewManagerTraceLogging@@QEAA@XZ @ 0x18026AC64 (--1TabViewManager_ReplacementTabSelection@TabViewManagerTraceLogging@@QEAA@XZ.c)
 *     ?TryFindAndNotifyReplacementTab@TabViewManager@@AEAA?AV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIApplicationView@@@Z @ 0x18027E2A0 (-TryFindAndNotifyReplacementTab@TabViewManager@@AEAA-AV-$com_ptr_t@UIShellTab@Tabs@ComposableShe.c)
 *     ??1TabViewManager_NewViewForTab@TabViewManagerTraceLogging@@QEAA@XZ @ 0x18028DAE8 (--1TabViewManager_NewViewForTab@TabViewManagerTraceLogging@@QEAA@XZ.c)
 *     ??1TabViewManager_TabTransferCanceled@TabViewManagerTraceLogging@@QEAA@XZ @ 0x18028DB14 (--1TabViewManager_TabTransferCanceled@TabViewManagerTraceLogging@@QEAA@XZ.c)
 *     ??1TabViewManager_TabTransferCompleted@TabViewManagerTraceLogging@@QEAA@XZ @ 0x18028DB40 (--1TabViewManager_TabTransferCompleted@TabViewManagerTraceLogging@@QEAA@XZ.c)
 *     ??1TabViewManager_TabTransferStarted@TabViewManagerTraceLogging@@QEAA@XZ @ 0x18028DB6C (--1TabViewManager_TabTransferStarted@TabViewManagerTraceLogging@@QEAA@XZ.c)
 *     _lambda_63df1022615e5d58b392f54f931127cc_::operator() @ 0x18028E180 (_lambda_63df1022615e5d58b392f54f931127cc_--operator().c)
 *     ?PerformCancel@TabTransferManager@@AEAAX_N@Z @ 0x18028FA20 (-PerformCancel@TabTransferManager@@AEAAX_N@Z.c)
 *     ?PerformComplete@TabTransferManager@@AEAAXXZ @ 0x18028FB64 (-PerformComplete@TabTransferManager@@AEAAXXZ.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180029718 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$ActivityData@VTabShellTelemetryProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTabShellTelemetryProvider@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18026A384 (--1-$ActivityData@VTabShellTelemetryProvider@@U_TlgReflectorTag_Param0IsProviderTyp_ea_18026A384.c)
 *     ?reset@?$shared_object@V?$ActivityData@VTabShellTelemetryProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180281B5C (-reset@-$shared_object@V-$ActivityData@VTabShellTelemetryProvider@@U_TlgReflectorTa_ea_180281B5C.c)
 */

void __fastcall wil::ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::shared_object<wil::ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TabShellTelemetryProvider,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 304);
  wil::ActivityBase<TabShellTelemetryProvider,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TabShellTelemetryProvider,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<TabShellTelemetryProvider,_TlgReflectorTag_Param0IsProviderType>(a1 + 56);
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
