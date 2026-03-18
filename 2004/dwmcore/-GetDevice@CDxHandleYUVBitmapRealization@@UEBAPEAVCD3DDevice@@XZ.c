/*
 * XREFs of ?GetDevice@CDxHandleYUVBitmapRealization@@UEBAPEAVCD3DDevice@@XZ @ 0x1802640F0
 * Callers:
 *     ?GetDevice@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBAPEAVCD3DDevice@@XZ @ 0x1800F3720 (-GetDevice@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBAPEAVCD3DDevice@@XZ.c)
 *     ?VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1802648E8 (-VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct CD3DDevice *__fastcall CDxHandleYUVBitmapRealization::GetDevice(CDxHandleYUVBitmapRealization *this)
{
  struct CD3DDevice *result; // rax

  result = (struct CD3DDevice *)*((_QWORD *)this - 14);
  if ( result )
    return *(struct CD3DDevice **)(*((_QWORD *)result + 2) + 80LL);
  return result;
}
