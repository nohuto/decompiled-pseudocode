/*
 * XREFs of ?GetScenarioDetails@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z @ 0x180088B74
 * Callers:
 *     ?RefAnimationScenario@CAnimationTracking@@QEAAJI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z @ 0x1800884C8 (-RefAnimationScenario@CAnimationTracking@@QEAAJI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z.c)
 *     ?StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z @ 0x180088DE0 (-StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z.c)
 * Callees:
 *     ?GuidToString@CAnimationTracking@@CAXAEBU_GUID@@PEAGK@Z @ 0x180088BE4 (-GuidToString@CAnimationTracking@@CAXAEBU_GUID@@PEAGK@Z.c)
 */

wchar_t *__fastcall CAnimationTracking::GetScenarioDetails(
        CAnimationTracking *this,
        struct CAnimationTracking::AnimationScenarioRunningStatistics *a2,
        unsigned __int16 *a3)
{
  unsigned __int16 *v3; // rbx
  __int64 v5; // rcx

  v3 = a3;
  if ( *(_DWORD *)a2 )
  {
    v5 = *((_QWORD *)a2 + 19);
    if ( !v5 )
      return word_18028970C;
    if ( !*(_WORD *)(v5 + 38) )
      return word_18028970C;
    v3 = (unsigned __int16 *)(v5 + *(unsigned __int16 *)(v5 + 38));
    if ( !v3 )
      return word_18028970C;
  }
  else
  {
    CAnimationTracking::GuidToString((const struct _GUID *)((char *)a2 + 4), a3, 0);
  }
  return v3;
}
