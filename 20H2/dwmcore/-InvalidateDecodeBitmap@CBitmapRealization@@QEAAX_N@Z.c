/*
 * XREFs of ?InvalidateDecodeBitmap@CBitmapRealization@@QEAAX_N@Z @ 0x1800C721C
 * Callers:
 *     ?UpdateAttributes@CDxHandleBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1800185C0 (-UpdateAttributes@CDxHandleBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ?MarkFullDirty@CBitmapRealization@@UEAAXXZ @ 0x1800C71A8 (-MarkFullDirty@CBitmapRealization@@UEAAXXZ.c)
 *     ?ReleaseD2DBitmap@CDxHandleBitmapRealization@@MEAAXXZ @ 0x180261D60 (-ReleaseD2DBitmap@CDxHandleBitmapRealization@@MEAAXXZ.c)
 *     ?MarkFullDirty@CDxHandleYUVBitmapRealization@@UEAAXXZ @ 0x18026386C (-MarkFullDirty@CDxHandleYUVBitmapRealization@@UEAAXXZ.c)
 *     ?ReleaseTexture@CDxHandleYUVBitmapRealization@@IEAAXXZ @ 0x1802638EC (-ReleaseTexture@CDxHandleYUVBitmapRealization@@IEAAXXZ.c)
 *     ?UpdateAttributes@CDxHandleYUVBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x180263958 (-UpdateAttributes@CDxHandleYUVBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 * Callees:
 *     ?ReleaseDeviceTarget@CRenderTargetBitmap@@IEAAXXZ @ 0x18006C48C (-ReleaseDeviceTarget@CRenderTargetBitmap@@IEAAXXZ.c)
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
