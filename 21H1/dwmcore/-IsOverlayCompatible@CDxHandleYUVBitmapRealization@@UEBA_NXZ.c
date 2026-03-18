/*
 * XREFs of ?IsOverlayCompatible@CDxHandleYUVBitmapRealization@@UEBA_NXZ @ 0x180267028
 * Callers:
 *     ?IsOverlayCompatible@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA_NXZ @ 0x1800F0860 (-IsOverlayCompatible@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDxHandleYUVBitmapRealization::IsOverlayCompatible(CDxHandleYUVBitmapRealization *this)
{
  return (*((_DWORD *)this - 67) & 0x40) != 0;
}
