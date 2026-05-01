/*
 * XREFs of ??1TouchKeyboardExperienceManagerDelayedInitialization@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x180348438
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x18034F530 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     _TouchKeyboardExperienceManager::PerformDelayedInitialization_::_1_::dtor$0 @ 0x18034F8E8 (_TouchKeyboardExperienceManager--PerformDelayedInitialization_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1803491D4 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflector.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerDelayedInitialization::~TouchKeyboardExperienceManagerDelayedInitialization(
        TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerDelayedInitialization *this)
{
  *(_QWORD *)this = &TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerDelayedInitialization::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
