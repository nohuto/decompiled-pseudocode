/*
 * XREFs of ?Draw@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801C578C
 * Callers:
 *     ?Draw@CHwndBitmap@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800F0CC0 (-Draw@CHwndBitmap@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x180037108 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180055DC0 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?IsIn3DMode@CDrawingContext@@UEBA_NXZ @ 0x1801790E0 (-IsIn3DMode@CDrawingContext@@UEBA_NXZ.c)
 *     ?IsValidVisual@CHwndBitmap@@AEBA_NXZ @ 0x1801C5E14 (-IsValidVisual@CHwndBitmap@@AEBA_NXZ.c)
 */

__int64 __fastcall CHwndBitmap::Draw(
        struct CVisual **this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx

  v8 = 0;
  if ( CHwndBitmap::IsValidVisual((CHwndBitmap *)(this - 17)) )
  {
    if ( !*((_DWORD *)a2 + 69)
      || *((_DWORD *)a2 + 70)
      || *((_DWORD *)a2 + 71)
      || CDrawingContext::IsIn3DMode((struct CDrawingContext *)((char *)a2 + 24)) )
    {
      v9 = CContent::Draw((CContent *)(this - 6), a2, a3, a4);
      v8 = v9;
      if ( v9 >= 0 )
        return v8;
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xCEu, 0LL);
    }
    v11 = CDrawingContext::DrawVisual(a2, *(this - 6), 1);
    v8 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xD7u, 0LL);
  }
  return v8;
}
