/*
 * XREFs of ?IsOverlayCompatible@CDxHandleBitmapRealization@@UEBA_NXZ @ 0x1800116B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDxHandleBitmapRealization::IsOverlayCompatible(CDxHandleBitmapRealization *this)
{
  return (*((_DWORD *)this - 32) & 0x40) != 0;
}
