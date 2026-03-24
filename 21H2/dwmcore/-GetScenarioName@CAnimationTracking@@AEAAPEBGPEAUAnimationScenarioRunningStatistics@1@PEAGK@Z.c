/*
 * XREFs of ?GetScenarioName@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z @ 0x1800B1C08
 * Callers:
 *     ?StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z @ 0x1800B0708 (-StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z.c)
 *     ?UnrefAnimationScenario@CAnimationTracking@@QEAAXI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z @ 0x1800B1558 (-UnrefAnimationScenario@CAnimationTracking@@QEAAXI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z.c)
 *     ?RefAnimationScenario@CAnimationTracking@@QEAAJI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z @ 0x1800B1718 (-RefAnimationScenario@CAnimationTracking@@QEAAJI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z.c)
 * Callees:
 *     ?ScenarioNameFromGuid@CAnimationTracking@@CAJAEBU_GUID@@PEAPEBG@Z @ 0x18006C458 (-ScenarioNameFromGuid@CAnimationTracking@@CAJAEBU_GUID@@PEAPEBG@Z.c)
 *     ?GuidToString@CAnimationTracking@@CAXAEBU_GUID@@PEAGK@Z @ 0x1800B1E34 (-GuidToString@CAnimationTracking@@CAXAEBU_GUID@@PEAGK@Z.c)
 */

unsigned __int16 *__fastcall CAnimationTracking::GetScenarioName(
        CAnimationTracking *this,
        struct CAnimationTracking::AnimationScenarioRunningStatistics *a2,
        unsigned __int16 *a3)
{
  __int64 v4; // rax
  unsigned int v6; // r8d
  const struct _GUID *v7; // r9
  unsigned __int16 *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = (unsigned __int16 *)this;
  if ( *(_DWORD *)a2 )
  {
    v4 = *((_QWORD *)a2 + 19);
    if ( v4 )
    {
      if ( *(_WORD *)(v4 + 34) )
        return (unsigned __int16 *)(v4 + *(unsigned __int16 *)(v4 + 34));
      else
        return 0LL;
    }
    else
    {
      return L"Unknown";
    }
  }
  else
  {
    v8 = 0LL;
    if ( (int)CAnimationTracking::ScenarioNameFromGuid(
                (const struct _GUID *)((char *)a2 + 4),
                (const unsigned __int16 **)&v8) < 0 )
      CAnimationTracking::GuidToString(v7, a3, v6);
    else
      return v8;
  }
  return a3;
}
