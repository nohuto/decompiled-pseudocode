/*
 * XREFs of ?GetPresentAllowedTearing@CDxHandleYUVBitmapRealization@@UEBA_NXZ @ 0x180263408
 * Callers:
 *     ?GetPresentAllowedTearing@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA_NXZ @ 0x1800F33A0 (-GetPresentAllowedTearing@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDxHandleYUVBitmapRealization::GetPresentAllowedTearing(CDxHandleYUVBitmapRealization *this)
{
  return (*((_DWORD *)this - 67) & 0x1000) != 0;
}
