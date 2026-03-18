/*
 * XREFs of ?InvalidateDecodeBitmap@CBitmapRealization@@QEAAX_N@Z @ 0x1800C7D2C
 * Callers:
 *     ?UpdateAttributes@CDxHandleBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1800187D0 (-UpdateAttributes@CDxHandleBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ?MarkFullDirty@CBitmapRealization@@UEAAXXZ @ 0x1800C7CB8 (-MarkFullDirty@CBitmapRealization@@UEAAXXZ.c)
 *     ?ReleaseD2DBitmap@CDxHandleBitmapRealization@@MEAAXXZ @ 0x180262B40 (-ReleaseD2DBitmap@CDxHandleBitmapRealization@@MEAAXXZ.c)
 *     ?MarkFullDirty@CDxHandleYUVBitmapRealization@@UEAAXXZ @ 0x18026464C (-MarkFullDirty@CDxHandleYUVBitmapRealization@@UEAAXXZ.c)
 *     ?ReleaseTexture@CDxHandleYUVBitmapRealization@@IEAAXXZ @ 0x1802646CC (-ReleaseTexture@CDxHandleYUVBitmapRealization@@IEAAXXZ.c)
 *     ?UpdateAttributes@CDxHandleYUVBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x180264738 (-UpdateAttributes@CDxHandleYUVBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 * Callees:
 *     ?ReleaseDeviceTarget@CRenderTargetBitmap@@IEAAXXZ @ 0x18003DBF0 (-ReleaseDeviceTarget@CRenderTargetBitmap@@IEAAXXZ.c)
 */

void __fastcall CBitmapRealization::InvalidateDecodeBitmap(CBitmapRealization *this, char a2)
{
  __int64 v2; // rbx

  v2 = *((_QWORD *)this + 32);
  if ( v2 )
  {
    if ( a2 )
      CRenderTargetBitmap::ReleaseDeviceTarget(*((CRenderTargetBitmap **)this + 32));
    *(_BYTE *)(v2 + 152) = 0;
  }
}
