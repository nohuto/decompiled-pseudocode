/*
 * XREFs of ?DeleteScenario@CAnimationTracking@@AEAAXI@Z @ 0x18008931C
 * Callers:
 *     ?StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z @ 0x180088DA0 (-StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z.c)
 *     ?TelemetryNotifyChannelDetach@CPartitionVerticalBlankScheduler@@UEAAXI@Z @ 0x1800CE8B0 (-TelemetryNotifyChannelDetach@CPartitionVerticalBlankScheduler@@UEAAXI@Z.c)
 *     ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x180156E54 (--1CPartitionVerticalBlankScheduler@@UEAA@XZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_GAnimationScenarioRunningStatistics@CAnimationTracking@@QEAAPEAXI@Z @ 0x180089380 (--_GAnimationScenarioRunningStatistics@CAnimationTracking@@QEAAPEAXI@Z.c)
 */

void __fastcall CAnimationTracking::DeleteScenario(CAnimationTracking *this, unsigned int a2)
{
  __int64 v3; // rdi
  CAnimationTracking::AnimationScenarioRunningStatistics *v4; // rcx
  unsigned int v5; // eax
  __int64 v6; // rcx

  v3 = a2;
  v4 = *(CAnimationTracking::AnimationScenarioRunningStatistics **)(*(_QWORD *)this + 8LL * a2);
  if ( v4 )
    CAnimationTracking::AnimationScenarioRunningStatistics::`scalar deleting destructor'(v4, a2);
  v5 = *((_DWORD *)this + 6);
  if ( (unsigned int)v3 >= v5 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v4, 0LL, 0, -2147024809, 0x21Fu, 0LL);
  }
  else
  {
    v6 = v5 - 1;
    if ( (unsigned int)v3 < (unsigned int)v6 )
    {
      *(_QWORD *)(*(_QWORD *)this + 8 * v3) = *(_QWORD *)(*(_QWORD *)this + 8 * v6);
      v5 = *((_DWORD *)this + 6);
    }
    *((_DWORD *)this + 6) = v5 - 1;
  }
}
