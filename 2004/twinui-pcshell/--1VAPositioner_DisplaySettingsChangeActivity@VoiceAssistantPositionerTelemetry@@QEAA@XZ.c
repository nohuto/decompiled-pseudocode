/*
 * XREFs of ??1VAPositioner_DisplaySettingsChangeActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ @ 0x1803DF874
 * Callers:
 *     ?DisplaySettingsChange@VoiceAssistantPositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1803E0D70 (-DisplaySettingsChange@VoiceAssistantPositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR.c)
 *     _VoiceAssistantPositioner::DisplaySettingsChange_::_1_::dtor$0 @ 0x1803E0E35 (_VoiceAssistantPositioner--DisplaySettingsChange_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1803E0C10 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorT.c)
 */

void __fastcall VoiceAssistantPositionerTelemetry::VAPositioner_DisplaySettingsChangeActivity::~VAPositioner_DisplaySettingsChangeActivity(
        VoiceAssistantPositionerTelemetry::VAPositioner_DisplaySettingsChangeActivity *this)
{
  *(_QWORD *)this = &VoiceAssistantPositionerTelemetry::VAPositioner_DisplaySettingsChangeActivity::`vftable';
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
