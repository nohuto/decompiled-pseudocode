/*
 * XREFs of ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x180089CA0
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800866D0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@11PEAVCResource@@PEA_N@Z @ 0x1800102BC (-PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMi.c)
 *     ?UpdateCpuClippingData@CVisual@@IEAAJPEBVCVisualTree@@W4Enum@CpuClippingMode@@_N@Z @ 0x18001CFBC (-UpdateCpuClippingData@CVisual@@IEAAJPEBVCVisualTree@@W4Enum@CpuClippingMode@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x180085320 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?Push@?$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackBackfaceVisibilityEntry@CDrawingContext@@@Z @ 0x180085380 (-Push@-$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUSta.c)
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJ$$QEAVCShapePtr@@PEBVCMILMatrix@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x18008A2F0 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJ$$QEAVCShapePtr@@PEBVCMILMatrix@@PEBV-.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180092390 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800979D0 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?GetColorTransform@CVisual@@QEBAPEAV?$TValueResource@UMilColorTransform@@UtagMILCMD_COLORTRANSFORMRESOURCE@@$0BI@@@XZ @ 0x1800AA684 (-GetColorTransform@CVisual@@QEBAPEAV-$TValueResource@UMilColorTransform@@UtagMILCMD_COLORTRANSFO.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x1800AA8E8 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B6928 (-Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C463C (-Release@CShapePtr@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     ?GetWorldTransform@CDrawingContext@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800E6818 (-GetWorldTransform@CDrawingContext@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEBAJPEAUMilPointAndSizeL@@@Z @ 0x180174650 (-ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEBAJPEAUMilPointAndSizeL@@@Z.c)
 *     ?GetColorSpace@CVisual@@QEBA?AW4DXGI_COLOR_SPACE_TYPE@@XZ @ 0x1801770DC (-GetColorSpace@CVisual@@QEBA-AW4DXGI_COLOR_SPACE_TYPE@@XZ.c)
 *     ?PushColorSpaceLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180177AB4 (-PushColorSpaceLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?PushColorTransformLayerForNode@CDrawingContext@@AEAAJPEBVCVisual@@PEAV?$TValueResource@UMilColorTransform@@UtagMILCMD_COLORTRANSFORMRESOURCE@@$0BI@@@@Z @ 0x180177CA8 (-PushColorTransformLayerForNode@CDrawingContext@@AEAAJPEBVCVisual@@PEAV-$TValueResource@UMilColo.c)
 *     ?PushResampleLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4Enum@CompositionResampleMode@@AEBUMilPointAndSizeL@@MM@Z @ 0x180177EFC (-PushResampleLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4Enum@CompositionResampleMode@@AEBUMilPoi.c)
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
  float v11; // xmm0_4
  char v12; // al
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r15
  __int64 v16; // rax
  int ShapeData; // eax
  __int64 v18; // rcx
  int v19; // esi
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  void (__fastcall ***v23)(_QWORD, __int64); // rcx
  struct _LIST_ENTRY *v24; // rbx
  CVisual *v25; // rsi
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *i; // rcx
  int v28; // eax
  __int64 v29; // rcx
  char v30; // si
  CVisual *v31; // rcx
  struct CFilterEffect *EffectInternal; // rax
  __int64 v33; // r15
  int v34; // eax
  __int64 v35; // rcx
  struct CFilterEffect *v36; // rax
  int v37; // eax
  __int64 v38; // rcx
  int v39; // eax
  __int64 v40; // rcx
  float v41; // xmm0_4
  float v42; // xmm0_4
  int v43; // eax
  __int64 v44; // rcx
  enum DXGI_COLOR_SPACE_TYPE ColorSpace; // eax
  int updated; // eax
  __int64 v47; // rcx
  __int64 v49; // [rsp+40h] [rbp-B1h] BYREF
  void (__fastcall ***v50)(_QWORD, __int64); // [rsp+48h] [rbp-A9h] BYREF
  char v51; // [rsp+50h] [rbp-A1h]
  __int128 v52; // [rsp+58h] [rbp-99h] BYREF
  __int64 v53; // [rsp+68h] [rbp-89h] BYREF
  __int64 v54; // [rsp+70h] [rbp-81h] BYREF
  _OWORD v55[4]; // [rsp+80h] [rbp-71h] BYREF
  __int16 v56; // [rsp+C0h] [rbp-31h]
  __int128 v57; // [rsp+D0h] [rbp-21h] BYREF

  v7 = 0;
  v54 = a5;
  *a7 = 0;
  LODWORD(v11) = a2[1] & _xmm;
  v53 = a6;
  if ( v11 < 0.0000011920929 || COERCE_FLOAT(*((_DWORD *)a2 + 5) & _xmm) < 0.0000011920929 )
  {
    *a7 = 1;
    return v7;
  }
  v12 = *((_BYTE *)a2 + 164);
  if ( !v12
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
    v13 = CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::Push((unsigned int *)this + 94, &v52);
    v7 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xC92u, 0LL);
    return v7;
  }
  v50 = 0LL;
  v15 = 0LL;
  v51 = 0;
  if ( v12 )
  {
    v16 = *a2;
    *(_QWORD *)&v52 = 0LL;
    v57 = 0LL;
    BYTE8(v52) = 0;
    ShapeData = CGeometry::GetShapeData(
                  *(CGeometry **)(v16 + 240),
                  (const struct D2D_SIZE_F *)(v16 + 132),
                  (struct CShapePtr *)&v52);
    v19 = ShapeData;
    if ( ShapeData < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, ShapeData, 0x895u, 0LL);
    }
    else
    {
      v20 = v52;
      v19 = -2003292412;
      if ( (_QWORD)v52 )
      {
        v21 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, _QWORD))(*(_QWORD *)v52 + 32LL))(v52, &v57, 0LL);
        v19 = v21;
        if ( v21 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x115u, 0LL);
        v20 = v52;
      }
      if ( v19 >= 0 )
      {
        v15 = v20;
        v50 = (void (__fastcall ***)(_QWORD, __int64))v20;
        v23 = 0LL;
        v51 = BYTE8(v52);
        *(_QWORD *)&v52 = 0LL;
        BYTE8(v52) = 0;
LABEL_24:
        if ( v19 != -2003304438 )
          v7 = v19;
        if ( BYTE8(v52) && v23 )
          (**v23)(v23, 1LL);
        if ( (v7 & 0x80000000) != 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast((__int64)v23, 0LL, 0, v7, 0xC9Bu, 0LL);
          CShapePtr::Release((CShapePtr *)&v50);
          return v7;
        }
        if ( !v15 )
          *((_BYTE *)a2 + 164) = 0;
        goto LABEL_32;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x896u, 0LL);
    }
    v23 = (void (__fastcall ***)(_QWORD, __int64))v52;
    goto LABEL_24;
  }
LABEL_32:
  if ( *(_BYTE *)(84LL * (unsigned int)(*((_DWORD *)this + 240) - 1) + *((_QWORD *)this + 117) + 80) )
  {
    v24 = (struct _LIST_ENTRY *)*((_QWORD *)this + 741);
    v25 = (CVisual *)*a2;
    if ( !((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *))v24->Flink[12].Blink)(v24) )
    {
      TreeDataListHead = CVisual::GetTreeDataListHead(v25);
      if ( TreeDataListHead )
      {
        for ( i = TreeDataListHead->Flink; i != TreeDataListHead; i = i->Flink )
        {
          if ( i[2].Flink == v24 )
            break;
        }
      }
    }
  }
  v28 = CDrawingContext::PushLocalSpaceClipAndAlphaInternal(this, (__int64)a2, (__int64)a7);
  v7 = v28;
  if ( v28 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0xCB2u, 0LL);
    goto LABEL_78;
  }
  if ( !*a7 )
  {
    v30 = 0;
    if ( *((_BYTE *)a2 + 165) )
    {
      CVisual::GetColorTransform(*a2);
      CDrawingContext::PushColorTransformLayerForNode(this, (struct CVisual *)*a2);
      v30 = 1;
    }
    if ( *((_BYTE *)a2 + 166) )
    {
      v31 = (CVisual *)*a2;
      LOBYTE(v49) = 0;
      EffectInternal = CVisual::GetEffectInternal(v31);
      v33 = v54;
      v34 = CDrawingContext::PushEffectLayer(
              (struct IDeviceTarget **)this,
              (struct CVisual *)*a2,
              a3,
              v54,
              v53,
              EffectInternal,
              (char *)&v49);
      v7 = v34;
      if ( v34 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v34, 0xCD0u, 0LL);
        goto LABEL_78;
      }
      v30 = 1;
      *a7 |= v49;
    }
    else
    {
      v33 = v54;
    }
    if ( *((_BYTE *)a2 + 167) )
    {
      v36 = (struct CFilterEffect *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 240LL))(*a2);
      LOBYTE(v49) = 0;
      if ( v36 )
        v36 = *(struct CFilterEffect **)v36;
      v37 = CDrawingContext::PushEffectLayer(
              (struct IDeviceTarget **)this,
              (struct CVisual *)*a2,
              a3,
              v33,
              v53,
              v36,
              (char *)&v49);
      v7 = v37;
      if ( v37 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, v37, 0xCE3u, 0LL);
        goto LABEL_78;
      }
      v30 = 1;
      *a7 |= v49;
    }
    if ( *((_DWORD *)a2 + 4) )
    {
      v39 = CDrawingContext::ComputeExternalLayerOffsetAndBounds(this, (struct MilPointAndSizeL *)&v57);
      v7 = v39;
      if ( v39 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, v39, 0xCECu, 0LL);
        goto LABEL_78;
      }
      v55[0] = _xmm;
      v55[1] = _xmm;
      v55[2] = _xmm;
      v55[3] = _xmm;
      v56 = 32085;
      CMatrixStack::Top((CDrawingContext *)((char *)this + 408), (struct CMILMatrix *)v55);
      CMILMatrix::Get2DScaleDimensionsWithPerspective(v55, &v53, &v54, 0LL);
      v41 = *(float *)&v53 <= 1.0 ? 1.0 - *(float *)&v53 : *(float *)&v53 - 1.0;
      if ( v41 > 0.0000099999997
        || (*(float *)&v54 <= 1.0 ? (v42 = 1.0 - *(float *)&v54) : (v42 = *(float *)&v54 - 1.0), v42 > 0.0000099999997) )
      {
        v43 = CDrawingContext::PushResampleLayer(this, *a2, *((unsigned int *)a2 + 4), &v57, v53, v54);
        v7 = v43;
        if ( v43 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v44, 0LL, 0, v43, 0xCFCu, 0LL);
          goto LABEL_78;
        }
        v30 = 1;
      }
    }
    if ( *((_BYTE *)a2 + 168) )
    {
      ColorSpace = CVisual::GetColorSpace((CVisual *)*a2);
      CDrawingContext::PushColorSpaceLayer(this, (const struct CVisual *)*a2, ColorSpace);
    }
    else if ( !v30 )
    {
      goto LABEL_42;
    }
    CDrawingContext::GetWorldTransform(this, (struct CMILMatrix *)(a2 + 3));
    updated = CVisual::UpdateCpuClippingData((CVisual **)*a2, *((const struct CVisualTree **)this + 741), 4u, 0);
    v7 = updated;
    if ( updated >= 0 )
      goto LABEL_42;
    MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, updated, 0xD15u, 0LL);
LABEL_78:
    CShapePtr::Release((CShapePtr *)&v50);
    return v7;
  }
LABEL_42:
  if ( v51 && v50 )
    (**v50)(v50, 1LL);
  return v7;
}
