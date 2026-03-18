/*
 * XREFs of ?GetAdapterLuid@CDxHandleYUVBitmapRealization@@UEBA?AU_LUID@@XZ @ 0x1802A56BC
 * Callers:
 *     ?GetAdapterLuid@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA?AU_LUID@@XZ @ 0x18010C450 (-GetAdapterLuid@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA-AU_LUID@@XZ.c)
 *     ?Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAVIYUVSwapChainRealization@@@Z @ 0x1802A5EB0 (-Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAVIYUVSwapChainRealization@@@Z.c)
 *     ?VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1802A6358 (-VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CDxHandleYUVBitmapRealization::GetAdapterLuid(CDxHandleYUVBitmapRealization *this, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax

  v2 = *((_QWORD *)this - 14);
  if ( v2 )
    v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 24) + 80LL) + 896LL);
  else
    v3 = *((_QWORD *)this - 29);
  *a2 = v3;
  return (struct _LUID)a2;
}
