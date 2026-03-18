/*
 * XREFs of ?GetPresentAllowedTearing@CDxHandleYUVBitmapRealization@@UEBA_NXZ @ 0x1802A5BEC
 * Callers:
 *     ?GetPresentAllowedTearing@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA_NXZ @ 0x18010C5B0 (-GetPresentAllowedTearing@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDxHandleYUVBitmapRealization::GetPresentAllowedTearing(CDxHandleYUVBitmapRealization *this)
{
  return (*((_DWORD *)this - 70) & 0x1000) != 0;
}
