/*
 * XREFs of ?AddToStoryboard@CAnimationEngine@@AEAAJPEAUIUIAnimationStoryboard2@@IIW4TransformAttribute@1@NNPEAN2IPEAUTA_TIMINGFUNCTION@@W4TransformMode@@22I@Z @ 0x18003903C
 * Callers:
 *     ?SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z @ 0x180028BA8 (-SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006658 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateAnimationTransition@CAnimationEngine@@AEAAJIPEAUTA_TIMINGFUNCTION@@NPEANIPEAPEAUIUIAnimationTransition2@@@Z @ 0x180039278 (-CreateAnimationTransition@CAnimationEngine@@AEAAJIPEAUTA_TIMINGFUNCTION@@NPEANIPEAPEAUIUIAnimat.c)
 *     ?GetTransitionVisualSetIndex@CAnimationEngine@@AEAAHI@Z @ 0x180039368 (-GetTransitionVisualSetIndex@CAnimationEngine@@AEAAHI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18003DC0C (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 *     ?CreateAndAddChoppedCubicBezierTransition@CThemeAnimationScheduleHelper@@QEAAJPEAUIUIAnimationStoryboard2@@PEAUIUIAnimationVariable2@@PEAUIUIAnimationTransitionLibrary2@@NPEAN3I33IMMMMPEAU__MIDL___MIDL_itf_UIAnimation_0000_0002_0003@@@Z @ 0x1800A90BC (-CreateAndAddChoppedCubicBezierTransition@CThemeAnimationScheduleHelper@@QEAAJPEAUIUIAnimationSt.c)
 */

__int64 __fastcall CAnimationEngine::AddToStoryboard(
        __int64 a1,
        struct IUIAnimationStoryboard2 *a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        double a6,
        double a7,
        double *a8,
        double *a9,
        unsigned int a10,
        struct TA_TIMINGFUNCTION *a11,
        unsigned int a12,
        double *a13,
        double *a14,
        unsigned int a15)
{
  unsigned int v15; // edi
  __int64 v18; // rbx
  int TransitionVisualSetIndex; // eax
  double *v20; // rsi
  double v21; // xmm6_8
  int v22; // eax
  int v23; // ebx
  CThemeAnimationScheduleHelper *v24; // rcx
  double v25; // xmm6_8
  __int64 v27; // rdx
  __int64 v28; // rdx
  struct __MIDL___MIDL_itf_UIAnimation_0000_0002_0003 *v29; // [rsp+80h] [rbp-31h]
  char v30; // [rsp+88h] [rbp-29h]
  struct IUIAnimationTransition2 *v31; // [rsp+90h] [rbp-21h] BYREF
  __int64 v32; // [rsp+98h] [rbp-19h] BYREF
  _QWORD v33[3]; // [rsp+A0h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+2Fh]

  v15 = 0;
  v33[0] = 0LL;
  v32 = 0LL;
  v31 = 0LL;
  v18 = a4;
  TransitionVisualSetIndex = CAnimationEngine::GetTransitionVisualSetIndex((CAnimationEngine *)a1, a3);
  if ( TransitionVisualSetIndex < 0 )
  {
    v23 = -2147467259;
    goto LABEL_37;
  }
  _mm_lfence();
  v30 = 0;
  v20 = *(double **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 40)
                                                       + 8LL * (unsigned int)TransitionVisualSetIndex)
                                           + 40LL)
                               + 8 * v18)
                   + 8LL * a5
                   + 8);
  if ( !*(_QWORD *)v20 )
  {
    v21 = 0.0;
    if ( a13 && a15 < a10 )
    {
      v21 = a8[a15];
      a8[a15] = *a13;
    }
    v22 = (*(__int64 (__fastcall **)(_QWORD, double *, _QWORD, double *))(**(_QWORD **)(a1 + 8) + 24LL))(
            *(_QWORD *)(a1 + 8),
            a8,
            a10,
            v20);
    v23 = v22;
    if ( v22 < 0 )
    {
      v28 = 1209LL;
LABEL_35:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v28,
        (__int64)"clientcore\\windows\\dwm\\udwm\\animationengine.cpp",
        (const char *)(unsigned int)v22);
LABEL_37:
      v15 = v23;
      goto LABEL_14;
    }
    v30 = 1;
    if ( a13 && a15 < a10 )
      a8[a15] = v21;
  }
  v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)v20 + 192LL))(*(_QWORD *)v20, 0LL, a12);
  v23 = v22;
  if ( v22 < 0 )
  {
    v28 = 1219LL;
    goto LABEL_35;
  }
  if ( a6 <= v20[1] )
    goto LABEL_8;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v33);
  v22 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD *))(**(_QWORD **)(a1 + 16) + 40LL))(
          *(_QWORD *)(a1 + 16),
          v27,
          v33);
  v23 = v22;
  if ( v22 < 0 )
  {
    v28 = 1224LL;
    goto LABEL_35;
  }
  v22 = ((__int64 (__fastcall *)(struct IUIAnimationStoryboard2 *, _QWORD, _QWORD))a2->lpVtbl->AddTransition)(
          a2,
          *(_QWORD *)v20,
          v33[0]);
  v23 = v22;
  if ( v22 < 0 )
  {
    v28 = 1225LL;
    goto LABEL_35;
  }
  v20[1] = a6;
