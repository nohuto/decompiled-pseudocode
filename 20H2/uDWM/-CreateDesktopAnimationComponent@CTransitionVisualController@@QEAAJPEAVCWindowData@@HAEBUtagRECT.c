/*
 * XREFs of ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800A9C6C
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x180032BFC (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?OnTransitionWindow@CAppArrangementDelayed@@UEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z @ 0x1800AFB20 (-OnTransitionWindow@CAppArrangementDelayed@@UEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z.c)
 *     ?_CreateAndAddDesktopAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@HAEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800B0984 (-_CreateAndAddDesktopAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@HAEBUtagRECT@@_NPEAPE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x180008A50 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x18000AEC4 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ??0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z @ 0x18000C13C (--0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z.c)
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x180010EAC (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800160D0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017394 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?IsRTL@CStoryboard@@SA_NXZ @ 0x180033770 (-IsRTL@CStoryboard@@SA_NXZ.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x1800337B4 (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ?_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z @ 0x180033DE4 (-_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z.c)
 *     ?IsDesktopThumbnailInSnapshot@CDesktopThumbnail@@SA_NXZ @ 0x180041D88 (-IsDesktopThumbnailInSnapshot@CDesktopThumbnail@@SA_NXZ.c)
 *     __security_check_cookie @ 0x180053530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 *     ?SetCVIBrush@CAnimatedTransitionVisual@@QEAAJPEAVCImageLegacyMilBrushProxy@@PEAVCCachedVisualImageProxy@@@Z @ 0x1800A7424 (-SetCVIBrush@CAnimatedTransitionVisual@@QEAAJPEAVCImageLegacyMilBrushProxy@@PEAVCCachedVisualIma.c)
 *     McTemplateU0pddddddd_EtwEventWriteTransfer @ 0x1800AB26C (McTemplateU0pddddddd_EtwEventWriteTransfer.c)
 *     ?CreateBrush@CDesktopThumbnailCVI@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualImageProxy@@PEAPEAVCRectResourceProxy@@AEBUtagRECT@@@Z @ 0x1800B5AF4 (-CreateBrush@CDesktopThumbnailCVI@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualIm.c)
 *     ?GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z @ 0x1800B5F6C (-GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z.c)
 *     ?GetPerMonitorDesktopThumbnail@CDesktopThumbnail@@QEAAJUtagRECT@@PEAPEAVCPerMonitorDesktopThumbnail@@@Z @ 0x1800B5FD8 (-GetPerMonitorDesktopThumbnail@CDesktopThumbnail@@QEAAJUtagRECT@@PEAPEAVCPerMonitorDesktopThumbn.c)
 *     ?UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ @ 0x1800B6888 (-UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ.c)
 */

__int64 __fastcall CTransitionVisualController::CreateDesktopAnimationComponent(
        CTransitionVisualController *this,
        struct CWindowData *a2,
        int a3,
        const struct tagRECT *a4,
        bool a5,
        bool a6,
        struct CStoryboard *a7,
        struct CAnimationComponent **a8)
{
  unsigned int v10; // esi
  CAnimatedTransitionVisual *v11; // rbx
  __int64 v14; // rax
  char v15; // al
  RECT v16; // xmm0
  unsigned int v17; // edi
  int v18; // eax
  HWND ShellWindowForDesktop; // rdi
  __int64 v20; // rax
  __int64 v21; // rsi
  int DesktopThumbnail; // eax
  CBaseObject *v23; // r14
  CDesktopThumbnailBase *v24; // rcx
  int updated; // eax
  int PerMonitorDesktopThumbnail; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  CBaseObject *v31; // rbx
  RECT v32; // xmm0
  int v33; // ecx
  bool v34; // sf
  int v35; // r9d
  __m128i v36; // xmm1
  int v37; // edx
  int v38; // ebx
  int v39; // eax
  int v40; // edx
  int v41; // ebx
  CAnimatedTransitionVisual *v42; // r14
  int v43; // edx
  int v44; // ecx
  __int128 v45; // xmm0
  unsigned int v47; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v49; // [rsp+50h] [rbp-B0h]
  CAnimatedTransitionVisual *v50; // [rsp+58h] [rbp-A8h] BYREF
  CBaseObject *v51; // [rsp+60h] [rbp-A0h] BYREF
  CBaseObject *v52; // [rsp+68h] [rbp-98h] BYREF
  __int64 v53; // [rsp+70h] [rbp-90h]
  struct tagRECT v54; // [rsp+80h] [rbp-80h] BYREF
  int v55; // [rsp+90h] [rbp-70h]
  unsigned __int64 v56; // [rsp+98h] [rbp-68h] BYREF
  CBaseObject *v57; // [rsp+A0h] [rbp-60h] BYREF
  CBaseObject *v58; // [rsp+A8h] [rbp-58h] BYREF
  struct CStoryboard *v59; // [rsp+B0h] [rbp-50h]
  struct CAnimationComponent **v60; // [rsp+B8h] [rbp-48h]
  struct tagRECT v61; // [rsp+C0h] [rbp-40h] BYREF
  struct tagRECT v62; // [rsp+D0h] [rbp-30h] BYREF
  RECT rc2; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v64; // [rsp+F0h] [rbp-10h]

