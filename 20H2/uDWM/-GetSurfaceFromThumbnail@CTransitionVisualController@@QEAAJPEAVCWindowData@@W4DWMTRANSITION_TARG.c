/*
 * XREFs of ?GetSurfaceFromThumbnail@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@_NPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualImageProxy@@PEAUMilPoint3F@@@Z @ 0x180034450
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x180032BFC (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCVI@CWindowSnapshot@@QEAAJPEBUtagRECT@@PEAPEAVCCachedVisualImageProxy@@PEAM@Z @ 0x180009294 (-GetCVI@CWindowSnapshot@@QEAAJPEBUtagRECT@@PEAPEAVCCachedVisualImageProxy@@PEAM@Z.c)
 *     ?Freeze@CCachedVisualImageProxy@@QEAAJXZ @ 0x18000D348 (-Freeze@CCachedVisualImageProxy@@QEAAJXZ.c)
 *     ?Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUMilRectF@@0PEBVCDoubleResourceProxy@@W4Enum@MilBrushMappingMode@@2PEBVCRectResourceProxy@@3W44MilStretch@@W44MilTileMode@@W44MilHorizontalAlignment@@W44MilVerticalAlignment@@PEBVCBaseImageProxy@@@Z @ 0x18000E124 (-Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUMilRectF@@0PEBVCDoubleResourceProxy@@W4Enum@MilBrus.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017394 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??$CreateProxy@VCImageLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18003C858 (--$CreateProxy@VCImageLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCImageLegacyMilBrushProxy@@.c)
 *     __security_check_cookie @ 0x180053530 (__security_check_cookie.c)
 *     ?GetCVI@CThumbnailVisual@@QEAAJPEBUtagRECT@@PEAPEAVCCachedVisualImageProxy@@PEAUMilPoint3F@@@Z @ 0x1800937AC (-GetCVI@CThumbnailVisual@@QEAAJPEBUtagRECT@@PEAPEAVCCachedVisualImageProxy@@PEAUMilPoint3F@@@Z.c)
 */

__int64 __fastcall CTransitionVisualController::GetSurfaceFromThumbnail(
        __int64 a1,
        __int64 a2,
        int a3,
        const struct tagRECT *a4,
        char a5,
        CBaseObject **a6,
        CBaseObject **a7,
        float *a8)
{
  volatile signed __int32 *v8; // rdi
  const struct tagRECT *v9; // r10
  float v10; // r15d
  unsigned int CVI; // esi
  CWindowSnapshot *v13; // rcx
  __int64 v14; // r15
  float v16; // xmm0_4
  volatile signed __int32 *v17; // rbx
  int v18; // eax
  __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // [rsp+58h] [rbp-89h]
  float v24; // [rsp+78h] [rbp-69h] BYREF
  struct CCachedVisualImageProxy *v25; // [rsp+80h] [rbp-61h] BYREF
  CBaseObject *v26; // [rsp+88h] [rbp-59h] BYREF
  __int64 v27; // [rsp+90h] [rbp-51h] BYREF
  int v28; // [rsp+98h] [rbp-49h]
  __int128 v29; // [rsp+A0h] [rbp-41h] BYREF
  __int128 v30; // [rsp+B0h] [rbp-31h] BYREF

  v25 = 0LL;
  v8 = 0LL;
  v9 = a4;
  v10 = *(float *)&a3;
  *a8 = 1.0;
  a8[1] = 1.0;
  CVI = -2147467259;
  a8[2] = 1.0;
  *(_QWORD *)&v29 = a4;
  v24 = *(float *)&a3;
  v26 = 0LL;
  if ( !a2 )
    return CVI;
  v13 = *(CWindowSnapshot **)(a2 + 416);
  if ( v13 )
  {
    CVI = CWindowSnapshot::GetCVI(v13, a4, &v25, &v24);
    v16 = 1.0 / v24;
    a8[1] = 1.0 / v24;
    *a8 = v16;
  }
  else
  {
    v14 = 0LL;
    if ( !*(_DWORD *)(a2 + 528) )
      return CVI;
    while ( 1 )
    {
      v21 = *(_QWORD *)(a2 + 504);
      v27 = 0x3F8000003F800000LL;
      v28 = 1065353216;
      if ( CThumbnailVisual::GetCVI(
             *(CThumbnailVisual **)(*(_QWORD *)(v21 + 8 * v14) + 88LL),
             v9,
             &v25,
             (struct MilPoint3F *)&v27) >= 0
        && (!a5
         || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v27 - 1.0) & _xmm) <= 0.0000011920929
         && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v27 + 1) - 1.0) & _xmm) <= 0.0000011920929) )
      {
        break;
      }
      v14 = (unsigned int)(v14 + 1);
      if ( (unsigned int)v14 >= *(_DWORD *)(a2 + 528) )
        goto LABEL_19;
      v9 = (const struct tagRECT *)v29;
    }
    CVI = 0;
    v22 = v28;
    v10 = v24;
    *(_QWORD *)a8 = v27;
    *((_DWORD *)a8 + 2) = v22;
  }
  if ( (CVI & 0x80000000) == 0 )
  {
    v17 = (volatile signed __int32 *)v25;
    if ( (LODWORD(v10) & 0x4000000) != 0 )
      CCachedVisualImageProxy::Freeze(v25);
    v18 = CCompositor::CreateProxy<CImageLegacyMilBrushProxy>(
            *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
            &v26);
    CVI = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2LL,
        v18,
        0x965u);
      v8 = (volatile signed __int32 *)v26;
      goto LABEL_20;
    }
    v8 = (volatile signed __int32 *)v26;
    v30 = _xmm;
    v29 = _xmm;
    v20 = CImageLegacyMilBrushProxy::Update(
            (__int64)v26,
            v19,
            (__int64)&v30,
            (__int64)&v29,
            0LL,
            1u,
            1,
            0LL,
            0LL,
            1,
            v23,
            0,
            0,
            (__int64)v17);
    CVI = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2LL,
        v20,
        0x980u);
      goto LABEL_20;
    }
    if ( *a7 )
      CBaseObject::Release(*a7);
    *a7 = (CBaseObject *)v17;
    if ( v17 )
    {
      _InterlockedAdd(v17 + 2, 1u);
      v17 = (volatile signed __int32 *)v25;
      v8 = (volatile signed __int32 *)v26;
    }
    if ( *a6 )
      CBaseObject::Release(*a6);
    *a6 = (CBaseObject *)v8;
    if ( !v8 )
      goto LABEL_20;
    _InterlockedAdd(v8 + 2, 1u);
    v8 = (volatile signed __int32 *)v26;
  }
LABEL_19:
  v17 = (volatile signed __int32 *)v25;
LABEL_20:
  if ( v17 )
    CBaseObject::Release((CBaseObject *)v17);
  if ( v8 )
    CBaseObject::Release((CBaseObject *)v8);
  return CVI;
}
