/*
 * XREFs of ??1?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18024858C
 * Callers:
 *     ??1TabViewManager_CloseView@TabViewManagerTraceLogging@@QEAA@XZ @ 0x180248DE8 (--1TabViewManager_CloseView@TabViewManagerTraceLogging@@QEAA@XZ.c)
 *     ??1TabViewManager_EnterFullScreen@TabViewManagerTraceLogging@@QEAA@XZ @ 0x180248E14 (--1TabViewManager_EnterFullScreen@TabViewManagerTraceLogging@@QEAA@XZ.c)
 *     ??1TabViewManager_ExitFullScreen@TabViewManagerTraceLogging@@QEAA@XZ @ 0x180248E40 (--1TabViewManager_ExitFullScreen@TabViewManagerTraceLogging@@QEAA@XZ.c)
 *     ??1TabViewManager_ReplacementTabSelection@TabViewManagerTraceLogging@@QEAA@XZ @ 0x180248FE0 (--1TabViewManager_ReplacementTabSelection@TabViewManagerTraceLogging@@QEAA@XZ.c)
 *     ?TryFindAndNotifyReplacementTab@TabViewManager@@AEAA?AV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIApplicationView@@@Z @ 0x18025C620 (-TryFindAndNotifyReplacementTab@TabViewManager@@AEAA-AV-$com_ptr_t@UIShellTab@Tabs@ComposableShe.c)
 *     ??1TabViewManager_NewViewForTab@TabViewManagerTraceLogging@@QEAA@XZ @ 0x18026BE58 (--1TabViewManager_NewViewForTab@TabViewManagerTraceLogging@@QEAA@XZ.c)
 *     ??1TabViewManager_TabTransferCanceled@TabViewManagerTraceLogging@@QEAA@XZ @ 0x18026BE84 (--1TabViewManager_TabTransferCanceled@TabViewManagerTraceLogging@@QEAA@XZ.c)
 *     ??1TabViewManager_TabTransferCompleted@TabViewManagerTraceLogging@@QEAA@XZ @ 0x18026BEB0 (--1TabViewManager_TabTransferCompleted@TabViewManagerTraceLogging@@QEAA@XZ.c)
 *     ??1TabViewManager_TabTransferStarted@TabViewManagerTraceLogging@@QEAA@XZ @ 0x18026BEDC (--1TabViewManager_TabTransferStarted@TabViewManagerTraceLogging@@QEAA@XZ.c)
 *     _lambda_63df1022615e5d58b392f54f931127cc_::operator() @ 0x18026C4F0 (_lambda_63df1022615e5d58b392f54f931127cc_--operator().c)
 *     ?PerformCancel@TabTransferManager@@AEAAX_N@Z @ 0x18026DD90 (-PerformCancel@TabTransferManager@@AEAAX_N@Z.c)
 *     ?PerformComplete@TabTransferManager@@AEAAXXZ @ 0x18026DED4 (-PerformComplete@TabTransferManager@@AEAAXXZ.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028ED8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$ActivityData@VTabShellTelemetryProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTabShellTelemetryProvider@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1802486D4 (--1-$ActivityData@VTabShellTelemetryProvider@@U_TlgReflectorTag_Param0IsProviderTyp_ea_1802486D4.c)
 *     ?reset@?$shared_object@V?$ActivityData@VTabShellTelemetryProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18025FEDC (-reset@-$shared_object@V-$ActivityData@VTabShellTelemetryProvider@@U_TlgReflectorTa_ea_18025FEDC.c)
 */

void __fastcall wil::ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::shared_object<wil::ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TabShellTelemetryProvider,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 304);
  wil::ActivityBase<TabShellTelemetryProvider,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TabShellTelemetryProvider,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<TabShellTelemetryProvider,_TlgReflectorTag_Param0IsProviderType>(a1 + 56);
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
