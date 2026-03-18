/*
 * XREFs of ??_GAnimationScenarioRunningStatistics@CAnimationTracking@@QEAAPEAXI@Z @ 0x180074C7C
 * Callers:
 *     ?DeleteScenario@CAnimationTracking@@AEAAXI@Z @ 0x180074C18 (-DeleteScenario@CAnimationTracking@@AEAAXI@Z.c)
 *     ?EnsureScenario@CAnimationTracking@@AEAAJPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBGIPEBU_GUID@@AEBUTelFrameInfo@1@PEAPEAUAnimationScenarioRunningStatistics@1@@Z @ 0x180077304 (-EnsureScenario@CAnimationTracking@@AEAAJPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_IN.c)
 * Callees:
 *     ??1AnimationScenarioRunningStatistics@CAnimationTracking@@QEAA@XZ @ 0x180074CA4 (--1AnimationScenarioRunningStatistics@CAnimationTracking@@QEAA@XZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

CAnimationTracking::AnimationScenarioRunningStatistics *__fastcall CAnimationTracking::AnimationScenarioRunningStatistics::`scalar deleting destructor'(
        CAnimationTracking::AnimationScenarioRunningStatistics *this)
{
  CAnimationTracking::AnimationScenarioRunningStatistics::~AnimationScenarioRunningStatistics(this);
  DefaultHeap::Free(this);
  return this;
}
