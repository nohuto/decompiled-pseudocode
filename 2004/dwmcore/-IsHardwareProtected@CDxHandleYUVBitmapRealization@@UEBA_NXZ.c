/*
 * XREFs of ?IsHardwareProtected@CDxHandleYUVBitmapRealization@@UEBA_NXZ @ 0x180264594
 * Callers:
 *     ?IsHardwareProtected@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA_NXZ @ 0x1800F37E0 (-IsHardwareProtected@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA_NXZ.c)
 *     ?VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1802648E8 (-VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDxHandleYUVBitmapRealization::IsHardwareProtected(CDxHandleYUVBitmapRealization *this)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *((_QWORD *)this - 14);
  result = 0;
  if ( v1 )
    return (*(_DWORD *)(v1 + 160) & 0x80000) != 0;
  return result;
}
