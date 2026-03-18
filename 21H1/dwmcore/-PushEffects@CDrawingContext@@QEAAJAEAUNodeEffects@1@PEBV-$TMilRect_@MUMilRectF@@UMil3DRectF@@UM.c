/*
 * XREFs of ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x180057F10
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005E7C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@11PEAVCResource@@PEA_N@Z @ 0x18000CE6C (-PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMi.c)
 *     ?UpdateCpuClippingData@CVisual@@IEAAJPEBVCVisualTree@@W4Enum@CpuClippingMode@@_N@Z @ 0x18001DEBC (-UpdateCpuClippingData@CVisual@@IEAAJPEBVCVisualTree@@W4Enum@CpuClippingMode@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18002FC70 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x180045CF8 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?Push@?$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackBackfaceVisibilityEntry@CDrawingContext@@@Z @ 0x18004F0CC (-Push@-$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUSta.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180054780 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJ$$QEAVCShapePtr@@PEBVCMILMatrix@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x180058320 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJ$$QEAVCShapePtr@@PEBVCMILMatrix@@PEBV-.c)
 *     ?Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18006F028 (-Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ?GetColorTransform@CVisual@@QEBAPEAV?$TValueResource@UMilColorTransform@@UtagMILCMD_COLORTRANSFORMRESOURCE@@$0BI@@@XZ @ 0x18007D214 (-GetColorTransform@CVisual@@QEBAPEAV-$TValueResource@UMilColorTransform@@UtagMILCMD_COLORTRANSFO.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x18007D478 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800BDC0C (-Release@CShapePtr@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEBAJPEAUMilPointAndSizeL@@@Z @ 0x180178F30 (-ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEBAJPEAUMilPointAndSizeL@@@Z.c)
 *     ?GetColorSpace@CVisual@@QEBA?AW4DXGI_COLOR_SPACE_TYPE@@XZ @ 0x18017B9BC (-GetColorSpace@CVisual@@QEBA-AW4DXGI_COLOR_SPACE_TYPE@@XZ.c)
 *     ?PushColorSpaceLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18017C314 (-PushColorSpaceLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?PushColorTransformLayerForNode@CDrawingContext@@AEAAJPEBVCVisual@@PEAV?$TValueResource@UMilColorTransform@@UtagMILCMD_COLORTRANSFORMRESOURCE@@$0BI@@@@Z @ 0x18017C508 (-PushColorTransformLayerForNode@CDrawingContext@@AEAAJPEBVCVisual@@PEAV-$TValueResource@UMilColo.c)
 *     ?PushResampleLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4Enum@CompositionResampleMode@@AEBUMilPointAndSizeL@@MM@Z @ 0x18017C75C (-PushResampleLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4Enum@CompositionResampleMode@@AEBUMilPoi.c)
 */

