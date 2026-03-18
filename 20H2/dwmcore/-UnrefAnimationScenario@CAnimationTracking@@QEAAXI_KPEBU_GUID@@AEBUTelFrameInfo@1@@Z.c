/*
 * XREFs of ?UnrefAnimationScenario@CAnimationTracking@@QEAAXI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z @ 0x180028A38
 * Callers:
 *     ?TelemetryUnrefAnimationScenario@CPartitionVerticalBlankScheduler@@UEAAXI_KPEBU_GUID@@@Z @ 0x1800289D0 (-TelemetryUnrefAnimationScenario@CPartitionVerticalBlankScheduler@@UEAAXI_KPEBU_GUID@@@Z.c)
 * Callees:
 *     ?FindScenario@CAnimationTracking@@AEAAIIPEBU_GUID@@PEAPEAUAnimationScenarioRunningStatistics@1@@Z @ 0x180029078 (-FindScenario@CAnimationTracking@@AEAAIIPEBU_GUID@@PEAPEAUAnimationScenarioRunningStatistics@1@@.c)
 *     ?GetScenarioName@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z @ 0x1800290E8 (-GetScenarioName@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800EE9BF (memcmp_0.c)
 *     McTemplateU0zqqqqx_EventWriteTransfer @ 0x1801574C8 (McTemplateU0zqqqqx_EventWriteTransfer.c)
 */

void __fastcall CAnimationTracking::UnrefAnimationScenario(
        CAnimationTracking *this,
        unsigned int a2,
        __int64 a3,
        unsigned __int64 a4,
        const struct CAnimationTracking::TelFrameInfo *a5)
{
  const struct _GUID *v5; // rbx
  unsigned int v9; // r9d
  struct CAnimationTracking::AnimationScenarioRunningStatistics *v10; // rbx
  __int64 v11; // rdi
  CAnimationTracking *v12; // rcx
  _QWORD *v13; // rax
  int v14; // esi
  unsigned int v15; // ecx
  unsigned int ScenarioName; // r8d
  unsigned int v17; // eax
  __int64 v18; // rcx
  struct CAnimationTracking::AnimationScenarioRunningStatistics *v19; // [rsp+40h] [rbp-128h] BYREF
  unsigned __int16 v20[128]; // [rsp+50h] [rbp-118h] BYREF

  v5 = (const struct _GUID *)a4;
  if ( a4 )
    v5 = (const struct _GUID *)(-(__int64)(memcmp_0((const void *)a4, &GUID_NULL, 0x10uLL) != 0) & a4);
  v19 = 0LL;
  if ( CAnimationTracking::FindScenario(this, a2, v5, &v19) != *((_DWORD *)this + 6) )
  {
    v10 = v19;
    v11 = 0LL;
    v12 = (CAnimationTracking *)*((unsigned int *)v19 + 46);
    v13 = (_QWORD *)*((_QWORD *)v19 + 20);
    if ( (_DWORD)v12 )
    {
      do
      {
        if ( a3 == *v13 )
          break;
        v11 = (unsigned int)(v11 + 1);
        ++v13;
      }
      while ( (unsigned int)v11 < (unsigned int)v12 );
    }
    v14 = *((_DWORD *)v19 + 46);
    ScenarioName = (unsigned int)CAnimationTracking::GetScenarioName(v12, v19, v20, v9);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0zqqqqx_EventWriteTransfer(
        *((_DWORD *)v10 + 5),
        *((_DWORD *)v10 + 7) - *((_DWORD *)v10 + 6),
        ScenarioName,
        *((_DWORD *)v10 + 46) - ((_DWORD)v11 != v14),
        *((_BYTE *)v10 + 28) - *((_BYTE *)v10 + 24),
        *((_DWORD *)v10 + 8),
        *((_DWORD *)v10 + 5),
        a3);
    if ( (_DWORD)v11 != v14 )
    {
      v17 = *((_DWORD *)v10 + 46);
      if ( (unsigned int)v11 >= v17 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, -2147024809, 0x21Fu, 0LL);
      }
      else
      {
        v18 = v17 - 1;
        if ( (unsigned int)v11 < (unsigned int)v18 )
        {
          *(_QWORD *)(*((_QWORD *)v10 + 20) + 8 * v11) = *(_QWORD *)(*((_QWORD *)v10 + 20) + 8 * v18);
          v17 = *((_DWORD *)v10 + 46);
        }
        *((_DWORD *)v10 + 46) = v17 - 1;
      }
      if ( !*((_DWORD *)v10 + 46) )
        *((_QWORD *)v10 + 8) = *((_QWORD *)a5 + 1);
    }
  }
}
