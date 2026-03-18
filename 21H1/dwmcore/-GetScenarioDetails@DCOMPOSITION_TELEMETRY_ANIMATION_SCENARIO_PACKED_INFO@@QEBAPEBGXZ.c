/*
 * XREFs of ?GetScenarioDetails@DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@QEBAPEBGXZ @ 0x18008A4B8
 * Callers:
 *     ?StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z @ 0x180088DA0 (-StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z.c)
 * Callees:
 *     <none>
 */

const unsigned __int16 *__fastcall DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO::GetScenarioDetails(
        DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO *this)
{
  if ( *((_WORD *)this + 19) )
    return (const unsigned __int16 *)((char *)this + *((unsigned __int16 *)this + 19));
  else
    return 0LL;
}
