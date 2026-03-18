/*
 * XREFs of ?DesiresTearing@CDxHandleYUVBitmapRealization@@UEBA_NXZ @ 0x180262DD8
 * Callers:
 *     ?DesiresTearing@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA_NXZ @ 0x1800F3300 (-DesiresTearing@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDxHandleYUVBitmapRealization::DesiresTearing(CDxHandleYUVBitmapRealization *this)
{
  return (*((_DWORD *)this - 67) & 0x800) != 0;
}
