/*
 * XREFs of ??1?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1803BE288
 * Callers:
 *     ??1VAPositioner_ControlGainedForActivationActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ @ 0x1803BE7BC (--1VAPositioner_ControlGainedForActivationActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ.c)
 *     ??1VAPositioner_ControlLostActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ @ 0x1803BE7E8 (--1VAPositioner_ControlLostActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ.c)
 *     ??1VAPositioner_DisplaySettingsChangeActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ @ 0x1803BE814 (--1VAPositioner_DisplaySettingsChangeActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ.c)
 *     ??1VAPositioner_GetCortanaAppDefaultLaunchPositionActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ @ 0x1803BE840 (--1VAPositioner_GetCortanaAppDefaultLaunchPositionActivity@VoiceAssistantPositionerTelemetry@@QE.c)
 *     ??1VAPositioner_HandleSwitchToViewActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ @ 0x1803BE86C (--1VAPositioner_HandleSwitchToViewActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ.c)
 *     ??1VAPositioner_InitializePositionActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ @ 0x1803BE898 (--1VAPositioner_InitializePositionActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ.c)
 *     ??1VAPositioner_InputHostHidingActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ @ 0x1803BE8C4 (--1VAPositioner_InputHostHidingActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ.c)
 *     ??1VAPositioner_InputHostShowingActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ @ 0x1803BE8F0 (--1VAPositioner_InputHostShowingActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ.c)
 *     ??1VAPositioner_OnViewClosingActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ @ 0x1803BE968 (--1VAPositioner_OnViewClosingActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ.c)
 *     ?ControlLost@VoiceAssistantPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown@@@Z @ 0x1803BF120 (-ControlLost@VoiceAssistantPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIU.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028ED8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1803BE368 (--1-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@_ea_1803BE368.c)
 *     ?reset@?$shared_object@V?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1803C7638 (-reset@-$shared_object@V-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag__ea_1803C7638.c)
 */

void __fastcall wil::ActivityBase<WindowManagementLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::shared_object<wil::ActivityBase<WindowManagementLogging,1,70368744177664,4,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 304);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>(a1 + 56);
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
