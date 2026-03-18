/*
 * XREFs of ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x18006D4F4
 * Callers:
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJ$$QEAVCShapePtr@@PEBVCMILMatrix@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x18008A2F0 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJ$$QEAVCShapePtr@@PEBVCMILMatrix@@PEBV-.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x18009EE90 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z.c)
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x180174B94 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x180175824 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x180175CA8 (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMIL.c)
 *     ?Draw@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801BB5D0 (-Draw@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180065090 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x18006D6D4 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ?Create@CD2DLayer@@SAJAEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_LAYER_OPTIONS1@@W4D2D1_PRIMITIVE_BLEND@@PEAPEAV1@@Z @ 0x18006D7EC (-Create@CD2DLayer@@SAJAEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS.c)
 *     ??_GCD2DLayer@@UEAAPEAXI@Z @ 0x18006D920 (--_GCD2DLayer@@UEAAPEAXI@Z.c)
 *     ?GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180076B48 (-GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS.c)
 *     ?Push@?$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackBackfaceVisibilityEntry@CDrawingContext@@@Z @ 0x180085380 (-Push@-$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUSta.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800B5304 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180152344 (McTemplateU0q_EventWriteTransfer.c)
 */

__int64 __fastcall CDrawingContext::PushD2DLayer(
        CDrawingContext *this,
        struct CVisual *a2,
        struct D2D_RECT_F *a3,
        struct ID2D1Geometry *a4,
        struct D2D_MATRIX_3X2_F *a5,
        float a6,
        char a7,
        unsigned int a8)
{
  bool v9; // zf
  int v10; // ebx
  __int64 v11; // rdx
  enum D2D1_LAYER_OPTIONS1 v12; // r14d
  float v13; // xmm1_4
  char v14; // si
  __int64 v17; // rax
  __int64 (__fastcall ***v18)(_QWORD, struct D2D_RECT_F *); // rcx
  int v19; // eax
  __int64 v20; // rcx
  unsigned int v21; // eax
  unsigned int v22; // r8d
  __int64 v24; // rcx
  int v25; // eax
  enum D2D1_ANTIALIAS_MODE v26; // [rsp+20h] [rbp-71h]
  CD2DLayer *v27; // [rsp+40h] [rbp-51h] BYREF
  enum D2D1_PRIMITIVE_BLEND v28; // [rsp+48h] [rbp-49h]
  enum D2D1_ANTIALIAS_MODE v29; // [rsp+4Ch] [rbp-45h]
  struct CVisual *v30; // [rsp+50h] [rbp-41h]
  struct D2D_MATRIX_3X2_F *v31; // [rsp+58h] [rbp-39h]
  struct D2D_RECT_F v32; // [rsp+60h] [rbp-31h] BYREF
  struct D2D_RECT_F v33; // [rsp+70h] [rbp-21h] BYREF

  v31 = a5;
  v9 = *((_DWORD *)this + 69) == 0;
  v27 = 0LL;
  v10 = 0;
  v30 = a2;
  v11 = *((_QWORD *)this + 4);
  v12 = D2D1_LAYER_OPTIONS1_NONE;
  LODWORD(v13) = COERCE_UNSIGNED_INT(a6 - 1.0) & _xmm;
  v14 = 0;
  v29 = !v9;
  v28 = D2D1_PRIMITIVE_BLEND_SOURCE_OVER;
  v17 = *(_QWORD *)(v11 + 8);
  v32 = 0LL;
  v18 = (__int64 (__fastcall ***)(_QWORD, struct D2D_RECT_F *))(v11 + 8 + *(int *)(v17 + 12));
  if ( *(_DWORD *)((**v18)(v18, &v33) + 4) == 3 )
  {
    v12 = D2D1_LAYER_OPTIONS1_IGNORE_ALPHA|D2D1_LAYER_OPTIONS1_INITIALIZE_FROM_BACKGROUND;
  }
  else if ( v13 < 0.0000011920929 )
  {
    v28 = D2D1_PRIMITIVE_BLEND_COPY;
    v12 = D2D1_LAYER_OPTIONS1_INITIALIZE_FROM_BACKGROUND;
  }
  if ( a3 )
    v32 = *a3;
  else
    CDrawingContext::GetClipBoundsWorld(this, &v32);
  if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(&v32.left) )
  {
    v33 = v32;
    v19 = CD2DLayer::Create(&v33, a4, v31, a6, v29, v12, v28, &v27);
    v10 = v19;
    if ( v19 < 0 )
    {
      v26 = 3820;
LABEL_30:
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, v26, 0LL);
      goto LABEL_18;
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0q_EventWriteTransfer(v20, &EVTDESC_ETWGUID_D2DLAYERCREATEREASON, a8);
    if ( !a7 || !a4 || v13 >= 0.0000011920929 )
    {
LABEL_16:
      v19 = CDrawingContext::PushLayer(this, v30, v27, v14 != 1, 1);
      v10 = v19;
      if ( v19 >= 0 )
      {
        v27 = 0LL;
        goto LABEL_18;
      }
      v26 = 3840;
      goto LABEL_30;
    }
    v21 = *((_DWORD *)this + 140);
    v22 = v21 + 1;
    if ( v21 + 1 < v21 )
    {
      v10 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, -2147024362, 0xB5u, 0LL);
    }
    else
    {
      if ( v22 <= *((_DWORD *)this + 139) )
      {
        *(_QWORD *)(*((_QWORD *)this + 67) + 8LL * v21) = v27;
        *((_DWORD *)this + 140) = v22;
LABEL_15:
        v14 = 1;
        goto LABEL_16;
      }
      v25 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 536, 8LL, 1LL, &v27);
      v10 = v25;
      if ( v25 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v25, 0xC0u, 0LL);
    }
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v10, 0xEF7u, 0LL);
      goto LABEL_18;
    }
    goto LABEL_15;
  }
  *(_QWORD *)&v32.right = v30;
  LODWORD(v32.left) = 7;
  CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::Push((char *)this + 376, &v32);
LABEL_18:
  if ( v10 < 0 )
  {
    if ( v14 )
      --*((_DWORD *)this + 140);
    if ( v27 )
      CD2DLayer::`scalar deleting destructor'(v27, 1u);
  }
  return (unsigned int)v10;
}
