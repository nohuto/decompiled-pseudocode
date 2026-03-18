/*
 * XREFs of ?IsOverlayCompatible@CDxHandleYUVBitmapRealization@@UEBA_NXZ @ 0x1802645B8
 * Callers:
 *     ?IsOverlayCompatible@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA_NXZ @ 0x1800F37F0 (-IsOverlayCompatible@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDxHandleYUVBitmapRealization::IsOverlayCompatible(CDxHandleYUVBitmapRealization *this)
{
  return (*((_DWORD *)this - 67) & 0x40) != 0;
}
