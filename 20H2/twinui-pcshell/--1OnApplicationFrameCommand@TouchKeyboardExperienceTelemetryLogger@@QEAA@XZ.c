/*
 * XREFs of ??1OnApplicationFrameCommand@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x180347540
 * Callers:
 *     _lambda_9ab68852e2b72d35890b3d375991eaf9_::__lambda_9ab68852e2b72d35890b3d375991eaf9_ @ 0x1800B0B34 (_lambda_9ab68852e2b72d35890b3d375991eaf9_--__lambda_9ab68852e2b72d35890b3d375991eaf9_.c)
 *     ?OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z @ 0x18034D000 (-OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z.c)
 *     _TouchKeyboardExperienceManager::OnCommand_::_1_::dtor$0 @ 0x18034D257 (_TouchKeyboardExperienceManager--OnCommand_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180348774 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflector.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::OnApplicationFrameCommand::~OnApplicationFrameCommand(
        TouchKeyboardExperienceTelemetryLogger::OnApplicationFrameCommand *this)
{
  *(_QWORD *)this = &TouchKeyboardExperienceTelemetryLogger::OnApplicationFrameCommand::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
