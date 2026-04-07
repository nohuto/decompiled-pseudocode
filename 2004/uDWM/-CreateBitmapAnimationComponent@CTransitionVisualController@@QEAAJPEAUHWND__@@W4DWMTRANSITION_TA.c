/*
 * XREFs of ?CreateBitmapAnimationComponent@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800AA178
 * Callers:
 *     ?_CreateAndAddBitmapAnimationComponent@CStoryboard@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAPEAVCAnimationComponent@@@Z @ 0x1800B0E64 (-_CreateAndAddBitmapAnimationComponent@CStoryboard@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18000A944 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?IsRTL@CStoryboard@@SA_NXZ @ 0x18003509C (-IsRTL@CStoryboard@@SA_NXZ.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x1800350E0 (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ??0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z @ 0x18003581C (--0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 *     ?SetBitmap@CAnimatedTransitionVisual@@QEAAJPEAVCBitmapSource@@@Z @ 0x1800A7A6C (-SetBitmap@CAnimatedTransitionVisual@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     ?_GetTransitionBitmapIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z @ 0x1800AB84C (-_GetTransitionBitmapIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z.c)
 */

__int64 __fastcall CTransitionVisualController::CreateBitmapAnimationComponent(
        CTransitionVisualController *a1,
        HWND a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 *a6)
{
  int TransitionBitmapIndex; // eax
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rbp
  unsigned int v14; // esi
  int v15; // eax
  __int64 v16; // rbx
  CAnimatedTransitionVisual *v17; // rdi
  CAnimatedTransitionVisual *v19; // [rsp+30h] [rbp-28h] BYREF

  v19 = 0LL;
  TransitionBitmapIndex = CTransitionVisualController::_GetTransitionBitmapIndex(a1, a2);
  v11 = (unsigned int)TransitionBitmapIndex;
  if ( TransitionBitmapIndex < 0 )
  {
    v14 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      -2147467259,
      0x695u);
  }
  else
  {
    v12 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
            WPF::g_pProcessHeap,
            144LL);
    if ( v12 )
      v13 = CAnimationComponent::CAnimationComponent(v12, (__int64)a2, a3, a4, a5);
    else
      v13 = 0LL;
    if ( v13 )
    {
      v15 = CAnimatedTransitionVisual::Create(&v19);
      v14 = v15;
      if ( v15 >= 0 )
      {
        _mm_lfence();
        v16 = 56 * v11;
        v17 = v19;
        CAnimatedTransitionVisual::SetBitmap(
          (CBaseObject **)v19,
          *(struct CBaseImageProxy ***)(v16 + *((_QWORD *)a1 + 19) + 48));
        *((_QWORD *)v17 + 118) = *(_QWORD *)(*(_QWORD *)(v16 + *((_QWORD *)a1 + 19) + 48) + 24LL);
        *(_BYTE *)(v13 + 72) = 1;
        *((_DWORD *)v17 + 182) = *(_DWORD *)(a5 + 72);
        *((_DWORD *)v17 + 183) = a4;
        *((_BYTE *)v17 + 964) = CStoryboard::IsRTL();
        CAnimatedTransitionVisual::SetBeginRect(
          (struct tagPOINT *)v17,
          (const struct tagRECT *)(v16 + *((_QWORD *)a1 + 19) + 12LL));
        CAnimatedTransitionVisual::SetBeginRect(
          (struct tagPOINT *)v17,
          (const struct tagRECT *)(v16 + *((_QWORD *)a1 + 19) + 28LL));
        *(_QWORD *)(v13 + 40) = v17;
        _InterlockedIncrement((volatile signed __int32 *)v17 + 4);
        *a6 = v13;
        _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
          2LL,
          v15,
          0x684u);
      }
      if ( v19 )
        CBaseObject::Release((CAnimatedTransitionVisual *)((char *)v19 + 8));
      CBaseObject::Release((CBaseObject *)v13);
    }
    else
    {
      v14 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2LL,
        -2147024882,
        0x682u);
    }
  }
  return v14;
}
