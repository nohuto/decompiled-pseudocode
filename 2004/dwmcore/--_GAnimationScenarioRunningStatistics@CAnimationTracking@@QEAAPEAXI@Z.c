/*
 * XREFs of ??_GAnimationScenarioRunningStatistics@CAnimationTracking@@QEAAPEAXI@Z @ 0x1800893C0
 * Callers:
 *     ?EnsureScenario@CAnimationTracking@@AEAAJPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBGIPEBU_GUID@@AEBUTelFrameInfo@1@PEAPEAUAnimationScenarioRunningStatistics@1@@Z @ 0x180088680 (-EnsureScenario@CAnimationTracking@@AEAAJPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_IN.c)
 *     ?DeleteScenario@CAnimationTracking@@AEAAXI@Z @ 0x18008935C (-DeleteScenario@CAnimationTracking@@AEAAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18009B990 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
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
