/*
 * XREFs of ?IsProtected@CRenderTargetBitmap@@UEBA_NXZ @ 0x1800DE2C4
 * Callers:
 *     ?IsProtected@CRenderTargetBitmap@@$4PPPPPPPM@A@EBA_NXZ @ 0x1800F0180 (-IsProtected@CRenderTargetBitmap@@$4PPPPPPPM@A@EBA_NXZ.c)
 *     ?IsProtected@CRenderTargetBitmap@@$4PPPPPPPM@7EBA_NXZ @ 0x1800F35E0 (-IsProtected@CRenderTargetBitmap@@$4PPPPPPPM@7EBA_NXZ.c)
 *     ?IsProtected@CRenderTargetBitmap@@$4PPPPPPPM@CA@EBA_NXZ @ 0x1800F3720 (-IsProtected@CRenderTargetBitmap@@$4PPPPPPPM@CA@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CRenderTargetBitmap::IsProtected(CRenderTargetBitmap *this)
{
  return *((_BYTE *)this - 95);
}
