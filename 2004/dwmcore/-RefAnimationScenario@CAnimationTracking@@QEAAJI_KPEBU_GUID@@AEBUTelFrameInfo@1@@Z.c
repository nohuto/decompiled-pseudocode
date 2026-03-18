/*
 * XREFs of ?RefAnimationScenario@CAnimationTracking@@QEAAJI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z @ 0x1800884C8
 * Callers:
 *     ?TelemetryRefAnimationScenario@CPartitionVerticalBlankScheduler@@UEAAJI_KPEBU_GUID@@@Z @ 0x180088460 (-TelemetryRefAnimationScenario@CPartitionVerticalBlankScheduler@@UEAAJI_KPEBU_GUID@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureScenario@CAnimationTracking@@AEAAJPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBGIPEBU_GUID@@AEBUTelFrameInfo@1@PEAPEAUAnimationScenarioRunningStatistics@1@@Z @ 0x180088680 (-EnsureScenario@CAnimationTracking@@AEAAJPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_IN.c)
 *     ?GetScenarioName@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z @ 0x1800889B8 (-GetScenarioName@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z.c)
 *     ?GetScenarioDetails@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z @ 0x180088B74 (-GetScenarioDetails@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800AC2C0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800EED0F (memcmp_0.c)
 *     McTemplateU0xzqqqz_EventWriteTransfer @ 0x180159000 (McTemplateU0xzqqqz_EventWriteTransfer.c)
 *     McTemplateU0zqqqqx_EventWriteTransfer @ 0x1801592D8 (McTemplateU0zqqqqx_EventWriteTransfer.c)
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
  unsigned int v11; // r9d
  struct CAnimationTracking::AnimationScenarioRunningStatistics *v12; // rbx
  unsigned int v13; // esi
  CAnimationTracking **v14; // r10
  unsigned int v15; // eax
  unsigned int v16; // r8d
  CAnimationTracking *v17; // rcx
  int v18; // edx
  unsigned int ScenarioName; // ebp
  ULONGLONG TickCount64; // rax
  unsigned int v22; // r9d
  unsigned int *v23; // rcx
  char *v24; // rax
  const unsigned __int16 *ScenarioDetails; // rax
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // [rsp+40h] [rbp-238h] BYREF
  struct CAnimationTracking::AnimationScenarioRunningStatistics *v29; // [rsp+48h] [rbp-230h] BYREF
  unsigned __int16 v30[128]; // [rsp+50h] [rbp-228h] BYREF
  unsigned __int16 v31[128]; // [rsp+150h] [rbp-128h] BYREF

  LOBYTE(v5) = 0;
  v28 = a3;
  v29 = 0LL;
  v6 = (const struct _GUID *)a4;
  if ( a4 )
    v6 = (const struct _GUID *)(-(__int64)(memcmp_0((const void *)a4, &GUID_NULL, 0x10uLL) != 0) & a4);
  v9 = CAnimationTracking::EnsureScenario(this, 0LL, 0LL, a2, v6, a5, &v29);
  v12 = v29;
  v13 = v9;
  if ( v29 )
  {
    v14 = (CAnimationTracking **)((char *)v29 + 160);
    v15 = *((_DWORD *)v29 + 46);
    v16 = v15 + 1;
    if ( v15 + 1 < v15 )
    {
      v13 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024362, 0xB5u, 0LL);
    }
    else
    {
      v13 = 0;
      if ( v16 > *((_DWORD *)v29 + 45) )
      {
        v26 = DynArrayImpl<0>::AddMultipleAndSet((char *)v29 + 160, 8LL, 1LL, &v28);
        v13 = v26;
        if ( v26 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast((__int64)v17, 0LL, 0, v26, 0xC0u, 0LL);
      }
      else
      {
        v17 = *v14;
        *((_QWORD *)*v14 + v15) = v28;
        *((_DWORD *)v12 + 46) = v16;
      }
    }
    ScenarioName = (unsigned int)CAnimationTracking::GetScenarioName(v17, v12, v30, v11);
    if ( !*((_QWORD *)v12 + 7) )
    {
      *((_QWORD *)v12 + 7) = *((_QWORD *)a5 + 1);
      TickCount64 = GetTickCount64();
      *((_QWORD *)v12 + 15) = TickCount64;
      v23 = (unsigned int *)*((_QWORD *)v12 + 19);
      if ( v23 )
      {
        if ( v23[6] )
        {
          v23 = (unsigned int *)(v23[6] + 500LL);
          v24 = (char *)v23 + TickCount64;
          if ( *((_QWORD *)v12 + 16) < (unsigned __int64)v24 )
            *((_QWORD *)v12 + 16) = v24;
        }
      }
      ScenarioDetails = CAnimationTracking::GetScenarioDetails((CAnimationTracking *)v23, v12, v31, v22);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000) != 0 )
      {
        v27 = *((_QWORD *)v12 + 19);
        if ( v27 )
          v5 = *(_DWORD *)(v27 + 28);
        McTemplateU0xzqqqz_EventWriteTransfer(
          *((_DWORD *)v12 + 14) - *((_DWORD *)v12 + 12),
          v18,
          *((_QWORD *)v12 + 7),
          ScenarioName,
          *((_BYTE *)v12 + 56) - *((_BYTE *)v12 + 48),
          *((_DWORD *)v12 + 5),
          v5,
          (__int64)ScenarioDetails);
      }
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0zqqqqx_EventWriteTransfer(
        *((_DWORD *)v12 + 7) - *((_DWORD *)v12 + 6),
        v18,
        ScenarioName,
        *((_DWORD *)v12 + 46),
        *((_BYTE *)v12 + 28) - *((_BYTE *)v12 + 24),
        *((_DWORD *)v12 + 8),
        *((_DWORD *)v12 + 5),
        v28);
  }
  return v13;
}
