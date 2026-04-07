/*
 * XREFs of ?CreateBlurBehindAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800035BC
 * Callers:
 *     ?_CreateAndAddBlurBehindComponent@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z @ 0x180003500 (-_CreateAndAddBlurBehindComponent@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent.c)
 * Callees:
 *     ?GetAccentBlurBehindBrush@CTopLevelWindow@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualImageProxy@@PEAUMilPoint3F@@@Z @ 0x180003814 (-GetAccentBlurBehindBrush@CTopLevelWindow@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCached.c)
 *     ?SetClientAreaBrush@CAnimatedTransitionVisual@@QEAAJPEAVCImageLegacyMilBrushProxy@@PEAVCCachedVisualImageProxy@@PEAUMilPoint3F@@@Z @ 0x180003940 (-SetClientAreaBrush@CAnimatedTransitionVisual@@QEAAJPEAVCImageLegacyMilBrushProxy@@PEAVCCachedVi.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?IsRTL@CStoryboard@@SA_NXZ @ 0x18003509C (-IsRTL@CStoryboard@@SA_NXZ.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x1800350E0 (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ??0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z @ 0x18003581C (--0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z.c)
 *     ?_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z @ 0x1800359C8 (-_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTransitionVisualController::CreateBlurBehindAnimationComponent(
        CTransitionVisualController *this,
        struct CWindowData *a2,
        unsigned int a3,
        struct CStoryboard *a4,
        struct CAnimationComponent **a5)
{
  int v5; // r12d
  CAnimatedTransitionVisual *v8; // rdi
  __int64 v9; // rsi
  unsigned int v10; // r12d
  int v11; // eax
  unsigned int v12; // ebx
  int AccentBlurBehindBrush; // eax
  CBaseObject *v14; // r15
  struct CCachedVisualImageProxy *v15; // r14
  __int64 v17; // rax
  int v18; // eax
  int v19; // eax
  __m128i v20; // xmm1
  unsigned __int64 v21; // xmm0_8
  int v22; // eax
  int v23; // edx
  void *v24; // [rsp+28h] [rbp-38h]
  CBaseObject *v25; // [rsp+30h] [rbp-30h] BYREF
  CBaseObject *v26; // [rsp+38h] [rbp-28h] BYREF
  __int64 v27; // [rsp+40h] [rbp-20h]
  unsigned __int64 v28; // [rsp+48h] [rbp-18h] BYREF
  _DWORD v29[4]; // [rsp+50h] [rbp-10h] BYREF
  CAnimatedTransitionVisual *v30; // [rsp+A8h] [rbp+48h] BYREF
  unsigned int v31; // [rsp+B0h] [rbp+50h]
  struct CStoryboard *v32; // [rsp+B8h] [rbp+58h]

  v32 = a4;
  v31 = a3;
  v5 = *((_DWORD *)a2 + 154);
  v30 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v8 = 0LL;
  *a5 = 0LL;
  v9 = 0LL;
  v29[0] = 1065353216;
  v10 = v5 & 0xFFF;
  v29[1] = 1065353216;
  v29[2] = 1065353216;
  if ( !(unsigned int)GetDesktopID(1LL, &v28) )
  {
    v12 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      -2147467259,
      0x32Eu,
      v24);
    return v12;
  }
  v11 = CTransitionVisualController::_SetDesktopId(this, v28);
  v12 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      v11,
      0x332u,
      v24);
    return v12;
  }
  AccentBlurBehindBrush = CTopLevelWindow::GetAccentBlurBehindBrush(
                            *((CTopLevelWindow **)a2 + 48),
                            &v25,
                            &v26,
                            (struct MilPoint3F *)v29);
  v12 = AccentBlurBehindBrush;
  if ( AccentBlurBehindBrush < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      AccentBlurBehindBrush,
      0x334u,
      v24);
    v14 = v25;
    v15 = v26;
  }
  else
  {
    v14 = v25;
    v15 = v26;
    if ( !v25 || !v26 )
    {
      *a5 = 0LL;
LABEL_6:
      if ( v9 )
        CBaseObject::Release((CBaseObject *)v9);
      if ( v8 )
        CBaseObject::Release((CAnimatedTransitionVisual *)((char *)v8 + 8));
      goto LABEL_10;
    }
    v17 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
            WPF::g_pProcessHeap,
            144LL);
    if ( v17 )
      v9 = CAnimationComponent::CAnimationComponent(v17, *((_QWORD *)a2 + 5), v10, v31, v32);
    if ( v9 )
    {
      v18 = CAnimatedTransitionVisual::Create(&v30);
      v12 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
          2u,
          v18,
          0x33Bu,
          v24);
        v8 = v30;
      }
      else
      {
        v8 = v30;
        v19 = CAnimatedTransitionVisual::SetClientAreaBrush(v30, v14, v15, (struct MilPoint3F *)v29);
        v12 = v19;
        if ( v19 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(
            0x14u,
            &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
            2u,
            v19,
            0x33Du,
            v24);
        }
        else
        {
          v20 = *((__m128i *)a2 + 3);
          *((_QWORD *)v8 + 117) = 0LL;
          v21 = _mm_srli_si128(v20, 8).m128i_u64[0];
          v22 = v21 - v20.m128i_i32[0];
          if ( (int)v21 - v20.m128i_i32[0] < 0 )
            v22 = 0;
          LODWORD(v27) = v22;
          v23 = HIDWORD(v21) - v20.m128i_i32[1];
          if ( HIDWORD(v21) - v20.m128i_i32[1] < 0 )
            v23 = 0;
          HIDWORD(v27) = v23;
          *((_QWORD *)v8 + 118) = v27;
          *((_DWORD *)v8 + 182) = *((_DWORD *)v32 + 18);
          *((_DWORD *)v8 + 183) = v31;
          *((_BYTE *)v8 + 964) = CStoryboard::IsRTL();
          *(_QWORD *)(v9 + 40) = v8;
          _InterlockedIncrement((volatile signed __int32 *)v8 + 4);
          *a5 = (struct CAnimationComponent *)v9;
          _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
          v8 = v30;
          v14 = v25;
          v15 = v26;
        }
      }
      goto LABEL_6;
    }
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      -2147024882,
      0x33Au,
      v24);
  }
LABEL_10:
  if ( v14 )
    CBaseObject::Release(v14);
  if ( v15 )
    CBaseObject::Release(v15);
  return v12;
}
