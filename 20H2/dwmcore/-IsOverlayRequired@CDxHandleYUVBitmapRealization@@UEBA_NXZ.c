/*
 * XREFs of ?IsOverlayRequired@CDxHandleYUVBitmapRealization@@UEBA_NXZ @ 0x1802637EC
 * Callers:
 *     ?IsOverlayRequired@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA_NXZ @ 0x1800F3450 (-IsOverlayRequired@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDxHandleYUVBitmapRealization::IsOverlayRequired(CDxHandleYUVBitmapRealization *this)
{
  return (*((_DWORD *)this - 67) & 0x80) != 0;
}
