/*
 * XREFs of ?DesiresTearing@CDxHandleYUVBitmapRealization@@UEBA_NXZ @ 0x180263BB8
 * Callers:
 *     ?DesiresTearing@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA_NXZ @ 0x1800F36B0 (-DesiresTearing@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDxHandleYUVBitmapRealization::DesiresTearing(CDxHandleYUVBitmapRealization *this)
{
  return (*((_DWORD *)this - 67) & 0x800) != 0;
}