__int64 __fastcall CDrawingContext::PushEffects(
        CDrawingContext *this,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _BYTE *a7)
{
  unsigned int v7; // ebx
  __int64 v10; // r14
  float v12; // xmm0_4
  char v13; // al
  __int64 v14; // rsi
  __int64 v15; // rax
  int ShapeData; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  char v21; // al
  void (__fastcall ***v22)(_QWORD, __int64); // rcx
  struct _LIST_ENTRY *v23; // r14
  CVisual *v24; // rsi
  int v25; // eax
  __int64 v26; // rcx
  char v27; // si
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *i; // rdx
  int updated; // eax
  __int64 v32; // rcx
  struct CFilterEffect *v33; // rax
  int v34; // eax
  __int64 v35; // rcx
  CVisual *v36; // rcx
  struct CFilterEffect *EffectInternal; // rax
  int v38; // eax
  __int64 v39; // rcx
  int v40; // eax
  __int64 v41; // rcx
  int v42; // eax
  __int64 v43; // rcx
  float v44; // xmm0_4
  float v45; // xmm0_4
  int v46; // eax
  __int64 v47; // rcx
  enum DXGI_COLOR_SPACE_TYPE ColorSpace; // eax
  __int64 v49; // [rsp+40h] [rbp-A1h] BYREF
  void (__fastcall ***v50)(_QWORD, __int64); // [rsp+48h] [rbp-99h] BYREF
  char v51; // [rsp+50h] [rbp-91h]
  __int128 v52; // [rsp+58h] [rbp-89h] BYREF
  __int64 v53; // [rsp+68h] [rbp-79h] BYREF
  __int64 v54; // [rsp+70h] [rbp-71h] BYREF
  _OWORD v55[4]; // [rsp+80h] [rbp-61h] BYREF
  __int16 v56; // [rsp+C0h] [rbp-21h]
  __int128 v57; // [rsp+D0h] [rbp-11h] BYREF

  v7 = 0;
  v10 = a5;
  *a7 = 0;
  LODWORD(v12) = a2[1] & _xmm;
  v54 = a5;
  v53 = a6;
  if ( v12 < 0.0000011920929 || COERCE_FLOAT(*((_DWORD *)a2 + 5) & _xmm) < 0.0000011920929 )
  {
    *a7 = 1;
    return v7;
  }
  v13 = *((_BYTE *)a2 + 164);
  if ( !v13
    && !*((_BYTE *)a2 + 165)
    && !*((_BYTE *)a2 + 166)
    && !*((_BYTE *)a2 + 167)
    && !*((_BYTE *)a2 + 168)
    && !*((_DWORD *)a2 + 3)
    && !*((_DWORD *)a2 + 4)
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 5) - 1.0) & _xmm) < 0.0000011920929 )
  {
    *((_QWORD *)&v52 + 1) = *a2;
    LODWORD(v52) = 7;
    v40 = CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::Push((unsigned int *)this + 94, &v52);
    v7 = v40;
    if ( v40 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0, v40, 0xC7Eu, 0LL);
    return v7;
  }
  v14 = 0LL;
  v51 = 0;
  v50 = 0LL;
  if ( v13 )
  {
    v15 = *a2;
    *(_QWORD *)&v52 = 0LL;
    v57 = 0LL;
    BYTE8(v52) = 0;
    ShapeData = CGeometry::GetShapeData(
                  *(CGeometry **)(v15 + 240),
                  (const struct D2D_SIZE_F *)(v15 + 132),
                  (struct CShapePtr *)&v52);
    v7 = ShapeData;
    if ( ShapeData < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, ShapeData, 0x881u, 0LL);
    }
    else
    {
      v18 = v52;
      v7 = -2003292412;
      if ( (_QWORD)v52 )
      {
        v19 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, _QWORD))(*(_QWORD *)v52 + 32LL))(v52, &v57, 0LL);
        v7 = v19;
        if ( v19 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x115u, 0LL);
        v18 = v52;
      }
      if ( (v7 & 0x80000000) == 0 )
      {
        v21 = BYTE8(v52);
        v14 = v18;
        v50 = (void (__fastcall ***)(_QWORD, __int64))v18;
        v22 = 0LL;
        *(_QWORD *)&v52 = 0LL;
        BYTE8(v52) = 0;
        v51 = v21;
LABEL_12:
        if ( v7 == -2003304438 )
          v7 = 0;
        if ( BYTE8(v52) && v22 )
          (**v22)(v22, 1LL);
        if ( (v7 & 0x80000000) != 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast((__int64)v22, 0LL, 0, v7, 0xC87u, 0LL);
          CShapePtr::Release((CShapePtr *)&v50);
          return v7;
        }
        if ( !v14 )
          *((_BYTE *)a2 + 164) = 0;
        goto LABEL_18;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v7, 0x882u, 0LL);
    }
    v22 = (void (__fastcall ***)(_QWORD, __int64))v52;
    goto LABEL_12;
  }