LABEL_8:
  if ( v30 )
    goto LABEL_9;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v32);
  v22 = (*(__int64 (__fastcall **)(_QWORD, double *, _QWORD, __int64 *))(**(_QWORD **)(a1 + 16) + 32LL))(
          *(_QWORD *)(a1 + 16),
          a8,
          a10,
          &v32);
  v23 = v22;
  if ( v22 < 0 )
  {
    v28 = 1233LL;
    goto LABEL_35;
  }
  v22 = ((__int64 (__fastcall *)(struct IUIAnimationStoryboard2 *, _QWORD, __int64))a2->lpVtbl->AddTransition)(
          a2,
          *(_QWORD *)v20,
          v32);
  v23 = v22;
  if ( v22 < 0 )
  {
    v28 = 1234LL;
    goto LABEL_35;
  }
LABEL_9:
  if ( (a13 || a14) && *(_DWORD *)a11 == 1 )
  {
    v25 = a7;
    v22 = CThemeAnimationScheduleHelper::CreateAndAddChoppedCubicBezierTransition(
            v24,
            a2,
            *(struct IUIAnimationVariable2 **)v20,
            *(struct IUIAnimationTransitionLibrary2 **)(a1 + 16),
            a7,
            a8,
            a9,
            a10,
            a13,
            a14,
            a15,
            *((float *)a11 + 1),
            *((float *)a11 + 2),
            *((float *)a11 + 3),
            *((float *)a11 + 4),
            v29);
    v23 = v22;
    if ( v22 < 0 )
    {
      v28 = 1263LL;
      goto LABEL_35;
    }
  }
  else
  {
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v31);
    v25 = a7;
    v22 = CAnimationEngine::CreateAnimationTransition((CAnimationEngine *)a1, a3, a11, a7, a9, a10, &v31);
    v23 = v22;
    if ( v22 < 0 )
    {
      v28 = 1240LL;
      goto LABEL_35;
    }
    v22 = ((__int64 (__fastcall *)(struct IUIAnimationStoryboard2 *, _QWORD, struct IUIAnimationTransition2 *))a2->lpVtbl->AddTransition)(
            a2,
            *(_QWORD *)v20,
            v31);
    v23 = v22;
    if ( v22 < 0 )
    {
      v28 = 1243LL;
      goto LABEL_35;
    }
  }
  v20[1] = v25 + v20[1];
LABEL_14:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v31);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v32);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v33);
  return v15;
}
