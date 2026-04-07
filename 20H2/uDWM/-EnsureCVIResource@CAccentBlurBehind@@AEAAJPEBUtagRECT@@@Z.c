/*
 * XREFs of ?EnsureCVIResource@CAccentBlurBehind@@AEAAJPEBUtagRECT@@@Z @ 0x1800026A8
 * Callers:
 *     ?UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x1800021F0 (-UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 * Callees:
 *     ?SetEffect@CVisualProxy@@QEAAJPEAVCResourceProxy@@@Z @ 0x1800029F8 (-SetEffect@CVisualProxy@@QEAAJPEAVCResourceProxy@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$CreateProxy@VCGaussianBlurEffectProxy@@@CCompositor@@IEAAJPEAPEAVCGaussianBlurEffectProxy@@@Z @ 0x180008F60 (--$CreateProxy@VCGaussianBlurEffectProxy@@@CCompositor@@IEAAJPEAPEAVCGaussianBlurEffectProxy@@@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18000BDD4 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUMilRectF@@0PEBVCDoubleResourceProxy@@W4Enum@MilBrushMappingMode@@2PEBVCRectResourceProxy@@3W44MilStretch@@W44MilTileMode@@W44MilHorizontalAlignment@@W44MilVerticalAlignment@@PEBVCBaseImageProxy@@@Z @ 0x18000E124 (-Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUMilRectF@@0PEBVCDoubleResourceProxy@@W4Enum@MilBrus.c)
 *     ?Update@CCachedVisualImageProxy@@QEAAJAEBUMilRectF@@AEBUMilSizeD@@PEBVCRectResourceProxy@@PEBVCSizeResourceProxy@@PEAVCVisualProxy@@W4Enum@MilBrushMappingMode@@@Z @ 0x180010178 (-Update@CCachedVisualImageProxy@@QEAAJAEBUMilRectF@@AEBUMilSizeD@@PEBVCRectResourceProxy@@PEBVCS.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017394 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CVisual@@SAJPEAPEAV1@@Z @ 0x180026600 (-Create@CVisual@@SAJPEAPEAV1@@Z.c)
 *     ??$CreateProxy@VCCachedVisualImageProxy@@@CCompositor@@IEAAJPEAPEAVCCachedVisualImageProxy@@@Z @ 0x1800266A0 (--$CreateProxy@VCCachedVisualImageProxy@@@CCompositor@@IEAAJPEAPEAVCCachedVisualImageProxy@@@Z.c)
 *     ?Create@CRenderDataVisual@@SAJPEAPEAV1@@Z @ 0x180027550 (-Create@CRenderDataVisual@@SAJPEAPEAV1@@Z.c)
 *     ??$CreateProxy@VCImageLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18003C858 (--$CreateProxy@VCImageLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCImageLegacyMilBrushProxy@@.c)
 *     ??$CreateProxy@VCRectangleGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18003CA1C (--$CreateProxy@VCRectangleGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     __security_check_cookie @ 0x180053530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAccentBlurBehind::EnsureCVIResource(struct CVisual **this, const struct tagRECT *a2)
{
  _QWORD *v2; // rsi
  struct CResourceProxy **v5; // r14
  __int64 i; // rax
  float v7; // xmm2_4
  unsigned int v8; // eax
  __m128i v9; // xmm0
  int v10; // eax
  float v11; // xmm0_4
  struct CVisual *v12; // rcx
  int v13; // eax
  int v14; // ebx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  __int64 v20; // r8
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  __int64 v25; // rdx
  volatile signed __int32 *v26; // rsi
  int v27; // eax
  CBaseObject *v28; // rcx
  CBaseObject *v29; // rcx
  CBaseObject *v30; // rcx
  void *v31; // [rsp+28h] [rbp-51h]
  void *v32; // [rsp+28h] [rbp-51h]
  CBaseObject *v33; // [rsp+70h] [rbp-9h] BYREF
  __int128 v34; // [rsp+78h] [rbp-1h] BYREF
  __int128 v35; // [rsp+88h] [rbp+Fh] BYREF
  __int128 v36; // [rsp+98h] [rbp+1Fh] BYREF

  v2 = this + 45;
  v33 = 0LL;
  v34 = 0LL;
  if ( !this[45] )
  {
    v16 = CVisual::Create(this + 45);
    v14 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x57Cu, v31);
      goto LABEL_16;
    }
    CVisual::SetInterpolationMode(*v2, 0LL);
  }
  if ( !this[46] )
  {
    v17 = CRenderDataVisual::Create(this + 46);
    v14 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x582u, v31);
      goto LABEL_16;
    }
  }
  if ( !this[43] )
  {
    v18 = CCompositor::CreateProxy<CRectangleGeometryProxy>(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5));
    v14 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x587u, v31);
      goto LABEL_16;
    }
  }
  v5 = this + 44;
  if ( !this[44] )
  {
    v19 = CCompositor::CreateProxy<CGaussianBlurEffectProxy>(
            *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
            this + 44);
    v14 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x58Du, v31);
      goto LABEL_16;
    }
    v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, int))(**(_QWORD **)(*((_QWORD *)*v5 + 2) + 16LL)
                                                                          + 936LL))(
            *(_QWORD *)(*((_QWORD *)*v5 + 2) + 16LL),
            *(unsigned int *)(*((_QWORD *)*v5 + 2) + 24LL),
            v20,
            0LL,
            1);
    v14 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x58Eu, v31);
      goto LABEL_16;
    }
    v22 = CVisualProxy::SetEffect(*(CVisualProxy **)(*v2 + 16LL), *v5);
    v14 = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x58Fu, v31);
      goto LABEL_16;
    }
  }
  for ( i = 0LL; i < 4; ++i )
    *((float *)&v35 + i) = (float)*(&a2->left + i);
  v7 = *((float *)this + 80);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v7 - 1.0) & _xmm) >= 0.0000011920929 )
  {
    v8 = 0;
    if ( a2->bottom - a2->top >= 0 )
      v8 = a2->bottom - a2->top;
    v9 = _mm_cvtsi32_si128(v8);
    v10 = 0;
    LODWORD(v11) = _mm_cvtepi32_ps(v9).m128_u32[0];
    if ( a2->right - a2->left >= 0 )
      v10 = a2->right - a2->left;
    *((double *)&v34 + 1) = (float)(v11 * v7);
    *(double *)&v34 = (float)((float)v10 * v7);
  }
  v12 = this[41];
  if ( !v12 )
  {
    v23 = CCompositor::CreateProxy<CCachedVisualImageProxy>(
            *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
            this + 41);
    v14 = v23;
    if ( v23 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x5A1u, v31);
      goto LABEL_16;
    }
    v12 = this[41];
  }
  v32 = *(void **)(*v2 + 16LL);
  v13 = CCachedVisualImageProxy::Update(v12, &v35, &v34, 0LL, 0LL);
  v14 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x5AAu, v32);
    goto LABEL_16;
  }
  if ( this[42] )
    goto LABEL_16;
  v24 = CCompositor::CreateProxy<CImageLegacyMilBrushProxy>(
          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
          &v33);
  v14 = v24;
  if ( v24 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0x5AEu, v32);
    goto LABEL_36;
  }
  v26 = (volatile signed __int32 *)v33;
  LODWORD(v32) = 1;
  v36 = _xmm;
  v35 = _xmm;
  v27 = CImageLegacyMilBrushProxy::Update(v33, v25, &v36, &v35, 0LL);
  v14 = v27;
  if ( v27 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x5C8u, v32);
LABEL_37:
    if ( v26 )
      CBaseObject::Release((CBaseObject *)v26);
    goto LABEL_16;
  }
  v28 = this[42];
  if ( v28 )
    CBaseObject::Release(v28);
  this[42] = (struct CVisual *)v26;
  if ( v26 )
  {
    _InterlockedIncrement(v26 + 2);
LABEL_36:
    v26 = (volatile signed __int32 *)v33;
    goto LABEL_37;
  }
LABEL_16:
  if ( v14 < 0 )
  {
    v29 = this[41];
    if ( v29 )
    {
      CBaseObject::Release(v29);
      this[41] = 0LL;
    }
    v30 = this[42];
    if ( v30 )
    {
      CBaseObject::Release(v30);
      this[42] = 0LL;
    }
  }
  return (unsigned int)v14;
}
