/*
 * XREFs of ?BeginAnimationScenario@CAnimationTracking@@QEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBGAEBUTelFrameInfo@1@@Z @ 0x1800B132C
 * Callers:
 *     ?TelemetryBeginAnimationScenario@CPartitionVerticalBlankScheduler@@UEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBG@Z @ 0x1800B12C0 (-TelemetryBeginAnimationScenario@CPartitionVerticalBlankScheduler@@UEAAJIPEBUDCOMPOSITION_TELEME.c)
 * Callees:
 *     ?StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z @ 0x1800B0708 (-StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z.c)
 *     ?EnsureScenario@CAnimationTracking@@AEAAJPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBGIPEBU_GUID@@AEBUTelFrameInfo@1@PEAPEAUAnimationScenarioRunningStatistics@1@@Z @ 0x1800B18D0 (-EnsureScenario@CAnimationTracking@@AEAAJPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_IN.c)
 *     ?FindScenario@CAnimationTracking@@AEAAIIPEBU_GUID@@PEAPEAUAnimationScenarioRunningStatistics@1@@Z @ 0x1800B1B98 (-FindScenario@CAnimationTracking@@AEAAIIPEBU_GUID@@PEAPEAUAnimationScenarioRunningStatistics@1@@.c)
 *     ?CopyScenarioInfo@CAnimationTracking@@AEAAJPEAUAnimationScenarioRunningStatistics@1@PEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@@Z @ 0x1800B2048 (-CopyScenarioInfo@CAnimationTracking@@AEAAJPEAUAnimationScenarioRunningStatistics@1@PEBUDCOMPOSI.c)
 */

__int64 __fastcall CAnimationTracking::BeginAnimationScenario(
        CAnimationTracking *this,
        unsigned int a2,
        const struct DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO *a3,
        unsigned __int16 *a4,
        const struct CAnimationTracking::TelFrameInfo *a5)
{
  unsigned int v7; // ebp
  char v8; // r15
  const struct _GUID *v9; // rdi
  unsigned int Scenario; // eax
  CAnimationTracking *v11; // rcx
  struct CAnimationTracking::AnimationScenarioRunningStatistics *v12; // rbx
  unsigned int v13; // r12d
  const struct CAnimationTracking::TelFrameInfo *v14; // r13
  ULONGLONG TickCount64; // rax
  __int64 v16; // rdx
  bool v17; // r8
  unsigned __int16 v18; // cx
  ULONGLONG v19; // r10
  ULONGLONG v20; // r9
  char v21; // cl
  unsigned __int64 v22; // rax
  __int64 result; // rax
  struct CAnimationTracking::AnimationScenarioRunningStatistics *v25; // [rsp+90h] [rbp+18h] BYREF
  unsigned __int16 *v26; // [rsp+98h] [rbp+20h]

  v26 = a4;
  v7 = 0;
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
    v25 = 0LL;
    Scenario = CAnimationTracking::FindScenario(this, a2, v9, &v25);
    v12 = v25;
    v13 = Scenario;
    v14 = a5;
    if ( v25 )
    {
      if ( v9 )
      {
        if ( *((_QWORD *)v25 + 19) && *((_QWORD *)v25 + 7) )
          return v7;
        v7 = CAnimationTracking::CopyScenarioInfo(v11, v25, a3);
      }
      else
      {
        TickCount64 = GetTickCount64();
        v16 = *((_QWORD *)v12 + 19);
        v17 = 0;
        v18 = *((_WORD *)a3 + 2);
        v19 = TickCount64;
        if ( *(_WORD *)(v16 + 4) < v18 )
          goto LABEL_26;
        if ( *(_WORD *)(v16 + 4) == v18 )
        {
          v20 = *(unsigned int *)(v16 + 24);
          if ( (_DWORD)v20 )
          {
            if ( *((_QWORD *)v12 + 7) )
              v17 = TickCount64 - *((_QWORD *)v12 + 15) > v20;
            else
              v17 = (unsigned int)v20 < *((_DWORD *)a3 + 6);
          }
          v21 = v17;
          if ( TickCount64 + *((unsigned int *)a3 + 6) > *((_QWORD *)v12 + 16) )
            v21 = 1;
          if ( v21 )
          {
LABEL_26:
            CAnimationTracking::StopAnalyzingAnimationScenario(this, v13, v14);
            v25 = 0LL;
            return (unsigned int)CAnimationTracking::EnsureScenario(this, a3, v26, a2, v9, v14, &v25);
          }
        }
        v22 = *((_QWORD *)v12 + 14) + 5000LL;
        if ( v19 + *((unsigned int *)a3 + 6) <= v22 )
          v22 = v19 + *((unsigned int *)a3 + 6);
        if ( *((_QWORD *)v12 + 16) >= v22 )
          return v7;
        *((_QWORD *)v12 + 16) = v22;
      }
    }
    else
    {
      v8 = 1;
    }
    if ( (v7 & 0x80000000) != 0 || !v8 )
      return v7;
    return (unsigned int)CAnimationTracking::EnsureScenario(this, a3, v26, a2, v9, v14, &v25);
  }
  return result;
}
