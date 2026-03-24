/*
 * XREFs of ?EnsureScenario@CAnimationTracking@@AEAAJPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBGIPEBU_GUID@@AEBUTelFrameInfo@1@PEAPEAUAnimationScenarioRunningStatistics@1@@Z @ 0x1800B18D0
 * Callers:
 *     ?BeginAnimationScenario@CAnimationTracking@@QEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBGAEBUTelFrameInfo@1@@Z @ 0x1800B132C (-BeginAnimationScenario@CAnimationTracking@@QEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_.c)
 *     ?RefAnimationScenario@CAnimationTracking@@QEAAJI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z @ 0x1800B1718 (-RefAnimationScenario@CAnimationTracking@@QEAAJI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180062598 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18009478C (--3@YAXPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18009F358 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??_GAnimationScenarioRunningStatistics@CAnimationTracking@@QEAAPEAXI@Z @ 0x1800B0CE8 (--_GAnimationScenarioRunningStatistics@CAnimationTracking@@QEAAPEAXI@Z.c)
 *     ?FindScenario@CAnimationTracking@@AEAAIIPEBU_GUID@@PEAPEAUAnimationScenarioRunningStatistics@1@@Z @ 0x1800B1B98 (-FindScenario@CAnimationTracking@@AEAAIIPEBU_GUID@@PEAPEAUAnimationScenarioRunningStatistics@1@@.c)
 *     ?CopyScenarioInfo@CAnimationTracking@@AEAAJPEAUAnimationScenarioRunningStatistics@1@PEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@@Z @ 0x1800B2048 (-CopyScenarioInfo@CAnimationTracking@@AEAAJPEAUAnimationScenarioRunningStatistics@1@PEBUDCOMPOSI.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800B8AF4 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     memset_0 @ 0x1800E821C (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x18020FB94 (ModuleFailFastForHRESULT.c)
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
  char *v14; // rax
  char *v15; // rbx
  int v16; // ecx
  ULONGLONG TickCount64; // rcx
  CAnimationTracking *v18; // rcx
  unsigned int v19; // eax
  unsigned int v20; // r8d
  __int64 v21; // rbx
  unsigned __int64 v22; // rbx
  LPVOID v23; // rax
  void *v24; // r14
  wchar_t *v25; // rax
  const wchar_t *v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  CAnimationTracking::AnimationScenarioRunningStatistics *v29[2]; // [rsp+30h] [rbp-10h] BYREF
  void *retaddr; // [rsp+68h] [rbp+28h]

  v29[0] = 0LL;
  v11 = 0;
  CAnimationTracking::FindScenario(this, a4, a5, v29);
  v12 = v29[0];
  if ( v29[0] )
    goto LABEL_6;
  if ( !a5
    && (!a2
     || !*((_WORD *)a2 + 17)
     || !(const struct DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO *)((char *)a2
                                                                              + *((unsigned __int16 *)a2 + 17))) )
  {
    v11 = -2147024809;
LABEL_5:
    v12 = 0LL;
    goto LABEL_6;
  }
  if ( *((_DWORD *)this + 6) >= 8u )
  {
    v11 = -2147024827;
    goto LABEL_5;
  }
  v14 = (char *)DefaultHeap::AllocClear(0x140uLL);
  v15 = v14;
  if ( !v14 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  memset_0(v14, 0, 0x140uLL);
  *((_QWORD *)v15 + 20) = v15 + 192;
  *((_QWORD *)v15 + 21) = v15 + 192;
  *((_DWORD *)v15 + 44) = 16;
  *(_QWORD *)(v15 + 180) = 16LL;
  v29[0] = (CAnimationTracking::AnimationScenarioRunningStatistics *)v15;
  if ( a5 )
  {
    *(struct _GUID *)(v15 + 4) = *a5;
  }
  else
  {
    *(_DWORD *)v15 = a4;
    if ( a3 )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( a3[v21] );
      v22 = v21 + 1;
      v23 = operator new(saturated_mul(v22, 2uLL));
      v24 = v23;
      if ( v23 )
      {
        if ( (unsigned int)_o_wcscpy_s(v23, v22, a3) )
        {
          operator delete(v24);
          *((_QWORD *)v29[0] + 17) = a3;
          *((_QWORD *)v29[0] + 18) = 0LL;
        }
        else
        {
          v25 = wcschr((const wchar_t *)v24, 1u);
          if ( v25 )
            *v25 = 0;
          *((_QWORD *)v29[0] + 17) = v24;
          if ( v25 )
            v26 = v25 + 1;
          else
            v26 = L"0.0.0.0";
          *((_QWORD *)v29[0] + 18) = v26;
        }
      }
    }
  }
  v16 = *((_DWORD *)this + 142);
  *((_DWORD *)this + 142) = v16 + 1;
  *((_DWORD *)v29[0] + 5) = v16;
  *((_QWORD *)v29[0] + 6) = *((_QWORD *)a6 + 1);
  TickCount64 = GetTickCount64();
  *((_QWORD *)v29[0] + 14) = TickCount64;
  if ( a5 )
  {
    v18 = (CAnimationTracking *)(TickCount64 + 5000);
    *((_QWORD *)v29[0] + 16) = v18;
  }
  else if ( *((_DWORD *)a2 + 6) )
  {
    v18 = (CAnimationTracking *)(*((_QWORD *)v29[0] + 14) + 500LL + *((unsigned int *)a2 + 6));
    *((_QWORD *)v29[0] + 16) = v18;
  }
  else
  {
    v18 = v29[0];
    *((_QWORD *)v29[0] + 16) = *((_QWORD *)v29[0] + 14) + 5000LL;
  }
  if ( a2 )
  {
    v11 = CAnimationTracking::CopyScenarioInfo(v18, v29[0], a2);
    if ( v11 < 0 )
    {
      if ( v29[0] )
        CAnimationTracking::AnimationScenarioRunningStatistics::`scalar deleting destructor'(v29[0]);
      goto LABEL_5;
    }
  }
  v19 = *((_DWORD *)this + 6);
  v20 = v19 + 1;
  if ( v19 + 1 < v19 )
  {
    v11 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v18, 0LL, 0, -2147024362, 0xB5u, 0LL);
  }
  else
  {
    v11 = 0;
    if ( v20 > *((_DWORD *)this + 5) )
    {
      v27 = DynArrayImpl<0>::AddMultipleAndSet(this, 8LL, 1LL, v29);
      v11 = v27;
      if ( v27 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0xC0u, 0LL);
    }
    else
    {
      *(CAnimationTracking::AnimationScenarioRunningStatistics **)(*(_QWORD *)this + 8LL * v19) = v29[0];
      *((_DWORD *)this + 6) = v20;
    }
  }
  v12 = v29[0];
LABEL_6:
  *a7 = v12;
  return (unsigned int)v11;
}
