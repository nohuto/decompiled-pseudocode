/*
 * XREFs of ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x180098498
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009FA80 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetColorTransform@CVisual@@QEBAPEAV?$TValueResource@UMilColorTransform@@UtagMILCMD_COLORTRANSFORMRESOURCE@@$0BI@@@XZ @ 0x180049440 (-GetColorTransform@CVisual@@QEBAPEAV-$TValueResource@UMilColorTransform@@UtagMILCMD_COLORTRANSFO.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x18004D434 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800554DC (-Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Push@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@CDrawingContext@@@Z @ 0x18008B404 (-Push@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@.c)
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x180098620 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMil3DRect.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800DD36C (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEBAJPEAUMilPointAndSizeL@@@Z @ 0x1801AF918 (-ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEBAJPEAUMilPointAndSizeL@@@Z.c)
 *     ?GetColorSpace@CVisual@@QEBA?AW4DXGI_COLOR_SPACE_TYPE@@XZ @ 0x1801B29B4 (-GetColorSpace@CVisual@@QEBA-AW4DXGI_COLOR_SPACE_TYPE@@XZ.c)
 *     ?PushColorSpaceLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1801B3298 (-PushColorSpaceLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?PushColorTransformLayerForNode@CDrawingContext@@AEAAJPEBVCVisual@@PEAV?$TValueResource@UMilColorTransform@@UtagMILCMD_COLORTRANSFORMRESOURCE@@$0BI@@@@Z @ 0x1801B348C (-PushColorTransformLayerForNode@CDrawingContext@@AEAAJPEBVCVisual@@PEAV-$TValueResource@UMilColo.c)
 *     ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@11PEAVCResource@@PEA_N@Z @ 0x1801B3660 (-PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMi.c)
 *     ?PushResampleLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4Enum@CompositionResampleMode@@AEBUMilPointAndSizeL@@MM@Z @ 0x1801B3C80 (-PushResampleLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4Enum@CompositionResampleMode@@AEBUMilPoi.c)
 */

