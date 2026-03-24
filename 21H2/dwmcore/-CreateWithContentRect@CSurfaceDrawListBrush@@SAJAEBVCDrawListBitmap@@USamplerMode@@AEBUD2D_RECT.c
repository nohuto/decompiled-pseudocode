/*
 * XREFs of ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x180057A74
 * Callers:
 *     ?GetReceiverMaskInputBrush@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x180006350 (-GetReceiverMaskInputBrush@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@PEAPEAVCDrawListB.c)
 *     ?CreateShadowOpacityBrush@ShadowIntermediates@CDropShadow@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@MPEAPEAVCDrawListBrush@@@Z @ 0x1800065B8 (-CreateShadowOpacityBrush@ShadowIntermediates@CDropShadow@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZ.c)
 *     ?GetCasterShadowInputBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x180008BC4 (-GetCasterShadowInputBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z.c)
 *     ?GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800133E0 (-GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDraw.c)
 *     ?GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1800563E0 (-GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NPEAVCImageSource@@PEBUD2D_RECT_F@@4M@Z @ 0x1800C6B1C (-DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEnt_ea_1800C6B1C.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x18019E008 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?GenerateDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801C44F0 (-GenerateDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18020BF70 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ??0CSurfaceDrawListBrush@@IEAA@AEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@@Z @ 0x180051D0C (--0CSurfaceDrawListBrush@@IEAA@AEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCSurfaceDrawListBrush@@@Z @ 0x180055FB4 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCSurfaceDrawListBrush@@@Z.c)
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x180056958 (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180059EE0 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CSurfaceDrawListBrush::CreateWithContentRect(
        CDrawListBitmap *a1,
        __int16 *a2,
        float *a3,
        __int64 *a4)
{
  unsigned int v8; // edi
  float v9; // xmm7_4
  float v10; // xmm6_4
  struct CSurfaceDrawListBrush *v11; // rcx
  struct CObjectCache *ObjectCache; // rax
  _QWORD *v13; // rcx
  int v14; // r8d
  _QWORD *v15; // rax
  __int128 v16; // xmm0
  __int64 v17; // rcx
  unsigned int v18; // xmm1_4
  unsigned int v19; // xmm7_4
  unsigned int v20; // xmm6_4
  __int16 v22; // [rsp+38h] [rbp-39h] BYREF
  char v23; // [rsp+3Ah] [rbp-37h]
  __int128 v24; // [rsp+48h] [rbp-29h] BYREF
  float v25[20]; // [rsp+58h] [rbp-19h] BYREF

  v8 = 0;
  CDrawListBitmap::GetSize(a1, &v24);
  v25[1] = 0.0;
  v25[2] = 0.0;
  v25[3] = 0.0;
  v25[5] = 0.0;
  v25[8] = 1.0;
  v9 = 1.0 / (float)(int)v24;
  v25[0] = v9;
  v10 = 1.0 / (float)SDWORD1(v24);
  v25[4] = v10;
  v25[6] = 0.0 - (float)(v9 * 0.0);
  v25[7] = 0.0 - (float)(v10 * 0.0);
  ObjectCache = CThreadContext::GetObjectCache(v11);
  v13 = 0LL;
  v14 = *((_DWORD *)ObjectCache + 1);
  if ( v14 )
  {
    v13 = (_QWORD *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *v13;
    *((_DWORD *)ObjectCache + 1) = v14 - 1;
  }
  if ( v13 || (v15 = DefaultHeap::Alloc(0xB0uLL), (v13 = v15) != 0LL) )
  {
    v22 = *a2;
    v23 = *((_BYTE *)a2 + 2);
    v15 = (_QWORD *)CSurfaceDrawListBrush::CSurfaceDrawListBrush((__int64)v13, a1, (__int64)&v22, v25);
  }
  *a4 = (__int64)v15;
  if ( v15 )
  {
    *((_BYTE *)v15 + 52) = 1;
    v16 = *(_OWORD *)a3;
    *((_DWORD *)v15 + 12) = 50529027;
    *((_OWORD *)v15 + 2) = v16;
    *(_BYTE *)(*a4 + 168) = 1;
    *(float *)&v16 = v9 * *a3;
    v17 = *a4;
    *(float *)&v18 = v10 * a3[1];
    *(float *)&v19 = v9 * a3[2];
    *(float *)&v20 = v10 * a3[3];
    *(_QWORD *)&v24 = __PAIR64__(v18, v16);
    *((_QWORD *)&v24 + 1) = __PAIR64__(v20, v19);
    *(_OWORD *)(v17 + 144) = v24;
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v13, 0LL, 0, -2147024882, 0x1Eu, 0LL);
  }
  return v8;
}
