/*
 * XREFs of ??1?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18026991C
 * Callers:
 *     ??1TabViewManager_CloseView@TabViewManagerTraceLogging@@QEAA@XZ @ 0x18026A178 (--1TabViewManager_CloseView@TabViewManagerTraceLogging@@QEAA@XZ.c)
 *     ??1TabViewManager_EnterFullScreen@TabViewManagerTraceLogging@@QEAA@XZ @ 0x18026A1A4 (--1TabViewManager_EnterFullScreen@TabViewManagerTraceLogging@@QEAA@XZ.c)
 *     ??1TabViewManager_ExitFullScreen@TabViewManagerTraceLogging@@QEAA@XZ @ 0x18026A1D0 (--1TabViewManager_ExitFullScreen@TabViewManagerTraceLogging@@QEAA@XZ.c)
 *     ??1TabViewManager_ReplacementTabSelection@TabViewManagerTraceLogging@@QEAA@XZ @ 0x18026A370 (--1TabViewManager_ReplacementTabSelection@TabViewManagerTraceLogging@@QEAA@XZ.c)
 *     ?TryFindAndNotifyReplacementTab@TabViewManager@@AEAA?AV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIApplicationView@@@Z @ 0x18027D9B0 (-TryFindAndNotifyReplacementTab@TabViewManager@@AEAA-AV-$com_ptr_t@UIShellTab@Tabs@ComposableShe.c)
 *     ??1TabViewManager_NewViewForTab@TabViewManagerTraceLogging@@QEAA@XZ @ 0x18028D1F8 (--1TabViewManager_NewViewForTab@TabViewManagerTraceLogging@@QEAA@XZ.c)
 *     ??1TabViewManager_TabTransferCanceled@TabViewManagerTraceLogging@@QEAA@XZ @ 0x18028D224 (--1TabViewManager_TabTransferCanceled@TabViewManagerTraceLogging@@QEAA@XZ.c)
 *     ??1TabViewManager_TabTransferCompleted@TabViewManagerTraceLogging@@QEAA@XZ @ 0x18028D250 (--1TabViewManager_TabTransferCompleted@TabViewManagerTraceLogging@@QEAA@XZ.c)
 *     ??1TabViewManager_TabTransferStarted@TabViewManagerTraceLogging@@QEAA@XZ @ 0x18028D27C (--1TabViewManager_TabTransferStarted@TabViewManagerTraceLogging@@QEAA@XZ.c)
 *     _lambda_63df1022615e5d58b392f54f931127cc_::operator() @ 0x18028D890 (_lambda_63df1022615e5d58b392f54f931127cc_--operator().c)
 *     ?PerformCancel@TabTransferManager@@AEAAX_N@Z @ 0x18028F130 (-PerformCancel@TabTransferManager@@AEAAX_N@Z.c)
 *     ?PerformComplete@TabTransferManager@@AEAAXXZ @ 0x18028F274 (-PerformComplete@TabTransferManager@@AEAAXXZ.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180022028 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$ActivityData@VTabShellTelemetryProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTabShellTelemetryProvider@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180269A64 (--1-$ActivityData@VTabShellTelemetryProvider@@U_TlgReflectorTag_Param0IsProviderTyp_ea_180269A64.c)
 *     ?reset@?$shared_object@V?$ActivityData@VTabShellTelemetryProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18028126C (-reset@-$shared_object@V-$ActivityData@VTabShellTelemetryProvider@@U_TlgReflectorTa_ea_18028126C.c)
 */

void __fastcall wil::ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::shared_object<wil::ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TabShellTelemetryProvider,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 304);
  wil::ActivityBase<TabShellTelemetryProvider,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TabShellTelemetryProvider,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<TabShellTelemetryProvider,_TlgReflectorTag_Param0IsProviderType>(a1 + 56);
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
