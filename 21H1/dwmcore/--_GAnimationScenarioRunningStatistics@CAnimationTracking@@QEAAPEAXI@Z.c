/*
 * XREFs of ??_GAnimationScenarioRunningStatistics@CAnimationTracking@@QEAAPEAXI@Z @ 0x180089380
 * Callers:
 *     ?DeleteScenario@CAnimationTracking@@AEAAXI@Z @ 0x18008931C (-DeleteScenario@CAnimationTracking@@AEAAXI@Z.c)
 *     ?EnsureScenario@CAnimationTracking@@AEAAJPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBGIPEBU_GUID@@AEBUTelFrameInfo@1@PEAPEAUAnimationScenarioRunningStatistics@1@@Z @ 0x180089F70 (-EnsureScenario@CAnimationTracking@@AEAAJPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_IN.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180096BB0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

CAnimationTracking::AnimationScenarioRunningStatistics *__fastcall CAnimationTracking::AnimationScenarioRunningStatistics::`scalar deleting destructor'(
        CAnimationTracking::AnimationScenarioRunningStatistics *this)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = (void *)*((_QWORD *)this + 19);
  if ( v2 )
    operator delete(v2);
  v3 = (void *)*((_QWORD *)this + 17);
  if ( v3 && *((_QWORD *)this + 18) )
    operator delete(v3);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 160);
  operator delete(this);
  return this;
}
