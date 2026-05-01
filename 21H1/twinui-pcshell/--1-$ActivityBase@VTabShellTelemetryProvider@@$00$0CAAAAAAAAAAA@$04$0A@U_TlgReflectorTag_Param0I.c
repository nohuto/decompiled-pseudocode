/*
 * XREFs of ??1?$ActivityBase@VTabShellTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180143248
 * Callers:
 *     ?DragLeave@CAppViewManager@@UEAAJAEBU_GUID@@UtagPOINT@@@Z @ 0x1801459A0 (-DragLeave@CAppViewManager@@UEAAJAEBU_GUID@@UtagPOINT@@@Z.c)
 *     ??1GroupWindowTemplateAppliedToView@TabViewManagerMeasures@@QEAA@XZ @ 0x1802747AC (--1GroupWindowTemplateAppliedToView@TabViewManagerMeasures@@QEAA@XZ.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028ED8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$ActivityData@VTabShellTelemetryProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTabShellTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1801432C0 (--1-$ActivityData@VTabShellTelemetryProvider@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activit.c)
 *     ?reset@?$shared_object@V?$ActivityData@VTabShellTelemetryProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTabShellTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18014EEB8 (-reset@-$shared_object@V-$ActivityData@VTabShellTelemetryProvider@@U_TlgReflectorTag_Param0IsPro.c)
 */

void __fastcall wil::ActivityBase<TabShellTelemetryProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TabShellTelemetryProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::shared_object<wil::ActivityBase<TabShellTelemetryProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TabShellTelemetryProvider,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 304);
  wil::ActivityBase<TabShellTelemetryProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TabShellTelemetryProvider,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<TabShellTelemetryProvider,_TlgReflectorTag_Param0IsProviderType>(a1 + 56);
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
