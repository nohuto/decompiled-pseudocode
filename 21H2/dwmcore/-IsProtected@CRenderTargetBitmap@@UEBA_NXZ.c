/*
 * XREFs of ?IsProtected@CRenderTargetBitmap@@UEBA_NXZ @ 0x1800FCB9C
 * Callers:
 *     ?IsProtected@CRenderTargetBitmap@@$4PPPPPPPM@A@EBA_NXZ @ 0x18010BDF0 (-IsProtected@CRenderTargetBitmap@@$4PPPPPPPM@A@EBA_NXZ.c)
 *     ?IsProtected@CRenderTargetBitmap@@$4PPPPPPPM@7EBA_NXZ @ 0x18010CA90 (-IsProtected@CRenderTargetBitmap@@$4PPPPPPPM@7EBA_NXZ.c)
 *     ?IsProtected@CRenderTargetBitmap@@$4PPPPPPPM@BI@EBA_NXZ @ 0x18010CF90 (-IsProtected@CRenderTargetBitmap@@$4PPPPPPPM@BI@EBA_NXZ.c)
 *     ?IsProtected@CRenderTargetBitmap@@$4PPPPPPPM@CA@EBA_NXZ @ 0x18010D2D0 (-IsProtected@CRenderTargetBitmap@@$4PPPPPPPM@CA@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CRenderTargetBitmap::IsProtected(CRenderTargetBitmap *this)
{
  return *((_BYTE *)this - 95);
}
