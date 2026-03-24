/*
 * XREFs of ?MarkFullDirty@CDxHandleStereoBitmapRealization@@UEAAXXZ @ 0x180265138
 * Callers:
 *     ?MarkFullDirty@CDxHandleStereoBitmapRealization@@$4PPPPPPPM@A@EAAXXZ @ 0x1800F9050 (-MarkFullDirty@CDxHandleStereoBitmapRealization@@$4PPPPPPPM@A@EAAXXZ.c)
 * Callees:
 *     ?MarkFullDirty@CBitmapRealization@@UEAAXXZ @ 0x1800CB488 (-MarkFullDirty@CBitmapRealization@@UEAAXXZ.c)
 *     ?MarkFullInvalid@CD2DBitmapCache@@QEAAXXZ @ 0x1800CB4B4 (-MarkFullInvalid@CD2DBitmapCache@@QEAAXXZ.c)
 */

void __fastcall CDxHandleStereoBitmapRealization::MarkFullDirty(CDxHandleStereoBitmapRealization *this)
{
  CBitmapRealization::MarkFullDirty((CDxHandleStereoBitmapRealization *)((char *)this - 192));
  if ( *((_QWORD *)this - 21) )
    CD2DBitmapCache::MarkFullInvalid((CDxHandleStereoBitmapRealization *)((char *)this - 160));
}