__int64 CDrawingContext::PushEffects(
        CDrawingContext *this,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        ...)
{
  _BYTE *v6; // rsi
  float v8; // xmm0_4
  unsigned int v10; // edi
  int v11; // eax
  __int64 v12; // rcx
  char v13; // r15
  __int64 v14; // r12
  int v16; // eax
  __int64 v17; // rcx
  CVisual *v18; // rcx
  struct CEffect *EffectInternal; // rax
  int v20; // eax
  __int64 v21; // rcx
  __int64 *v22; // rax
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  float v28; // xmm0_4
  float v29; // xmm0_4
  int v30; // eax
  __int64 v31; // rcx
  enum DXGI_COLOR_SPACE_TYPE ColorSpace; // eax
  __int128 v33; // [rsp+48h] [rbp-51h] BYREF
  _OWORD v34[4]; // [rsp+58h] [rbp-41h] BYREF
  char v35; // [rsp+98h] [rbp-1h]
  char v36; // [rsp+99h] [rbp+0h]
  __int64 v37; // [rsp+100h] [rbp+67h] BYREF
  _BYTE *v38; // [rsp+118h] [rbp+7Fh] BYREF
  va_list va; // [rsp+118h] [rbp+7Fh]
  va_list va1; // [rsp+120h] [rbp+87h] BYREF

  va_start(va1, a6);
  va_start(va, a6);
  v38 = va_arg(va1, _BYTE *);
  v37 = a4;
  v6 = v38;
  LODWORD(v8) = a2[5] & _xmm;
  *v38 = 0;
  v10 = 0;
  if ( v8 < 0.0000011920929 || COERCE_FLOAT(*((_DWORD *)a2 + 13) & _xmm) < 0.0000011920929 )
  {
    *v6 = 1;
    return v10;
  }
  if ( a2[1]
    || *((_BYTE *)a2 + 209)
    || *((_BYTE *)a2 + 210)
    || *((_BYTE *)a2 + 211)
    || *((_BYTE *)a2 + 212)
    || *((_DWORD *)a2 + 11)
    || *((_DWORD *)a2 + 12)
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 13) - 1.0) & _xmm) >= 0.0000011920929 )
  {
    v11 = CDrawingContext::PushLocalSpaceClipAndAlphaInternal(this);
    v10 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0LL, v11, 0xD3Bu);
      return v10;
    }
    if ( !*v6 )
    {
      v13 = 0;
      if ( *((_BYTE *)a2 + 209) )
      {
        CVisual::GetColorTransform(*a2);
        CDrawingContext::PushColorTransformLayerForNode(this, (struct CVisual *)*a2);
        v13 = 1;
      }
      v14 = a6;
      if ( *((_BYTE *)a2 + 210) )
      {
        v18 = (CVisual *)*a2;
        LOBYTE(v37) = 0;
        EffectInternal = CVisual::GetEffectInternal(v18);
        v20 = CDrawingContext::PushEffectLayer(this, (struct CVisual *)*a2, v14, (__int64)EffectInternal, (__int64)&v37);
        v10 = v20;
        if ( v20 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0LL, v20, 0xD59u);
          return v10;
        }
        v13 = 1;
        *v6 |= v37;
      }
      if ( *((_BYTE *)a2 + 211) )
      {
        v22 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 216LL))(*a2);
        v23 = 0LL;
        LOBYTE(v37) = 0;
        if ( v22 )
          v23 = *v22;
        v24 = CDrawingContext::PushEffectLayer(this, (struct CVisual *)*a2, v14, v23, (__int64)&v37);
        v10 = v24;
        if ( v24 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0LL, v24, 0xD72u);
          return v10;
        }
        v13 = 1;
        *v6 |= v37;
      }
      if ( *((_DWORD *)a2 + 12) )
      {
        v26 = CDrawingContext::ComputeExternalLayerOffsetAndBounds(this, (struct MilPointAndSizeL *)&v33);
        v10 = v26;
        if ( v26 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0LL, v26, 0xD7Bu);
          return v10;
        }
        v34[0] = _xmm;
        v34[1] = _xmm;
        v36 = v36 & 0xC0 | 0x17;
        v34[2] = _xmm;
        v34[3] = _xmm;
        v35 = 85;
        CMatrixStack::Top((CDrawingContext *)((char *)this + 368), (struct CMILMatrix *)v34);
        CMILMatrix::Get2DScaleDimensionsWithPerspective((CMILMatrix *)v34, (float *)&v37, (float *)va, 0LL);
        v28 = *(float *)&v37 <= 1.0 ? 1.0 - *(float *)&v37 : *(float *)&v37 - 1.0;
        if ( v28 > 0.0000099999997
          || (*(float *)&v38 <= 1.0 ? (v29 = 1.0 - *(float *)&v38) : (v29 = *(float *)&v38 - 1.0), v29 > 0.0000099999997) )
        {
          v30 = CDrawingContext::PushResampleLayer(this, *a2, *((unsigned int *)a2 + 12), &v33, v37, (_DWORD)v38);
          v10 = v30;
          if ( v30 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0LL, v30, 0xD8Bu);
            return v10;
          }
          v13 = 1;
        }
      }
      if ( *((_BYTE *)a2 + 212) )
      {
        ColorSpace = CVisual::GetColorSpace((CVisual *)*a2);
        CDrawingContext::PushColorSpaceLayer(this, (const struct CVisual *)*a2, ColorSpace);
      }
      else if ( !v13 )
      {
        return v10;
      }
      CMatrixStack::Top((CDrawingContext *)((char *)this + 368), (struct CMILMatrix *)(a2 + 7));
    }
  }
  else
  {
    *((_QWORD *)&v33 + 1) = *a2;
    LODWORD(v33) = 7;
    v16 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push((unsigned int *)this + 84, &v33);
    v10 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0LL, v16, 0xD35u);
  }
  return v10;
}
