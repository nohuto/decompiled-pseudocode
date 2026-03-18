/*
 * XREFs of ?UnrefAnimationScenario@CAnimationTracking@@QEAAXI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z @ 0x180076FE8
 * Callers:
 *     ?TelemetryUnrefAnimationScenario@CPartitionVerticalBlankScheduler@@UEAAXI_KPEBU_GUID@@@Z @ 0x180076F80 (-TelemetryUnrefAnimationScenario@CPartitionVerticalBlankScheduler@@UEAAXI_KPEBU_GUID@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetScenarioName@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z @ 0x180076D84 (-GetScenarioName@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z.c)
 *     ?FindScenario@CAnimationTracking@@AEAAIIPEBU_GUID@@PEAPEAUAnimationScenarioRunningStatistics@1@@Z @ 0x1800775C4 (-FindScenario@CAnimationTracking@@AEAAIIPEBU_GUID@@PEAPEAUAnimationScenarioRunningStatistics@1@@.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     memcmp_0 @ 0x180105173 (memcmp_0.c)
 *     McTemplateU0zqqqqx_EventWriteTransfer @ 0x1801CBAAC (McTemplateU0zqqqqx_EventWriteTransfer.c)
 */

void __fastcall CAnimationTracking::UnrefAnimationScenario(
        CAnimationTracking *this,
        unsigned int a2,
        __int64 a3,
        unsigned __int64 a4,
        const struct CAnimationTracking::TelFrameInfo *a5)
{
  const struct _GUID *v5; // rbx
  struct CAnimationTracking::AnimationScenarioRunningStatistics *v9; // rbx
  __int64 v10; // rdi
  CAnimationTracking *v11; // rcx
  _QWORD *v12; // rax
  int v13; // esi
  __int64 v14; // rcx
  unsigned int ScenarioName; // r8d
  unsigned int v16; // eax
  __int64 v17; // rcx
  struct CAnimationTracking::AnimationScenarioRunningStatistics *v18; // [rsp+40h] [rbp-128h] BYREF
  unsigned __int16 v19[128]; // [rsp+50h] [rbp-118h] BYREF

  v5 = (const struct _GUID *)a4;
  if ( a4 )
    v5 = (const struct _GUID *)(-(__int64)(memcmp_0((const void *)a4, &GUID_NULL, 0x10uLL) != 0) & a4);
  v18 = 0LL;
  if ( CAnimationTracking::FindScenario(this, a2, v5, &v18) != *((_DWORD *)this + 6) )
  {
    v9 = v18;
    v10 = 0LL;
    v11 = (CAnimationTracking *)*((unsigned int *)v18 + 48);
    v12 = (_QWORD *)*((_QWORD *)v18 + 21);
    if ( (_DWORD)v11 )
    {
      do
      {
        if ( a3 == *v12 )
          break;
        v10 = (unsigned int)(v10 + 1);
        ++v12;
      }
      while ( (unsigned int)v10 < (unsigned int)v11 );
    }
    v13 = *((_DWORD *)v18 + 48);
    ScenarioName = (unsigned int)CAnimationTracking::GetScenarioName(v11, v18, v19);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x800) != 0 )
      McTemplateU0zqqqqx_EventWriteTransfer(
        *((_DWORD *)v9 + 5),
        *((_DWORD *)v9 + 7) - *((_DWORD *)v9 + 6),
        ScenarioName,
        *((_DWORD *)v9 + 48) - ((_DWORD)v10 != v13),
        *((_BYTE *)v9 + 28) - *((_BYTE *)v9 + 24),
        *((_DWORD *)v9 + 8),
        *((_DWORD *)v9 + 5),
        a3);
    if ( (_DWORD)v10 != v13 )
    {
      v16 = *((_DWORD *)v9 + 48);
      if ( (unsigned int)v10 >= v16 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0LL, -2147024809, 0x21Fu);
      }
      else
      {
        v17 = v16 - 1;
        if ( (unsigned int)v10 < (unsigned int)v17 )
        {
          *(_QWORD *)(*((_QWORD *)v9 + 21) + 8 * v10) = *(_QWORD *)(*((_QWORD *)v9 + 21) + 8 * v17);
          v16 = *((_DWORD *)v9 + 48);
        }
        *((_DWORD *)v9 + 48) = v16 - 1;
      }
      if ( !*((_DWORD *)v9 + 48) )
        *((_QWORD *)v9 + 8) = *((_QWORD *)a5 + 1);
    }
  }
}
