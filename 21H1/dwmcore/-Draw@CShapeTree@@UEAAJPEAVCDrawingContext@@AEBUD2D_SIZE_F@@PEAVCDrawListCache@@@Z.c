/*
 * XREFs of ?Draw@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18020D914
 * Callers:
 *     ?Draw@CShapeTree@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800EE010 (-Draw@CShapeTree@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800502F0 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?IsIn3DMode@CDrawingContext@@UEBA_NXZ @ 0x18017BCF0 (-IsIn3DMode@CDrawingContext@@UEBA_NXZ.c)
 *     ?IsHDRTarget@CDrawingContext@@QEBA_NXZ @ 0x1801996D4 (-IsHDRTarget@CDrawingContext@@QEBA_NXZ.c)
 *     ?DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18020D9D8 (-DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 */

__int64 __fastcall CShapeTree::Draw(
        CShapeTree *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  int v11; // eax
  __int64 v12; // rcx

  if ( CDrawingContext::IsIn3DMode((struct CDrawingContext *)((char *)a2 + 24))
    || !*((_DWORD *)a2 + 174) && *((_DWORD *)a2 + 156)
    || CDrawingContext::IsHDRTarget(a2) )
  {
    v11 = CContent::Draw((CShapeTree *)((char *)this - 56), a2, a3, a4);
    v10 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x16u, 0LL);
  }
  else
  {
    v8 = CShapeTree::DrawShapes((CShapeTree *)((char *)this - 144), a2, a3);
    v10 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x1Au, 0LL);
  }
  return v10;
}
