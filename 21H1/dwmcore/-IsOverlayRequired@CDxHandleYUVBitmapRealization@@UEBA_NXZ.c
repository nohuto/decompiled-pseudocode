/*
 * XREFs of ?IsOverlayRequired@CDxHandleYUVBitmapRealization@@UEBA_NXZ @ 0x18026703C
 * Callers:
 *     ?IsOverlayRequired@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA_NXZ @ 0x1800F0870 (-IsOverlayRequired@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDxHandleYUVBitmapRealization::IsOverlayRequired(CDxHandleYUVBitmapRealization *this)
{
  return (*((_DWORD *)this - 67) & 0x80) != 0;
}