LABEL_18:
  if ( *(_BYTE *)(84LL * (unsigned int)(*((_DWORD *)this + 240) - 1) + *((_QWORD *)this + 117) + 80) )
  {
    v23 = (struct _LIST_ENTRY *)*((_QWORD *)this + 741);
    v24 = (CVisual *)*a2;
    if ( !((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *))v23->Flink[12].Blink)(v23) )
    {
      TreeDataListHead = CVisual::GetTreeDataListHead(v24);
      if ( TreeDataListHead )
      {
        for ( i = TreeDataListHead->Flink; i != TreeDataListHead; i = i->Flink )
        {
          if ( i[2].Flink == v23 )
            break;
        }
      }
    }
    v10 = v54;
  }
  v25 = CDrawingContext::PushLocalSpaceClipAndAlphaInternal(this, (__int64)a2, (__int64)a7);
  v7 = v25;
  if ( v25 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0xC9Eu, 0LL);
    goto LABEL_82;
  }
  if ( !*a7 )
  {
    v27 = 0;
    if ( *((_BYTE *)a2 + 165) )
    {
      CVisual::GetColorTransform(*a2);
      CDrawingContext::PushColorTransformLayerForNode(this, (struct CVisual *)*a2);
      v27 = 1;
    }
    if ( *((_BYTE *)a2 + 166) )
    {
      v36 = (CVisual *)*a2;
      LOBYTE(v49) = 0;
      EffectInternal = CVisual::GetEffectInternal(v36);
      v38 = CDrawingContext::PushEffectLayer(
              (struct IDeviceTarget **)this,
              (struct CVisual *)*a2,
              a3,
              v10,
              v53,
              EffectInternal,
              (char *)&v49);
      v7 = v38;
      if ( v38 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, v38, 0xCBCu, 0LL);
        goto LABEL_82;
      }
      v27 = 1;
      *a7 |= v49;
    }
    if ( *((_BYTE *)a2 + 167) )
    {
      v33 = (struct CFilterEffect *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 232LL))(*a2);
      LOBYTE(v49) = 0;
      if ( v33 )
        v33 = *(struct CFilterEffect **)v33;
      v34 = CDrawingContext::PushEffectLayer(
              (struct IDeviceTarget **)this,
              (struct CVisual *)*a2,
              a3,
              v10,
              v53,
              v33,
              (char *)&v49);
      v7 = v34;
      if ( v34 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v34, 0xCCFu, 0LL);
        goto LABEL_82;
      }
      v27 = 1;
      *a7 |= v49;
    }
    if ( *((_DWORD *)a2 + 4) )
    {
      v42 = CDrawingContext::ComputeExternalLayerOffsetAndBounds(this, (struct MilPointAndSizeL *)&v57);
      v7 = v42;
      if ( v42 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0, v42, 0xCD8u, 0LL);
        goto LABEL_82;
      }
      v55[0] = _xmm;
      v55[1] = _xmm;
      v55[2] = _xmm;
      v55[3] = _xmm;
      v56 = 32085;
      CMatrixStack::Top((CDrawingContext *)((char *)this + 408), (struct CMILMatrix *)v55);
      CMILMatrix::Get2DScaleDimensionsWithPerspective(v55, &v54, &v53, 0LL);
      v44 = *(float *)&v54 <= 1.0 ? 1.0 - *(float *)&v54 : *(float *)&v54 - 1.0;
      if ( v44 > 0.0000099999997
        || (*(float *)&v53 <= 1.0 ? (v45 = 1.0 - *(float *)&v53) : (v45 = *(float *)&v53 - 1.0), v45 > 0.0000099999997) )
      {
        v46 = CDrawingContext::PushResampleLayer(this, *a2, *((unsigned int *)a2 + 4), &v57, v54, v53);
        v7 = v46;
        if ( v46 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, v46, 0xCE8u, 0LL);
          goto LABEL_82;
        }
        v27 = 1;
      }
    }
    if ( *((_BYTE *)a2 + 168) )
    {
      ColorSpace = CVisual::GetColorSpace((CVisual *)*a2);
      CDrawingContext::PushColorSpaceLayer(this, (const struct CVisual *)*a2, ColorSpace);
    }
    else if ( !v27 )
    {
      goto LABEL_30;
    }
    CMatrixStack::Top((CDrawingContext *)((char *)this + 408), (struct CMILMatrix *)(a2 + 3));
    updated = CVisual::UpdateCpuClippingData((CVisual **)*a2, *((const struct CVisualTree **)this + 741), 4u, 0);
    v7 = updated;
    if ( updated >= 0 )
      goto LABEL_30;
    MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, updated, 0xD01u, 0LL);
LABEL_82:
    CShapePtr::Release((CShapePtr *)&v50);
    return v7;
  }
LABEL_30:
  if ( v51 && v50 )
    (**v50)(v50, 1LL);
  return v7;
}
