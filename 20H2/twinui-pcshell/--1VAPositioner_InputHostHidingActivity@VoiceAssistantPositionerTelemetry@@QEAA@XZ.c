/*
 * XREFs of ??1VAPositioner_InputHostHidingActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ @ 0x1803DEFE4
 * Callers:
 *     ?InputHostHiding@VoiceAssistantPositioner@@UEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z @ 0x1803E0ED0 (-InputHostHiding@VoiceAssistantPositioner@@UEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1803E02D0 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorT.c)
 */

void __fastcall VoiceAssistantPositionerTelemetry::VAPositioner_InputHostHidingActivity::~VAPositioner_InputHostHidingActivity(
        VoiceAssistantPositionerTelemetry::VAPositioner_InputHostHidingActivity *this)
{
  *(_QWORD *)this = &VoiceAssistantPositionerTelemetry::VAPositioner_InputHostHidingActivity::`vftable';
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
