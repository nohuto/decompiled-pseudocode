/*
 * XREFs of ?MarkFullDirty@CDxHandleStereoBitmapRealization@@UEAAXXZ @ 0x180262488
 * Callers:
 *     ?MarkFullDirty@CDxHandleStereoBitmapRealization@@$4PPPPPPPM@A@EAAXXZ @ 0x1800F3240 (-MarkFullDirty@CDxHandleStereoBitmapRealization@@$4PPPPPPPM@A@EAAXXZ.c)
 * Callees:
 *     ?MarkFullDirty@CBitmapRealization@@UEAAXXZ @ 0x1800C71A8 (-MarkFullDirty@CBitmapRealization@@UEAAXXZ.c)
 *     ?MarkFullInvalid@CD2DBitmapCache@@QEAAXXZ @ 0x1800C71D4 (-MarkFullInvalid@CD2DBitmapCache@@QEAAXXZ.c)
 */

void __fastcall CDxHandleStereoBitmapRealization::MarkFullDirty(CDxHandleStereoBitmapRealization *this)
{
  CBitmapRealization::MarkFullDirty((CDxHandleStereoBitmapRealization *)((char *)this - 192));
  if ( *((_QWORD *)this - 21) )
    CD2DBitmapCache::MarkFullInvalid((CDxHandleStereoBitmapRealization *)((char *)this - 160));
}
