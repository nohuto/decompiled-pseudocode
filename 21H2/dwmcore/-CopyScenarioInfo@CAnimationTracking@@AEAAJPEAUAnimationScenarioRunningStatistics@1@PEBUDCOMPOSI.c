/*
 * XREFs of ?CopyScenarioInfo@CAnimationTracking@@AEAAJPEAUAnimationScenarioRunningStatistics@1@PEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@@Z @ 0x18001A080
 * Callers:
 *     ?BeginAnimationScenario@CAnimationTracking@@QEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBGAEBUTelFrameInfo@1@@Z @ 0x180017F1C (-BeginAnimationScenario@CAnimationTracking@@QEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_.c)
 *     ?EnsureScenario@CAnimationTracking@@AEAAJPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBGIPEBU_GUID@@AEBUTelFrameInfo@1@PEAPEAUAnimationScenarioRunningStatistics@1@@Z @ 0x180077304 (-EnsureScenario@CAnimationTracking@@AEAAJPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_IN.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     memcpy_0 @ 0x18010517F (memcpy_0.c)
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
    v9 = (void *)*((_QWORD *)a2 + 20);
    if ( v9 )
      DefaultHeap::Free(v9);
    *((_QWORD *)a2 + 20) = v8;
  }
  else
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024882, 0x364u, 0LL);
  }
  return v5;
}
