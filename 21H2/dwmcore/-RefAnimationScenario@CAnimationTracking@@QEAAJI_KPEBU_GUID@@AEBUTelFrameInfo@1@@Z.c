/*
 * XREFs of ?RefAnimationScenario@CAnimationTracking@@QEAAJI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z @ 0x180077198
 * Callers:
 *     ?TelemetryRefAnimationScenario@CPartitionVerticalBlankScheduler@@UEAAJI_KPEBU_GUID@@@Z @ 0x180077130 (-TelemetryRefAnimationScenario@CPartitionVerticalBlankScheduler@@UEAAJI_KPEBU_GUID@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetScenarioDetails@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z @ 0x180076D34 (-GetScenarioDetails@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z.c)
 *     ?GetScenarioName@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z @ 0x180076D84 (-GetScenarioName@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z.c)
 *     ?EnsureScenario@CAnimationTracking@@AEAAJPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBGIPEBU_GUID@@AEBUTelFrameInfo@1@PEAPEAUAnimationScenarioRunningStatistics@1@@Z @ 0x180077304 (-EnsureScenario@CAnimationTracking@@AEAAJPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_IN.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800CB358 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     memcmp_0 @ 0x180105173 (memcmp_0.c)
 *     McTemplateU0xzqqqz_EventWriteTransfer @ 0x1801CB7D4 (McTemplateU0xzqqqz_EventWriteTransfer.c)
 *     McTemplateU0zqqqqx_EventWriteTransfer @ 0x1801CBAAC (McTemplateU0zqqqqx_EventWriteTransfer.c)
 */

__int64 __fastcall CAnimationTracking::RefAnimationScenario(
        CAnimationTracking *this,
        unsigned int a2,
        __int64 a3,
        unsigned __int64 a4,
        const struct CAnimationTracking::TelFrameInfo *a5)
{
  int v5; // edi
  const struct _GUID *v6; // rbx
  int v9; // eax
  __int64 v10; // rcx
  struct CAnimationTracking::AnimationScenarioRunningStatistics *v11; // rbx
  unsigned int v12; // esi
  CAnimationTracking **v13; // r10
  unsigned int v14; // eax
  unsigned int v15; // r8d
  CAnimationTracking *v16; // rcx
  int v17; // edx
  unsigned int ScenarioName; // ebp
  ULONGLONG TickCount64; // rax
  unsigned int *v21; // rcx
  wchar_t *ScenarioDetails; // rax
  int v23; // edx
  int v24; // eax
  char *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // [rsp+40h] [rbp-238h] BYREF
  struct CAnimationTracking::AnimationScenarioRunningStatistics *v28; // [rsp+48h] [rbp-230h] BYREF
  unsigned __int16 v29[128]; // [rsp+50h] [rbp-228h] BYREF
  unsigned __int16 v30[128]; // [rsp+150h] [rbp-128h] BYREF

  LOBYTE(v5) = 0;
  v27 = a3;
  v28 = 0LL;
  v6 = (const struct _GUID *)a4;
  if ( a4 )
    v6 = (const struct _GUID *)(-(__int64)(memcmp_0((const void *)a4, &GUID_NULL, 0x10uLL) != 0) & a4);
  v9 = CAnimationTracking::EnsureScenario(this, 0LL, 0LL, a2, v6, a5, &v28);
  v11 = v28;
  v12 = v9;
  if ( v28 )
  {
    v13 = (CAnimationTracking **)((char *)v28 + 168);
    v14 = *((_DWORD *)v28 + 48);
    v15 = v14 + 1;
    if ( v14 + 1 < v14 )
    {
      v12 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, -2147024362, 0xB5u);
    }
    else
    {
      v12 = 0;
      if ( v15 > *((_DWORD *)v28 + 47) )
      {
        v24 = DynArrayImpl<0>::AddMultipleAndSet((char *)v28 + 168, 8LL, 1LL, &v27);
        v12 = v24;
        if ( v24 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast((__int64)v16, 0LL, 0LL, v24, 0xC0u);
      }
      else
      {
        v16 = *v13;
        *((_QWORD *)*v13 + v14) = v27;
        *((_DWORD *)v11 + 48) = v15;
      }
    }
    ScenarioName = (unsigned int)CAnimationTracking::GetScenarioName(v16, v11, v29);
    if ( *((_QWORD *)v11 + 7) )
      goto LABEL_8;
    *((_QWORD *)v11 + 7) = *((_QWORD *)a5 + 1);
    TickCount64 = GetTickCount64();
    *((_QWORD *)v11 + 15) = TickCount64;
    v21 = (unsigned int *)*((_QWORD *)v11 + 20);
    if ( v21 )
    {
      if ( v21[6] )
      {
        v21 = (unsigned int *)(v21[6] + 500LL);
        v25 = (char *)v21 + TickCount64;
        if ( *((_QWORD *)v11 + 16) < (unsigned __int64)v25 )
          *((_QWORD *)v11 + 16) = v25;
      }
    }
    ScenarioDetails = CAnimationTracking::GetScenarioDetails((CAnimationTracking *)v21, v11, v30);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x800) != 0 )
    {
      v26 = *((_QWORD *)v11 + 20);
      if ( v26 )
        v5 = *(_DWORD *)(v26 + 28);
      McTemplateU0xzqqqz_EventWriteTransfer(
        *((_DWORD *)v11 + 14) - *((_DWORD *)v11 + 12),
        v23,
        *((_QWORD *)v11 + 7),
        ScenarioName,
        *((_BYTE *)v11 + 56) - *((_BYTE *)v11 + 48),
        *((_DWORD *)v11 + 5),
        v5,
        (__int64)ScenarioDetails);
LABEL_8:
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x800) != 0 )
        McTemplateU0zqqqqx_EventWriteTransfer(
          *((_DWORD *)v11 + 7) - *((_DWORD *)v11 + 6),
          v17,
          ScenarioName,
          *((_DWORD *)v11 + 48),
          *((_BYTE *)v11 + 28) - *((_BYTE *)v11 + 24),
          *((_DWORD *)v11 + 8),
          *((_DWORD *)v11 + 5),
          v27);
    }
  }
  return v12;
}
