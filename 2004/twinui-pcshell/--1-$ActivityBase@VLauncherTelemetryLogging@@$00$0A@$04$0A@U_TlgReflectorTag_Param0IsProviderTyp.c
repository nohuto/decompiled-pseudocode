/*
 * XREFs of ??1?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18001C5C0
 * Callers:
 *     ??1GetImmersiveMonitor@StartWindowTelemetry@@QEAA@XZ @ 0x18001A57C (--1GetImmersiveMonitor@StartWindowTelemetry@@QEAA@XZ.c)
 *     ??1PerformDelayedInitialization@StartWindowTelemetry@@QEAA@XZ @ 0x18032B758 (--1PerformDelayedInitialization@StartWindowTelemetry@@QEAA@XZ.c)
 *     ??1SubscribeToServices@StartWindowTelemetry@@QEAA@XZ @ 0x18032B784 (--1SubscribeToServices@StartWindowTelemetry@@QEAA@XZ.c)
 *     ??1UnsubscribeFromServices@StartWindowTelemetry@@QEAA@XZ @ 0x18032B7B0 (--1UnsubscribeFromServices@StartWindowTelemetry@@QEAA@XZ.c)
 *     ??1ActivateHoldingTankWindow@StartWindowTelemetry@@QEAA@XZ @ 0x180337F58 (--1ActivateHoldingTankWindow@StartWindowTelemetry@@QEAA@XZ.c)
 *     ??1CreateHoldingTankWindow@StartWindowTelemetry@@QEAA@XZ @ 0x180337F84 (--1CreateHoldingTankWindow@StartWindowTelemetry@@QEAA@XZ.c)
 *     ??1FocusHoldingTank@@QEAA@XZ @ 0x180337FB0 (--1FocusHoldingTank@@QEAA@XZ.c)
 *     ?s_WndProc@FocusHoldingTank@@CA_JPEAUHWND__@@I_K_J@Z @ 0x1803390D0 (-s_WndProc@FocusHoldingTank@@CA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ??1?$ActivityData@VLauncherTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18001C600 (--1-$ActivityData@VLauncherTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activity.c)
 *     ?reset@?$shared_object@V?$ActivityData@VLauncherTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180087D44 (-reset@-$shared_object@V-$ActivityData@VLauncherTelemetryLogging@@U_TlgReflectorTag_ea_180087D44.c)
 */

void __fastcall wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::shared_object<wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<LauncherTelemetryLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 304);
  wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<LauncherTelemetryLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<LauncherTelemetryLogging,_TlgReflectorTag_Param0IsProviderType>(a1 + 56);
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
