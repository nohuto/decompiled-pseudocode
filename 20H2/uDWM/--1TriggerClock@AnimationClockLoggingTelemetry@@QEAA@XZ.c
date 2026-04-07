/*
 * XREFs of ??1TriggerClock@AnimationClockLoggingTelemetry@@QEAA@XZ @ 0x180041350
 * Callers:
 *     ?_TriggerAnimation@CAnimationClock@@AEAAJXZ @ 0x1800411E4 (-_TriggerAnimation@CAnimationClock@@AEAAJXZ.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18002D308 (-Destroy@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProvide.c)
 */

void __fastcall AnimationClockLoggingTelemetry::TriggerClock::~TriggerClock(
        AnimationClockLoggingTelemetry::TriggerClock *this)
{
  *(_QWORD *)this = &AnimationClockLoggingTelemetry::TriggerClock::`vftable';
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
