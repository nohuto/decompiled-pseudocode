/*
 * XREFs of ?IsOverlayRequired@CDxHandleYUVBitmapRealization@@UEBA_NXZ @ 0x1802A604C
 * Callers:
 *     ?IsOverlayRequired@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA_NXZ @ 0x18010C790 (-IsOverlayRequired@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDxHandleYUVBitmapRealization::IsOverlayRequired(CDxHandleYUVBitmapRealization *this)
{
  return (*((_DWORD *)this - 70) & 0x80) != 0;
}
