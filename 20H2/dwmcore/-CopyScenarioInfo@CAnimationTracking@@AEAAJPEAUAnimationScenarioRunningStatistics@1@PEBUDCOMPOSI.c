/*
 * XREFs of ?CopyScenarioInfo@CAnimationTracking@@AEAAJPEAUAnimationScenarioRunningStatistics@1@PEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@@Z @ 0x180029528
 * Callers:
 *     ?BeginAnimationScenario@CAnimationTracking@@QEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBGAEBUTelFrameInfo@1@@Z @ 0x18002880C (-BeginAnimationScenario@CAnimationTracking@@QEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_.c)
 *     ?EnsureScenario@CAnimationTracking@@AEAAJPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBGIPEBU_GUID@@AEBUTelFrameInfo@1@PEAPEAUAnimationScenarioRunningStatistics@1@@Z @ 0x180028DB0 (-EnsureScenario@CAnimationTracking@@AEAAJPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_IN.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180066E94 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     memcpy_0 @ 0x1800EE9CB (memcpy_0.c)
 */

__int64 __fastcall CAnimationTracking::CopyScenarioInfo(
        CAnimationTracking *this,
        struct CAnimationTracking::AnimationScenarioRunningStatistics *a2,
        const struct DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO *a3)
{
  unsigned int v5; // ebx
  void *v6; // rax
  unsigned int v7; // ecx
  void *v8; // rdi
  void *v9; // rcx

  v5 = 0;
  v6 = DefaultHeap::Alloc(*((unsigned __int16 *)a3 + 1));
  v8 = v6;
  if ( v6 )
  {
    memcpy_0(v6, a3, *((unsigned __int16 *)a3 + 1));
    v9 = (void *)*((_QWORD *)a2 + 19);
    if ( v9 )
      operator delete(v9);
    *((_QWORD *)a2 + 19) = v8;
  }
  else
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024882, 0x34Bu, 0LL);
  }
  return v5;
}
