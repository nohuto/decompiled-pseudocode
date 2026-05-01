/*
 * XREFs of ??1VAPositioner_AppAddedToTaskbarActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ @ 0x1803DEE90
 * Callers:
 *     ?OnAppAddedToSwitchers@VoiceAssistantPositioner@@UEAAJPEAUIImmersiveApplication@@W4APP_SWITCHER_FLAGS@@@Z @ 0x18007DC60 (-OnAppAddedToSwitchers@VoiceAssistantPositioner@@UEAAJPEAUIImmersiveApplication@@W4APP_SWITCHER_.c)
 *     _VoiceAssistantPositioner::OnAppAddedToSwitchers_::_1_::dtor$0 @ 0x180105C2C (_VoiceAssistantPositioner--OnAppAddedToSwitchers_--_1_--dtor$0.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180022028 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1803DEA88 (--1-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@_ea_1803DEA88.c)
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1803E02D0 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorT.c)
 *     ?reset@?$shared_object@V?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1803E7D58 (-reset@-$shared_object@V-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag__ea_1803E7D58.c)
 */

void __fastcall VoiceAssistantPositionerTelemetry::VAPositioner_AppAddedToTaskbarActivity::~VAPositioner_AppAddedToTaskbarActivity(
        VoiceAssistantPositionerTelemetry::VAPositioner_AppAddedToTaskbarActivity *this)
{
  *(_QWORD *)this = &VoiceAssistantPositionerTelemetry::VAPositioner_AppAddedToTaskbarActivity::`vftable';
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::details::shared_object<wil::ActivityBase<WindowManagementLogging,1,70368744177664,4,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::reset((char *)this + 304);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)this + 56);
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((VoiceAssistantPositionerTelemetry::VAPositioner_AppAddedToTaskbarActivity *)((char *)this + 8));
}