  v10 = *((_DWORD *)a2 + 154) & 0xFFF;
  v60 = a8;
  v51 = 0LL;
  v11 = 0LL;
  v52 = 0LL;
  v50 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  v14 = *(_QWORD *)a7;
  v59 = a7;
  v15 = (*(__int64 (__fastcall **)(struct CStoryboard *, _QWORD))(v14 + 120))(a7, v10);
  v16 = *a4;
  v55 = v15 & 0x10;
  rc2 = v16;
  if ( (v15 & 0x10) != 0 )
    CTransitionVisualController::GetMonitorRectFromRectImpl(a4, &rc2);
  if ( !(unsigned int)GetDesktopID(1LL, &v56) )
  {
    v47 = 1378;
LABEL_5:
    v17 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      -2147467259,
      v47);
    return v17;
  }
  v18 = CTransitionVisualController::_SetDesktopId(this, v56);
  v17 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      v18,
      0x566u);
    return v17;
  }
  ShellWindowForDesktop = CWindowList::GetShellWindowForDesktop(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                                + 61));
  if ( !ShellWindowForDesktop )
  {
    v47 = 1387;
    goto LABEL_5;
  }
  v20 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          144LL);
  if ( v20 )
    v21 = CAnimationComponent::CAnimationComponent(v20, (__int64)ShellWindowForDesktop, v10, a3, (__int64)a7);
  else
    v21 = 0LL;
  if ( !v21 )
  {
    v17 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      -2147024882,
      0x56Fu);
    return v17;
  }
  DesktopThumbnail = CDesktopThumbnail::GetDesktopThumbnail(&v51);
  v17 = DesktopThumbnail;
  if ( DesktopThumbnail < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      DesktopThumbnail,
      0x571u);
