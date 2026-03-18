/*
 * XREFs of ?EnsureScenario@CAnimationTracking@@AEAAJPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBGIPEBU_GUID@@AEBUTelFrameInfo@1@PEAPEAUAnimationScenarioRunningStatistics@1@@Z @ 0x180077304
 * Callers:
 *     ?BeginAnimationScenario@CAnimationTracking@@QEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBGAEBUTelFrameInfo@1@@Z @ 0x180017F1C (-BeginAnimationScenario@CAnimationTracking@@QEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_.c)
 *     ?RefAnimationScenario@CAnimationTracking@@QEAAJI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z @ 0x180077198 (-RefAnimationScenario@CAnimationTracking@@QEAAJI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z.c)
 * Callees:
 *     ?CopyScenarioInfo@CAnimationTracking@@AEAAJPEAUAnimationScenarioRunningStatistics@1@PEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@@Z @ 0x18001A080 (-CopyScenarioInfo@CAnimationTracking@@AEAAJPEAUAnimationScenarioRunningStatistics@1@PEBUDCOMPOSI.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18004F61C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_GAnimationScenarioRunningStatistics@CAnimationTracking@@QEAAPEAXI@Z @ 0x180074C7C (--_GAnimationScenarioRunningStatistics@CAnimationTracking@@QEAAPEAXI@Z.c)
 *     ?FindScenario@CAnimationTracking@@AEAAIIPEBU_GUID@@PEAPEAUAnimationScenarioRunningStatistics@1@@Z @ 0x1800775C4 (-FindScenario@CAnimationTracking@@AEAAIIPEBU_GUID@@PEAPEAUAnimationScenarioRunningStatistics@1@@.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800CB358 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CAnimationTracking::EnsureScenario(
        CAnimationTracking *this,
        const struct DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO *a2,
        const unsigned __int16 *a3,
        unsigned int a4,
        const struct _GUID *a5,
        const struct CAnimationTracking::TelFrameInfo *a6,
        struct CAnimationTracking::AnimationScenarioRunningStatistics **a7)
{
  int v11; // ebx
  struct CAnimationTracking::AnimationScenarioRunningStatistics *v12; // r9
  char *v13; // rax
  char *v14; // rbx
  int v15; // ecx
  ULONGLONG TickCount64; // rcx
  CAnimationTracking *v17; // rcx
  unsigned int v18; // eax
  unsigned int v19; // r8d
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rbx
  unsigned __int64 v24; // rbx
  LPVOID v25; // rax
  void *v26; // r14
  wchar_t *v27; // rax
  const wchar_t *v28; // rcx
  struct CAnimationTracking::AnimationScenarioRunningStatistics *v29[2]; // [rsp+30h] [rbp-10h] BYREF
  void *retaddr; // [rsp+68h] [rbp+28h]

  v29[0] = 0LL;
  v11 = 0;
  CAnimationTracking::FindScenario(this, a4, a5, v29);
  v12 = v29[0];
  if ( !v29[0] )
  {
    if ( !a5
      && (!a2
       || !*((_WORD *)a2 + 17)
       || !(const struct DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO *)((char *)a2
                                                                                + *((unsigned __int16 *)a2 + 17))) )
    {
      v11 = -2147024809;
LABEL_17:
      v12 = 0LL;
      goto LABEL_14;
    }
    if ( *((_DWORD *)this + 6) >= 8u )
    {
      v11 = -2147024827;
      goto LABEL_17;
    }
    v13 = (char *)DefaultHeap::AllocClear(0x148uLL);
    v14 = v13;
    if ( !v13 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    memset_0(v13, 0, 0x148uLL);
    *((_QWORD *)v14 + 21) = v14 + 200;
    *((_QWORD *)v14 + 22) = v14 + 200;
    *((_DWORD *)v14 + 46) = 16;
    *(_QWORD *)(v14 + 188) = 16LL;
    v29[0] = (struct CAnimationTracking::AnimationScenarioRunningStatistics *)v14;
    if ( a5 )
    {
      *(struct _GUID *)(v14 + 4) = *a5;
    }
    else
    {
      *(_DWORD *)v14 = a4;
      if ( a3 )
      {
        v23 = -1LL;
        do
          ++v23;
        while ( a3[v23] );
        v24 = v23 + 1;
        v25 = operator new(saturated_mul(v24, 2uLL));
        v26 = v25;
        if ( v25 )
        {
          if ( (unsigned int)_o_wcscpy_s(v25, v24, a3) )
          {
            DefaultHeap::Free(v26);
            *((_QWORD *)v29[0] + 17) = a3;
            *((_QWORD *)v29[0] + 18) = 0LL;
          }
          else
          {
            v27 = wcschr((const wchar_t *)v26, 1u);
            if ( v27 )
              *v27 = 0;
            *((_QWORD *)v29[0] + 17) = v26;
            if ( v27 )
              v28 = v27 + 1;
            else
              v28 = L"0.0.0.0";
            *((_QWORD *)v29[0] + 18) = v28;
          }
        }
      }
    }
    v15 = *((_DWORD *)this + 142);
    *((_DWORD *)this + 142) = v15 + 1;
    *((_DWORD *)v29[0] + 5) = v15;
    *((_QWORD *)v29[0] + 6) = *((_QWORD *)a6 + 1);
    TickCount64 = GetTickCount64();
    *((_QWORD *)v29[0] + 14) = TickCount64;
    if ( a5 )
    {
      v17 = (CAnimationTracking *)(TickCount64 + 5000);
      *((_QWORD *)v29[0] + 16) = v17;
    }
    else if ( *((_DWORD *)a2 + 6) )
    {
      v17 = (CAnimationTracking *)(*((_QWORD *)v29[0] + 14) + 500LL + *((unsigned int *)a2 + 6));
      *((_QWORD *)v29[0] + 16) = v17;
    }
    else
    {
      v17 = v29[0];
      *((_QWORD *)v29[0] + 16) = *((_QWORD *)v29[0] + 14) + 5000LL;
    }
    if ( a2 )
    {
      v11 = CAnimationTracking::CopyScenarioInfo(v17, v29[0], a2);
      if ( v11 < 0 )
      {
        if ( v29[0] )
          CAnimationTracking::AnimationScenarioRunningStatistics::`scalar deleting destructor'(v29[0]);
        goto LABEL_17;
      }
    }
    v18 = *((_DWORD *)this + 6);
    v19 = v18 + 1;
    if ( v18 + 1 < v18 )
    {
      v11 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v17, 0LL, 0LL, -2147024362, 0xB5u);
    }
    else
    {
      v11 = 0;
      if ( v19 > *((_DWORD *)this + 5) )
      {
        v21 = DynArrayImpl<0>::AddMultipleAndSet(this, 8LL, 1LL, v29);
        v11 = v21;
        if ( v21 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0LL, v21, 0xC0u);
      }
      else
      {
        *(struct CAnimationTracking::AnimationScenarioRunningStatistics **)(*(_QWORD *)this + 8LL * v18) = v29[0];
        *((_DWORD *)this + 6) = v19;
      }
    }
    v12 = v29[0];
  }
LABEL_14:
  *a7 = v12;
  return (unsigned int)v11;
}
