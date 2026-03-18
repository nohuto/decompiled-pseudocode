/*
 * XREFs of ?GetUniqueId@CDxHandleYUVBitmapRealization@@UEBA_KXZ @ 0x180105030
 * Callers:
 *     ?GetUniqueId@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA_KXZ @ 0x18010C710 (-GetUniqueId@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA_KXZ.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CDxHandleYUVBitmapRealization::GetUniqueId(CDxHandleYUVBitmapRealization *this)
{
  return *((_QWORD *)this - 31);
}
