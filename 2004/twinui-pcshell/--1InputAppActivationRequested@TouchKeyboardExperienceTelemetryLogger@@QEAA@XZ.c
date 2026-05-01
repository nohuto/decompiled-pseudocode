/*
 * XREFs of ??1InputAppActivationRequested@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x180347F1C
 * Callers:
 *     ?OnInputAppChangeApproved@TouchKeyboardExperienceManager@@QEAAJPEBG@Z @ 0x18034DFE0 (-OnInputAppChangeApproved@TouchKeyboardExperienceManager@@QEAAJPEBG@Z.c)
 *     _TouchKeyboardExperienceManager::OnInputAppChangeApproved_::_1_::dtor$0 @ 0x18034E21D (_TouchKeyboardExperienceManager--OnInputAppChangeApproved_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18034927C (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_T.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested::~InputAppActivationRequested(
        TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested *this)
{
  *(_QWORD *)this = &TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
