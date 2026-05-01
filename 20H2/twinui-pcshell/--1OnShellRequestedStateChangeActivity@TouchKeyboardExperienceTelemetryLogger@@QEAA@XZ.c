/*
 * XREFs of ??1OnShellRequestedStateChangeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18035A684
 * Callers:
 *     ?ExecuteDeferredRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4DeferredShowRequestExecutionReason@2@@Z @ 0x18035C670 (-ExecuteDeferredRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4DeferredShowRequestExecutionReason.c)
 *     _KeyboardHosting::TabTipAdapter::ExecuteDeferredRequest_::_1_::dtor$3 @ 0x18035CA56 (_KeyboardHosting--TabTipAdapter--ExecuteDeferredRequest_--_1_--dtor$3.c)
 *     ?OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@W4ShellRequestedStateChangeReason@2@@Z @ 0x180360B10 (-OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Tex.c)
 *     _KeyboardHosting::TabTipAdapter::OnShellRequestedStateChange_::_1_::dtor$0 @ 0x180360D56 (_KeyboardHosting--TabTipAdapter--OnShellRequestedStateChange_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18034881C (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_T.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::OnShellRequestedStateChangeActivity::~OnShellRequestedStateChangeActivity(
        TouchKeyboardExperienceTelemetryLogger::OnShellRequestedStateChangeActivity *this)
{
  *(_QWORD *)this = &TouchKeyboardExperienceTelemetryLogger::OnShellRequestedStateChangeActivity::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
