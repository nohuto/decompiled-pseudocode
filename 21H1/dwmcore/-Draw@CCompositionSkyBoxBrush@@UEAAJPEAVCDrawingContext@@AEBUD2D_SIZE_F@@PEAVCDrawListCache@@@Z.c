/*
 * XREFs of ?Draw@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801BFDE4
 * Callers:
 *     ?Draw@CCompositionSkyBoxBrush@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800EDB30 (-Draw@CCompositionSkyBoxBrush@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawLi.c)
 * Callees:
 *     ?GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1800198E0 (-GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18002FC70 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?Draw@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180050194 (-Draw@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x18006EC40 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x18006F1A4 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPo.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x18007183C (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800950D4 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800BEBE0 (-InternalRelease@-$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ??0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z @ 0x180178AAC (--0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z.c)
 */

__int64 __fastcall CCompositionSkyBoxBrush::Draw(
        CCompositionSkyBoxBrush *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  float width; // xmm0_4
  char v5; // r14
  struct CVisual *CurrentVisual; // rax
  FLOAT v11; // xmm0_4
  FLOAT height; // xmm1_4
  struct CVisual *v13; // r14
  int D2DGeometry; // eax
  __int64 v15; // rcx
  unsigned int v16; // ebx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  _BYTE v22[16]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v23[64]; // [rsp+50h] [rbp-B0h] BYREF
  int v24; // [rsp+90h] [rbp-70h]
  struct ID2D1Geometry *v25; // [rsp+A0h] [rbp-60h] BYREF
  FLOAT v26; // [rsp+A8h] [rbp-58h]
  FLOAT v27; // [rsp+ACh] [rbp-54h]
  _BYTE v28[80]; // [rsp+B0h] [rbp-50h] BYREF

  width = a3->width;
  v5 = 0;
  v22[0] = 0;
  if ( width <= 0.0
    || a3->height <= 0.0
    || !(*(unsigned __int8 (__fastcall **)(char *, struct CDrawingContext *, _BYTE *))(*((_QWORD *)this - 18) + 288LL))(
          (char *)this - 144,
          a2,
          v22)
    || v22[0] )
  {
    goto LABEL_9;
  }
  v24 = 0;
  CMatrixStack::Top((struct CDrawingContext *)((char *)a2 + 408), (struct CMILMatrix *)v23);
  CurrentVisual = CDrawingContext::GetCurrentVisual((struct CDrawingContext *)((char *)a2 + 24));
  v11 = a3->width;
  height = a3->height;
  v25 = 0LL;
  v13 = CurrentVisual;
  v26 = v11;
  v27 = height;
  CRectanglesShape::CRectanglesShape((CRectanglesShape *)v28, (const struct MilRectF *)&v25);
  v25 = 0LL;
  Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease((__int64 *)&v25);
  D2DGeometry = CRectanglesShape::GetD2DGeometry((CRectanglesShape *)v28, (const struct CMILMatrix *)v23, &v25);
  v16 = D2DGeometry;
  if ( D2DGeometry < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, D2DGeometry, 0x196u, 0LL);
    goto LABEL_14;
  }
  v17 = CDrawingContext::PushD2DLayer(a2, v13, 0LL, v25, 0LL, 1.0, 0, 0);
  v16 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x19Au, 0LL);
LABEL_14:
    Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease((__int64 *)&v25);
    CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v28);
    return v16;
  }
  v5 = 1;
  v19 = CBrush::Draw((CCompositionSkyBoxBrush *)((char *)this - 40), a2, a3, a4);
  v16 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x19Du, 0LL);
    Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease((__int64 *)&v25);
    CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v28);
    goto LABEL_10;
  }
  Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease((__int64 *)&v25);
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v28);
LABEL_9:
  v16 = 0;
  if ( v5 )
LABEL_10:
    CDrawingContext::PopLayer(a2);
  return v16;
}
