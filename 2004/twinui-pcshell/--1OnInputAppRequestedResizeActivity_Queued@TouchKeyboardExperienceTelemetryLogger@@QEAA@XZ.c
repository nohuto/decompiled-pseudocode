/*
 * XREFs of ??1OnInputAppRequestedResizeActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x180348024
 * Callers:
 *     _lambda_f30574fd153fefe3a19e136921a472ba_::__lambda_f30574fd153fefe3a19e136921a472ba_ @ 0x1800AEF10 (_lambda_f30574fd153fefe3a19e136921a472ba_--__lambda_f30574fd153fefe3a19e136921a472ba_.c)
 *     ?OnInputAppRequestedResize@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@@Z @ 0x18034E59C (-OnInputAppRequestedResize@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@@Z.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1803491D4 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflector.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity_Queued::~OnInputAppRequestedResizeActivity_Queued(
        TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity_Queued *this)
{
  *(_QWORD *)this = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity_Queued::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
