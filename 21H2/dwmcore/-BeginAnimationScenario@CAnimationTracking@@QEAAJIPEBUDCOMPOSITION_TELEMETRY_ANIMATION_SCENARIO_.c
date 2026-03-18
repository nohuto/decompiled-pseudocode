/*
 * XREFs of ?BeginAnimationScenario@CAnimationTracking@@QEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBGAEBUTelFrameInfo@1@@Z @ 0x180017F1C
 * Callers:
 *     ?TelemetryBeginAnimationScenario@CPartitionVerticalBlankScheduler@@UEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBG@Z @ 0x180017EB0 (-TelemetryBeginAnimationScenario@CPartitionVerticalBlankScheduler@@UEAAJIPEBUDCOMPOSITION_TELEME.c)
 * Callees:
 *     ?CopyScenarioInfo@CAnimationTracking@@AEAAJPEAUAnimationScenarioRunningStatistics@1@PEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@@Z @ 0x18001A080 (-CopyScenarioInfo@CAnimationTracking@@AEAAJPEAUAnimationScenarioRunningStatistics@1@PEBUDCOMPOSI.c)
 *     ?StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z @ 0x1800745D0 (-StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z.c)
 *     ?EnsureScenario@CAnimationTracking@@AEAAJPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBGIPEBU_GUID@@AEBUTelFrameInfo@1@PEAPEAUAnimationScenarioRunningStatistics@1@@Z @ 0x180077304 (-EnsureScenario@CAnimationTracking@@AEAAJPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_IN.c)
 *     ?FindScenario@CAnimationTracking@@AEAAIIPEBU_GUID@@PEAPEAUAnimationScenarioRunningStatistics@1@@Z @ 0x1800775C4 (-FindScenario@CAnimationTracking@@AEAAIIPEBU_GUID@@PEAPEAUAnimationScenarioRunningStatistics@1@@.c)
 */

__int64 __fastcall CAnimationTracking::BeginAnimationScenario(
        CAnimationTracking *this,
        unsigned int a2,
        const struct DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO *a3,
        unsigned __int16 *a4,
        const struct CAnimationTracking::TelFrameInfo *a5)
{
  unsigned int v8; // ebx
  const struct _GUID *v9; // rsi
  unsigned int Scenario; // eax
  CAnimationTracking *v11; // rcx
  struct CAnimationTracking::AnimationScenarioRunningStatistics *v12; // rdi
  unsigned int v13; // r13d
  const struct CAnimationTracking::TelFrameInfo *v14; // r15
  __int64 result; // rax
  ULONGLONG TickCount64; // rax
  __int64 v18; // r8
  bool v19; // dl
  unsigned __int16 v20; // cx
  ULONGLONG v21; // r9
  ULONGLONG v22; // r8
  unsigned __int64 v23; // rax
  struct CAnimationTracking::AnimationScenarioRunningStatistics *v24; // [rsp+90h] [rbp+18h] BYREF
  unsigned __int16 *v25; // [rsp+98h] [rbp+20h]

  v25 = a4;
  v8 = 0;
  if ( !*((_WORD *)a3 + 16) )
  {
    v9 = 0LL;
    goto LABEL_3;
  }
  v9 = (const struct _GUID *)((char *)a3 + *((unsigned __int16 *)a3 + 16));
  if ( !v9 )
    goto LABEL_3;
  result = *(_QWORD *)&v9->Data1 - 0x44BB208FE62595E5LL;
  if ( *(_QWORD *)&v9->Data1 == 0x44BB208FE62595E5LL )
    result = *(_QWORD *)v9->Data4 + 0x4B86CD2C8F080E7DLL;
  if ( result )
  {
LABEL_3:
    v24 = 0LL;
    Scenario = CAnimationTracking::FindScenario(this, a2, v9, &v24);
    v12 = v24;
    v13 = Scenario;
    v14 = a5;
    if ( v24 )
    {
      if ( v9 )
      {
        if ( *((_QWORD *)v24 + 20) && *((_QWORD *)v24 + 7) )
          return v8;
        return (unsigned int)CAnimationTracking::CopyScenarioInfo(v11, v24, a3);
      }
      TickCount64 = GetTickCount64();
      v18 = *((_QWORD *)v12 + 20);
      v19 = 0;
      v20 = *((_WORD *)a3 + 2);
      v21 = TickCount64;
      if ( *(_WORD *)(v18 + 4) >= v20 )
      {
        if ( *(_WORD *)(v18 + 4) != v20 )
          goto LABEL_24;
        v22 = *(unsigned int *)(v18 + 24);
        if ( (_DWORD)v22 )
        {
          if ( *((_QWORD *)v12 + 7) )
            v19 = TickCount64 - *((_QWORD *)v12 + 15) > v22;
          else
            v19 = (unsigned int)v22 < *((_DWORD *)a3 + 6);
        }
        if ( TickCount64 + *((unsigned int *)a3 + 6) <= *((_QWORD *)v12 + 16) && !v19 )
        {
LABEL_24:
          v23 = *((_QWORD *)v12 + 14) + 5000LL;
          if ( v21 + *((unsigned int *)a3 + 6) <= v23 )
            v23 = v21 + *((unsigned int *)a3 + 6);
          if ( *((_QWORD *)v12 + 16) < v23 )
            *((_QWORD *)v12 + 16) = v23;
          return v8;
        }
      }
      CAnimationTracking::StopAnalyzingAnimationScenario(this, v13, v14);
      v24 = 0LL;
    }
    return (unsigned int)CAnimationTracking::EnsureScenario(this, a3, v25, a2, v9, v14, &v24);
  }
  return result;
}
