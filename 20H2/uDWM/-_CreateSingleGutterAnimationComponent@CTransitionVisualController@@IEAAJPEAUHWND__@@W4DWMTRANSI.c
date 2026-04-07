/*
 * XREFs of ?_CreateSingleGutterAnimationComponent@CTransitionVisualController@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@PEBUFakeGutterInfo@1@PEAPEAVCAnimationComponent@@@Z @ 0x1800AAEE4
 * Callers:
 *     ?CreateGutterAnimationComponentsForRect@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEBUtagRECT@@2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@4@Z @ 0x1800AA58C (-CreateGutterAnimationComponentsForRect@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANS.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18000AD58 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ??0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z @ 0x18000C13C (--0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800160D0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017394 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?IsRTL@CStoryboard@@SA_NXZ @ 0x180033770 (-IsRTL@CStoryboard@@SA_NXZ.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x1800337B4 (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 *     ?SetBitmap@CAnimatedTransitionVisual@@QEAAJPEAVCBitmapSource@@@Z @ 0x1800A738C (-SetBitmap@CAnimatedTransitionVisual@@QEAAJPEAVCBitmapSource@@@Z.c)
 */

__int64 __fastcall CTransitionVisualController::_CreateSingleGutterAnimationComponent(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 *a5)
{
  __int64 v9; // rax
  __int64 v10; // rsi
  unsigned int v11; // edi
  int v12; // eax
  CAnimatedTransitionVisual *v13; // rbx
  int v14; // edx
  CAnimatedTransitionVisual *v16; // [rsp+30h] [rbp-18h] BYREF

  v16 = 0LL;
  v9 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         144LL);
  if ( v9 )
    v10 = CAnimationComponent::CAnimationComponent(v9, a2, a3, *(_DWORD *)a4, *(_QWORD *)(a4 + 8));
  else
    v10 = 0LL;
  if ( v10 )
  {
    v12 = CAnimatedTransitionVisual::Create(&v16);
    v11 = v12;
    if ( v12 >= 0 )
    {
      v13 = v16;
      CAnimatedTransitionVisual::SetBitmap((CBaseObject **)v16, *(struct CBaseImageProxy ***)(a1 + 184));
      *((_QWORD *)v13 + 118) = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 24LL);
      *(_BYTE *)(v10 + 72) = 1;
      v14 = *(_DWORD *)a4;
      *((_DWORD *)v13 + 182) = *(_DWORD *)(*(_QWORD *)(a4 + 8) + 72LL);
      *((_DWORD *)v13 + 183) = v14;
      *((_BYTE *)v13 + 964) = CStoryboard::IsRTL();
      CAnimatedTransitionVisual::SetBeginRect((struct tagPOINT *)v13, (const struct tagRECT *)(a4 + 16));
      *((_OWORD *)v13 + 54) = *(_OWORD *)(a4 + 32);
      CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)v13 + 8), 4096);
      *(_QWORD *)(v10 + 40) = v13;
      _InterlockedIncrement((volatile signed __int32 *)v13 + 4);
      *a5 = v10;
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2LL,
        v12,
        0x648u);
    }
    if ( v16 )
      CBaseObject::Release((CAnimatedTransitionVisual *)((char *)v16 + 8));
    CBaseObject::Release((CBaseObject *)v10);
  }
  else
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      -2147024882,
      0x646u);
  }
  return v11;
}
