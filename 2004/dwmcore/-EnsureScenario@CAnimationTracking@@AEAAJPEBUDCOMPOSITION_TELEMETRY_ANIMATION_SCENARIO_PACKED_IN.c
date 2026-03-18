/*
 * XREFs of ?EnsureScenario@CAnimationTracking@@AEAAJPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBGIPEBU_GUID@@AEBUTelFrameInfo@1@PEAPEAUAnimationScenarioRunningStatistics@1@@Z @ 0x180088680
 * Callers:
 *     ?BeginAnimationScenario@CAnimationTracking@@QEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBGAEBUTelFrameInfo@1@@Z @ 0x1800880DC (-BeginAnimationScenario@CAnimationTracking@@QEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_.c)
 *     ?RefAnimationScenario@CAnimationTracking@@QEAAJI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z @ 0x1800884C8 (-RefAnimationScenario@CAnimationTracking@@QEAAJI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800466E8 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ?CopyScenarioInfo@CAnimationTracking@@AEAAJPEAUAnimationScenarioRunningStatistics@1@PEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@@Z @ 0x180087BFC (-CopyScenarioInfo@CAnimationTracking@@AEAAJPEAUAnimationScenarioRunningStatistics@1@PEBUDCOMPOSI.c)
 *     ?FindScenario@CAnimationTracking@@AEAAIIPEBU_GUID@@PEAPEAUAnimationScenarioRunningStatistics@1@@Z @ 0x180088948 (-FindScenario@CAnimationTracking@@AEAAIIPEBU_GUID@@PEAPEAUAnimationScenarioRunningStatistics@1@@.c)
 *     ??_GAnimationScenarioRunningStatistics@CAnimationTracking@@QEAAPEAXI@Z @ 0x1800893C0 (--_GAnimationScenarioRunningStatistics@CAnimationTracking@@QEAAPEAXI@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x1800A2588 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800AC2C0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     memset_0 @ 0x1800E3ABC (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x18020EDB4 (ModuleFailFastForHRESULT.c)
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
  unsigned int v19; // edx
  unsigned int v20; // eax
  unsigned int v21; // r8d
  __int64 v22; // rbx
  unsigned __int64 v23; // rbx
  LPVOID v24; // rax
  void *v25; // r14
  wchar_t *v26; // rax
  const wchar_t *v27; // rcx
  int v28; // eax
  __int64 v29; // rcx
  struct CAnimationTracking::AnimationScenarioRunningStatistics *v30[2]; // [rsp+30h] [rbp-10h] BYREF
  void *retaddr; // [rsp+68h] [rbp+28h]

  v30[0] = 0LL;
  v11 = 0;
  CAnimationTracking::FindScenario(this, a4, a5, v30);
  v12 = v30[0];
  if ( v30[0] )
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
  v30[0] = (struct CAnimationTracking::AnimationScenarioRunningStatistics *)v15;
  if ( a5 )
  {
    *(struct _GUID *)(v15 + 4) = *a5;
  }
  else
  {
    *(_DWORD *)v15 = a4;
    if ( a3 )
    {
      v22 = -1LL;
      do
        ++v22;
      while ( a3[v22] );
      v23 = v22 + 1;
      v24 = operator new(saturated_mul(v23, 2uLL));
      v25 = v24;
      if ( v24 )
      {
        if ( (unsigned int)_o_wcscpy_s(v24, v23, a3) )
        {
          operator delete(v25);
          *((_QWORD *)v30[0] + 17) = a3;
          *((_QWORD *)v30[0] + 18) = 0LL;
        }
        else
        {
          v26 = wcschr((const wchar_t *)v25, 1u);
          if ( v26 )
            *v26 = 0;
          *((_QWORD *)v30[0] + 17) = v25;
          if ( v26 )
            v27 = v26 + 1;
          else
            v27 = L"0.0.0.0";
          *((_QWORD *)v30[0] + 18) = v27;
        }
      }
    }
  }
  v16 = *((_DWORD *)this + 142);
  *((_DWORD *)this + 142) = v16 + 1;
  *((_DWORD *)v30[0] + 5) = v16;
  *((_QWORD *)v30[0] + 6) = *((_QWORD *)a6 + 1);
  TickCount64 = GetTickCount64();
  *((_QWORD *)v30[0] + 14) = TickCount64;
  if ( a5 )
  {
    v18 = (CAnimationTracking *)(TickCount64 + 5000);
    *((_QWORD *)v30[0] + 16) = v18;
  }
  else if ( *((_DWORD *)a2 + 6) )
  {
    v18 = (CAnimationTracking *)(*((_QWORD *)v30[0] + 14) + 500LL + *((unsigned int *)a2 + 6));
    *((_QWORD *)v30[0] + 16) = v18;
  }
  else
  {
    v18 = v30[0];
    *((_QWORD *)v30[0] + 16) = *((_QWORD *)v30[0] + 14) + 5000LL;
  }
  if ( a2 )
  {
    v11 = CAnimationTracking::CopyScenarioInfo(v18, v30[0], a2);
    if ( v11 < 0 )
    {
      if ( v30[0] )
        CAnimationTracking::AnimationScenarioRunningStatistics::`scalar deleting destructor'(v30[0], v19);
      goto LABEL_5;
    }
  }
  v20 = *((_DWORD *)this + 6);
  v21 = v20 + 1;
  if ( v20 + 1 < v20 )
  {
    v11 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v18, 0LL, 0, -2147024362, 0xB5u, 0LL);
  }
  else
  {
    v11 = 0;
    if ( v21 > *((_DWORD *)this + 5) )
    {
      v28 = DynArrayImpl<0>::AddMultipleAndSet(this, 8LL, 1LL, v30);
      v11 = v28;
      if ( v28 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0xC0u, 0LL);
    }
    else
    {
      *(struct CAnimationTracking::AnimationScenarioRunningStatistics **)(*(_QWORD *)this + 8LL * v20) = v30[0];
      *((_DWORD *)this + 6) = v21;
    }
  }
  v12 = v30[0];
LABEL_6:
  *a7 = v12;
  return (unsigned int)v11;
}