LABEL_72:
    v23 = v51;
    goto LABEL_73;
  }
  v23 = v51;
  v24 = v51;
  *((_QWORD *)v51 + 34) = v56;
  updated = CDesktopThumbnailBase::UpdateWindowClones(v24);
  v17 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      updated,
      0x572u);
    goto LABEL_73;
  }
  v62 = rc2;
  PerMonitorDesktopThumbnail = CDesktopThumbnail::GetPerMonitorDesktopThumbnail(v23, &v62, &v52);
  v17 = PerMonitorDesktopThumbnail;
  if ( PerMonitorDesktopThumbnail >= 0 )
  {
    v27 = CAnimatedTransitionVisual::Create(&v50);
    v17 = v27;
    if ( v27 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2LL,
        v27,
        0x575u);
LABEL_25:
      v11 = v50;
      goto LABEL_73;
    }
    if ( a5 )
      *(_BYTE *)(v21 + 67) = 1;
    if ( !a6 || CDesktopThumbnail::IsDesktopThumbnailInSnapshot() )
    {
      v29 = CDesktopThumbnailCVI::CreateBrush(v52, &v57, &v58, 0LL, &rc2);
      v17 = v29;
      if ( v29 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
          2LL,
          v29,
          0x582u);
        goto LABEL_25;
      }
      v11 = v50;
      v30 = CAnimatedTransitionVisual::SetCVIBrush(v50, v57, v58);
      v17 = v30;
      if ( v30 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
          2LL,
          v30,
          0x583u);
        goto LABEL_73;
      }
    }
    else
    {
      v11 = v50;
      v28 = CAnimatedTransitionVisual::SetVisual((struct CBaseImageProxy **)v50, v23, 1, &rc2);
      v17 = v28;
      if ( v28 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
          2LL,
          v28,
          0x57Eu);
        goto LABEL_73;
      }
    }
    *((_DWORD *)v11 + 182) = *((_DWORD *)v59 + 18);
    *((_DWORD *)v11 + 183) = a3;
    *((_BYTE *)v11 + 964) = CStoryboard::IsRTL();
    *(_QWORD *)(v21 + 40) = v11;
    _InterlockedIncrement((volatile signed __int32 *)v11 + 4);
    v31 = v52;
    *(_QWORD *)(v21 + 48) = v52;
    if ( v31 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v31 + 2);
      v31 = v52;
    }
    if ( (*((_DWORD *)a2 + 154) & 0x1000000) != 0 && EqualRect((const RECT *)((char *)a2 + 620), &rc2)
      || (*((_DWORD *)a2 + 154) & 0x800000) != 0 && EqualRect((const RECT *)((char *)a2 + 652), &rc2) )
    {
      v32 = rc2;
      v54 = rc2;
    }
    else
    {
      CTransitionVisualController::GetMonitorRectFromRectImpl(&rc2, &v54);
      v32 = v54;
    }
    *(RECT *)(v21 + 88) = v32;
    if ( a6 )
    {
      v33 = rc2.right - rc2.left;
      if ( rc2.right - rc2.left < 0 )
        v33 = 0;
      v53 = 0LL;
      v35 = rc2.bottom - rc2.top;
      v34 = rc2.bottom - rc2.top < 0;
    }
    else
    {
      CTransitionVisualController::GetMonitorRectFromRectImpl(&rc2, &v61);
      LODWORD(v53) = v54.left - v61.left;
      v33 = v54.right - v54.left;
      HIDWORD(v53) = v54.top - v61.top;
      if ( v54.right - v54.left < 0 )
        v33 = 0;
      v35 = v54.bottom - v54.top;
      v34 = v54.bottom - v54.top < 0;
    }
    v36 = *((__m128i *)v31 + 2);
    if ( v34 )
      v35 = 0;
    v49 = __PAIR64__(v35, v33);
    v37 = 0;
    v64 = *((_OWORD *)v31 + 2);
    v38 = _mm_cvtsi128_si32(_mm_srli_si128(v36, 8)) - _mm_cvtsi128_si32(v36);
    if ( v38 >= 0 )
      v37 = v38;
    if ( v33 > v37 )
    {
      v39 = MulDiv(v35, v37, v33);
      v33 = v38;
      v35 = v39;
      HIDWORD(v49) = v39;
      if ( v38 < 0 )
        v33 = 0;
      LODWORD(v49) = v33;
    }
    v40 = 0;
    v41 = HIDWORD(v64) - DWORD1(v64);
    if ( HIDWORD(v64) - DWORD1(v64) >= 0 )
      v40 = HIDWORD(v64) - DWORD1(v64);
    if ( v35 > v40 )
    {
      LODWORD(v49) = MulDiv(v33, v40, v35);
      if ( v41 < 0 )
        v41 = 0;
      HIDWORD(v49) = v41;
    }
    v42 = v50;
    *((_QWORD *)v50 + 117) = v53;
    *((_QWORD *)v42 + 118) = v49;
    if ( v55 )
    {
      *((_OWORD *)v42 + 55) = *(_OWORD *)((char *)a2 + 620);
      *((_OWORD *)v42 + 51) = *(_OWORD *)((char *)a2 + 620);
      CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)v42 + 8), 4096);
      *((_OWORD *)v42 + 56) = *(_OWORD *)((char *)a2 + 652);
      CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)v42 + 8), 4096);
      *((_BYTE *)v42 + 978) = 1;
    }
    if ( !IsRectEmpty((const RECT *)((char *)a2 + 684)) )
    {
      v45 = *(_OWORD *)((char *)a2 + 684);
      *(_DWORD *)(v21 + 68) = 2;
      *(_OWORD *)(v21 + 104) = v45;
    }
    *v60 = (struct CAnimationComponent *)v21;
    _InterlockedIncrement((volatile signed __int32 *)(v21 + 8));
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0pddddddd_EtwEventWriteTransfer(
        v44,
        v43,
        *((_QWORD *)a2 + 5),
        *((_DWORD *)v59 + 18),
        *((_DWORD *)a2 + 154),
        1,
        a4->left,
        a4->top,
        a4->bottom,
        a4->right);
    v11 = v50;
    goto LABEL_72;
  }
  MilInstrumentationCheckHR_MaybeFailFast(
    0x14u,
    &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
    2LL,
    PerMonitorDesktopThumbnail,
    0x573u);
LABEL_73:
  CBaseObject::Release((CBaseObject *)v21);
  if ( v23 )
    CBaseObject::Release(v23);
  if ( v52 )
    CBaseObject::Release(v52);
  if ( v11 )
    CBaseObject::Release((CAnimatedTransitionVisual *)((char *)v11 + 8));
  if ( v57 )
    CBaseObject::Release(v57);
  if ( v58 )
    CBaseObject::Release(v58);
  return v17;
}
