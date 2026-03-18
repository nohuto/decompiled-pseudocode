/*
 * XREFs of ?IsIn3DMode@CDrawingContext@@UEBA_NXZ @ 0x18017BCF0
 * Callers:
 *     ?DrawGenericInk@CDrawingContext@@UEAAJPEAUIDCompositionDirectInkWetStrokePartner@@_N@Z @ 0x180179B30 (-DrawGenericInk@CDrawingContext@@UEAAJPEAUIDCompositionDirectInkWetStrokePartner@@_N@Z.c)
 *     ?DrawInk@CDrawingContext@@UEAAJPEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@@Z @ 0x180179F00 (-DrawInk@CDrawingContext@@UEAAJPEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@@Z.c)
 *     ?Draw@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801C80BC (-Draw@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Draw@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18020D914 (-Draw@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDrawingContext::IsIn3DMode(CDrawingContext *this)
{
  int v1; // edx
  bool result; // al

  v1 = *((_DWORD *)this + 104);
  result = 0;
  if ( v1 )
    return *(_BYTE *)((unsigned int)(v1 - 1) + *((_QWORD *)this + 54));
  return result;
}
