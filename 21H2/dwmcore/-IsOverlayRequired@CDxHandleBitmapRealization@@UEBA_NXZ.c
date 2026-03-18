/*
 * XREFs of ?IsOverlayRequired@CDxHandleBitmapRealization@@UEBA_NXZ @ 0x1800E8780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDxHandleBitmapRealization::IsOverlayRequired(CDxHandleBitmapRealization *this)
{
  return (*((_DWORD *)this - 32) & 0x80) != 0;
}
